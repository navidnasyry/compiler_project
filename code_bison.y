%{
    
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>



    
    
    
%}


%union {
    char str[50];
    int number;
    
}

%token<number> TOKEN_CLASS
%token<number> TOKEN_Program
%token<str> TOKEN_ID
%token<str> TOKEN_INT
%token<str> TOKEN_HEX
%token<str> TOKEN_BOOL
%token<str> TOKEN_CHAR
%token<str> TOKEN_STRING
%token<str> TOKEN_VOID
%token<str> TOKEN_MAIN
%token<str> TOKEN_LP
%token<str> TOKEN_RP
%token<str> TOKEN_COMMA
%token<str> TOKEN_SEMICOLON
%token<str> TOKEN_IFCONDITION
%token<str> TOKEN_LOOP
%token<str> TOKEN_ASSIGNOP






%%
    program:
                TOKEN_CLASS TOKEN_Program '{' field_decl method_decl '}'
                |
                ;
    field_decl:
                type id '\n' field_decl
                | type id '[' int_literal ']' '\n' field_decl
                | /*epsilon*/ { }
                ;



    method_decl:
                header func_name TOKEN_LP func_args TOKEN_RP block
                | /*epsilon*/ { }
    
    header:
                type
                | TOKEN_VOID

    func_name:
                id
                | TOKEN_MAIN

    func_args:
                arg {}
                | arg TOKEN_COMMA arg
                | arg TOKEN_COMMA arg TOKEN_COMMA arg
                | arg TOKEN_COMMA arg TOKEN_COMMA arg TOKEN_COMMA arg
                | /*epsilon*/ { }
                ;

    arg:
        type id {}
        ;

    block:
            '{' var_decl statement '}'
            ;

    var_decl:
                type multi_id TOKEN_SEMICOLON
                |/*epsilon*/ { }
                ;

    statement:
                location assign_op expr TOKEN_SEMICOLON
                | method_call TOKEN_SEMICOLON
                | TOKEN_IFCONDITION TOKEN_RP expr TOKEN_LP else_stmt
                | TOKEN_LOOP id TOKEN_ASSIGNOP expr TOKEN_COMMA expr block
                |/*epsilon*/ { }

    else_stmt:
                block 
                |/*epsilon*/ { }

    location:

    assign_op:

    expr:

    method_call:

    type:
            TOKEN_INT
            | TOKEN_BOOL
            ;


    multi_id:
                id 
                | id TOKEN_COMMA multi_id 
                ;
    id:
        TOKEN_ID
        ;

    int_literal: 
                decimal_literal
                | hex_literal
                ;

    decimal_literal:
                TOKEN_INT
                ;
    hex_literal:
                TOKEN_HEX
                ;
    bool_literal:
                TOKEN_BOOL
                ;
    char_literal:
                TOKEN_CHAR
                ;
    string_literal:
                TOKEN_STRING
                ;
    
    




%%




int main(int argc, char **argv)
{
	FILE * fr = fopen(argv[1], "r");
	yyin = fr;
	yyparse();
	return 0;
}





