%{
#include <stdio.h>
#include <stdbool.h>
%}

%%

[A-Za-z_][A-Za-z0-9_]* { printf("%s is a valid identifier.\n", yytext); }
. { printf("%s is not a valid identifier.\n", yytext); }

%%

int yywrap() {
    
}

int main() {
    yylex();
    return 0;
}
