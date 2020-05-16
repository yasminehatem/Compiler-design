%{
  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>
  #include "math.h"
  #define YYERROR_VERBOSE
  #include "functions.h"

  extern void yyerror();
  extern int yylex();
  extern char* yytext;
%}

%define parse.lac full          //to view error messages 

%union{
  struct symtab *symb;
  float f;
  int i;
  char * c;
  
;
;
}

%token <c> INTTYPE FLOATTYPE STRINGTYPE SEMICOLON
%token <f> FLOAT
%token <i> INTEGER 
%token <symb> IDENTIFIER
%token <c> CHARACTER

%type <f> MATH_OR_LOGICAL_EXPRESSION NUMBER
%type <c> CONST
%token  EQUALS	PLUS	MINUS	MULTIPLY	DIVIDE BRACKET_CLOSE	BRACKET_OPEN  
%token COMPARE_EQUAL COMPARE_NOT_EQUAL COMPARE_GREATER COMPARE_LESS COMPARE_GREATER_EQUAL COMPARE_LESS_EQUAL CURLY_BRACE_OPEN CURLY_BRACE_CLOSE

%token  IF  ELSE WHILE DO REPEAT UNTIL FOR CONST SWITCH CASE BREAK DEFAULT COLON
%token LOGICAL_AND    LOGICAL_OR    LOGICAL_NOT

%right EQUALS
%left LOGICAL_OR LOGICAL_AND
%left COMPARE_EQUAL COMPARE_LESS COMPARE_GREATER COMPARE_LESS_EQUAL COMPARE_GREATER_EQUAL COMPARE_NOT_EQUAL
%left PLUS MINUS
%left MULTIPLY DIVIDE REMAINDER
%left POWER
%left LOGICAL_NOT
%nonassoc IFX
%nonassoc IDX
%nonassoc UMINUS

%%


PROGRAM:  PROGRAM STATEMENT 
            | 
            ;

STATEMENT : DECLARATION  { printf(currentInst);
                          f=fopen("output.txt","w");
                          fprintf(f,currentInst); fclose(f);
                          resetQuad();}|

            INTTYPE IDENTIFIER EQUALS MATH_OR_LOGICAL_EXPRESSION SEMICOLON         //GRAMEER
            {
   
 char  tempBuff[4]="";                                                                        //Quad
 strcat(currentInst,"MOV ");strcat(tempBuff,$2->name); strcat(tempBuff,", ");strcat(tempBuff,"R");
 strcat(tempBuff,itoa_customized(currentReg-1));
 strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
 strcat(currentInst,"\n");
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
//currentReg++;//end Quad
 declare_and_intialize($1,$2->name ,$4);

 f=fopen("output.txt","a");
 printf(currentInst);
 fprintf(f,currentInst);fclose(f);resetQuad(); }
            |FLOATTYPE IDENTIFIER EQUALS MATH_OR_LOGICAL_EXPRESSION SEMICOLON {     //Quad

char  tempBuff[4]="";                                                                       
strcat(currentInst,"MOV ");strcat(tempBuff,$2->name); strcat(tempBuff,", ");strcat(tempBuff,"R");
strcat(tempBuff,itoa_customized(currentReg-1));
strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
strcat(currentInst,"\n");
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
//currentReg++;
declare_and_intialize($1,$2->name ,$4);

  f=fopen("output.txt","a");
  printf(currentInst);
  fprintf(f,currentInst);fclose(f);resetQuad();}
                               |STRINGTYPE IDENTIFIER EQUALS CHARACTER SEMICOLON       //GRAMMER        
   {

char  tempBuff[4]="";  
strcat(currentInst,"MOV R");
													//char tempBuff[4];
													strcat(tempBuff,itoa_customized(currentReg));
													strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
													strcat(currentInst,", ");strcat(tempBuff,$4);
													//itoa((int)$1,tempBuff,10);
													strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
													strcat(currentInst,"\n");
													currentReg++;                                                                      //Quad
strcat(currentInst,"MOV ");strcat(tempBuff,$2->name); strcat(tempBuff,", ");strcat(tempBuff,"R");
strcat(tempBuff,itoa_customized(currentReg-1));
   strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
strcat(currentInst,"\n");
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
//currentReg++;
declare_and_intialize_string($1,$2->name ,$4);



 fopen("output.txt","a");
 printf(currentInst);
 fprintf(f,currentInst);fclose(f);resetQuad();}
|IDENTIFIER EQUALS CHARACTER SEMICOLON  {char  tempBuff[4]="";  
strcat(currentInst,"MOV R");
													//char tempBuff[4];
													strcat(tempBuff,itoa_customized(currentReg));
													strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
													strcat(currentInst,", ");strcat(tempBuff,$4);
													//itoa((int)$1,tempBuff,10);
													strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
													strcat(currentInst,"\n");
													currentReg++;                                                                      //Quad
strcat(currentInst,"MOV ");strcat(tempBuff,$1->name); strcat(tempBuff,", ");strcat(tempBuff,"R");
strcat(tempBuff,itoa_customized(currentReg-1));
   strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
strcat(currentInst,"\n");
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
//currentReg++;
assignStr($1->name,$3);



 fopen("output.txt","a");
 printf(currentInst);
 fprintf(f,currentInst);fclose(f);resetQuad();}


                              |IDENTIFIER EQUALS MATH_OR_LOGICAL_EXPRESSION SEMICOLON         //GRAMMER
         {
char  tempBuff[4]="";                                                                        //Quad
strcat(currentInst,"MOV ");strcat(tempBuff,$1->name); strcat(tempBuff,", ");strcat(tempBuff,"R");
strcat(tempBuff,itoa_customized(currentReg-1));
 strcat(currentInst,tempBuff);
 tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
strcat(currentInst,"\n");
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
								//currentReg++;
assignValue($1->name ,$3); f=fopen("output.txt","a");printf(currentInst);
                           fprintf(f,currentInst);fclose(f);resetQuad();}

                                     | IF_ELSE_STAT {f=fopen("output.txt","a");printf(currentInst);
                                                     fprintf(f,currentInst);fclose(f);resetQuad();}| //GRAMMER
                                     WHILE_STAT {printf(currentInst);
                                                fprintf(f,currentInst);fclose(f);resetQuad();} | 
                                     FOR_LOOP_STAT{printf(currentInst);
                                                fprintf(f,currentInst);fclose(f);resetQuad();} |
                                    REPEAT_STAT {printf(currentInst);
                                                fprintf(f,currentInst);fclose(f);resetQuad();}| 
                                     SWITCH_CASE {printf(currentInst);
                                                fprintf(f,currentInst);fclose(f);resetQuad();}|
                                     JUMP_STAT  | IF_STAT {

fopen("output.txt","a");
printf(currentInst);
fprintf(f,currentInst);fclose(f);resetQuad();}
;
        
DECLARATION :EXP SEMICOLON
;

EXP:INTTYPE IDENTIFIER {declare_variable($1,$2->name);}//no quad
   | FLOATTYPE IDENTIFIER {declare_variable($1,$2->name);} //no quad
    | STRINGTYPE IDENTIFIER {declare_variable($1,$2->name);}//no quad
     | CONST INTTYPE IDENTIFIER EQUALS MATH_OR_LOGICAL_EXPRESSION {                                                                           //Quad
																				char quadID[50]="MOV ";
																				strcat(quadID,$3->name);
																				strcat(quadID,", R0\n");
																				strcat(currentInst,quadID);
																				//end Quad
                                                                                                                                                                declare_constant($2,$3->name,$5); }
     | CONST FLOATTYPE IDENTIFIER EQUALS MATH_OR_LOGICAL_EXPRESSION {                                                                                           //Quad
																				char quadID[50]="MOV ";
																				strcat(quadID,$3->name);
																				strcat(quadID,", R0\n");
																				strcat(currentInst,quadID);
																				//end Quad
                                                                                                                                                                declare_constant($2,$3->name,$5); }
     | CONST STRINGTYPE IDENTIFIER EQUALS CHARACTER                 {                                                                           //Quad
																				char quadID[50]="MOV ";
																				strcat(quadID,$3->name);
																				strcat(quadID,", R0\n");
																				strcat(currentInst,quadID);
																				//end Quad
                                                                                                                                                              declare_constant_string($2,$3->name,$5); }
;

//TYP: INTTYPE |FLOATTYPE|STRINGTYPE
;
     
IF_STAT   : IF BRACKET_OPEN MATH_OR_LOGICAL_EXPRESSION BRACKET_CLOSE CURLY_BRACE_OPEN {
																			//Quad
																			strcat(currentInst,"JNZ LABEL_");
																			char tempBuff[4]="";
																			strcat(tempBuff,itoa_customized(currentLabel));
																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';f=fopen("output.txt","a"); printf("%c",tempBuff[0]); fprintf(f,"%c",tempBuff[0]);fclose(f);
																			strcat(currentInst,"\n");
																			push(labelStack, currentLabel);
																			currentLabel++;
																			//EndQuad
																			curlyBraceIsOpened();
																			currentReg=0;
																		}

                    PROGRAM CURLY_BRACE_CLOSE { 
																			//Quad
																			strcat(currentInst,"JMP LABEL_");
																			char tempBuff[4]="";
																			strcat(tempBuff,itoa_customized(currentLabel));

																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
																			strcat(currentInst,"\n");
																			//Quad
																			
																			strcat(currentInst,"LABEL_");
																			int tempLabel=pop(labelStack);

																			strcat(tempBuff,itoa_customized(tempLabel));
																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; f=fopen("output.txt","a"); printf("%c",tempBuff[0]); fprintf(f,"%c",tempBuff[0]);fclose(f);
																			strcat(currentInst,":\n");
																			//EndQuad
																			curlyBraceIsClosed();

push(labelStack, currentLabel);//next code position(true case)
																			currentLabel++;
																			
																		}
                   %prec IFX ;
 IF_ELSE_STAT   :     IF_STAT 
 ELSE CURLY_BRACE_OPEN {curlyBraceIsOpened();}PROGRAM CURLY_BRACE_CLOSE{  
																			strcat(currentInst, "LABEL_");
																			char tempBuff[4]="";
																			int tempLabel=pop(labelStack);
																			strcat(tempBuff,itoa_customized(tempLabel));

																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
																			strcat(currentInst,":\n");
																			curlyBraceIsClosed();
																		}
 
;

FOR_LOOP_STAT : FOR 	{
																																																											strcat(currentInst,"LABEL_");
																								char tempBuff[4]="";
																								strcat(tempBuff,itoa_customized(currentLabel));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 																								strcat(currentInst,":\n");
																								push(labelStack, currentLabel);
																								currentLabel++;	
																							}

BRACKET_OPEN STATEMENT  MATH_OR_LOGICAL_EXPRESSION 			{
																																																											//Quad
																								strcat(currentInst,"JNZ LABEL_");
																								char tempBuff[4]="";
																								strcat(tempBuff,itoa_customized(currentLabel));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																								strcat(currentInst,"\n");
																								push(labelStack, currentLabel);
																								currentLabel++;
																								//EndQuad
																								currentReg=0;
																								//EndQuad
																							}
SEMICOLON  IDENTIFIER EQUALS MATH_OR_LOGICAL_EXPRESSION BRACKET_CLOSE CURLY_BRACE_OPEN{curlyBraceIsOpened();}
         PROGRAM CURLY_BRACE_CLOSE	{ printf("here");
																																																																																														int tempLabel2=pop(labelStack);
																								int tempLabel=pop(labelStack);
																								
																								char tempBuff[4]="";
																								strcat(currentInst,"JMP LABEL_");//To begininng of while
strcat(tempBuff,itoa_customized(tempLabel));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																								strcat(currentInst,"\n");
																								
																								strcat(currentInst, "LABEL_");
																								strcat(tempBuff,itoa_customized(tempLabel2));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																								strcat(currentInst,"\n");
																								
																								curlyBraceIsClosed();
																							};


//INITIALIZE : TYP IDENTIFIER EQUALS MATH_OR_LOGICAL_EXPRESSION | IDENTIFIER EQUALS MATH_OR_LOGICAL_EXPRESSION  ;

WHILE_STAT : WHILE {
																			strcat(currentInst,"LABEL_");
																			char tempBuff[4]="";
																			strcat(tempBuff,itoa_customized(currentLabel));
																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
																			strcat(currentInst,":\n");
																			push(labelStack, currentLabel);
																			currentLabel++;
																		} BRACKET_OPEN MATH_OR_LOGICAL_EXPRESSION BRACKET_CLOSE CURLY_BRACE_OPEN {
																			//Quad
																			strcat(currentInst,"JNZ LABEL_");
																			char tempBuff[4]="";
																			strcat(tempBuff,itoa_customized(currentLabel));
																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
																			strcat(currentInst,"\n");
																			push(labelStack, currentLabel);
																			currentLabel++;
																			//EndQuad
																			curlyBraceIsOpened();
																			currentReg=0;
																			//EndQuad
																			
																		} 
PROGRAM CURLY_BRACE_CLOSE {

																			int tempLabel2=pop(labelStack);
																			int tempLabel=pop(labelStack);
																			
																			
																			strcat(currentInst,"JMP LABEL_");//To begininng of while
																			char tempBuff[4]="";
																			strcat(tempBuff,itoa_customized(tempLabel));

																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
																			strcat(currentInst,"\n");
																			
																			strcat(currentInst, "LABEL_");
																			strcat(tempBuff,itoa_customized(tempLabel2));
																			strcat(currentInst,tempBuff);
																			strcat(currentInst,":\n");
																			
																			curlyBraceIsClosed();
																		} | 
DO {
																			strcat(currentInst,"LABEL_");
																			char tempBuff[4]="";
																			strcat(tempBuff,itoa_customized(currentLabel));
																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
																			strcat(currentInst,":\n");
																			push(labelStack, currentLabel);
																			currentLabel++;	
																		} CURLY_BRACE_OPEN {curlyBraceIsOpened();}
PROGRAM CURLY_BRACE_CLOSE WHILE BRACKET_OPEN MATH_OR_LOGICAL_EXPRESSION BRACKET_CLOSE SEMICOLON {
																								
																																
																								//Quad
																								strcat(currentInst,"JNZ LABEL_");
																								       char tempBuff[4]="";
																								strcat(tempBuff,itoa_customized(currentLabel));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																								strcat(currentInst,"\n");
																								push(labelStack, currentLabel);
																								currentLabel++;
																								//EndQuad
																								currentReg=0;
																								//EndQuad
																			
																								
																																																											int tempLabel2=pop(labelStack);
																								int tempLabel=pop(labelStack);
																								
																								
																								strcat(currentInst,"JMP LABEL_");//To begininng of while
																								strcat(tempBuff,itoa_customized(tempLabel));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
																								strcat(currentInst,"\n");
																								
																								strcat(currentInst, "LABEL_");
																								strcat(tempBuff,itoa_customized(tempLabel2));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
																								strcat(currentInst,":\n");
																								
																								
																								curlyBraceIsClosed();
																							}
                    

;

REPEAT_STAT   : REPEAT{
																								strcat(currentInst,"LABEL_");
																								char tempBuff[4]="";
strcat(tempBuff,itoa_customized(currentLabel));																								
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																								strcat(currentInst,":\n");
																								push(labelStack, currentLabel);
																								currentLabel++;	}
 PROGRAM UNTIL MATH_OR_LOGICAL_EXPRESSION SEMICOLON {
																																																								
																								//Quad
																								strcat(currentInst,"JZ LABEL_");
																								char tempBuff[4]="";
																								strcat(tempBuff,itoa_customized(currentLabel));	
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																									strcat(currentInst,"\n");
																								push(labelStack, currentLabel);
																								currentLabel++;
																								//EndQuad
																								currentReg=0;
																								//EndQuad
																			
																								
																																																											int tempLabel2=pop(labelStack);
																								        int tempLabel=pop(labelStack);
																								
																								
																								strcat(currentInst,"JMP LABEL_");//To begininng of while
																								strcat(tempBuff,itoa_customized(tempLabel));	
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																									strcat(currentInst,"\n");
																								
																								strcat(currentInst, "LABEL_");
																								strcat(tempBuff,itoa_customized(tempLabel2));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																									strcat(currentInst,":\n");
}
                    ;



MATH_OR_LOGICAL_EXPRESSION  : MATH_OR_LOGICAL_EXPRESSION PLUS MATH_OR_LOGICAL_EXPRESSION  {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"ADD R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");  $$ = $1 + $3;   }
                              | MINUS MATH_OR_LOGICAL_EXPRESSION   %prec UMINUS             {printf("negative\n ");$$=-$2; } 
                              | MATH_OR_LOGICAL_EXPRESSION MINUS MATH_OR_LOGICAL_EXPRESSION {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"SUB R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                              $$ = $1 - $3;
                                                                                            } 
                              | MATH_OR_LOGICAL_EXPRESSION MULTIPLY MATH_OR_LOGICAL_EXPRESSION {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"MUL R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");$$ = $1 * $3;}
                              | MATH_OR_LOGICAL_EXPRESSION DIVIDE MATH_OR_LOGICAL_EXPRESSION
                               {   if($3==0) {f=fopen("output.txt","w");yyerror("Divide by Zero"); fprintf(f,"Divide by Zero");fclose(f);} 
                                   else
                                     {
                                                                                              //Quad
                                      currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"DIV R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");$$ = $1 / $3;}
                                                                                            }
                              | BRACKET_OPEN MATH_OR_LOGICAL_EXPRESSION BRACKET_CLOSE {$$=$2; } //NOQUAD
                              | MATH_OR_LOGICAL_EXPRESSION REMAINDER MATH_OR_LOGICAL_EXPRESSION {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"REM R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");// $$ = fmod($1,$3)
; } 
                              | MATH_OR_LOGICAL_EXPRESSION POWER MATH_OR_LOGICAL_EXPRESSION {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"POW R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                          //  $$ = pow($1,$3);
                                                                                            } 
                              | MATH_OR_LOGICAL_EXPRESSION LOGICAL_AND MATH_OR_LOGICAL_EXPRESSION {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"AND R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                              $$ = $1 && $3;
                                                                                            }
                              | MATH_OR_LOGICAL_EXPRESSION LOGICAL_OR MATH_OR_LOGICAL_EXPRESSION {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"OR R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                              $$ = $1 || $3; 
                                                                                            }
                              | LOGICAL_NOT MATH_OR_LOGICAL_EXPRESSION {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"NOT R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                              $$ = ! $2;
                                                                                            }
                              | MATH_OR_LOGICAL_EXPRESSION COMPARE_EQUAL MATH_OR_LOGICAL_EXPRESSION {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"CMPE R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                             $$ = $1 == $3;
                                                                                            }
                              | MATH_OR_LOGICAL_EXPRESSION COMPARE_NOT_EQUAL MATH_OR_LOGICAL_EXPRESSION {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"CMPNE R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                             $$ = $1 != $3;
                                                                                            }
                              | MATH_OR_LOGICAL_EXPRESSION COMPARE_GREATER MATH_OR_LOGICAL_EXPRESSION {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"CMPNC R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                             $$ = $1 > $3;
                                                                                            }
                              | MATH_OR_LOGICAL_EXPRESSION COMPARE_LESS MATH_OR_LOGICAL_EXPRESSION {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"CMPL R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                             $$ = $1 < $3;
                                                                                            }
                              | MATH_OR_LOGICAL_EXPRESSION COMPARE_GREATER_EQUAL MATH_OR_LOGICAL_EXPRESSION {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"CMPGE R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                             $$ = $1 >= $3;
                                                                                            }
                              | MATH_OR_LOGICAL_EXPRESSION COMPARE_LESS_EQUAL MATH_OR_LOGICAL_EXPRESSION {
                                                                                              //Quad
                                                                                              currentReg--;
																							  
 																							  //Quad
																					                         strcat(currentInst,"CMPLE R");
																		
char tempBuff[4]="";
																							strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", R");tempBuff[0]='\0';
strcat(tempBuff,itoa_customized(currentReg));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");

																							//end Quad
								
                                                                                              //end Quad
                                                                                             $$ = $1 <= $3;
                                                                                            }
                              |INTEGER {  //Quad
								strcat(currentInst,"MOV R");
								char tempBuff[4]="";
                                                                 
								strcat(tempBuff,itoa_customized(currentReg));
                                                               strcat(currentInst,tempBuff);
								strcat(currentInst,", ");tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
                                                               strcat(tempBuff,itoa_customized((int)$1));
								
								strcat(currentInst,tempBuff);
								strcat(currentInst,"\n");
								currentReg++;
								//end Quad
								$$ = $1; }
                              |FLOAT {  //Quad
								strcat(currentInst,"MOV R");
								char tempBuff[4]="";
                                                                 
								strcat(tempBuff,itoa_customized(currentReg));
                                                               strcat(currentInst,tempBuff);
								strcat(currentInst,", "); tempBuff[0]='\0';
                                                               strcat(tempBuff,ftoa($1));
								
								strcat(currentInst,tempBuff);
								strcat(currentInst,"\n");
								currentReg++;
								//end Quad
								$$ = $1; }

                              | IDENTIFIER  { 
                                  //Quad
                                  char quadID[50]="MOV R";
                                  char tempBuff[4]=""; 
                                  strcat(tempBuff,itoa_customized(currentReg));
                                  strcat(quadID,tempBuff);
                                  strcat(quadID,", ");
                                  strcat(quadID,$1->name);
                                  strcat(quadID,"\n");
                                  strcat(currentInst, quadID);
                                  currentReg++;
                                  //end Quad
                                  $$ = getValue($1->name);
                                }
;



                                
NUMBER :INTEGER {$$ =$1;}|
        FLOAT {$$ =$1;}
        ;
SWITCH_CASE       : SWITCH BRACKET_OPEN IDENTIFIER
{
 
                                  //Quad
                                  char quadID[50]="MOV RS1";
                                  char tempBuff[4]=""; 
                                 // strcat(tempBuff,itoa_customized(currentReg));

                                  //strcat(quadID,tempBuff);

                                  strcat(quadID,", ");
                                  strcat(quadID,$3->name);
                                  strcat(quadID,"\n");
                                  strcat(currentInst, quadID);
                                 // currentReg++;
                                  //end Quad
                                  
strcat(currentInst,"CASE_");
//char tempBuff[4]="";
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
strcat(tempBuff,itoa_customized(currentLabel));
strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
strcat(currentInst,":\n");
push(labelStack, currentLabel);
currentLabel++;	

}
 BRACKET_CLOSE CURLY_BRACE_OPEN {curlyBraceIsOpened();}
                   CASES
                   DEFAULT COLON { strcat(currentInst,"CASE_");
char tempBuff[4]="";
 
strcat(tempBuff,"DEFAULT");
strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
strcat(currentInst,":\n");
push(labelStack, currentLabel);
currentLabel++; }
PROGRAM CURLY_BRACE_CLOSE{curlyBraceIsClosed();}

;
                     
CASES             : CASE NUMBER {  //Quad  

								strcat(currentInst,"MOV RS2");
								char tempBuff[4]="";
                                                                 
								//strcat(tempBuff,itoa_customized(currentReg));
                                                               //strcat(currentInst,tempBuff);
								strcat(currentInst,", "); tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
                                                               strcat(tempBuff,ftoa($2));
								
								strcat(currentInst,tempBuff);
								strcat(currentInst,"\n");
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
								//currentReg++;
								//end Quad
								//$$ = $1; 
  //Quad
        
																							  
 																							
																					                         strcat(currentInst,"CMPE RS1");
																		
//char tempBuff[4]="";
																							//strcat(tempBuff,itoa_customized(currentReg-1));	
																							strcat(currentInst,tempBuff);
																							strcat(currentInst,", RS2");tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';
//strcat(tempBuff,itoa_customized(currentReg));	
																							//strcat(currentInst,tempBuff);
																							strcat(currentInst,"\n");
//tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';

	
 //end Quad
  // $$ = $2 == $3;


																			//Quad
																			strcat(currentInst,"JNZ CASE_");
																			
																			strcat(tempBuff,itoa_customized(currentLabel));
																			strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0'; 
																			strcat(currentInst,"\n");
																			push(labelStack, currentLabel);
																			currentLabel++;
																			//EndQuad
																			
																		
}

 COLON PROGRAM {int tempLabel2=pop(labelStack);
																								        int tempLabel=pop(labelStack);
																								
char tempBuff[4]="";																								
																								strcat(currentInst,"JMP CASE_");//To begininng of while
																								strcat(tempBuff,"DEFAULT");	
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																									strcat(currentInst,"\n");
																								
																								strcat(currentInst, "CASE_");
																								strcat(tempBuff,itoa_customized(tempLabel2));
																								strcat(currentInst,tempBuff);
tempBuff[0]='\0';tempBuff[1]='\0';tempBuff[2]='\0';tempBuff[3]='\0';tempBuff[4]='\0';																									strcat(currentInst,":\n");}
CASES   
 
|
;

JUMP_STAT           : BREAK SEMICOLON
;
                    
%% 
struct symtab * symlook(s)
char*s;
{
 char *p;
struct symtab *sp;
for (sp = symtab; sp < &symtab[nsyms] ; sp++) {
/* is it already here ? */
if (sp->name && !strcmp(sp->name, s) )
{
return sp;
}
/*the name is free? */
if(!sp->name) {
sp->name = strdup(s);
return sp;
}
}
f=fopen("output.txt","a");
yyerror ( "Too many symbols " );
fprintf(f,"Too many symbols");
}
int main(){
labelStack = createStack(100);
 currentLabel=0;

 
  yyparse();
  resetQuad();
  printSymbolTable();
  printSemanticErrors();
  
 
  return 0;
}
