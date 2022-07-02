/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    TOKEN_CLASS = 258,
    TOKEN_Program = 259,
    TOKEN_ID = 260,
    TOKEN_INT = 261,
    TOKEN_HEX = 262,
    TOKEN_BOOL = 263,
    TOKEN_CHAR = 264,
    TOKEN_STRING = 265,
    TOKEN_VOID = 266,
    TOKEN_MAIN = 267,
    TOKEN_LP = 268,
    TOKEN_RP = 269,
    TOKEN_COMMA = 270,
    TOKEN_SEMICOLON = 271,
    TOKEN_IFCONDITION = 272,
    TOKEN_LOOP = 273,
    TOKEN_ASSIGNOP_ASS = 274,
    TOKEN_ASSIGNOP_ADD = 275,
    TOKEN_ASSIGNOP_SUB = 276,
    TOKEN_RETURN = 277,
    TOKEN_BREAKSTMT = 278,
    TOKEN_CONTINUESTMT = 279,
    TOKEN_LB = 280,
    TOKEN_RB = 281,
    TOKEN_LCB = 282,
    TOKEN_RCB = 283,
    TOKEN_CALLOUT = 284,
    TOKEN_ELSECONDITION = 285,
    TOKEN_ARITHMATICOP_ADD = 286,
    TOKEN_ARITHMATICOP_SUB = 287,
    TOKEN_ARITHMATICOP_DIV = 288,
    TOKEN_ARITHMATICOP_MUL = 289,
    TOKEN_ARITHMATICOP_REM = 290,
    TOKEN_RELATIONOP_SE = 291,
    TOKEN_RELATIONOP_S = 292,
    TOKEN_RELATIONOP_BE = 293,
    TOKEN_RELATIONOP_B = 294,
    TOKEN_EQUALITYOP_E = 295,
    TOKEN_EQUALITYOP_NE = 296,
    TOKEN_CONDITIONOP_AND = 297,
    TOKEN_CONDITIONOP_OR = 298,
    TOKEN_LOGICOP = 299
  };
#endif
/* Tokens.  */
#define TOKEN_CLASS 258
#define TOKEN_Program 259
#define TOKEN_ID 260
#define TOKEN_INT 261
#define TOKEN_HEX 262
#define TOKEN_BOOL 263
#define TOKEN_CHAR 264
#define TOKEN_STRING 265
#define TOKEN_VOID 266
#define TOKEN_MAIN 267
#define TOKEN_LP 268
#define TOKEN_RP 269
#define TOKEN_COMMA 270
#define TOKEN_SEMICOLON 271
#define TOKEN_IFCONDITION 272
#define TOKEN_LOOP 273
#define TOKEN_ASSIGNOP_ASS 274
#define TOKEN_ASSIGNOP_ADD 275
#define TOKEN_ASSIGNOP_SUB 276
#define TOKEN_RETURN 277
#define TOKEN_BREAKSTMT 278
#define TOKEN_CONTINUESTMT 279
#define TOKEN_LB 280
#define TOKEN_RB 281
#define TOKEN_LCB 282
#define TOKEN_RCB 283
#define TOKEN_CALLOUT 284
#define TOKEN_ELSECONDITION 285
#define TOKEN_ARITHMATICOP_ADD 286
#define TOKEN_ARITHMATICOP_SUB 287
#define TOKEN_ARITHMATICOP_DIV 288
#define TOKEN_ARITHMATICOP_MUL 289
#define TOKEN_ARITHMATICOP_REM 290
#define TOKEN_RELATIONOP_SE 291
#define TOKEN_RELATIONOP_S 292
#define TOKEN_RELATIONOP_BE 293
#define TOKEN_RELATIONOP_B 294
#define TOKEN_EQUALITYOP_E 295
#define TOKEN_EQUALITYOP_NE 296
#define TOKEN_CONDITIONOP_AND 297
#define TOKEN_CONDITIONOP_OR 298
#define TOKEN_LOGICOP 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "code_bison.y"

    char str[50];
    int number;
    

#line 151 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
