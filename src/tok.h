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

#ifndef YY_YY_SOURCE_TAB_H_INCLUDED
# define YY_YY_SOURCE_TAB_H_INCLUDED
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
    LO = 258,
    INTEGER = 259,
    ARRAY = 260,
    FUNCTION = 261,
    BEGINPARAMS = 262,
    ENDPARAMS = 263,
    BEGINLOCALS = 264,
    ENDLOCALS = 265,
    BEGINBODY = 266,
    ENDBODY = 267,
    BEGINLOOP = 268,
    ENDLOOP = 269,
    IF = 270,
    THEN = 271,
    ELSE = 272,
    ENDIF = 273,
    DO = 274,
    WHILE = 275,
    READ = 276,
    WRITE = 277,
    CONTINUE = 278,
    RETURN = 279,
    TRUE = 280,
    FALSE = 281,
    ASSGN = 282,
    OF = 283,
    OR = 284,
    AND = 285,
    NOT = 286,
    NE = 287,
    EQ = 288,
    GE = 289,
    GT = 290,
    LE = 291,
    LT = 292,
    UMINUS = 293,
    HI = 294,
    ID = 295,
    NUMBER = 296
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "source.y" /* yacc.c:1915  */


   // Here we define the types and names of the components of the
   // union type YYSTYPE, which is the type of yylval and of the
   // semantic portion of the parse-stack entries.

   // declarations of union members for lexical values of tokens
   int 		   junk;    	    // values for single-lexeme tokens
   int		   int_val;	    // values of integer literals
   string*	   str_val;	    // values of string literals
   string*	   ident;	    // points to identifiers' actual lexemes

   // declarations of union members for lexical values of non-terminals
   // that are pointers to translation records.
   Program*              program;
   list<Function*>*      functions;	// for the non-terminal "Functions"
   list<Declaration*>*   declarations;  // for the non-terminal "Declarations"
   list<Statement*>*     statements;   
   list<Var*>*           vars;
   list<Expression*>*    expressions;
   list<Expression*>*    nonemptyexpressionlist;
   list<string*>*        ids;
   Function*             function;   
   Declaration*          declaration;      
   Statement*            statement;
   BoolExpr*             boolexpr;
   Expression*           expression;
   Var*                  var;
 

#line 127 "source.tab.h" /* yacc.c:1915  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SOURCE_TAB_H_INCLUDED  */
