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
    INCLUDE = 258,
    LIBR = 259,
    DEFINE = 260,
    UNS = 261,
    CLASS = 262,
    SCOPE = 263,
    DTYPE = 264,
    DTYPE_QUAL = 265,
    BIN_ARITH_OPERATOR = 266,
    INCDEC = 267,
    ASSIGNOP = 268,
    BIN_BOOL = 269,
    ADDRESS = 270,
    UN_BOOL = 271,
    GENERIC = 272,
    SQ = 273,
    LPAREN = 274,
    RPAREN = 275,
    SQ_LEFT = 276,
    SQ_RIGHT = 277,
    FL_LEFT = 278,
    FL_RIGHT = 279,
    ASSIGN = 280,
    SEMICOLON = 281,
    COLON = 282,
    COMMA = 283,
    OUTPUT = 284,
    INPUT = 285,
    CIN = 286,
    COUT = 287,
    COMPR = 288,
    IF = 289,
    ELSE = 290,
    ELSE_IF = 291,
    FOR = 292,
    WHILE = 293,
    DO = 294,
    SWITCH = 295,
    CASE = 296,
    DEFAULT = 297,
    MAIN = 298,
    BOOL_RES = 299,
    LOOP_EXIT = 300,
    RETURN = 301,
    LETTER = 302,
    NUM = 303,
    IDEN = 304,
    STRING = 305
  };
#endif
/* Tokens.  */
#define INCLUDE 258
#define LIBR 259
#define DEFINE 260
#define UNS 261
#define CLASS 262
#define SCOPE 263
#define DTYPE 264
#define DTYPE_QUAL 265
#define BIN_ARITH_OPERATOR 266
#define INCDEC 267
#define ASSIGNOP 268
#define BIN_BOOL 269
#define ADDRESS 270
#define UN_BOOL 271
#define GENERIC 272
#define SQ 273
#define LPAREN 274
#define RPAREN 275
#define SQ_LEFT 276
#define SQ_RIGHT 277
#define FL_LEFT 278
#define FL_RIGHT 279
#define ASSIGN 280
#define SEMICOLON 281
#define COLON 282
#define COMMA 283
#define OUTPUT 284
#define INPUT 285
#define CIN 286
#define COUT 287
#define COMPR 288
#define IF 289
#define ELSE 290
#define ELSE_IF 291
#define FOR 292
#define WHILE 293
#define DO 294
#define SWITCH 295
#define CASE 296
#define DEFAULT 297
#define MAIN 298
#define BOOL_RES 299
#define LOOP_EXIT 300
#define RETURN 301
#define LETTER 302
#define NUM 303
#define IDEN 304
#define STRING 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
