%{
#include <stdio.h>
#include <stdlib.h>

int yylex(void);
void yyerror(const char *s);

%}

%token ID NUM DO WHILE LEQUAL GEQUAL EQUAL NEQUAL OR AND ASSIGN PLUS MINUS MULTIPLY DIVIDE LTHAN GTHAN LBRACE RBRACE LPAR RPAR SEMCOLON
%right ASSIGN
%left OR AND
%left LTHAN GTHAN LEQUAL GEQUAL EQUAL NEQUAL
%left PLUS MINUS
%left MULTIPLY DIVIDE

%%

program             : do_while_statement { printf("Input accepted.\n"); exit(0); }
                    ;

do_while_statement  : DO LBRACE statements RBRACE WHILE LPAR condition RPAR SEMCOLON
                    ;

statements          : statements statement
                    | statement
                    ;

statement           : expression SEMCOLON
                    ;

expression          : ID ASSIGN expression
                    | arithmetic_expression
                    | logical_expression
                    | relational_expression
                    | ID
                    | NUM
                    ;

arithmetic_expression
                    : expression PLUS expression
                    | expression MINUS expression
                    | expression MULTIPLY expression
                    | expression DIVIDE expression
                    ;

logical_expression  : expression OR expression
                    | expression AND expression
                    ;

relational_expression
                    : expression LTHAN expression
                    | expression GTHAN expression
                    | expression LEQUAL expression
                    | expression GEQUAL expression
                    | expression EQUAL expression
                    | expression NEQUAL expression
                    ;

condition           : arithmetic_expression
                    | logical_expression
                    | relational_expression
                    | ID
                    | NUM
                    ;

%%

int main() {
    printf("Enter the expression: ");
    return yyparse();
}

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
