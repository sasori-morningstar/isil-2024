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

#ifndef YY_YY_SYNTAXIQUE_TAB_H_INCLUDED
# define YY_YY_SYNTAXIQUE_TAB_H_INCLUDED
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
    mc_begin = 258,                /* mc_begin  */
    mc_end = 259,                  /* mc_end  */
    String = 260,                  /* String  */
    pvg = 261,                     /* pvg  */
    aff = 262,                     /* aff  */
    identificateur = 263,          /* identificateur  */
    mc_program = 264,              /* mc_program  */
    mc_Const = 265,                /* mc_Const  */
    mc_For = 266,                  /* mc_For  */
    mc_In = 267,                   /* mc_In  */
    mc_Out = 268,                  /* mc_Out  */
    mc_integer = 269,              /* mc_integer  */
    mc_float = 270,                /* mc_float  */
    mc_String = 271,               /* mc_String  */
    taille = 272,                  /* taille  */
    FLOAT_TOK = 273,               /* FLOAT_TOK  */
    integer = 274,                 /* integer  */
    commentaire = 275,             /* commentaire  */
    equals = 276,                  /* equals  */
    doesnt_equal = 277,            /* doesnt_equal  */
    less = 278,                    /* less  */
    less_or_equals = 279,          /* less_or_equals  */
    greater = 280,                 /* greater  */
    greater_or_equals = 281,       /* greater_or_equals  */
    add = 282,                     /* add  */
    substract = 283,               /* substract  */
    divide = 284,                  /* divide  */
    multiply = 285,                /* multiply  */
    open_bracket = 286,            /* open_bracket  */
    close_bracket = 287,           /* close_bracket  */
    open_bracket_square = 288,     /* open_bracket_square  */
    close_bracket_square = 289,    /* close_bracket_square  */
    open_parenthesis = 290,        /* open_parenthesis  */
    close_parenthesis = 291,       /* close_parenthesis  */
    vrg = 292,                     /* vrg  */
    err = 293,                     /* err  */
    signe_formatage = 294          /* signe_formatage  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "syntaxique.y"

    int entier;
    char * str;
    float numvrg;

#line 109 "syntaxique.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SYNTAXIQUE_TAB_H_INCLUDED  */
