#define nsyms 100
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include <limits.h>

extern int yylineno;
extern char* yytext;
int noOfIdentifiers=0;
int Scope=0;
int noOfErrors = 0;
char SemanticErrors [100][100]; 


//Definations
  void printSymbolTable();
void declare_variable(char* datatype, char* ID);
int isDuplicate(char* datatype, char* ID);
char* itoa_customized(int number);
void declare_variable(char* datatype, char* ID);
void declare_constant(char* datatype, char* ID, float IntialValue);
void declare_and_intialize(char* datatype, char* ID,float IntialValue);
void declare_and_intialize_string(char* datatype, char* ID, char* IntialValue);
void declare_constant_string(char* datatype, char* ID, char* IntialValue);
int isDeclared(char* ID);
int isintialized(char* ID);
int isConstant(char* ID);
void curlyBraceIsOpened();
void curlyBraceIsClosed() ;
int isinScope(char* ID);
int getIndex(char* ID);
char* getDataType(char* ID);
 float getValue(char* identifier);
void printSemanticErrors();
void assignValue(char* ID, float value);
void assignStr(char* ID,char* value);
struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};
 




struct symtab{
char*name;
char* type;
float value;
char*  stringValue;
int   isConstant;
int   isintialized;
int   Scope;
}
symtab[nsyms];



char* itoa_customized(int number){
   static char buffer[33];
   snprintf(buffer, sizeof(buffer), "%d", number);
   return buffer;
}


char* ftoa(float number){
   static char buffer[33];
  snprintf(buffer, sizeof(buffer), "%f", number);
  return buffer;
}

char* ctoa(char number){
  static char buffer[33];
  snprintf(buffer, sizeof(buffer), "%c", number);
  return buffer;
}



void printSymbolTable(){
  int i;

  FILE* fi=fopen("output.txt","a");
  
  for(i=0; i<noOfIdentifiers; i++){
     
     printf("%s , %s, %f, %s \n",symtab[i].type,symtab[i].name,symtab[i].value,symtab[i].stringValue);
     fprintf(fi,"%s , %s, %f, %s \n",symtab[i].type,symtab[i].name,symtab[i].value,symtab[i].stringValue);
  }
 fclose(fi);
}

int isDuplicate(char* datatype, char* ID){
  int i;

    for(i=0; i<noOfIdentifiers; i++){
        if(strcmp(ID,symtab[i].name) == 0){
            return 1;
        }
    }
    return 0;
}

void declare_variable(char* datatype, char* ID){
 FILE* fi=fopen("output.txt","a");
  if(isDuplicate(datatype,ID) == 1){
   
   printf("\nERROR ON LINE %d : \nDuplicate identifier '%s' found.\n",yylineno,ID);
   fprintf(fi,"\nERROR ON LINE %d : \nDuplicate identifier '%s' found.\n",yylineno,ID);
   fclose(fi);
      char c[100] = "\nERROR ON LINE :   ";
      strcat(c,itoa_customized(yylineno));
      strcat(c,"\nDuplicate identifier found:  ");
      strcat(c,ID);
      strcat(c,"\0");
      strcpy(SemanticErrors[noOfErrors],c);
      noOfErrors ++;
  }
  else{
    symtab[noOfIdentifiers].type = datatype;
    symtab[noOfIdentifiers].name = ID;
    symtab[noOfIdentifiers].isConstant = 0;
    symtab[noOfIdentifiers].isintialized = 0;
    symtab[noOfIdentifiers].Scope = Scope;
    noOfIdentifiers ++;


  }
}





void declare_constant(char* datatype, char* ID, float IntialValue){

  if(isDuplicate(datatype,ID) == 1){
   

     //printf("\nERROR ON LINE %d : \nDuplicate identifier '%s' found.\n",yylineno,ID);
      char c[100] = "\nERROR ON LINE :   ";
      strcat(c,itoa_customized(yylineno));
      strcat(c,"\nDuplicate identifier found:  ");
      strcat(c,ID);
      strcat(c,"\0");
      strcpy(SemanticErrors[noOfErrors],c);
      noOfErrors ++;
  }
  else{

            if(strcmp(datatype,"float") == 0)
        {
            symtab[noOfIdentifiers].isConstant=1;
            symtab[noOfIdentifiers].isintialized=1;
            symtab[noOfIdentifiers].value=IntialValue;
            symtab[noOfIdentifiers].type = datatype;
            symtab[noOfIdentifiers].name = ID;
            symtab[noOfIdentifiers].Scope = Scope;
            noOfIdentifiers ++;
 


        }
    else if(strcmp(datatype,"int") == 0)
        {
            symtab[noOfIdentifiers].value=(int)IntialValue;
           // symtab[noOfIdentifiers].ivalue=(int)symtab[noOfIdentifiers].ivalue;
            symtab[noOfIdentifiers].isConstant=1;
            symtab[noOfIdentifiers].isintialized=1;
            symtab[noOfIdentifiers].type = datatype;
            symtab[noOfIdentifiers].name = ID;
            symtab[noOfIdentifiers].Scope = Scope;
            noOfIdentifiers ++;



        }


      else
        {
            //printf("\nERROR ON LINE %d : \nCan't intialize a constant variable of type '%s' to a this value\n",yylineno,datatype);
            char c[100] = "\nERROR ON LINE :   ";
            strcat(c,itoa_customized(yylineno));
            strcat(c,"\nCan't intialize a constant variable of type  ");
            strcat(c,datatype);
            strcat(c,"to this value");
            strcat(c,"\0");
            strcpy(SemanticErrors[noOfErrors],c);
            noOfErrors ++;
        }
            
      } 
}

void assignStr(char* ID,char* value)
  {
    if(isConstant(ID) == 0)
    {
           if(strcmp(getDataType(ID),"string") == 0 )
        {
            symtab[getIndex(ID)].isintialized=1;
            symtab[getIndex(ID)].stringValue = value;
            
        }


    
    }

  else
  {
        //printf("\nERROR ON LINE %d : \n Cannot change the value of the  constant variable'%s'  : '%s' found.\n",yylineno,ID);
        char c[100] = "\nERROR ON LINE :   ";
        strcat(c,itoa_customized(yylineno));
        strcat(c,"\nCannot change the value of the  constant variable  ");
        strcat(c,ID);
        strcat(c,"\0");
        strcpy(SemanticErrors[noOfErrors],c);
        noOfErrors ++; 
  }
  }

void declare_and_intialize(char* datatype, char* ID, float IntialValue){
    if(isDuplicate(datatype,ID) == 1){
     //printf("\nERROR ON LINE %d : \nDuplicate identifier '%s' found.\n",yylineno,ID);
      char c[100] = "\nERROR ON LINE :   ";
      strcat(c,itoa_customized(yylineno));
      strcat(c,"\nDuplicate identifier found:  ");
      strcat(c,ID);
      strcat(c,"\0");
      strcpy(SemanticErrors[noOfErrors],c);
      noOfErrors ++;
  }
  else{
        
         if(strcmp(datatype,"float") == 0)
        {
            symtab[noOfIdentifiers].value=IntialValue;
           // symtab[noOfIdentifiers].value=(int)symtab[noOfIdentifiers].value;
            symtab[noOfIdentifiers].isConstant=0;
            symtab[noOfIdentifiers].isintialized=1;
            symtab[noOfIdentifiers].type = datatype;
            symtab[noOfIdentifiers].name = ID;
            symtab[noOfIdentifiers].Scope = Scope;
            noOfIdentifiers ++;


        }
  
         else if(strcmp(datatype,"int") == 0)
        {
            symtab[noOfIdentifiers].value=(int)IntialValue;
           // symtab[noOfIdentifiers].value=(int)symtab[noOfIdentifiers].value;
            symtab[noOfIdentifiers].isConstant=0;
            symtab[noOfIdentifiers].isintialized=1;
            symtab[noOfIdentifiers].type = datatype;
            symtab[noOfIdentifiers].name = ID;
            symtab[noOfIdentifiers].Scope = Scope;
            noOfIdentifiers ++;


        }


       

        else
        {
            //printf("\nERROR ON LINE %d : \nCan't intialize a variable of type '%s' to a float value\n",yylineno,datatype);
            char c[100] = "\nERROR ON LINE :   ";
            strcat(c,itoa_customized(yylineno));
            strcat(c,"\nCan't intialize a variable of type  ");
            strcat(c,datatype);
            strcat(c,"to a float value");
            strcat(c,"\0");
            strcpy(SemanticErrors[noOfErrors],c);
            noOfErrors ++;
        }
  } 
}

void declare_and_intialize_string(char* datatype, char* ID, char* IntialValue)
{
  if(isDuplicate(datatype,ID) == 1){
     //printf("\nERROR ON LINE %d : \nDuplicate identifier '%s' found.\n",yylineno,ID);
      char c[100] = "\nERROR ON LINE :   ";
      strcat(c,itoa_customized(yylineno));
      strcat(c,"\nDuplicate identifier found:  ");
      strcat(c,ID);
      strcat(c,"\0");
      strcpy(SemanticErrors[noOfErrors],c);
      noOfErrors ++;
  }
  else
  {
    
    if(strcmp(datatype,"string") == 0)
        {
            symtab[noOfIdentifiers].isConstant=0;
            symtab[noOfIdentifiers].isintialized=1;
            symtab[noOfIdentifiers].stringValue = IntialValue;
            symtab[noOfIdentifiers].type = datatype;
           symtab[noOfIdentifiers].name = ID;
            symtab[noOfIdentifiers].Scope = Scope;
            noOfIdentifiers ++;
        }

        else
              {
                        //printf("\nERROR ON LINE %d : \nInValid Assignment: variable '%s' of type '%s' cant be assigned a string value \n",yylineno,ID,datatype);
                          char c[100] = "\nERROR ON LINE :   ";
                          strcat(c,itoa_customized(yylineno));
                          strcat(c,"\nInValid Assignment, variable:  ");
                          strcat(c,ID);
                          strcat(c,"of type ");
                          strcat(c,datatype);
                          strcat(c,"cant be assigned a string value");
                          strcat(c,"\0");
                          strcpy(SemanticErrors[noOfErrors],c);
                          noOfErrors ++; 
              }
                  

      }

  }

void declare_constant_string(char* datatype, char* ID, char* IntialValue)
{
 
  if(isDuplicate(datatype,ID) == 1){
     //printf("\nERROR ON LINE %d : \nDuplicate identifier '%s' found.\n",yylineno,ID);
      char c[100] = "\nERROR ON LINE :   ";
      strcat(c,itoa_customized(yylineno));
      strcat(c,"\nDuplicate identifier found:  ");
      strcat(c,ID);
      strcat(c,"\0");
      strcpy(SemanticErrors[noOfErrors],c);
      noOfErrors ++;
  }
  else
  {
   

    if(strcmp(datatype,"string") == 0 )
        {
            symtab[noOfIdentifiers].isConstant=0;
            symtab[noOfIdentifiers].isintialized=1;
           symtab[noOfIdentifiers].stringValue = IntialValue;
            symtab[noOfIdentifiers].type = datatype;
            symtab[noOfIdentifiers].name = ID;
            symtab[noOfIdentifiers].Scope = Scope;
            noOfIdentifiers ++;
        }
    
        else
              {

                        //printf("\nERROR ON LINE %d : \nInValid Assignment: constant variable '%s' of type '%s' cant be assigned a string value \n",yylineno,ID,datatype);
                        char c[100] = "\nERROR ON LINE :   ";
                        strcat(c,itoa_customized(yylineno));
                        strcat(c,"\nInValid Assignment: constant variable  ");
                        strcat(c,ID);
                        strcat(c,"of type ");
                        strcat(c,datatype);
                        strcat(c,"cant be assigned a string value ");
                        strcat(c,"\0");
                        strcpy(SemanticErrors[noOfErrors],c);
                        noOfErrors ++; 
              }
                  

      }

}

int isDeclared(char* ID){
int i;
for(i=0; i<noOfIdentifiers; i++){
  if(strcmp(symtab[i].name,ID) == 0){
    return 1;
  }
}
    return 0;
}


int isintialized(char* ID){
  int i;
  int index;
  for(i=0; i<noOfIdentifiers; i++){
    if(strcmp(symtab[i].name,ID) == 0){
      index = i;
      if(symtab[index].isintialized == 1)
        return 1;
    }
  }
      return 0;
}

int isConstant(char* ID){
  int i;
  for(i=0; i<noOfIdentifiers; i++){
    if(strcmp(symtab[i].name,ID) == 0) {
      if(symtab[i].isConstant == 1) {
        return 1;
      }
      else
        return 0;
  }
}
return 0;
}

//scope
void curlyBraceIsOpened()
 {
  Scope++;
}

void curlyBraceIsClosed() 
{
  int i;
  for (i = 0; i < noOfIdentifiers; i++) {
      if (symtab[i].Scope == Scope ) {
        symtab[i].Scope = -1; //end of scope of this identifier
      }
  }
  Scope--;
}

int isinScope(char* ID){
  int i;
  int index;
  for(i=0; i<noOfIdentifiers; i++){
    if(strcmp(symtab[i].name,ID) == 0){
      index = i;
      if(symtab[index].Scope !=-1)
        return 1;
    }
  }
      return 0;
}
int getIndex(char* ID)
{
  int i;
  for(i=0; i<noOfIdentifiers;i++)
  {
    if(strcmp(symtab[i].name,ID) == 0)
    {
      return i;
    }
  }
    return -1;
}
char* getDataType(char* ID)
{
  int i;
  for(i=0; i<noOfIdentifiers; i++)
  {
    if(strcmp(symtab[i].name,ID) == 0)
    {
      return symtab[i].type;
    }
  }
}


 float getValue(char* identifier)
{
     if(isDeclared(identifier) == 0)
      {
        // printf("UnDeclared Variable!"); 
        char c[100] = "\nERROR ON LINE :   ";
        strcat(c,itoa_customized(yylineno));
        strcat(c,"\nUnDeclared variable:  ");
        strcat(c,identifier);
        strcat(c,"\0");
        strcpy(SemanticErrors[noOfErrors],c);
        noOfErrors ++;
      }
       
      if (isinScope(identifier) == 0)
      {
         // printf("out of scope Variable!");
          char c[100] = "\nERROR ON LINE :   ";
          strcat(c,itoa_customized(yylineno));
          strcat(c,"\n out of scope variable:  ");
          strcat(c,identifier);
          strcat(c,"\0");
          strcpy(SemanticErrors[noOfErrors],c);
          noOfErrors ++; 
      }
      if (isintialized(identifier) == 0)
      {
          //  printf("\nERROR ON LINE %d : \nVariable used without being intialized!\n",yylineno);
            char c[100] = "\nERROR ON LINE :   ";
            strcat(c,itoa_customized(yylineno));
            strcat(c,"\nVariable used without being intialized:  ");
            strcat(c,identifier);
            strcat(c,"\0");
            strcpy(SemanticErrors[noOfErrors],c);
            noOfErrors ++; 
      }
    int index = getIndex(identifier);

    if(index != -1)
    {
   char* ID_datatype = getDataType(identifier);
      if(strcmp(ID_datatype,"string") == 0 )
      {
          //printf("\nERROR ON LINE %d : \ncannot use variable '%s' of type '%s' in a math or logical expression \n",yylineno,identifier,ID_datatype);
          char c[100] = "\nERROR ON LINE :   ";
          strcat(c,itoa_customized(yylineno));
          strcat(c,"\ncannot use variable ");
          strcat(c,identifier);
          strcat(c,"of type ");
          strcat(c,ID_datatype);
          strcat(c,"in a mathematical or logical expression ");
          strcat(c,"\0");
          strcpy(SemanticErrors[noOfErrors],c);
          noOfErrors ++;  
      }
else{
        return symtab[index].value;
}
      
    }
      
  
}



void assignValue(char* ID, float value)
{

      if(isDeclared(ID) == 0)
      {
        // yyerror("UnDeclared Variable!"); 
        char c[100] = "\nERROR ON LINE :   ";
        strcat(c,itoa_customized(yylineno));
        strcat(c,"\nUnDeclared variable:  ");
        strcat(c,ID);
        strcat(c,"\0");
        strcpy(SemanticErrors[noOfErrors],c);
        noOfErrors ++;

      }
       
      if (isinScope(ID) == 0)
      {
          //yyerror("out of scope Variable!");
          char c[100] = "\nERROR ON LINE :   ";
          strcat(c,itoa_customized(yylineno));
          strcat(c,"\n out of scope variable:  ");
          strcat(c,ID);
          strcat(c,"\0");
          strcpy(SemanticErrors[noOfErrors],c);
          noOfErrors ++; 

      }
      if(isConstant(ID) == 1){

        //printf("\nERROR ON LINE %d : \nCan't change the value of constant identifier '%s' found.\n",yylineno,ID);
        char c[100] = "\nERROR ON LINE :   ";
        strcat(c,itoa_customized(yylineno));
        strcat(c,"\nCan't change the value of constant identifier  ");
        strcat(c,ID);
        strcat(c,"\0");
        strcpy(SemanticErrors[noOfErrors],c);
        noOfErrors ++; 

      } 
      else
      {
        int i;
        for(i=0; i<noOfIdentifiers; i++){
          if(strcmp(symtab[i].name,ID) == 0)
          {
             if(strcmp(symtab[i].type, "int") == 0)
             {
                symtab[i].value=(int)value;
            //  symtab[i].value=(int)symtab[i].value;
               
                if(symtab[i].isintialized == 0)
               {
                 symtab[i].isintialized = 1;

            

               }
                

             }
            else if(strcmp(symtab[i].type, "float") == 0)
             {
                symtab[i].value=value;
               
                if(symtab[i].isintialized == 0)
               {
                 symtab[i].isintialized = 1;

               }
                

             }
            
              
            else
             { 
                 
                  char c[100] = "\nERROR ON LINE :   ";
                  strcat(c,itoa_customized(yylineno));
                  strcat(c,"\nType mismatch! variable ");
                  strcat(c,ID);
                  strcat(c,"of type ");
                  strcat(c,symtab[i].type);
                  strcat(c,"cannot be assigned this value ");
                  strcat(c,"\0");
                  strcpy(SemanticErrors[noOfErrors],c);
                  noOfErrors ++;     
             }
 break;
          
          } // end else
    }//end for
  }//end if

}




///////////////////error///
void unusedvariables()
{
  int i;
  for(i=0;i<noOfIdentifiers;i++)
  {
    if(symtab[i].isintialized==0)
    {
      //printf("Semantic Error: unused variable : %s\n",identifiers[i].ID);
        char c[100] = "\nSemantic Error: unused variable : ";
        strcat(c,symtab[i].name);
        strcat(c,"\0");
        strcpy(SemanticErrors[noOfErrors],c);
        noOfErrors ++; 
    }
  }
}

void printSemanticErrors()
{
int count=0;
  unusedvariables();
  int i;
  FILE* fi=fopen("output.txt","a");
  for(i=0; i <= noOfErrors; i++)
  {
    printf("\n '%s' \n",(char*)SemanticErrors[i]);
    fprintf(fi,"\n '%s' \n",(char*)SemanticErrors[i]);
    count++;
  }
fclose(fi);
if(count==0)
{
const char* text="No error";
printf("No error");
fprintf(fi,text);
fclose(fi);
}
}


// function to create a stack of given capacity. It initializes size of
// stack as 0
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*) malloc(stack->capacity * sizeof(int));
    return stack;
}
 
// Stack is full when top is equal to the last index
int isFull(struct Stack* stack)
{   return stack->top == stack->capacity - 1; }
 
// Stack is empty when top is equal to -1
int isEmpty(struct Stack* stack)
{   return stack->top == -1;  }
 
// Function to add an item to stack.  It increases top by 1
void push(struct Stack* stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
    //printf("%d pushed to stack\n", item);
}
 
// Function to remove an item from stack.  It decreases top by 1
int pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

////////QUAD
int currentReg;
char currentInst[1000];
int currentLabel;
FILE*f;
int flag=0;
struct Stack* labelStack;
void resetQuad(){
	currentReg=0;
	currentInst[0]='\0';
}

