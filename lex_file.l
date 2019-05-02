%{
	#include"y.tab.h"
%}
%%
"#include" return INCLUDE;
"<iostream>"|"<string>"|"<ctype>"|"<stdlib.h>"  return LIBR;
"#define" return DEFINE;
"using namespace"	return UNS;
"class" return CLASS;
"public"|"private"|"protected" return SCOPE;
"int"|"char"|"float"|"double"|"void" return DTYPE;
"unsigned"|"signed"|"long"|"short"|"extern"|"auto"|"static"|"const"|"volatile" return DTYPE_QUAL;
"+"|"-"|"*"|"/"|"%" return BIN_ARITH_OPERATOR;
"++"|"--" return INCDEC;
"+="|"-="|"*="|"/="|"%="|"^=" return ASSIGNOP;
"||"|"&&"|"^" return BIN_BOOL;
"&" return ADDRESS;
"|"|"&"|"!" return UN_BOOL;
"'"[a-zA-Z]"'" return SQ;
"..." return GENERIC;
"(" return LPAREN;
")" return RPAREN;
"[" return SQ_LEFT;
"]" return SQ_RIGHT;
"{" return FL_LEFT;
"}" return FL_RIGHT;
"=" return ASSIGN;
";" return SEMICOLON;
":" return COLON;
"," return COMMA;
"<<" return OUTPUT;
">>" return INPUT;
"cin" return CIN;
"cout" return COUT;
">"|"<"|"=="|"!="|">="|"<=" return COMPR;
"if" return IF;
"else" return ELSE;
"else if" return ELSE_IF;
"for" return FOR;
"while" return WHILE;
"do" return DO;
"switch" return SWITCH;
"case" return CASE;
"default" return DEFAULT;
"main" return MAIN;
"true"|"TRUE"|"false"|"FALSE" return BOOL_RES;
"break"|"continue" return LOOP_EXIT;
"return" return RETURN;
"-"?[0-9]+("."[0-9]+)?  return NUM;
"*"?[a-zA-Z_][a-zA-Z0-9_*]* return IDEN;
"\"".*"\"" return STRING;
%%
