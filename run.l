%{
    //definitions
    #include <stdio.h>

%}


%%
    //rules

%%



int yywrap() {}



int main() {

    FILE * f = fopen("code.txt", "r");
    yyin = f;

    yylex();
    

}





