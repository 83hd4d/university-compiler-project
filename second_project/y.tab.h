/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    NUM = 259,                     /* NUM  */
    DO = 260,                      /* DO  */
    WHILE = 261,                   /* WHILE  */
    LEQUAL = 262,                  /* LEQUAL  */
    GEQUAL = 263,                  /* GEQUAL  */
    EQUAL = 264,                   /* EQUAL  */
    NEQUAL = 265,                  /* NEQUAL  */
    OR = 266,                      /* OR  */
    AND = 267,                     /* AND  */
    ASSIGN = 268,                  /* ASSIGN  */
    PLUS = 269,                    /* PLUS  */
    MINUS = 270,                   /* MINUS  */
    MULTIPLY = 271,                /* MULTIPLY  */
    DIVIDE = 272,                  /* DIVIDE  */
    LTHAN = 273,                   /* LTHAN  */
    GTHAN = 274,                   /* GTHAN  */
    LBRACE = 275,                  /* LBRACE  */
    RBRACE = 276,                  /* RBRACE  */
    LPAR = 277,                    /* LPAR  */
    RPAR = 278,                    /* RPAR  */
    SEMCOLON = 279                 /* SEMCOLON  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define NUM 259
#define DO 260
#define WHILE 261
#define LEQUAL 262
#define GEQUAL 263
#define EQUAL 264
#define NEQUAL 265
#define OR 266
#define AND 267
#define ASSIGN 268
#define PLUS 269
#define MINUS 270
#define MULTIPLY 271
#define DIVIDE 272
#define LTHAN 273
#define GTHAN 274
#define LBRACE 275
#define RBRACE 276
#define LPAR 277
#define RPAR 278
#define SEMCOLON 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
