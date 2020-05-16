/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTTYPE = 258,
    FLOATTYPE = 259,
    STRINGTYPE = 260,
    SEMICOLON = 261,
    FLOAT = 262,
    INTEGER = 263,
    IDENTIFIER = 264,
    CHARACTER = 265,
    EQUALS = 266,
    PLUS = 267,
    MINUS = 268,
    MULTIPLY = 269,
    DIVIDE = 270,
    BRACKET_CLOSE = 271,
    BRACKET_OPEN = 272,
    COMPARE_EQUAL = 273,
    COMPARE_NOT_EQUAL = 274,
    COMPARE_GREATER = 275,
    COMPARE_LESS = 276,
    COMPARE_GREATER_EQUAL = 277,
    COMPARE_LESS_EQUAL = 278,
    CURLY_BRACE_OPEN = 279,
    CURLY_BRACE_CLOSE = 280,
    IF = 281,
    ELSE = 282,
    WHILE = 283,
    DO = 284,
    REPEAT = 285,
    UNTIL = 286,
    FOR = 287,
    CONST = 288,
    SWITCH = 289,
    CASE = 290,
    BREAK = 291,
    DEFAULT = 292,
    COLON = 293,
    LOGICAL_AND = 294,
    LOGICAL_OR = 295,
    LOGICAL_NOT = 296,
    REMAINDER = 297,
    POWER = 298,
    IFX = 299,
    IDX = 300,
    UMINUS = 301
  };
#endif
/* Tokens.  */
#define INTTYPE 258
#define FLOATTYPE 259
#define STRINGTYPE 260
#define SEMICOLON 261
#define FLOAT 262
#define INTEGER 263
#define IDENTIFIER 264
#define CHARACTER 265
#define EQUALS 266
#define PLUS 267
#define MINUS 268
#define MULTIPLY 269
#define DIVIDE 270
#define BRACKET_CLOSE 271
#define BRACKET_OPEN 272
#define COMPARE_EQUAL 273
#define COMPARE_NOT_EQUAL 274
#define COMPARE_GREATER 275
#define COMPARE_LESS 276
#define COMPARE_GREATER_EQUAL 277
#define COMPARE_LESS_EQUAL 278
#define CURLY_BRACE_OPEN 279
#define CURLY_BRACE_CLOSE 280
#define IF 281
#define ELSE 282
#define WHILE 283
#define DO 284
#define REPEAT 285
#define UNTIL 286
#define FOR 287
#define CONST 288
#define SWITCH 289
#define CASE 290
#define BREAK 291
#define DEFAULT 292
#define COLON 293
#define LOGICAL_AND 294
#define LOGICAL_OR 295
#define LOGICAL_NOT 296
#define REMAINDER 297
#define POWER 298
#define IFX 299
#define IDX 300
#define UMINUS 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "yacccode.y" /* yacc.c:1909  */

  struct symtab *symb;
  float f;
  int i;
  char * c;
  
;
;

#line 156 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
