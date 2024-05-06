/* Auxiliary declarations */
%{
    void print_instruction();
    void matched_rule();
    void other();    
%}

/* Regular definitions */
Alphabet [a,b,c]

/* Rules */
%%
^a{Alphabet}*bb$ {matched_rule();}
[ \t\n] /* eat up whitespace */
^.*$ {other();}
%%

/* Auxiliary functions */
int yywrap(){
    printf("\nGoodbye!!!\n");
}
int main(){
    print_instruction();
    yylex();
    return 0;
}
void print_instruction(){
    printf("Type an string and press ENTER:");
}
void matched_rule(){
    printf("'%s' matched the RegEx rule.\n", yytext);
    print_instruction();
}
void other(){
    printf("'%s' didn't match the RegEx rule.\n", yytext);
    print_instruction();
}
