%{
    //definitions
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    int lineCounter = 1;
    long int MAX_INT = 2147483647;
    long int MIN_INT = -2147483648;
    char * ptr;

%}


%%
    //rules
"boolean"                                                   {printf("TOKEN_BOOLEANTYPE      %s\n", yytext);}
"break"                                                     {printf("TOKEN_BREAKSTMT        %s\n", yytext);}
"callout"                                                   {printf("TOKEN_CALLOUT          %s\n", yytext);}
"class"                                                     {printf("TOKEN_CLASS            %s\n", yytext);}
"continue"                                                  {printf("TOKEN_CONTINUESTMT     %s\n", yytext);}
"else"                                                      {printf("TOKEN_ELSECONDITION    %s\n", yytext);}
"false"                                                     {printf("TOKEN_BOOLEANCONST     %s\n", yytext);}
"for"                                                       {printf("TOKEN_LOOP             %s\n", yytext);}
"if"                                                        {printf("TOKEN_IFCONDITION      %s\n", yytext);}
"int"                                                       {printf("TOKEN_INTTYPE          %s\n", yytext);}
"return"                                                    {printf("TOKEN_RETURN           %s\n", yytext);}
"true"                                                      {printf("TOKEN_BOOLEANCONST     %s\n", yytext);}
"void"                                                      {printf("TOKEN_VOIDTYPE         %s\n", yytext);}
"Program"                                                   {printf("TOKEN_PROGRAMCLASS     %s\n", yytext);}
"main"                                                      {printf("TOKEN_MAINFUNC         %s\n", yytext);}
([a-zA-Z_]+[0-9]*)+                                         {printf("TOKEN_ID               %s\n", yytext);}
"+"                                                         {printf("TOKEN_ARITHMATICOP_ADD     %s\n", yytext);}
"-"                                                         {printf("TOKEN_ARITHMATICOP_SUB    %s\n", yytext);}
"*"                                                         {printf("TOKEN_ARITHMATICOP_MUL     %s\n", yytext);}
"/"                                                         {printf("TOKEN_ARITHMATICOP_DIV     %s\n", yytext);}
"%"                                                         {printf("TOKEN_ARITHMATICOP_REM     %s\n", yytext);}
"&&"                                                        {printf("TOKEN_CONDITIONOP_AND      %s\n", yytext);}
"||"                                                        {printf("TOKEN_CONDITIONOP_OR      %s\n", yytext);}
"<="                                                        {printf("TOKEN_RELATIONOP_SE       %s\n", yytext);}
"<"                                                         {printf("TOKEN_RELATIONOP_S       %s\n", yytext);}
">"                                                         {printf("TOKEN_RELATIONOP_B       %s\n", yytext);}
">="                                                        {printf("TOKEN_RELATIONOP_BE       %s\n", yytext);}
"!="                                                        {printf("TOKEN_EQUALITYOP_NE       %s\n", yytext);}
"=="                                                        {printf("TOKEN_EQUALITYOP_E       %s\n", yytext);}
"="                                                         {printf("TOKEN_ASSIGNOP_ASS         %s\n", yytext);}
"+="                                                        {printf("TOKEN_ASSIGNOP_ADD         %s\n", yytext);}
"-="                                                        {printf("TOKEN_ASSIGNOP_SUB         %s\n", yytext);}
"!"                                                         {printf("TOKEN_LOGICOP          %s\n", yytext);}
"("                                                         {printf("TOKEN_LP               %s\n", yytext);}
")"                                                         {printf("TOKEN_RP               %s\n", yytext);}
"{"                                                         {printf("TOKEN_LCB              %s\n", yytext);}
"}"                                                         {printf("TOKEN_RCB              %s\n", yytext);}
"]"                                                         {printf("TOKEN_RB               %s\n", yytext);}
"["                                                         {printf("TOKEN_LB               %s\n", yytext);}
";"                                                         {printf("TOKEN_SEMICOLON        %s\n", yytext);}
","                                                         {printf("TOKEN_COMMA            %s\n", yytext);}
"//".*                                                      {printf("TOKEN_COMMENT          %s\n", yytext);}
("+"?"-"?[0-9]+)                                            {if(strtol(yytext, &ptr, 10) <= MAX_INT && strtol(yytext, &ptr,10) >= MIN_INT) printf("TOKEN_DECIMALCONST     %s\n", yytext); else printf("Error in line          %d: the value out of range\n", lineCounter   );}
("0x"[0-9a-fA-F]+)                                          {printf("TOKEN_HEXADECIMALCONST %s\n", yytext); }
\"[ -~]*\"                                                  {printf("TOKEN_STRINGCONST      %s\n", yytext);}
\'(([ -~])|(\\"n")|(\\"t")|(\\\')|(\\\"))\'                 {printf("TOKEN_CHARCONST        %s\n", yytext);}
("\n")+                                                     {printf("TOKEN_WHITESPACE       [newline]\n");lineCounter += strlen(yytext);}
("\t")+                                                     {printf("TOKEN_WHITESPACE       [tab]\n");}
(" ")+                                                      {printf("TOKEN_WHITESPACE       [space]\n");}
([0-9]+[a-zA-Z_]+)+                                         {printf("Error in line          %d : wrong id definition\n", lineCounter);}
.                                                           {printf("Error in line          %d\n", lineCounter);}

%%



int yywrap() {}



int main() {

    FILE * f = fopen("code.x", "r");
    //yyin = f;

    yylex();
}





