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

#ifndef YY_YY_CODE_BISON_TAB_H_INCLUDED
# define YY_YY_CODE_BISON_TAB_H_INCLUDED
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
    TOKEN_PROGRAMCLASS = 259,
    TOKEN_ID = 260,
    TOKEN_INTTYPE = 261,
    TOKEN_BOOLEANTYPE = 262,
    TOKEN_VOIDTYPE = 263,
    TOKEN_MAINFUNC = 264,
    TOKEN_LP = 265,
    TOKEN_RP = 266,
    TOKEN_COMMA = 267,
    TOKEN_SEMICOLON = 268,
    TOKEN_IFCONDITION = 269,
    TOKEN_LOOP = 270,
    TOKEN_ASSIGNOP_ASS = 271,
    TOKEN_ASSIGNOP_ADD = 272,
    TOKEN_ASSIGNOP_SUB = 273,
    TOKEN_RETURN = 274,
    TOKEN_BREAKSTMT = 275,
    TOKEN_CONTINUESTMT = 276,
    TOKEN_LB = 277,
    TOKEN_RB = 278,
    TOKEN_LCB = 279,
    TOKEN_RCB = 280,
    TOKEN_CALLOUT = 281,
    TOKEN_ELSECONDITION = 282,
    TOKEN_ARITHMATICOP_ADD = 283,
    TOKEN_ARITHMATICOP_SUB = 284,
    TOKEN_ARITHMATICOP_DIV = 285,
    TOKEN_ARITHMATICOP_MUL = 286,
    TOKEN_ARITHMATICOP_REM = 287,
    TOKEN_RELATIONOP_SE = 288,
    TOKEN_RELATIONOP_S = 289,
    TOKEN_RELATIONOP_BE = 290,
    TOKEN_RELATIONOP_B = 291,
    TOKEN_EQUALITYOP_E = 292,
    TOKEN_EQUALITYOP_NE = 293,
    TOKEN_CONDITIONOP_AND = 294,
    TOKEN_CONDITIONOP_OR = 295,
    TOKEN_LOGICOP = 296,
    TOKEN_DECIMALCONST = 297,
    TOKEN_HEXADECIMALCONST = 298,
    TOKEN_BOOLEANCONST = 299,
    TOKEN_CHARCONST = 300,
    TOKEN_STRINGCONST = 301,
    TOKEN_COMMENT = 302,
    TOKEN_WHITESPACE = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "code_bison.y"

    char str[50];
    int number;
    

#line 112 "code_bison.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CODE_BISON_TAB_H_INCLUDED  */
