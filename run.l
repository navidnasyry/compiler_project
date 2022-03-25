%{
    //definitions
    #include <stdio.h>

%}


%%
    //rules
"boolean"               {printf("TOKEN_BOOLEANTYPE      %s\n", yytext);}
"break"                 {printf("TOKEN_BREAKSTMT        %s\n", yytext);}
"callout"               {printf("TOKEN_CALLOUT          %s\n", yytext);}
"class"                 {printf("TOKEN_CLASS            %s\n", yytext);}
"continue"              {printf("TOKEN_CONTINUESTMT     %s\n", yytext);}
"else"                  {printf("TOKEN_ELSECONDITION    %s\n", yytext);}
"false"                 {printf("TOKEN_BOOLEANCONST     %s\n", yytext);}
"for"                   {printf("TOKEN_LOOP             %s\n", yytext);}
"if"                    {printf("TOKEN_IFCONDITION      %s\n", yytext);}
"int"                   {printf("TOKEN_INTTYPE          %s\n", yytext);}
"return"                {printf("TOKEN_RETURN           %s\n", yytext);}
"true"                  {printf("TOKEN_BOOLEANCONST     %s\n", yytext);}
"void"                  {printf("TOKEN_VOIDTYPE         %s\n", yytext);}
"Program"               {printf("TOKEN_PROGRAMCLASS     %s\n", yytext);}
"main"                  {printf("TOKEN_MAINFUNC         %s\n", yytext);}
([a-zA-z_]+[0-9]*)+     {printf("TOKEN_ID               %s\n", yytext);}
"+"                     {printf("TOKEN_ARITHMATICOP     %s\n", yytext);}
"-"                     {printf("TOKEN_ARITHMATICOP     %s\n", yytext);}
"*"                     {printf("TOKEN_ARITHMATICOP     %s\n", yytext);}
"/"                     {printf("TOKEN_ARITHMATICOP     %s\n", yytext);}
"%"                     {printf("TOKEN_ARITHMATICOP     %s\n", yytext);}
"&&"                    {printf("TOKEN_CONDITIONOP      %s\n", yytext);}
"||"                    {printf("TOKEN_CONDITIONOP      %s\n", yytext);}
"<="                    {printf("TOKEN_RELATIONOP       %s\n", yytext);}
"<"                     {printf("TOKEN_RELATIONOP       %s\n", yytext);}
">"                     {printf("TOKEN_RELATIONOP       %s\n", yytext);}
">="                    {printf("TOKEN_RELATIONOP       %s\n", yytext);}
"!="                    {printf("TOKEN_EQUALITYOP       %s\n", yytext);}
"=="                    {printf("TOKEN_EQUALITYOP       %s\n", yytext);}
"="                     {printf("TOKEN_ASSIGNOP         %s\n", yytext);}
"+="                    {printf("TOKEN_ASSIGNOP         %s\n", yytext);}
"-="                    {printf("TOKEN_ASSIGNOP         %s\n", yytext);}
"!"                     {printf("TOKEN_LOGICOP          %s\n", yytext);}
"("                     {printf("TOKEN_LP               %s\n", yytext);}
")"                     {printf("TOKEN_RP               %s\n", yytext);}
"{"                     {printf("TOKEN_LCB              %s\n", yytext);}
"}"                     {printf("TOKEN_RCB              %s\n", yytext);}
"["                     {printf("TOKEN_LB               %s\n", yytext);}
"]"                     {printf("TOKEN_RB               %s\n", yytext);}
";"                     {printf("TOKEN_SEMICOLON        %s\n", yytext);}
","                     {printf("TOKEN_COMMA            %s\n", yytext);}

("\n")+                 {printf("TOKEN_WHITESPACE       [newline]\n");}
("\t")+                 {printf("TOKEN_WHITESPACE       [tab]\n");}
(" ")+                  {printf("TOKEN_WHITESPACE       [space]\n");}

%%



int yywrap() {}



int main() {

    FILE * f = fopen("code.x", "r");
    yyin = f;

    yylex();
}





