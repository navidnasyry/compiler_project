%{
    
    #include <iostream>
    #include <string>
    using namespace std;

    extern int yylex();
    int yyerror(const char* message);
    extern FILE* yyin;
    extern FILE* yyout;
    
%}


%union {
    char str[50];
    int number;
    
}

%token<str> TOKEN_CLASS
%token<str> TOKEN_Program
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
%token<str> TOKEN_ASSIGNOP_ASS
%token<str> TOKEN_ASSIGNOP_ADD
%token<str> TOKEN_ASSIGNOP_SUB
%token<str> TOKEN_RETURN
%token<str> TOKEN_BREAKSTMT
%token<str> TOKEN_CONTINUESTMT
%token<str> TOKEN_LB
%token<str> TOKEN_RB
%token<str> TOKEN_LCB
%token<str> TOKEN_RCB
%token<str> TOKEN_CALLOUT
%token<str> TOKEN_ELSECONDITION
%token<str> TOKEN_ARITHMATICOP_ADD
%token<str> TOKEN_ARITHMATICOP_SUB
%token<str> TOKEN_ARITHMATICOP_DIV
%token<str> TOKEN_ARITHMATICOP_MUL
%token<str> TOKEN_ARITHMATICOP_REM
%token<str> TOKEN_RELATIONOP_SE
%token<str> TOKEN_RELATIONOP_S
%token<str> TOKEN_RELATIONOP_BE
%token<str> TOKEN_RELATIONOP_B
%token<str> TOKEN_EQUALITYOP_E
%token<str> TOKEN_EQUALITYOP_NE
%token<str> TOKEN_CONDITIONOP_AND
%token<str> TOKEN_CONDITIONOP_OR
%token<str> TOKEN_LOGICOP


%left TOKEN_CONDITIONOP_OR
%left TOKEN_CONDITIONOP_AND
%left TOKEN_ARITHMATICOP_MUL TOKEN_ARITHMATICOP_DIV
%left TOKEN_ARITHMATICOP_ADD TOKEN_ARITHMATICOP_SUB
%left TOKEN_ARITHMATICOP_REM
%left TOKEN_EQUALITYOP_NE
%left TOKEN_EQUALITYOP_E
%left TOKEN_RELATIONOP_SE TOKEN_RELATIONOP_S TOKEN_RELATIONOP_B TOKEN_RELATIONOP_BE
%left TOKEN_LOGICOP
%left TOKEN_LP TOKEN_RP TOKEN_LB TOKEN_RB 
//%left TOKEN_INT TOKEN_BOOL TOKEN_CHAR TOKEN_STRING



/* 
%type <str> program
%type <str> field_decl
%type <str> multi_field
%type <str> method_decl
%type <str> header
%type <str> func_name
%type <str> func_args
%type <str> arg
%type <str> block
%type <str> var_decl
%type <str> statement
%type <str> ret_stmt
%type <str> else_stmt
%type <str> location
%type <str> assign_op
%type <str> expr
%type <str> method_call
%type <str> multi_expr
%type <str> multi_expr_inner
%type <str> multi_callout_args
%type <str> callout_args
%type <str> method_name
%type <str> bin_op
%type <str> arith_op
%type <str> rel_op
%type <str> eq_op
%type <str> cond_op
%type <str> type
%type <str> multi_id
%type <str> literal
%type <str> int_literal
%type <str> decimal_literal
%type <str> hex_literal
%type <str> bool_literal
%type <str> char_literal
%type <str> string_literal */




%%
    program:    // class program {}
                TOKEN_CLASS TOKEN_Program TOKEN_LCB decl TOKEN_RCB
                |
                ;
    decl:
                field_decl method_decl
                | /*epsilon*/ {  }
                ;

    field_decl: //int a,b,c[10],b,c;
                type id multi_field TOKEN_SEMICOLON
                ;

    multi_field://a,b,c[10],b,c[20]
                 TOKEN_COMMA id multi_field
                | TOKEN_LB int_literal TOKEN_RB TOKEN_COMMA id multi_field
                | TOKEN_LB int_literal TOKEN_RB
                | /*epsilon*/ {  }


    method_decl://int main(){} // int func(int a, int b){}
                header func_name TOKEN_LP func_args TOKEN_RP block
                | /*epsilon*/ { }
    
    header:     //int//bool//void
                TOKEN_INT
                | TOKEN_BOOL
                | TOKEN_VOID

    func_name:  //func //main
                id
                | TOKEN_MAIN

    func_args:  //int a//int a, int b//...
                arg {}
                | arg TOKEN_COMMA arg
                | arg TOKEN_COMMA arg TOKEN_COMMA arg
                | arg TOKEN_COMMA arg TOKEN_COMMA arg TOKEN_COMMA arg
                | /*epsilon*/ { }
                ;

    arg:    //int a//bool b
            type id {}
            ;

    block:  //{dec stm}
            TOKEN_LCB var_decl statement TOKEN_RCB
            ;

    var_decl:   // int a,b,c;
                type multi_id TOKEN_SEMICOLON 
                |/*epsilon*/ { }
                ;

    statement:
                location assign_op expr TOKEN_SEMICOLON // a = 2;//a[3]=b//...
                | method_call TOKEN_SEMICOLON //callout(...)//func(...)
                | TOKEN_IFCONDITION TOKEN_RP expr TOKEN_LP else_stmt //if(){} else{}
                | TOKEN_LOOP id TOKEN_ASSIGNOP_ASS expr TOKEN_COMMA expr block // for i=0 , 10 {}
                | TOKEN_RETURN ret_stmt TOKEN_SEMICOLON //return 20;
                | TOKEN_BREAKSTMT TOKEN_SEMICOLON //break;
                | TOKEN_CONTINUESTMT TOKEN_SEMICOLON //contineu;
                | block //{}
                |/*epsilon*/ { }
                ;

    ret_stmt:
                expr 
                |/*epsilon*/ { }
                ;
    else_stmt:  //else {}
                TOKEN_ELSECONDITION block 
                |/*epsilon*/ { }
                ;

    location:
                id location_helper
                ;
                
    location_helper:
                TOKEN_LB expr TOKEN_RB
                | /*epsilon*/ { }

    assign_op:
                TOKEN_ASSIGNOP_ASS
                | TOKEN_ASSIGNOP_ADD
                | TOKEN_ASSIGNOP_SUB
                ;

    expr: 
                location //a//a[3]
                | method_call //
                | literal //all literals
                //| expr bin_op expr // 1+2-4 > 4+2-1
                | expr TOKEN_ARITHMATICOP_ADD expr
                | expr TOKEN_ARITHMATICOP_SUB expr
                | expr TOKEN_ARITHMATICOP_MUL expr
                | expr TOKEN_ARITHMATICOP_DIV expr
                | expr TOKEN_ARITHMATICOP_REM expr
                | expr TOKEN_RELATIONOP_SE expr
                | expr TOKEN_RELATIONOP_S expr
                | expr TOKEN_RELATIONOP_B expr
                | expr TOKEN_RELATIONOP_BE expr
                | expr TOKEN_EQUALITYOP_E expr
                | expr TOKEN_EQUALITYOP_NE expr
                | expr TOKEN_CONDITIONOP_AND expr
                | expr TOKEN_CONDITIONOP_OR expr
                | TOKEN_ARITHMATICOP_SUB expr // -a
                | TOKEN_LOGICOP expr // !true
                | TOKEN_LP expr TOKEN_RP // (expr)
                ;

    

    
    /* expr_help: 
                expr_help bin_op expr_help_2
                expr_help_2
    expr_help_2:
                expr */

//expr bin_op expr


    method_call:
                method_name TOKEN_LP multi_expr TOKEN_RP //func(a,b,1)
                | TOKEN_CALLOUT TOKEN_LP string_literal multi_callout_args TOKEN_RP //callout('strcmp','aab','bba')
                ;
    
    multi_expr: //1,2,a,b,c//1,b//blank
                multi_expr_inner
                |/*epsilon*/ { }
                ;

    multi_expr_inner://1,2,a,b,c//1,b
                expr 
                | expr TOKEN_COMMA multi_expr_inner
                ;

    multi_callout_args:
                TOKEN_COMMA multi_callout_args_inner
                | /*epsilon*/ { }
                ;

    multi_callout_args_inner:
                callout_args
                | callout_args TOKEN_COMMA multi_callout_args_inner
                ;

    callout_args:
                expr
                | string_literal
                ;

    method_name:
                id {}//function names
                ;

    /* bin_op:
                arith_op
                | rel_op
                | eq_op
                | cond_op   
                ;   

    arith_op:
                TOKEN_ARITHMATICOP_ADD
                | TOKEN_ARITHMATICOP_SUB
                | TOKEN_ARITHMATICOP_MUL
                | TOKEN_ARITHMATICOP_DIV
                | TOKEN_ARITHMATICOP_REM
                ;
    rel_op:
                TOKEN_RELATIONOP_SE
                | TOKEN_RELATIONOP_S
                | TOKEN_RELATIONOP_B
                | TOKEN_RELATIONOP_BE
                ;

    eq_op:
                TOKEN_EQUALITYOP_E
                | TOKEN_EQUALITYOP_NE
                ;

    cond_op:
                TOKEN_CONDITIONOP_AND
                | TOKEN_CONDITIONOP_OR
                ; */

    type:
                TOKEN_INT
                | TOKEN_BOOL
                ;


    multi_id:
                id 
                | id TOKEN_COMMA multi_id 
                ;
   
    literal:
                int_literal
                | char_literal
                | bool_literal
                ;

    int_literal: 
                decimal_literal
                | hex_literal
                ;
    id:
                TOKEN_ID
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
	yyin = fopen(argv[1], "r");
	yyout = fopen(argv[2], "w");
	yyparse();
	return 0;
}


int yyerror(const char* message) {
    cout << message << endl;
    return 0;
}



