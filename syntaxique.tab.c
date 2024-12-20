/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntaxique.y"

    extern int nb_lignes;
    extern int col;
    int yyerror(char * msg);
    char sauvType[20];

#line 78 "syntaxique.tab.c"

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

#include "syntaxique.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_mc_begin = 3,                   /* mc_begin  */
  YYSYMBOL_mc_end = 4,                     /* mc_end  */
  YYSYMBOL_String = 5,                     /* String  */
  YYSYMBOL_pvg = 6,                        /* pvg  */
  YYSYMBOL_aff = 7,                        /* aff  */
  YYSYMBOL_identificateur = 8,             /* identificateur  */
  YYSYMBOL_mc_program = 9,                 /* mc_program  */
  YYSYMBOL_mc_Const = 10,                  /* mc_Const  */
  YYSYMBOL_mc_For = 11,                    /* mc_For  */
  YYSYMBOL_mc_In = 12,                     /* mc_In  */
  YYSYMBOL_mc_Out = 13,                    /* mc_Out  */
  YYSYMBOL_mc_integer = 14,                /* mc_integer  */
  YYSYMBOL_mc_float = 15,                  /* mc_float  */
  YYSYMBOL_mc_String = 16,                 /* mc_String  */
  YYSYMBOL_taille = 17,                    /* taille  */
  YYSYMBOL_FLOAT_TOK = 18,                 /* FLOAT_TOK  */
  YYSYMBOL_integer = 19,                   /* integer  */
  YYSYMBOL_commentaire = 20,               /* commentaire  */
  YYSYMBOL_equals = 21,                    /* equals  */
  YYSYMBOL_doesnt_equal = 22,              /* doesnt_equal  */
  YYSYMBOL_less = 23,                      /* less  */
  YYSYMBOL_less_or_equals = 24,            /* less_or_equals  */
  YYSYMBOL_greater = 25,                   /* greater  */
  YYSYMBOL_greater_or_equals = 26,         /* greater_or_equals  */
  YYSYMBOL_add = 27,                       /* add  */
  YYSYMBOL_substract = 28,                 /* substract  */
  YYSYMBOL_divide = 29,                    /* divide  */
  YYSYMBOL_multiply = 30,                  /* multiply  */
  YYSYMBOL_open_bracket = 31,              /* open_bracket  */
  YYSYMBOL_close_bracket = 32,             /* close_bracket  */
  YYSYMBOL_open_bracket_square = 33,       /* open_bracket_square  */
  YYSYMBOL_close_bracket_square = 34,      /* close_bracket_square  */
  YYSYMBOL_open_parenthesis = 35,          /* open_parenthesis  */
  YYSYMBOL_close_parenthesis = 36,         /* close_parenthesis  */
  YYSYMBOL_vrg = 37,                       /* vrg  */
  YYSYMBOL_err = 38,                       /* err  */
  YYSYMBOL_signe_formatage = 39,           /* signe_formatage  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_Program = 41,                   /* Program  */
  YYSYMBOL_Donnee = 42,                    /* Donnee  */
  YYSYMBOL_Expression = 43,                /* Expression  */
  YYSYMBOL_Type_Donnee = 44,               /* Type_Donnee  */
  YYSYMBOL_Affectation_String = 45,        /* Affectation_String  */
  YYSYMBOL_Groupe_Identificateurs = 46,    /* Groupe_Identificateurs  */
  YYSYMBOL_Declaration_Variable_Simple = 47, /* Declaration_Variable_Simple  */
  YYSYMBOL_Declaration_Constant = 48,      /* Declaration_Constant  */
  YYSYMBOL_Declaration_Tableau = 49,       /* Declaration_Tableau  */
  YYSYMBOL_Affectation_Variable_Simple = 50, /* Affectation_Variable_Simple  */
  YYSYMBOL_Affectation_Element_Tableau = 51, /* Affectation_Element_Tableau  */
  YYSYMBOL_Incrementation = 52,            /* Incrementation  */
  YYSYMBOL_Decrementation = 53,            /* Decrementation  */
  YYSYMBOL_Operation_Speciale = 54,        /* Operation_Speciale  */
  YYSYMBOL_Comparaison = 55,               /* Comparaison  */
  YYSYMBOL_Condition = 56,                 /* Condition  */
  YYSYMBOL_Declaration = 57,               /* Declaration  */
  YYSYMBOL_Affectation = 58,               /* Affectation  */
  YYSYMBOL_Out_Function = 59,              /* Out_Function  */
  YYSYMBOL_In_Function = 60,               /* In_Function  */
  YYSYMBOL_Instruction = 61,               /* Instruction  */
  YYSYMBOL_Bloc_Instructions = 62,         /* Bloc_Instructions  */
  YYSYMBOL_Boucle = 63                     /* Boucle  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
#endif /* !defined yyoverflow */

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
#define YYLAST   120

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  111

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    18,    18,    23,    23,    23,    23,    23,    27,    32,
      33,    34,    35,    36,    37,    39,    41,    44,    51,    61,
      73,    74,    85,    92,    92,    97,   105,   110,   115,   115,
     116,   116,   116,   116,   116,   116,   117,   118,   118,   119,
     119,   119,   119,   120,   122,   127,   127,   127,   127,   127,
     127,   128,   128,   129
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "mc_begin", "mc_end",
  "String", "pvg", "aff", "identificateur", "mc_program", "mc_Const",
  "mc_For", "mc_In", "mc_Out", "mc_integer", "mc_float", "mc_String",
  "taille", "FLOAT_TOK", "integer", "commentaire", "equals",
  "doesnt_equal", "less", "less_or_equals", "greater", "greater_or_equals",
  "add", "substract", "divide", "multiply", "open_bracket",
  "close_bracket", "open_bracket_square", "close_bracket_square",
  "open_parenthesis", "close_parenthesis", "vrg", "err", "signe_formatage",
  "$accept", "Program", "Donnee", "Expression", "Type_Donnee",
  "Affectation_String", "Groupe_Identificateurs",
  "Declaration_Variable_Simple", "Declaration_Constant",
  "Declaration_Tableau", "Affectation_Variable_Simple",
  "Affectation_Element_Tableau", "Incrementation", "Decrementation",
  "Operation_Speciale", "Comparaison", "Condition", "Declaration",
  "Affectation", "Out_Function", "In_Function", "Instruction",
  "Bloc_Instructions", "Boucle", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-55)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -4,     1,    21,     5,   -55,    42,    -5,    -6,     6,    11,
     -55,   -55,   -55,   -55,    -2,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,    46,   -55,   -55,   -55,   -55,    42,    29,
     -55,    -1,    36,    56,    57,    67,    47,    80,   -18,    79,
      82,   -55,   -55,   -55,    83,    58,   -55,   -55,   -55,   -55,
      -3,   -55,   -55,    59,    84,    30,    53,    55,    78,    88,
      91,   -55,   -55,    81,   -55,    30,    30,    30,    30,    92,
     -55,    43,    94,    93,    30,    68,    66,   -55,   -55,    70,
      10,    10,   -55,   -55,    30,   -55,   -55,   -55,   -55,   -55,
     -55,    30,    97,    71,    15,   100,   -55,     4,    49,    32,
      72,   103,   104,   -55,   -55,   108,   -55,   -55,    42,   109,
     -55
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,    52,     0,     0,     0,     0,
      16,    15,    14,    45,     0,    23,    37,    40,    38,    39,
      41,    28,    29,     0,    46,    47,    50,    49,    52,     0,
      48,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,    42,    51,     2,     3,     8,     4,     6,     5,    13,
       0,    26,    27,     0,     0,     0,     0,     0,     0,     0,
       0,    20,    17,     0,    24,     0,     0,     0,     0,     0,
       3,     0,     0,     0,     0,     0,    18,    19,    21,     0,
       9,    10,    12,    11,     0,    31,    30,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     7,     0,    36,     0,
       0,     0,     0,    22,    25,     0,    44,    43,    52,     0,
      53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -55,   -55,   -55,   -54,    77,   -55,    60,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,    22,   -55,   -55,   -55,    85,   -55,
     -55,   -55,   -28,   -55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    49,    50,    14,    15,    40,    16,    17,    18,
      19,    20,    21,    22,    23,    91,    72,    24,    25,    26,
      27,    28,    29,    30
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      42,    71,    31,    64,    44,     1,    38,    45,    39,     3,
     104,    80,    81,    82,    83,    58,    46,    47,    48,    59,
      94,     4,    32,    33,    65,    66,    67,    68,    34,    35,
      97,    65,    66,    67,    68,    70,     5,    98,    45,    67,
      68,    36,    65,    66,    67,    68,    37,    46,    47,    48,
       6,   102,    41,     7,     8,     9,    10,    11,    12,    32,
      33,    43,    13,    51,    85,    86,    87,    88,    89,    90,
      65,    66,    67,    68,    53,     6,    65,    66,    67,    68,
     109,    10,    11,    12,    52,    57,    56,    60,    61,    62,
      73,    63,    74,    69,    39,    75,    76,    78,    79,    84,
      92,    93,    95,    59,    96,    99,   103,   101,   105,   106,
     107,   108,    54,   110,   100,     0,     0,     0,     0,    77,
      55
};

static const yytype_int8 yycheck[] =
{
      28,    55,     7,     6,     5,     9,     8,     8,    10,     8,
       6,    65,    66,    67,    68,    33,    17,    18,    19,    37,
      74,     0,    27,    28,    27,    28,    29,    30,    33,    35,
      84,    27,    28,    29,    30,     5,    31,    91,     8,    29,
      30,    35,    27,    28,    29,    30,    35,    17,    18,    19,
       8,    36,     6,    11,    12,    13,    14,    15,    16,    27,
      28,    32,    20,    27,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    17,     8,    27,    28,    29,    30,
     108,    14,    15,    16,    28,     5,    39,     8,     6,     6,
      37,    33,    37,    34,    10,    17,     8,     6,    17,     7,
       6,     8,    34,    37,    34,     8,     6,    36,    36,     6,
       6,     3,    35,     4,    92,    -1,    -1,    -1,    -1,    59,
      35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    41,     8,     0,    31,     8,    11,    12,    13,
      14,    15,    16,    20,    44,    45,    47,    48,    49,    50,
      51,    52,    53,    54,    57,    58,    59,    60,    61,    62,
      63,     7,    27,    28,    33,    35,    35,    35,     8,    10,
      46,     6,    62,    32,     5,     8,    17,    18,    19,    42,
      43,    27,    28,    17,    44,    58,    39,     5,    33,    37,
       8,     6,     6,    33,     6,    27,    28,    29,    30,    34,
       5,    43,    56,    37,    37,    17,     8,    46,     6,    17,
      43,    43,    43,    43,     7,    21,    22,    23,    24,    25,
      26,    55,     6,     8,    43,    34,    34,    43,    43,     8,
      54,    36,    36,     6,     6,    36,     6,     6,     3,    62,
       4
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    42,    42,    42,    42,    42,    43,
      43,    43,    43,    43,    44,    44,    44,    45,    46,    46,
      47,    48,    49,    50,    50,    51,    52,    53,    54,    54,
      55,    55,    55,    55,    55,    55,    56,    57,    57,    58,
      58,    58,    58,    59,    60,    61,    61,    61,    61,    61,
      61,    62,    62,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     3,     1,     1,     1,     1,     4,     1,     3,
       3,     4,     6,     1,     4,     7,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     2,     7,     7,     1,     1,     1,     1,     1,
       1,     2,     0,    10
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
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
  switch (yyn)
    {
  case 2: /* Program: mc_program identificateur open_bracket Bloc_Instructions close_bracket  */
#line 18 "syntaxique.y"
                                                                               {
    printf("Programme terminé..\n");
    YYACCEPT;
}
#line 1211 "syntaxique.tab.c"
    break;

  case 7: /* Donnee: identificateur open_bracket_square taille close_bracket_square  */
#line 23 "syntaxique.y"
                                                                                                               {
    if(rechercherType((yyvsp[-3].str))==0){
        printf("Erreur semantique: %s non déclaré, ligne %d, colonne %d\n", (yyvsp[-3].str), nb_lignes, col);
    }
}
#line 1221 "syntaxique.tab.c"
    break;

  case 8: /* Donnee: identificateur  */
#line 27 "syntaxique.y"
                  {
    if(rechercherType((yyvsp[0].str))==0){
        printf("Erreur semantique: %s non déclaré, ligne %d, colonne %d\n", (yyvsp[0].str), nb_lignes, col);
    }
}
#line 1231 "syntaxique.tab.c"
    break;

  case 14: /* Type_Donnee: mc_String  */
#line 37 "syntaxique.y"
                      {
    strcpy(sauvType, (yyvsp[0].str));
}
#line 1239 "syntaxique.tab.c"
    break;

  case 15: /* Type_Donnee: mc_float  */
#line 39 "syntaxique.y"
            {
    strcpy(sauvType, (yyvsp[0].str));
}
#line 1247 "syntaxique.tab.c"
    break;

  case 16: /* Type_Donnee: mc_integer  */
#line 41 "syntaxique.y"
             {
    strcpy(sauvType, (yyvsp[0].str));
}
#line 1255 "syntaxique.tab.c"
    break;

  case 17: /* Affectation_String: identificateur aff String pvg  */
#line 44 "syntaxique.y"
                                                 {
    if(rechercherType((yyvsp[-3].str))==0){
        printf("Erreur semantique: %s non déclaré, ligne %d, colonne %d\n", (yyvsp[-3].str), nb_lignes, col);
    }else{
        insererTaille((yyvsp[-3].str), strlen((yyvsp[-1].str))-2);
    }
}
#line 1267 "syntaxique.tab.c"
    break;

  case 18: /* Groupe_Identificateurs: identificateur  */
#line 51 "syntaxique.y"
                                       {
    if(rechercherType((yyvsp[0].str))==0){
        if(strcmp(sauvType, "String")==0){
            inserer((yyvsp[0].str), sauvType, 0);
        }else {
            inserer((yyvsp[0].str), sauvType, 1);
        }
    }else{
        printf("Erreur semantique: double declaration de %s, ligne %d, colonne %d\n", (yyvsp[0].str), nb_lignes, col);
    }
}
#line 1283 "syntaxique.tab.c"
    break;

  case 19: /* Groupe_Identificateurs: identificateur vrg Groupe_Identificateurs  */
#line 61 "syntaxique.y"
                                             {
        if(rechercherType((yyvsp[-2].str))==0){
            if(strcmp(sauvType, "String")==0){
                inserer((yyvsp[-2].str), sauvType, 0);
            }else {
                inserer((yyvsp[-2].str), sauvType, 1);
            }
        }else{
            printf("Erreur semantique: double declaration de %s, ligne %d, colonne %d\n", (yyvsp[-2].str), nb_lignes, col);
        }
}
#line 1299 "syntaxique.tab.c"
    break;

  case 21: /* Declaration_Constant: Type_Donnee mc_Const identificateur pvg  */
#line 74 "syntaxique.y"
                                                              {
    if(rechercherType((yyvsp[-1].str))==0){
        if(strcmp(sauvType, "String")==0){
            inserer((yyvsp[-1].str), sauvType, 0);
        }else {
            inserer((yyvsp[-1].str), sauvType, 1);
        }
    }else{
        printf("Erreur semantique: double declaration de %s, ligne %d, colonne %d\n", (yyvsp[-1].str), nb_lignes, col);
    }
}
#line 1315 "syntaxique.tab.c"
    break;

  case 22: /* Declaration_Tableau: Type_Donnee identificateur open_bracket_square taille close_bracket_square pvg  */
#line 85 "syntaxique.y"
                                                                                                    {
    if(rechercherType((yyvsp[-4].str))==0){
        inserer((yyvsp[-4].str), sauvType,(yyvsp[-2].entier));
    }else{
        printf("Erreur semantique: double declaration de %s, ligne %d, colonne %d\n", (yyvsp[-4].str), nb_lignes, col);
    }
}
#line 1327 "syntaxique.tab.c"
    break;

  case 24: /* Affectation_Variable_Simple: identificateur aff Expression pvg  */
#line 92 "syntaxique.y"
                                                                                    {
    if(rechercherType((yyvsp[-3].str))==0){
        printf("Erreur semantique: %s non déclaré, ligne %d, colonne %d\n", (yyvsp[-3].str), nb_lignes, col);
    }
}
#line 1337 "syntaxique.tab.c"
    break;

  case 25: /* Affectation_Element_Tableau: identificateur open_bracket_square taille close_bracket_square aff Expression pvg  */
#line 97 "syntaxique.y"
                                                                                                               {
    if(rechercherType((yyvsp[-6].str))==0){
        printf("Erreur semantique: %s non déclaré, ligne %d, colonne %d\n", (yyvsp[-6].str), nb_lignes, col);
    }
    if(rechercherTaille((yyvsp[-6].str))<(yyvsp[-4].entier)){
        printf("Erreur semantique: %s dépassement taille tableau, ligne %d, colonne %d\n", (yyvsp[-6].str), nb_lignes, col);
    }
}
#line 1350 "syntaxique.tab.c"
    break;

  case 26: /* Incrementation: identificateur add add  */
#line 105 "syntaxique.y"
                                      {
    if(rechercherType((yyvsp[-2].str))==0){
        printf("Erreur semantique: %s non déclaré, ligne %d, colonne %d\n", (yyvsp[-2].str), nb_lignes, col);
    }
}
#line 1360 "syntaxique.tab.c"
    break;

  case 27: /* Decrementation: identificateur substract substract  */
#line 110 "syntaxique.y"
                                                  {
    if(rechercherType((yyvsp[-2].str))==0){
        printf("Erreur semantique: %s non déclaré, ligne %d, colonne %d\n", (yyvsp[-2].str), nb_lignes, col);
    }
}
#line 1370 "syntaxique.tab.c"
    break;

  case 43: /* Out_Function: mc_Out open_parenthesis String vrg Expression close_parenthesis pvg  */
#line 120 "syntaxique.y"
                                                                                 {
}
#line 1377 "syntaxique.tab.c"
    break;

  case 44: /* In_Function: mc_In open_parenthesis signe_formatage vrg identificateur close_parenthesis pvg  */
#line 122 "syntaxique.y"
                                                                                            {
    if(rechercherType((yyvsp[-2].str))==0){
        printf("Erreur semantique: %s non déclaré, ligne %d, colonne %d\n", (yyvsp[-2].str), nb_lignes, col);
    }
}
#line 1387 "syntaxique.tab.c"
    break;

  case 53: /* Boucle: mc_For open_parenthesis Affectation Condition pvg Operation_Speciale close_parenthesis mc_begin Bloc_Instructions mc_end  */
#line 129 "syntaxique.y"
                                                                                                                                 {
    printf("Boucle parcouru avec succès\n");
}
#line 1395 "syntaxique.tab.c"
    break;


#line 1399 "syntaxique.tab.c"

      default: break;
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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 132 "syntaxique.y"


int main(){
    yyparse();
    afficher();
    return 0;
}

int yywrap(){
    return 0;
}

int yyerror(char * msg){
    printf("Erreur syntaxique détectée, ligne %d, colonne %d\n", nb_lignes, col);
    return 1;
}
