%{
#include "y.tab.h"
%}

%%
[ \t\n]                ;
"do"                   return DO;
"while"                return WHILE;
[0-9]+                 return NUM;
[A-Za-z][A-Za-z0-9]*   return ID;
"<="                   return LEQUAL;
">="                   return GEQUAL;
"=="                   return EQUAL;
"!="                   return NEQUAL;
"||"                   return OR;
"&&"                   return AND;
"="                    return ASSIGN;
"+"                    return PLUS;
"-"                    return MINUS;
"*"                    return MULTIPLY;
"/"                    return DIVIDE;
"<"                    return LTHAN;
">"                    return GTHAN;
";"                    return SEMCOLON;
"{"                    return LBRACE;
"}"                    return RBRACE;
"("                    return LPAR;
")"                    return RPAR;
.                      return yytext[0];
%%
