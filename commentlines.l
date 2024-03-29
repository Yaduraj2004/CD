%{
#include <stdio.h>
int n = 0;
%}

%%
"/"[a-zA-Z0-9 \n\t]*"/"   { n++; }
"//"[a-zA-Z0-9 \n\t]*"//" { n++; }
%%

int yywrap() {
    return 1;
}

int main() {
    printf("Enter text:\n");
    yylex();
    printf("Number of comment lines: %d\n", n);
    return 0;
}
