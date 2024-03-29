/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "code_bison.y"

    
    #include <iostream>
    #include <string>
    using namespace std;

    extern int yylex();
    int yyerror(const char* message);
    extern FILE* yyin;
    extern FILE* yyout;

    int running_mode = 0;
    

#line 85 "code_bison.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOKEN_CLASS = 258,
    TOKEN_PROGRAMCLASS = 259,
    TOKEN_ID = 260,
    TOKEN_INTTYPE = 261,
    TOKEN_BOOLEANTYPE = 262,
    TOKEN_VOIDTYPE = 263,
    TOKEN_MAINFUNC = 264,
    TOKEN_LP = 265,
    TOKEN_RP = 266,
    TOKEN_COMMA = 267,
    TOKEN_SEMICOLON = 268,
    TOKEN_IFCONDITION = 269,
    TOKEN_LOOP = 270,
    TOKEN_ASSIGNOP_ASS = 271,
    TOKEN_ASSIGNOP_ADD = 272,
    TOKEN_ASSIGNOP_SUB = 273,
    TOKEN_RETURN = 274,
    TOKEN_BREAKSTMT = 275,
    TOKEN_CONTINUESTMT = 276,
    TOKEN_LB = 277,
    TOKEN_RB = 278,
    TOKEN_LCB = 279,
    TOKEN_RCB = 280,
    TOKEN_CALLOUT = 281,
    TOKEN_ELSECONDITION = 282,
    TOKEN_ARITHMATICOP_ADD = 283,
    TOKEN_ARITHMATICOP_SUB = 284,
    TOKEN_ARITHMATICOP_DIV = 285,
    TOKEN_ARITHMATICOP_MUL = 286,
    TOKEN_ARITHMATICOP_REM = 287,
    TOKEN_RELATIONOP_SE = 288,
    TOKEN_RELATIONOP_S = 289,
    TOKEN_RELATIONOP_BE = 290,
    TOKEN_RELATIONOP_B = 291,
    TOKEN_EQUALITYOP_E = 292,
    TOKEN_EQUALITYOP_NE = 293,
    TOKEN_CONDITIONOP_AND = 294,
    TOKEN_CONDITIONOP_OR = 295,
    TOKEN_LOGICOP = 296,
    TOKEN_DECIMALCONST = 297,
    TOKEN_HEXADECIMALCONST = 298,
    TOKEN_BOOLEANCONST = 299,
    TOKEN_CHARCONST = 300,
    TOKEN_STRINGCONST = 301,
    TOKEN_COMMENT = 302,
    TOKEN_WHITESPACE = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "code_bison.y"

    char str[50];
    int number;
    

#line 189 "code_bison.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
# define YYCOPY_NEEDED 1
#endif


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   291

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  162

#define YYUNDEFTOK  2
#define YYMAXUTOK   303


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   134,   134,   140,   144,   151,   155,   162,   169,   173,
     177,   181,   186,   194,   198,   205,   209,   216,   220,   224,
     228,   232,   236,   243,   250,   254,   258,   262,   266,   270,
     274,   278,   282,   286,   290,   294,   298,   302,   306,   310,
     314,   321,   325,   329,   336,   340,   344,   348,   352,   356,
     360,   364,   368,   372,   376,   380,   384,   388,   392,   396,
     400,   404,   408,   415,   419,   426,   430,   434,   438,   445,
     449,   453,   457,   464,   468,   476,   480,   488,   488,   492,
     492,   499,   503,   507,   514,   518,   524,   531,   537,   543,
     549,   555
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_CLASS", "TOKEN_PROGRAMCLASS",
  "TOKEN_ID", "TOKEN_INTTYPE", "TOKEN_BOOLEANTYPE", "TOKEN_VOIDTYPE",
  "TOKEN_MAINFUNC", "TOKEN_LP", "TOKEN_RP", "TOKEN_COMMA",
  "TOKEN_SEMICOLON", "TOKEN_IFCONDITION", "TOKEN_LOOP",
  "TOKEN_ASSIGNOP_ASS", "TOKEN_ASSIGNOP_ADD", "TOKEN_ASSIGNOP_SUB",
  "TOKEN_RETURN", "TOKEN_BREAKSTMT", "TOKEN_CONTINUESTMT", "TOKEN_LB",
  "TOKEN_RB", "TOKEN_LCB", "TOKEN_RCB", "TOKEN_CALLOUT",
  "TOKEN_ELSECONDITION", "TOKEN_ARITHMATICOP_ADD",
  "TOKEN_ARITHMATICOP_SUB", "TOKEN_ARITHMATICOP_DIV",
  "TOKEN_ARITHMATICOP_MUL", "TOKEN_ARITHMATICOP_REM",
  "TOKEN_RELATIONOP_SE", "TOKEN_RELATIONOP_S", "TOKEN_RELATIONOP_BE",
  "TOKEN_RELATIONOP_B", "TOKEN_EQUALITYOP_E", "TOKEN_EQUALITYOP_NE",
  "TOKEN_CONDITIONOP_AND", "TOKEN_CONDITIONOP_OR", "TOKEN_LOGICOP",
  "TOKEN_DECIMALCONST", "TOKEN_HEXADECIMALCONST", "TOKEN_BOOLEANCONST",
  "TOKEN_CHARCONST", "TOKEN_STRINGCONST", "TOKEN_COMMENT",
  "TOKEN_WHITESPACE", "$accept", "program", "decl", "decl_method",
  "field_decl", "multi_field", "method_decl", "header", "func_name",
  "func_args", "arg", "block", "var_decl", "statement", "ret_stmt",
  "else_stmt", "location", "assign_op", "expr", "method_call",
  "multi_expr", "multi_expr_inner", "multi_callout_args",
  "multi_callout_args_inner", "callout_args", "type", "multi_id", "$@1",
  "$@2", "literal", "int_literal", "id", "decimal_literal", "hex_literal",
  "bool_literal", "char_literal", "string_literal", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

#define YYPACT_NINF (-53)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,     1,    34,    12,   -53,    97,   -53,   -53,   -53,    13,
      97,    97,   -53,     2,    37,   -53,   -53,   -53,   -53,   -53,
     -53,    29,   -53,   -10,    15,    37,   -16,    31,    36,    33,
      37,   -10,   -53,   -53,    26,   -53,   -53,   -53,    41,    15,
     -53,   -53,    38,    15,   -53,    54,    37,     9,   -53,    15,
     -10,    57,    37,    80,    56,    66,    70,   -53,    61,   227,
      71,    -6,    87,    37,    37,   100,   -53,    80,    94,    80,
      80,    80,   -53,   -53,   107,   -53,   112,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,    67,   -53,   -53,   -53,   -53,    80,
     -53,    80,    80,   -53,   -53,   142,    15,    98,    80,   128,
      39,   -53,   -53,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,   -53,   143,   183,   141,
     184,   -53,   201,   -53,   -53,   254,   170,   -53,    39,    39,
      59,    59,   237,   -53,   -53,   -53,   -53,   192,   243,   231,
     155,    73,   186,   -53,    80,   -53,   -53,   -53,    41,   -53,
      80,   112,   -53,   270,   -53,   -53,   -53,   -53,   218,    73,
     -53,   -53
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    75,    76,    13,     0,
       4,     0,     6,     0,    14,     2,     5,    14,     3,    86,
      16,     0,    15,    11,    21,     0,     0,     0,     0,    17,
       0,    11,    87,    88,     0,    84,    85,     7,     0,     0,
      22,     8,    10,    25,    12,    18,     0,    34,    77,     0,
      11,     0,     0,    36,     0,     0,     0,    33,     0,     0,
       0,    39,     0,     0,     0,    19,     9,     0,     0,     0,
       0,     0,    89,    90,     0,    44,    35,    45,    46,    81,
      83,    82,    31,    32,     0,    23,    41,    42,    43,     0,
      27,    66,     0,    24,    78,     0,     0,     0,     0,     0,
      60,    61,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    70,     0,    67,
       0,    65,     0,    77,    20,    38,     0,    62,    47,    48,
      50,    49,    51,    52,    53,    55,    54,    56,    57,    58,
      59,     0,     0,    26,     0,    63,    40,    80,     0,    28,
       0,    73,    69,    71,    74,    64,    68,    37,     0,     0,
      29,    72
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -53,   -53,   272,   -53,   -53,   -25,   274,   -53,   -53,   -53,
     -29,   -47,   -53,   -53,   -53,   -53,   238,   -53,   -52,   239,
     -53,   144,   -53,   130,   -53,    -2,   164,   -53,   -53,   -53,
     264,    18,   -53,   -53,   -53,   -53,   207
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    11,    27,    12,    13,    21,    28,
      29,    44,    47,    58,    74,   149,    75,    89,   119,    77,
     120,   121,   142,   152,   153,    30,    62,    63,    64,    78,
      79,    61,    35,    36,    80,    81,   154
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      57,    76,    25,    14,    91,     3,    41,    19,    17,    14,
      45,    20,    26,     1,    19,    97,    92,    99,   100,   101,
      65,     6,     7,    51,    52,    66,    32,    33,    53,    54,
      55,    22,    23,    43,     4,    56,     5,   118,    15,    24,
     122,    48,    19,    31,    37,    39,   126,    38,    40,    42,
      46,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,    50,    43,    49,   124,    67,    82,
      68,   107,   108,   109,   110,   111,   112,   113,    19,    83,
      84,    94,    95,    69,    90,    19,    85,   103,   104,   151,
      69,   107,   108,   109,   110,   111,   112,   113,   158,    56,
      93,   157,    70,     6,     7,     8,    56,   151,   125,    70,
      98,   160,    96,   116,    71,    32,    33,    72,    73,   116,
     102,    71,    32,    33,    72,    73,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   127,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   144,   123,   141,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   150,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   145,   143,   155,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   146,   108,   109,   110,   111,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,    43,    86,    87,    88,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     108,   109,   110,   111,   112,   113,   108,   109,   110,   111,
     112,   148,   159,    18,    16,    59,    60,   147,   156,   161,
      34,   117
};

static const yytype_uint8 yycheck[] =
{
      47,    53,    12,     5,    10,     4,    31,     5,    10,    11,
      39,     9,    22,     3,     5,    67,    22,    69,    70,    71,
      49,     6,     7,    14,    15,    50,    42,    43,    19,    20,
      21,    13,    14,    24,     0,    26,    24,    89,    25,    10,
      92,    43,     5,    25,    13,    12,    98,    11,    30,    23,
      12,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    46,    24,    12,    96,    11,    13,
      52,    32,    33,    34,    35,    36,    37,    38,     5,    13,
      10,    63,    64,    10,    13,     5,    25,    28,    29,   141,
      10,    32,    33,    34,    35,    36,    37,    38,   150,    26,
      13,   148,    29,     6,     7,     8,    26,   159,    10,    29,
      16,   158,    12,    46,    41,    42,    43,    44,    45,    46,
      13,    41,    42,    43,    44,    45,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    11,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    12,    12,    12,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    12,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    11,    13,    11,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    23,    33,    34,    35,    36,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    24,    16,    17,    18,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      33,    34,    35,    36,    37,    38,    33,    34,    35,    36,
      37,    27,    12,    11,    10,    47,    47,   123,   144,   159,
      26,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    50,     4,     0,    24,     6,     7,     8,    51,
      52,    53,    55,    56,    74,    25,    55,    74,    51,     5,
       9,    57,    80,    80,    10,    12,    22,    54,    58,    59,
      74,    80,    42,    43,    79,    81,    82,    13,    11,    12,
      80,    54,    23,    24,    60,    59,    12,    61,    74,    12,
      80,    14,    15,    19,    20,    21,    26,    60,    62,    65,
      68,    80,    75,    76,    77,    59,    54,    11,    80,    10,
      29,    41,    44,    45,    63,    65,    67,    68,    78,    79,
      83,    84,    13,    13,    10,    25,    16,    17,    18,    66,
      13,    10,    22,    13,    80,    80,    12,    67,    16,    67,
      67,    67,    13,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    46,    85,    67,    67,
      69,    70,    67,    12,    59,    10,    67,    11,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    12,    71,    13,    12,    11,    23,    75,    27,    64,
      12,    67,    72,    73,    85,    11,    70,    60,    67,    12,
      60,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    54,    54,
      54,    54,    55,    56,    56,    57,    57,    58,    58,    58,
      58,    58,    59,    60,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    68,    68,    69,    69,    70,    70,    71,
      71,    72,    72,    73,    73,    74,    74,    76,    75,    77,
      75,    78,    78,    78,    79,    79,    80,    81,    82,    83,
      84,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     1,     2,     1,     4,     3,     6,
       3,     0,     6,     1,     1,     1,     1,     1,     3,     5,
       7,     0,     2,     4,     3,     0,     4,     2,     5,     7,
       3,     2,     2,     1,     0,     1,     0,     2,     0,     1,
       4,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     4,     5,     1,     0,     1,     3,     2,
       0,     1,     3,     1,     1,     1,     1,     0,     2,     0,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        YY_LAC_DISCARD ("YYBACKUP");                              \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYPTRDIFF_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyesa, yy_state_t **yyes,
                YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

    yy_state_t yyesa[20];
    yy_state_t *yyes;
    YYPTRDIFF_T yyes_capacity;

  int yy_lac_established = 0;
  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = 20;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 2:
#line 135 "code_bison.y"
                {
                    printf("<program> %s %s %s %s %s\n", running_mode ? "TOKEN_CLASS" : (yyvsp[-4].str), running_mode ? "TOKEN_PROGRAMCLASS" : (yyvsp[-3].str), running_mode ? "TOKEN_LCB" : (yyvsp[-2].str), (yyvsp[-1].str), running_mode ? "TOKEN_RCB" : (yyvsp[0].str));
                }
#line 1759 "code_bison.tab.c"
    break;

  case 3:
#line 141 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s", (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 1767 "code_bison.tab.c"
    break;

  case 4:
#line 145 "code_bison.y"
                { 
                    sprintf((yyval.str), "%s", (yyvsp[0].str));
                }
#line 1775 "code_bison.tab.c"
    break;

  case 5:
#line 152 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s", (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 1783 "code_bison.tab.c"
    break;

  case 6:
#line 156 "code_bison.y"
                { 
                    sprintf((yyval.str), "%s", (yyvsp[0].str));
                }
#line 1791 "code_bison.tab.c"
    break;

  case 7:
#line 163 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s %s", (yyvsp[-3].str), (yyvsp[-2].str), (yyvsp[-1].str), running_mode ? "TOKEN_SEMICOLON" : (yyvsp[0].str));
                }
#line 1799 "code_bison.tab.c"
    break;

  case 8:
#line 170 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", running_mode ? "TOKEN_COMMA" : (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 1807 "code_bison.tab.c"
    break;

  case 9:
#line 174 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s %s %s %s", running_mode ? "TOKEN_LB" : (yyvsp[-5].str), (yyvsp[-4].str), running_mode ? "TOKEN_RB" : (yyvsp[-3].str), running_mode ? "TOKEN_COMMA" : (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)); 
                }
#line 1815 "code_bison.tab.c"
    break;

  case 10:
#line 178 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", running_mode ? "TOKEN_LB" : (yyvsp[-2].str), (yyvsp[-1].str), running_mode ? "TOKEN_RB" : (yyvsp[0].str));
                }
#line 1823 "code_bison.tab.c"
    break;

  case 11:
#line 181 "code_bison.y"
                              {  }
#line 1829 "code_bison.tab.c"
    break;

  case 12:
#line 187 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s %s %s %s", (yyvsp[-5].str), (yyvsp[-4].str), running_mode ? "TOKEN_LP" : (yyvsp[-3].str), (yyvsp[-2].str), running_mode ? "TOKEN_RP" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 1837 "code_bison.tab.c"
    break;

  case 13:
#line 195 "code_bison.y"
                {
                    sprintf((yyval.str), "%s", running_mode ? "TOKEN_VOIDTYPE" : (yyvsp[0].str));
                }
#line 1845 "code_bison.tab.c"
    break;

  case 14:
#line 199 "code_bison.y"
                {
                    sprintf((yyval.str), "%s", (yyvsp[0].str));
                }
#line 1853 "code_bison.tab.c"
    break;

  case 15:
#line 206 "code_bison.y"
                {
                    sprintf((yyval.str), "%s", (yyvsp[0].str));
                }
#line 1861 "code_bison.tab.c"
    break;

  case 16:
#line 210 "code_bison.y"
                {
                    sprintf((yyval.str), "%s", running_mode ? "TOKEN_MAINFUNC" : (yyvsp[0].str));
                }
#line 1869 "code_bison.tab.c"
    break;

  case 17:
#line 217 "code_bison.y"
                {
                    sprintf((yyval.str), "%s", (yyvsp[0].str));
                }
#line 1877 "code_bison.tab.c"
    break;

  case 18:
#line 221 "code_bison.y"
                { 
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_COMMA" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 1885 "code_bison.tab.c"
    break;

  case 19:
#line 225 "code_bison.y"
                { 
                    sprintf((yyval.str), "%s %s %s %s %s", (yyvsp[-4].str), running_mode ? "TOKEN_COMMA" : (yyvsp[-3].str), (yyvsp[-2].str), running_mode ? "TOKEN_COMMA" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 1893 "code_bison.tab.c"
    break;

  case 20:
#line 229 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s %s %s %s %s", (yyvsp[-6].str), running_mode ? "TOKEN_COMMA" : (yyvsp[-5].str), (yyvsp[-4].str), running_mode ? "TOKEN_COMMA" : (yyvsp[-3].str), (yyvsp[-2].str), running_mode ? "TOKEN_COMMA" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 1901 "code_bison.tab.c"
    break;

  case 21:
#line 232 "code_bison.y"
                              { }
#line 1907 "code_bison.tab.c"
    break;

  case 22:
#line 237 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s %s" , (yyvsp[-1].str) , (yyvsp[0].str));
                }
#line 1915 "code_bison.tab.c"
    break;

  case 23:
#line 244 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s %s %s %s" , running_mode? "TOKEN_LCB" : (yyvsp[-3].str) , (yyvsp[-2].str) , (yyvsp[-1].str) , running_mode ? "TOKEN_RCB" : (yyvsp[0].str));
                }
#line 1923 "code_bison.tab.c"
    break;

  case 24:
#line 251 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s" , (yyvsp[-2].str) , (yyvsp[-1].str) , running_mode ? "TOKEN_SEMICOLON" : (yyvsp[0].str));
                }
#line 1931 "code_bison.tab.c"
    break;

  case 25:
#line 254 "code_bison.y"
                             { }
#line 1937 "code_bison.tab.c"
    break;

  case 26:
#line 259 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s %s", (yyvsp[-3].str) , (yyvsp[-2].str) , (yyvsp[-1].str) , running_mode ? "TOKEN_SEMICOLON" : (yyvsp[0].str));
                }
#line 1945 "code_bison.tab.c"
    break;

  case 27:
#line 263 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s", (yyvsp[-1].str), running_mode ? "TOKEN_SEMICOLON" : (yyvsp[0].str));
                }
#line 1953 "code_bison.tab.c"
    break;

  case 28:
#line 267 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s %s %s %s %s", running_mode ? "TOKEN_IFCONDITION" : (yyvsp[-4].str) , running_mode ? "TOKEN_RP" : (yyvsp[-3].str) , (yyvsp[-2].str) , running_mode ? "TOKEN_LP": (yyvsp[-1].str) , (yyvsp[0].str));
                }
#line 1961 "code_bison.tab.c"
    break;

  case 29:
#line 271 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s %s %s %s %s", running_mode ? "TOKEN_LOOP" : (yyvsp[-6].str), (yyvsp[-5].str), running_mode ? "TOKEN_ASSIGNOP_ASS" : (yyvsp[-4].str), (yyvsp[-3].str), running_mode ? "TOKEN_COMMA" : (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 1969 "code_bison.tab.c"
    break;

  case 30:
#line 275 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", running_mode ? "TOKEN_RETURN" : (yyvsp[-2].str), (yyvsp[-1].str), running_mode ? "TOKEN_SEMICOLON" : (yyvsp[0].str));
                }
#line 1977 "code_bison.tab.c"
    break;

  case 31:
#line 279 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s", running_mode ? "TOKEN_BREAKSTMT" : (yyvsp[-1].str), running_mode ? "TOKEN_SEMICOLON" : (yyvsp[0].str));
                }
#line 1985 "code_bison.tab.c"
    break;

  case 32:
#line 283 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s", running_mode ? "TOKEN_CONTINUESTMT" : (yyvsp[-1].str) , running_mode ? "TOKEN_SEMICOLON" : (yyvsp[0].str));
                }
#line 1993 "code_bison.tab.c"
    break;

  case 33:
#line 287 "code_bison.y"
                {
                    sprintf((yyval.str), "%s", (yyvsp[0].str));
                }
#line 2001 "code_bison.tab.c"
    break;

  case 34:
#line 290 "code_bison.y"
                             { }
#line 2007 "code_bison.tab.c"
    break;

  case 35:
#line 295 "code_bison.y"
                {
                    sprintf((yyval.str), "%s" , (yyvsp[0].str));
                }
#line 2015 "code_bison.tab.c"
    break;

  case 36:
#line 298 "code_bison.y"
                             { }
#line 2021 "code_bison.tab.c"
    break;

  case 37:
#line 303 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s", running_mode ? "TOKEN_ELSECONDITION" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2029 "code_bison.tab.c"
    break;

  case 38:
#line 306 "code_bison.y"
                             { }
#line 2035 "code_bison.tab.c"
    break;

  case 39:
#line 311 "code_bison.y"
                {
                    sprintf((yyval.str), "%s", (yyvsp[0].str));
                }
#line 2043 "code_bison.tab.c"
    break;

  case 40:
#line 315 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s %s", (yyvsp[-3].str), running_mode ? "TOKEN_LB" : (yyvsp[-2].str), (yyvsp[-1].str), running_mode ? "TOKEN_RB" : (yyvsp[0].str));
                }
#line 2051 "code_bison.tab.c"
    break;

  case 41:
#line 322 "code_bison.y"
                {
                    sprintf((yyval.str), "%s", running_mode ? "TOKEN_ASSIGNOP_ASS" : (yyvsp[0].str));
                }
#line 2059 "code_bison.tab.c"
    break;

  case 42:
#line 326 "code_bison.y"
                {
                    sprintf((yyval.str), "%s", running_mode ? "TOKEN_ASSIGNOP_ADD" : (yyvsp[0].str));
                }
#line 2067 "code_bison.tab.c"
    break;

  case 43:
#line 330 "code_bison.y"
                {
                    sprintf((yyval.str), "%s", running_mode ? "TOKEN_ASSIGNOP_SUB" : (yyvsp[0].str));
                }
#line 2075 "code_bison.tab.c"
    break;

  case 44:
#line 337 "code_bison.y"
                {
                    sprintf((yyval.str), "%s", (yyvsp[0].str));
                }
#line 2083 "code_bison.tab.c"
    break;

  case 45:
#line 341 "code_bison.y"
                {
                    sprintf((yyval.str), "%s", (yyvsp[0].str));
                }
#line 2091 "code_bison.tab.c"
    break;

  case 46:
#line 345 "code_bison.y"
                {
                    sprintf((yyval.str), "%s", (yyvsp[0].str));
                }
#line 2099 "code_bison.tab.c"
    break;

  case 47:
#line 349 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_ARITHMATICOP_ADD" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2107 "code_bison.tab.c"
    break;

  case 48:
#line 353 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_ARITHMATICOP_SUB" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2115 "code_bison.tab.c"
    break;

  case 49:
#line 357 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_ARITHMATICOP_MUL" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2123 "code_bison.tab.c"
    break;

  case 50:
#line 361 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_ARITHMATICOP_DIV" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2131 "code_bison.tab.c"
    break;

  case 51:
#line 365 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_ARITHMATICOP_REM" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2139 "code_bison.tab.c"
    break;

  case 52:
#line 369 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_RELATIONOP_SE" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2147 "code_bison.tab.c"
    break;

  case 53:
#line 373 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_RELATIONOP_S" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2155 "code_bison.tab.c"
    break;

  case 54:
#line 377 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_RELATIONOP_B" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2163 "code_bison.tab.c"
    break;

  case 55:
#line 381 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_RELATIONOP_BE" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2171 "code_bison.tab.c"
    break;

  case 56:
#line 385 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_EQUALITYOP_E" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2179 "code_bison.tab.c"
    break;

  case 57:
#line 389 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_EQUALITYOP_NE" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2187 "code_bison.tab.c"
    break;

  case 58:
#line 393 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_CONDITIONOP_AND" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2195 "code_bison.tab.c"
    break;

  case 59:
#line 397 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_CONDITIONOP_OR" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2203 "code_bison.tab.c"
    break;

  case 60:
#line 401 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s", running_mode ? "TOKEN_ARITHMATICOP_SUB" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2211 "code_bison.tab.c"
    break;

  case 61:
#line 405 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s", running_mode ? "TOKEN_LOGICOP" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2219 "code_bison.tab.c"
    break;

  case 62:
#line 409 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", running_mode ? "TOKEN_LP" : (yyvsp[-2].str), (yyvsp[-1].str), running_mode ? "TOKEN_RP" : (yyvsp[0].str));
                }
#line 2227 "code_bison.tab.c"
    break;

  case 63:
#line 416 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s %s", (yyvsp[-3].str), running_mode ? "TOKEN_LP" : (yyvsp[-2].str), (yyvsp[-1].str), running_mode ? "TOKEN_RP" : (yyvsp[0].str));
                }
#line 2235 "code_bison.tab.c"
    break;

  case 64:
#line 420 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s %s", (yyvsp[-4].str), running_mode ? "TOKEN_LP" : (yyvsp[-3].str), (yyvsp[-2].str), running_mode ? "TOKEN_RP" : (yyvsp[-1].str));
                }
#line 2243 "code_bison.tab.c"
    break;

  case 65:
#line 427 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s" , (yyvsp[0].str));
                }
#line 2251 "code_bison.tab.c"
    break;

  case 66:
#line 430 "code_bison.y"
                             { }
#line 2257 "code_bison.tab.c"
    break;

  case 67:
#line 435 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s" , (yyvsp[0].str));
                }
#line 2265 "code_bison.tab.c"
    break;

  case 68:
#line 439 "code_bison.y"
                {      
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_COMMA" : (yyvsp[-1].str) , (yyvsp[0].str));
                }
#line 2273 "code_bison.tab.c"
    break;

  case 69:
#line 446 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s", running_mode ? "TOKEN_COMMA" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2281 "code_bison.tab.c"
    break;

  case 70:
#line 449 "code_bison.y"
                              { }
#line 2287 "code_bison.tab.c"
    break;

  case 71:
#line 454 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s", (yyvsp[0].str));
                }
#line 2295 "code_bison.tab.c"
    break;

  case 72:
#line 458 "code_bison.y"
                {
                    sprintf((yyval.str), "%s %s %s", (yyvsp[-2].str), running_mode ? "TOKEN_COMMA" : (yyvsp[-1].str), (yyvsp[0].str));
                }
#line 2303 "code_bison.tab.c"
    break;

  case 73:
#line 465 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s", (yyvsp[0].str));
                }
#line 2311 "code_bison.tab.c"
    break;

  case 74:
#line 469 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s", (yyvsp[0].str));
                }
#line 2319 "code_bison.tab.c"
    break;

  case 75:
#line 477 "code_bison.y"
                {
                    sprintf((yyval.str), "%s", running_mode ? "TOKEN_INTTYPE" : (yyvsp[0].str));
                }
#line 2327 "code_bison.tab.c"
    break;

  case 76:
#line 481 "code_bison.y"
                {
                    sprintf((yyval.str), "%s", running_mode ? "TOKEN_BOOLEANTYPE" : (yyvsp[0].str));
                }
#line 2335 "code_bison.tab.c"
    break;

  case 77:
#line 488 "code_bison.y"
                {cout << "22222222222222222222";}
#line 2341 "code_bison.tab.c"
    break;

  case 78:
#line 489 "code_bison.y"
                {
                    //sprintf($$ , "%s", $1);
                }
#line 2349 "code_bison.tab.c"
    break;

  case 79:
#line 492 "code_bison.y"
                  {cout << "111111111111111";}
#line 2355 "code_bison.tab.c"
    break;

  case 80:
#line 493 "code_bison.y"
                {
                    //sprintf($$, "%s %s %s", $1, running_mode ? "TOKEN_COMMA" : $2, $3);
                }
#line 2363 "code_bison.tab.c"
    break;

  case 81:
#line 500 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s", (yyvsp[0].str));
                }
#line 2371 "code_bison.tab.c"
    break;

  case 82:
#line 504 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s", (yyvsp[0].str));
                }
#line 2379 "code_bison.tab.c"
    break;

  case 83:
#line 508 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s", (yyvsp[0].str));
                }
#line 2387 "code_bison.tab.c"
    break;

  case 84:
#line 515 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s", (yyvsp[0].str));
                }
#line 2395 "code_bison.tab.c"
    break;

  case 85:
#line 519 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s", (yyvsp[0].str));
                }
#line 2403 "code_bison.tab.c"
    break;

  case 86:
#line 525 "code_bison.y"
                {
            
                    sprintf((yyval.str) , "%s", running_mode ? "TOKEN_ID" : (yyvsp[0].str));
                }
#line 2412 "code_bison.tab.c"
    break;

  case 87:
#line 532 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s", running_mode ? "TOKEN_DECIMALCONST" : (yyvsp[0].str));
                }
#line 2420 "code_bison.tab.c"
    break;

  case 88:
#line 538 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s", running_mode ? "TOKEN_HEXADECIMALCONST" : (yyvsp[0].str));
                }
#line 2428 "code_bison.tab.c"
    break;

  case 89:
#line 544 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s", running_mode ? "TOKEN_BOOLEANCONST" : (yyvsp[0].str));
                }
#line 2436 "code_bison.tab.c"
    break;

  case 90:
#line 550 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s", running_mode ? "TOKEN_CHARCONST" : (yyvsp[0].str));
                }
#line 2444 "code_bison.tab.c"
    break;

  case 91:
#line 556 "code_bison.y"
                {
                    sprintf((yyval.str) , "%s", running_mode ? "TOKEN_STRINGCONST" : (yyvsp[0].str));
                }
#line 2452 "code_bison.tab.c"
    break;


#line 2456 "code_bison.tab.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
  }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 561 "code_bison.y"



int main(int argc, char **argv)
{
    running_mode = *argv[1] == '1' ? 1 : 0;

	yyin = fopen("code.x", "r");
	yyout = fopen("output.txt", "w");
	yyparse();
	return 0;
}


int yyerror(const char* message) {
    cout << "\n\n================ERROR===============\n\n"<<endl;
    cout << message << endl;
    return 0;
}
