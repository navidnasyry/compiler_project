%{
    //definitions
    #include <stdio.h>

%}


%%
    //rules
"boolean"   {printf("TOKEN_BOOLEANTYPE      %s\n", yytext);}
"break"     {printf("TOKEN_BREAKSTMT        %s\n", yytext);}
"callout"   {printf("TOKEN_CALLOUT          %s\n", yytext);}
"class"     {printf("TOKEN_CLASS            %s\n", yytext);}
"continue"  {printf("TOKEN_CONTINUESTMT     %s\n", yytext);}
"else"      {printf("TOKEN_ELSECONDITION    %s\n", yytext);}
"false"     {printf("TOKEN_BOOLEANCONST     %s\n", yytext);}
"for"       {printf("TOKEN_LOOP             %s\n", yytext);}
"if"        {printf("TOKEN_IFCONDITION      %s\n", yytext);}
"int"       {printf("TOKEN_INTTYPE          %s\n", yytext);}
"return"    {printf("TOKEN_RETURN           %s\n", yytext);}
"true"      {printf("TOKEN_BOOLEANCONST     %s\n", yytext);}
"void"      {printf("TOKEN_VOIDTYPE         %s\n", yytext);}
"Program"   {printf("TOKEN_PROGRAMCLASS     %s\n", yytext);}
"main"      {printf("TOKEN_MAINFUNC         %s\n", yytext);}




%%



int yywrap() {}



int main() {

    FILE * f = fopen("code.x", "r");
    yyin = f;

    yylex();
}





