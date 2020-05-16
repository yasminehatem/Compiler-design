%{
    #include <string.h>
    #include <stdlib.h>
    #include "y.tab.h"
    #include "symbol.h"
    int yylineno;
    void extern yyerror(char*);
    void InvalidToken();

%}


%%

"int"                       {yylval.c="int";return INTTYPE;}
"float"                     {yylval.c="float";return FLOATTYPE;}
"string"                      {yylval.c="string";return STRINGTYPE;}



"if"                        {yylval.c="if";return IF;}
"else"                      {yylval.c="else";return ELSE;}
"while"                     {yylval.c="while";return WHILE;}
"DO"                        {yylval.c="DO";return DO;}
"repeat"                    {yylval.c="repeat";return REPEAT;}
"until"                     {yylval.c="until";return UNTIL;}
"for"                       {yylval.c="for";return FOR;}
"const"                     {yylval.c="const";return CONST;}

"switch"                    {yylval.c="switch";return SWITCH;}
"case"                      {yylval.c="case";return CASE;}
"break"                     {yylval.c="break";return BREAK;}
"default"                   {yylval.c="default";return DEFAULT;}

[a-zA-Z][_a-zA-Z0-9]*       {yylval.symb = symlook(yytext); return IDENTIFIER;}
[\"][a-zA-Z]+[\"]                                {yylval.c = strdup(yytext);  return CHARACTER;}
[0-9]+                  {yylval.i = atoi(yytext); return INTEGER;}
((([0-9]+\.[0-9]*)|(\.[0-9]+))([eE]?[+-]?[0-9]+)?) {yylval.f = atof(yytext); return FLOAT;}

"=="                                            {return COMPARE_EQUAL;}
"!="                                            {return COMPARE_NOT_EQUAL;}
">"                                             {return COMPARE_GREATER;}
"<"                                             {return COMPARE_LESS;}
">="                                            {return COMPARE_GREATER_EQUAL;}
"<="                                            {return COMPARE_LESS_EQUAL;}
"{"                                             {return CURLY_BRACE_OPEN;}
"}"                                             {return CURLY_BRACE_CLOSE;}



"&&"                                            {return LOGICAL_AND;}
"||"                                            {return LOGICAL_OR;}
"!"                                             {return LOGICAL_NOT;}




"="                                             {return EQUALS;}
"+"                                             {return PLUS;}

"-"                                             {return MINUS;}
"*"                                             {return MULTIPLY;}
"/"                                             {return DIVIDE;}
"%"                                             {return REMAINDER;}
"^"                                             {return POWER;}

"("                                             {return BRACKET_OPEN;}
")"                                             {return BRACKET_CLOSE;}
":"                                             {return COLON;}


";"                                             {return SEMICOLON;}
\n                                              {yylineno++;}
[ \t]+ ;
.        {ECHO; yyerror ("unexpected character");}


%%

int yywrap(void){
    return 1;
}

void yyerror(char *s) {
    fprintf(stderr, "\n ERROR ON LINE %d :\n %s \n", yylineno, s);
    exit(0);
}

void InvalidToken(){
    printf("ERROR ON LINE %d : \n Invalid Token %s\n", yylineno,yytext);
    exit(0);
}
 
