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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         FF_STYPE
#define YYLTYPE         FF_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         ff_parse
#define yylex           ff_lex
#define yyerror         ff_error
#define yydebug         ff_debug
#define yynerrs         ff_nerrs

/* First part of user prologue.  */
#line 1 "bison.y"

#include "bison_parser.h"
#include "flex_lexer.h"
#include <stdio.h>
#include <string.h>
#define YYERROR_VERBOSE 1
int yyerror(YYLTYPE* llocp, Program * result, yyscan_t scanner, const char *msg) ;


#line 88 "bison_parser.cpp"

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

#include "bison_parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_OP_NOTEQUAL = 3,                /* OP_NOTEQUAL  */
  YYSYMBOL_ENABLE = 4,                     /* ENABLE  */
  YYSYMBOL_SIMPLE = 5,                     /* SIMPLE  */
  YYSYMBOL_TEXT = 6,                       /* TEXT  */
  YYSYMBOL_OVER = 7,                       /* OVER  */
  YYSYMBOL_YEAR = 8,                       /* YEAR  */
  YYSYMBOL_INSERT_METHOD = 9,              /* INSERT_METHOD  */
  YYSYMBOL_OP_SEMI = 10,                   /* OP_SEMI  */
  YYSYMBOL_BIGINT = 11,                    /* BIGINT  */
  YYSYMBOL_LIMIT = 12,                     /* LIMIT  */
  YYSYMBOL_OP_GREATERTHAN = 13,            /* OP_GREATERTHAN  */
  YYSYMBOL_WITH = 14,                      /* WITH  */
  YYSYMBOL_ORDER = 15,                     /* ORDER  */
  YYSYMBOL_OPTION = 16,                    /* OPTION  */
  YYSYMBOL_LAST = 17,                      /* LAST  */
  YYSYMBOL_UNBOUNDED = 18,                 /* UNBOUNDED  */
  YYSYMBOL_PRECEDING = 19,                 /* PRECEDING  */
  YYSYMBOL_EXCEPT = 20,                    /* EXCEPT  */
  YYSYMBOL_NUMERIC = 21,                   /* NUMERIC  */
  YYSYMBOL_OP_LESSTHAN = 22,               /* OP_LESSTHAN  */
  YYSYMBOL_ACTION = 23,                    /* ACTION  */
  YYSYMBOL_BEFORE = 24,                    /* BEFORE  */
  YYSYMBOL_OP_GREATEREQ = 25,              /* OP_GREATEREQ  */
  YYSYMBOL_CHECK = 26,                     /* CHECK  */
  YYSYMBOL_COMPACT = 27,                   /* COMPACT  */
  YYSYMBOL_FULL = 28,                      /* FULL  */
  YYSYMBOL_NATURAL = 29,                   /* NATURAL  */
  YYSYMBOL_BINARY = 30,                    /* BINARY  */
  YYSYMBOL_NATIONAL = 31,                  /* NATIONAL  */
  YYSYMBOL_ENUM = 32,                      /* ENUM  */
  YYSYMBOL_REDUNDANT = 33,                 /* REDUNDANT  */
  YYSYMBOL_OP_ADD = 34,                    /* OP_ADD  */
  YYSYMBOL_CURRENT = 35,                   /* CURRENT  */
  YYSYMBOL_MERGE = 36,                     /* MERGE  */
  YYSYMBOL_TRIGGER = 37,                   /* TRIGGER  */
  YYSYMBOL_COMPRESSED = 38,                /* COMPRESSED  */
  YYSYMBOL_OP_SUB = 39,                    /* OP_SUB  */
  YYSYMBOL_FALSE = 40,                     /* FALSE  */
  YYSYMBOL_UNIQUE = 41,                    /* UNIQUE  */
  YYSYMBOL_WHERE = 42,                     /* WHERE  */
  YYSYMBOL_MINUTE = 43,                    /* MINUTE  */
  YYSYMBOL_FIRST = 44,                     /* FIRST  */
  YYSYMBOL_ON = 45,                        /* ON  */
  YYSYMBOL_PARTIAL = 46,                   /* PARTIAL  */
  YYSYMBOL_DOUBLE = 47,                    /* DOUBLE  */
  YYSYMBOL_AFTER = 48,                     /* AFTER  */
  YYSYMBOL_PRIMARY = 49,                   /* PRIMARY  */
  YYSYMBOL_MONTH = 50,                     /* MONTH  */
  YYSYMBOL_DEFERRED = 51,                  /* DEFERRED  */
  YYSYMBOL_VALUES = 52,                    /* VALUES  */
  YYSYMBOL_LONGTEXT = 53,                  /* LONGTEXT  */
  YYSYMBOL_SQL = 54,                       /* SQL  */
  YYSYMBOL_SHARED = 55,                    /* SHARED  */
  YYSYMBOL_VALIDATION = 56,                /* VALIDATION  */
  YYSYMBOL_OR = 57,                        /* OR  */
  YYSYMBOL_VIEW = 58,                      /* VIEW  */
  YYSYMBOL_INDEX = 59,                     /* INDEX  */
  YYSYMBOL_GROUP = 60,                     /* GROUP  */
  YYSYMBOL_OP_MUL = 61,                    /* OP_MUL  */
  YYSYMBOL_INPLACE = 62,                   /* INPLACE  */
  YYSYMBOL_FOREIGN = 63,                   /* FOREIGN  */
  YYSYMBOL_RESTRICT = 64,                  /* RESTRICT  */
  YYSYMBOL_SPATIAL = 65,                   /* SPATIAL  */
  YYSYMBOL_FOLLOWING = 66,                 /* FOLLOWING  */
  YYSYMBOL_DEC = 67,                       /* DEC  */
  YYSYMBOL_SELECT = 68,                    /* SELECT  */
  YYSYMBOL_NONE = 69,                      /* NONE  */
  YYSYMBOL_DISTINCT = 70,                  /* DISTINCT  */
  YYSYMBOL_TRUE = 71,                      /* TRUE  */
  YYSYMBOL_DYNAMIC = 72,                   /* DYNAMIC  */
  YYSYMBOL_BY = 73,                        /* BY  */
  YYSYMBOL_OP_MOD = 74,                    /* OP_MOD  */
  YYSYMBOL_INTEGER = 75,                   /* INTEGER  */
  YYSYMBOL_SECURITY = 76,                  /* SECURITY  */
  YYSYMBOL_IS = 77,                        /* IS  */
  YYSYMBOL_DEFINER = 78,                   /* DEFINER  */
  YYSYMBOL_ROW = 79,                       /* ROW  */
  YYSYMBOL_ENFORCED = 80,                  /* ENFORCED  */
  YYSYMBOL_END = 81,                       /* END  */
  YYSYMBOL_RECURSIVE = 82,                 /* RECURSIVE  */
  YYSYMBOL_FOR = 83,                       /* FOR  */
  YYSYMBOL_TEMPTABLE = 84,                 /* TEMPTABLE  */
  YYSYMBOL_UNION = 85,                     /* UNION  */
  YYSYMBOL_NULLS = 86,                     /* NULLS  */
  YYSYMBOL_UPDATE = 87,                    /* UPDATE  */
  YYSYMBOL_ELSE = 88,                      /* ELSE  */
  YYSYMBOL_RANGE = 89,                     /* RANGE  */
  YYSYMBOL_SET = 90,                       /* SET  */
  YYSYMBOL_INVOKER = 91,                   /* INVOKER  */
  YYSYMBOL_OFFSET = 92,                    /* OFFSET  */
  YYSYMBOL_INDEXED = 93,                   /* INDEXED  */
  YYSYMBOL_FORCE = 94,                     /* FORCE  */
  YYSYMBOL_NCHAR = 95,                     /* NCHAR  */
  YYSYMBOL_AND = 96,                       /* AND  */
  YYSYMBOL_INITIALLY = 97,                 /* INITIALLY  */
  YYSYMBOL_PRECISION = 98,                 /* PRECISION  */
  YYSYMBOL_FILTER = 99,                    /* FILTER  */
  YYSYMBOL_WITHOUT = 100,                  /* WITHOUT  */
  YYSYMBOL_NOT = 101,                      /* NOT  */
  YYSYMBOL_DELETE = 102,                   /* DELETE  */
  YYSYMBOL_DEFFERRABLE = 103,              /* DEFFERRABLE  */
  YYSYMBOL_REAL = 104,                     /* REAL  */
  YYSYMBOL_THEN = 105,                     /* THEN  */
  YYSYMBOL_UNDEFINED = 106,                /* UNDEFINED  */
  YYSYMBOL_DEFAULT = 107,                  /* DEFAULT  */
  YYSYMBOL_CROSS = 108,                    /* CROSS  */
  YYSYMBOL_CHAR = 109,                     /* CHAR  */
  YYSYMBOL_REFERENCES = 110,               /* REFERENCES  */
  YYSYMBOL_OP_XOR = 111,                   /* OP_XOR  */
  YYSYMBOL_CASE = 112,                     /* CASE  */
  YYSYMBOL_FIXED = 113,                    /* FIXED  */
  YYSYMBOL_HOUR = 114,                     /* HOUR  */
  YYSYMBOL_NO = 115,                       /* NO  */
  YYSYMBOL_COLUMN = 116,                   /* COLUMN  */
  YYSYMBOL_LOCAL = 117,                    /* LOCAL  */
  YYSYMBOL_DROP = 118,                     /* DROP  */
  YYSYMBOL_REPLACE = 119,                  /* REPLACE  */
  YYSYMBOL_ASC = 120,                      /* ASC  */
  YYSYMBOL_OP_COMMA = 121,                 /* OP_COMMA  */
  YYSYMBOL_DISABLE = 122,                  /* DISABLE  */
  YYSYMBOL_TABLE = 123,                    /* TABLE  */
  YYSYMBOL_ARRAY = 124,                    /* ARRAY  */
  YYSYMBOL_IF = 125,                       /* IF  */
  YYSYMBOL_EXTRACT = 126,                  /* EXTRACT  */
  YYSYMBOL_LEFT = 127,                     /* LEFT  */
  YYSYMBOL_FULLTEXT = 128,                 /* FULLTEXT  */
  YYSYMBOL_HASH = 129,                     /* HASH  */
  YYSYMBOL_ALGORITHM = 130,                /* ALGORITHM  */
  YYSYMBOL_LOCK = 131,                     /* LOCK  */
  YYSYMBOL_DECIMAL = 132,                  /* DECIMAL  */
  YYSYMBOL_PARTITION = 133,                /* PARTITION  */
  YYSYMBOL_CASCADE = 134,                  /* CASCADE  */
  YYSYMBOL_ADD = 135,                      /* ADD  */
  YYSYMBOL_BETWEEN = 136,                  /* BETWEEN  */
  YYSYMBOL_OP_LESSEQ = 137,                /* OP_LESSEQ  */
  YYSYMBOL_MATCH = 138,                    /* MATCH  */
  YYSYMBOL_ALL = 139,                      /* ALL  */
  YYSYMBOL_ROWS = 140,                     /* ROWS  */
  YYSYMBOL_JOIN = 141,                     /* JOIN  */
  YYSYMBOL_LIKE = 142,                     /* LIKE  */
  YYSYMBOL_OP_RP = 143,                    /* OP_RP  */
  YYSYMBOL_IGNORE = 144,                   /* IGNORE  */
  YYSYMBOL_INT = 145,                      /* INT  */
  YYSYMBOL_MEDIUMTEXT = 146,               /* MEDIUMTEXT  */
  YYSYMBOL_BOOLEAN = 147,                  /* BOOLEAN  */
  YYSYMBOL_KEY = 148,                      /* KEY  */
  YYSYMBOL_EACH = 149,                     /* EACH  */
  YYSYMBOL_USING = 150,                    /* USING  */
  YYSYMBOL_RENAME = 151,                   /* RENAME  */
  YYSYMBOL_DO = 152,                       /* DO  */
  YYSYMBOL_OP_LP = 153,                    /* OP_LP  */
  YYSYMBOL_CHARACTER = 154,                /* CHARACTER  */
  YYSYMBOL_UMINUS = 155,                   /* UMINUS  */
  YYSYMBOL_CAST = 156,                     /* CAST  */
  YYSYMBOL_GROUPS = 157,                   /* GROUPS  */
  YYSYMBOL_OUTER = 158,                    /* OUTER  */
  YYSYMBOL_NULL = 159,                     /* NULL  */
  YYSYMBOL_SMALLINT = 160,                 /* SMALLINT  */
  YYSYMBOL_EXCLUSIVE = 161,                /* EXCLUSIVE  */
  YYSYMBOL_TEMPORARY = 162,                /* TEMPORARY  */
  YYSYMBOL_CONSTRAINT = 163,               /* CONSTRAINT  */
  YYSYMBOL_CREATE = 164,                   /* CREATE  */
  YYSYMBOL_OP_LBRACKET = 165,              /* OP_LBRACKET  */
  YYSYMBOL_WHEN = 166,                     /* WHEN  */
  YYSYMBOL_IMMEDIATE = 167,                /* IMMEDIATE  */
  YYSYMBOL_TO = 168,                       /* TO  */
  YYSYMBOL_BTREE = 169,                    /* BTREE  */
  YYSYMBOL_DAY = 170,                      /* DAY  */
  YYSYMBOL_CONFLICT = 171,                 /* CONFLICT  */
  YYSYMBOL_ROW_FORMAT = 172,               /* ROW_FORMAT  */
  YYSYMBOL_OP_RBRACKET = 173,              /* OP_RBRACKET  */
  YYSYMBOL_EXISTS = 174,                   /* EXISTS  */
  YYSYMBOL_INSERT = 175,                   /* INSERT  */
  YYSYMBOL_KEYS = 176,                     /* KEYS  */
  YYSYMBOL_INTO = 177,                     /* INTO  */
  YYSYMBOL_OP_DIVIDE = 178,                /* OP_DIVIDE  */
  YYSYMBOL_CASCADED = 179,                 /* CASCADED  */
  YYSYMBOL_ISNULL = 180,                   /* ISNULL  */
  YYSYMBOL_AS = 181,                       /* AS  */
  YYSYMBOL_INNER = 182,                    /* INNER  */
  YYSYMBOL_INTERSECT = 183,                /* INTERSECT  */
  YYSYMBOL_IN = 184,                       /* IN  */
  YYSYMBOL_OP_EQUAL = 185,                 /* OP_EQUAL  */
  YYSYMBOL_VARCHAR = 186,                  /* VARCHAR  */
  YYSYMBOL_COPY = 187,                     /* COPY  */
  YYSYMBOL_ALTER = 188,                    /* ALTER  */
  YYSYMBOL_DESC = 189,                     /* DESC  */
  YYSYMBOL_FROM = 190,                     /* FROM  */
  YYSYMBOL_TINYTEXT = 191,                 /* TINYTEXT  */
  YYSYMBOL_FLOAT = 192,                    /* FLOAT  */
  YYSYMBOL_SECOND = 193,                   /* SECOND  */
  YYSYMBOL_WINDOW = 194,                   /* WINDOW  */
  YYSYMBOL_NOTHING = 195,                  /* NOTHING  */
  YYSYMBOL_HAVING = 196,                   /* HAVING  */
  YYSYMBOL_DATE = 197,                     /* DATE  */
  YYSYMBOL_TIME = 198,                     /* TIME  */
  YYSYMBOL_TIMESTAMP = 199,                /* TIMESTAMP  */
  YYSYMBOL_inet = 200,                     /* inet  */
  YYSYMBOL_JSON = 201,                     /* JSON  */
  YYSYMBOL_URL = 202,                      /* URL  */
  YYSYMBOL_uuid = 203,                     /* uuid  */
  YYSYMBOL_INTERVAL = 204,                 /* INTERVAL  */
  YYSYMBOL_INTLITERAL = 205,               /* INTLITERAL  */
  YYSYMBOL_FLOATLITERAL = 206,             /* FLOATLITERAL  */
  YYSYMBOL_IDENTIFIER = 207,               /* IDENTIFIER  */
  YYSYMBOL_STRINGLITERAL = 208,            /* STRINGLITERAL  */
  YYSYMBOL_COMMENTLITERAL = 209,           /* COMMENTLITERAL  */
  YYSYMBOL_210_ = 210,                     /* '.'  */
  YYSYMBOL_211_sys_ = 211,                 /* "sys."  */
  YYSYMBOL_YYACCEPT = 212,                 /* $accept  */
  YYSYMBOL_program = 213,                  /* program  */
  YYSYMBOL_stmtlist = 214,                 /* stmtlist  */
  YYSYMBOL_stmt = 215,                     /* stmt  */
  YYSYMBOL_create_stmt = 216,              /* create_stmt  */
  YYSYMBOL_drop_stmt = 217,                /* drop_stmt  */
  YYSYMBOL_alter_stmt = 218,               /* alter_stmt  */
  YYSYMBOL_select_stmt = 219,              /* select_stmt  */
  YYSYMBOL_select_with_parens = 220,       /* select_with_parens  */
  YYSYMBOL_select_no_parens = 221,         /* select_no_parens  */
  YYSYMBOL_select_clause_list = 222,       /* select_clause_list  */
  YYSYMBOL_select_clause = 223,            /* select_clause  */
  YYSYMBOL_combine_clause = 224,           /* combine_clause  */
  YYSYMBOL_opt_from_clause = 225,          /* opt_from_clause  */
  YYSYMBOL_select_target = 226,            /* select_target  */
  YYSYMBOL_opt_window_clause = 227,        /* opt_window_clause  */
  YYSYMBOL_window_clause = 228,            /* window_clause  */
  YYSYMBOL_window_def_list = 229,          /* window_def_list  */
  YYSYMBOL_window_def = 230,               /* window_def  */
  YYSYMBOL_window_name = 231,              /* window_name  */
  YYSYMBOL_window = 232,                   /* window  */
  YYSYMBOL_opt_partition = 233,            /* opt_partition  */
  YYSYMBOL_opt_frame_clause = 234,         /* opt_frame_clause  */
  YYSYMBOL_range_or_rows = 235,            /* range_or_rows  */
  YYSYMBOL_frame_bound_start = 236,        /* frame_bound_start  */
  YYSYMBOL_frame_bound_end = 237,          /* frame_bound_end  */
  YYSYMBOL_frame_bound = 238,              /* frame_bound  */
  YYSYMBOL_opt_exist_window_name = 239,    /* opt_exist_window_name  */
  YYSYMBOL_opt_group_clause = 240,         /* opt_group_clause  */
  YYSYMBOL_opt_having_clause = 241,        /* opt_having_clause  */
  YYSYMBOL_opt_where_clause = 242,         /* opt_where_clause  */
  YYSYMBOL_where_clause = 243,             /* where_clause  */
  YYSYMBOL_from_clause = 244,              /* from_clause  */
  YYSYMBOL_table_ref = 245,                /* table_ref  */
  YYSYMBOL_opt_index = 246,                /* opt_index  */
  YYSYMBOL_opt_on = 247,                   /* opt_on  */
  YYSYMBOL_opt_using = 248,                /* opt_using  */
  YYSYMBOL_column_name_list = 249,         /* column_name_list  */
  YYSYMBOL_opt_table_prefix = 250,         /* opt_table_prefix  */
  YYSYMBOL_join_op = 251,                  /* join_op  */
  YYSYMBOL_opt_join_type = 252,            /* opt_join_type  */
  YYSYMBOL_expr_list = 253,                /* expr_list  */
  YYSYMBOL_opt_limit_clause = 254,         /* opt_limit_clause  */
  YYSYMBOL_limit_clause = 255,             /* limit_clause  */
  YYSYMBOL_opt_limit_row_count = 256,      /* opt_limit_row_count  */
  YYSYMBOL_opt_order_clause = 257,         /* opt_order_clause  */
  YYSYMBOL_opt_order_nulls = 258,          /* opt_order_nulls  */
  YYSYMBOL_order_item_list = 259,          /* order_item_list  */
  YYSYMBOL_order_item = 260,               /* order_item  */
  YYSYMBOL_opt_order_behavior = 261,       /* opt_order_behavior  */
  YYSYMBOL_opt_with_clause = 262,          /* opt_with_clause  */
  YYSYMBOL_cte_table_list = 263,           /* cte_table_list  */
  YYSYMBOL_cte_table = 264,                /* cte_table  */
  YYSYMBOL_cte_table_name = 265,           /* cte_table_name  */
  YYSYMBOL_opt_all_or_distinct = 266,      /* opt_all_or_distinct  */
  YYSYMBOL_create_table_stmt = 267,        /* create_table_stmt  */
  YYSYMBOL_create_index_stmt = 268,        /* create_index_stmt  */
  YYSYMBOL_create_trigger_stmt = 269,      /* create_trigger_stmt  */
  YYSYMBOL_create_view_stmt = 270,         /* create_view_stmt  */
  YYSYMBOL_opt_table_option_list = 271,    /* opt_table_option_list  */
  YYSYMBOL_table_option_list = 272,        /* table_option_list  */
  YYSYMBOL_table_option = 273,             /* table_option  */
  YYSYMBOL_opt_op_comma = 274,             /* opt_op_comma  */
  YYSYMBOL_opt_ignore_or_replace = 275,    /* opt_ignore_or_replace  */
  YYSYMBOL_opt_view_algorithm = 276,       /* opt_view_algorithm  */
  YYSYMBOL_opt_sql_security = 277,         /* opt_sql_security  */
  YYSYMBOL_opt_index_option = 278,         /* opt_index_option  */
  YYSYMBOL_opt_extra_option = 279,         /* opt_extra_option  */
  YYSYMBOL_index_algorithm_option = 280,   /* index_algorithm_option  */
  YYSYMBOL_lock_option = 281,              /* lock_option  */
  YYSYMBOL_opt_op_equal = 282,             /* opt_op_equal  */
  YYSYMBOL_trigger_events = 283,           /* trigger_events  */
  YYSYMBOL_trigger_name = 284,             /* trigger_name  */
  YYSYMBOL_trigger_action_time = 285,      /* trigger_action_time  */
  YYSYMBOL_drop_index_stmt = 286,          /* drop_index_stmt  */
  YYSYMBOL_drop_table_stmt = 287,          /* drop_table_stmt  */
  YYSYMBOL_opt_restrict_or_cascade = 288,  /* opt_restrict_or_cascade  */
  YYSYMBOL_drop_trigger_stmt = 289,        /* drop_trigger_stmt  */
  YYSYMBOL_drop_view_stmt = 290,           /* drop_view_stmt  */
  YYSYMBOL_insert_stmt = 291,              /* insert_stmt  */
  YYSYMBOL_insert_rest = 292,              /* insert_rest  */
  YYSYMBOL_super_values_list = 293,        /* super_values_list  */
  YYSYMBOL_values_list = 294,              /* values_list  */
  YYSYMBOL_opt_on_conflict = 295,          /* opt_on_conflict  */
  YYSYMBOL_opt_conflict_expr = 296,        /* opt_conflict_expr  */
  YYSYMBOL_indexed_column_list = 297,      /* indexed_column_list  */
  YYSYMBOL_indexed_column = 298,           /* indexed_column  */
  YYSYMBOL_update_stmt = 299,              /* update_stmt  */
  YYSYMBOL_alter_action = 300,             /* alter_action  */
  YYSYMBOL_alter_constant_action = 301,    /* alter_constant_action  */
  YYSYMBOL_column_def_list = 302,          /* column_def_list  */
  YYSYMBOL_column_def = 303,               /* column_def  */
  YYSYMBOL_opt_column_constraint_list = 304, /* opt_column_constraint_list  */
  YYSYMBOL_column_constraint_list = 305,   /* column_constraint_list  */
  YYSYMBOL_column_constraint = 306,        /* column_constraint  */
  YYSYMBOL_opt_reference_clause = 307,     /* opt_reference_clause  */
  YYSYMBOL_opt_check = 308,                /* opt_check  */
  YYSYMBOL_constraint_type = 309,          /* constraint_type  */
  YYSYMBOL_reference_clause = 310,         /* reference_clause  */
  YYSYMBOL_opt_foreign_key = 311,          /* opt_foreign_key  */
  YYSYMBOL_opt_foreign_key_actions = 312,  /* opt_foreign_key_actions  */
  YYSYMBOL_foreign_key_actions = 313,      /* foreign_key_actions  */
  YYSYMBOL_key_actions = 314,              /* key_actions  */
  YYSYMBOL_opt_constraint_attribute_spec = 315, /* opt_constraint_attribute_spec  */
  YYSYMBOL_opt_initial_time = 316,         /* opt_initial_time  */
  YYSYMBOL_constraint_name = 317,          /* constraint_name  */
  YYSYMBOL_opt_temp = 318,                 /* opt_temp  */
  YYSYMBOL_opt_check_option = 319,         /* opt_check_option  */
  YYSYMBOL_opt_column_name_list_p = 320,   /* opt_column_name_list_p  */
  YYSYMBOL_set_clause_list = 321,          /* set_clause_list  */
  YYSYMBOL_set_clause = 322,               /* set_clause  */
  YYSYMBOL_opt_as_alias = 323,             /* opt_as_alias  */
  YYSYMBOL_expr = 324,                     /* expr  */
  YYSYMBOL_operand = 325,                  /* operand  */
  YYSYMBOL_cast_expr = 326,                /* cast_expr  */
  YYSYMBOL_scalar_expr = 327,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 328,               /* unary_expr  */
  YYSYMBOL_binary_expr = 329,              /* binary_expr  */
  YYSYMBOL_logic_expr = 330,               /* logic_expr  */
  YYSYMBOL_in_expr = 331,                  /* in_expr  */
  YYSYMBOL_case_expr = 332,                /* case_expr  */
  YYSYMBOL_between_expr = 333,             /* between_expr  */
  YYSYMBOL_exists_expr = 334,              /* exists_expr  */
  YYSYMBOL_function_expr = 335,            /* function_expr  */
  YYSYMBOL_opt_distinct = 336,             /* opt_distinct  */
  YYSYMBOL_opt_filter_clause = 337,        /* opt_filter_clause  */
  YYSYMBOL_opt_over_clause = 338,          /* opt_over_clause  */
  YYSYMBOL_case_list = 339,                /* case_list  */
  YYSYMBOL_case_clause = 340,              /* case_clause  */
  YYSYMBOL_comp_expr = 341,                /* comp_expr  */
  YYSYMBOL_extract_expr = 342,             /* extract_expr  */
  YYSYMBOL_datetime_field = 343,           /* datetime_field  */
  YYSYMBOL_array_expr = 344,               /* array_expr  */
  YYSYMBOL_array_index = 345,              /* array_index  */
  YYSYMBOL_literal = 346,                  /* literal  */
  YYSYMBOL_string_literal = 347,           /* string_literal  */
  YYSYMBOL_comment_literal = 348,          /* comment_literal  */
  YYSYMBOL_bool_literal = 349,             /* bool_literal  */
  YYSYMBOL_num_literal = 350,              /* num_literal  */
  YYSYMBOL_int_literal = 351,              /* int_literal  */
  YYSYMBOL_float_literal = 352,            /* float_literal  */
  YYSYMBOL_opt_column = 353,               /* opt_column  */
  YYSYMBOL_trigger_body = 354,             /* trigger_body  */
  YYSYMBOL_opt_if_not_exist = 355,         /* opt_if_not_exist  */
  YYSYMBOL_opt_if_exist = 356,             /* opt_if_exist  */
  YYSYMBOL_identifier = 357,               /* identifier  */
  YYSYMBOL_as_alias = 358,                 /* as_alias  */
  YYSYMBOL_table_name = 359,               /* table_name  */
  YYSYMBOL_column_name = 360,              /* column_name  */
  YYSYMBOL_opt_index_keyword = 361,        /* opt_index_keyword  */
  YYSYMBOL_view_name = 362,                /* view_name  */
  YYSYMBOL_function_name = 363,            /* function_name  */
  YYSYMBOL_binary_op = 364,                /* binary_op  */
  YYSYMBOL_opt_not = 365,                  /* opt_not  */
  YYSYMBOL_name = 366,                     /* name  */
  YYSYMBOL_type_name = 367,                /* type_name  */
  YYSYMBOL_character_type = 368,           /* character_type  */
  YYSYMBOL_character_with_length = 369,    /* character_with_length  */
  YYSYMBOL_character_without_length = 370, /* character_without_length  */
  YYSYMBOL_character_conflicta = 371,      /* character_conflicta  */
  YYSYMBOL_numeric_type = 372,             /* numeric_type  */
  YYSYMBOL_opt_table_constraint_list = 373, /* opt_table_constraint_list  */
  YYSYMBOL_table_constraint_list = 374,    /* table_constraint_list  */
  YYSYMBOL_table_constraint = 375,         /* table_constraint  */
  YYSYMBOL_opt_enforced = 376              /* opt_enforced  */
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
typedef yytype_int16 yy_state_t;

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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined FF_LTYPE_IS_TRIVIAL && FF_LTYPE_IS_TRIVIAL \
             && defined FF_STYPE_IS_TRIVIAL && FF_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4760

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  212
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  165
/* YYNRULES -- Number of rules.  */
#define YYNRULES  634
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1085

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   465


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,   210,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   211
};

#if FF_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   457,   457,   468,   475,   481,   485,   493,   499,   505,
     511,   517,   523,   532,   538,   544,   550,   560,   566,   572,
     578,   587,   594,   598,   605,   611,   620,   626,   632,   636,
     643,   656,   662,   674,   685,   689,   696,   701,   706,   711,
     715,   722,   728,   736,   745,   751,   759,   765,   769,   776,
     782,   792,   809,   813,   820,   829,   841,   847,   852,   856,
     863,   870,   878,   886,   891,   896,   901,   905,   912,   918,
     923,   927,   934,   940,   945,   949,   956,   962,   968,   973,
     977,   984,   999,  1007,  1014,  1019,  1023,  1030,  1036,  1041,
    1045,  1052,  1058,  1066,  1072,  1076,  1083,  1089,  1093,  1100,
    1111,  1122,  1132,  1145,  1151,  1156,  1161,  1165,  1172,  1178,
    1183,  1187,  1194,  1200,  1205,  1209,  1216,  1222,  1232,  1239,
    1247,  1252,  1257,  1263,  1267,  1274,  1279,  1284,  1289,  1294,
    1299,  1303,  1310,  1318,  1328,  1334,  1342,  1348,  1355,  1362,
    1366,  1373,  1379,  1384,  1388,  1395,  1401,  1406,  1410,  1417,
    1422,  1427,  1432,  1436,  1443,  1449,  1459,  1470,  1475,  1480,
    1485,  1489,  1496,  1502,  1508,  1513,  1517,  1524,  1530,  1540,
    1547,  1551,  1558,  1568,  1573,  1578,  1583,  1587,  1594,  1617,
    1656,  1660,  1667,  1700,  1704,  1711,  1743,  1747,  1754,  1796,
    1838,  1842,  1849,  1855,  1863,  1869,  1880,  1886,  1892,  1898,
    1904,  1910,  1916,  1922,  1928,  1934,  1938,  1945,  1950,  1955,
    1959,  1966,  1971,  1976,  1981,  1985,  1992,  1997,  2002,  2007,
    2012,  2016,  2023,  2028,  2033,  2038,  2042,  2049,  2054,  2059,
    2064,  2068,  2075,  2081,  2087,  2095,  2101,  2107,  2113,  2117,
    2124,  2130,  2136,  2142,  2148,  2152,  2159,  2164,  2169,  2173,
    2180,  2185,  2190,  2195,  2199,  2206,  2215,  2220,  2225,  2229,
    2236,  2253,  2257,  2264,  2285,  2289,  2296,  2301,  2306,  2311,
    2315,  2322,  2339,  2343,  2350,  2370,  2374,  2381,  2394,  2401,
    2407,  2414,  2418,  2425,  2431,  2441,  2447,  2451,  2458,  2464,
    2472,  2477,  2481,  2488,  2495,  2500,  2504,  2511,  2517,  2527,
    2537,  2548,  2559,  2563,  2570,  2588,  2620,  2639,  2658,  2664,
    2668,  2675,  2680,  2685,  2690,  2695,  2701,  2706,  2711,  2715,
    2722,  2728,  2738,  2758,  2766,  2774,  2780,  2790,  2799,  2806,
    2814,  2821,  2826,  2830,  2837,  2842,  2847,  2852,  2858,  2862,
    2869,  2907,  2911,  2918,  2923,  2928,  2932,  2939,  2945,  2953,
    2958,  2963,  2968,  2974,  2980,  2984,  2991,  2996,  3001,  3006,
    3011,  3016,  3020,  3028,  3034,  3040,  3045,  3049,  3056,  3061,
    3066,  3071,  3075,  3082,  3088,  3092,  3096,  3100,  3108,  3113,
    3118,  3122,  3129,  3134,  3139,  3144,  3149,  3153,  3160,  3166,
    3171,  3175,  3182,  3188,  3199,  3206,  3213,  3217,  3224,  3230,
    3239,  3245,  3251,  3257,  3263,  3269,  3279,  3285,  3291,  3297,
    3303,  3309,  3315,  3321,  3327,  3333,  3339,  3343,  3350,  3357,
    3363,  3367,  3374,  3380,  3389,  3395,  3401,  3407,  3413,  3419,
    3424,  3429,  3433,  3440,  3446,  3454,  3461,  3471,  3478,  3488,
    3496,  3504,  3512,  3516,  3523,  3530,  3536,  3544,  3551,  3555,
    3562,  3570,  3581,  3588,  3592,  3599,  3607,  3620,  3625,  3630,
    3634,  3641,  3647,  3652,  3656,  3663,  3669,  3675,  3680,  3684,
    3691,  3697,  3704,  3708,  3715,  3722,  3726,  3733,  3740,  3747,
    3754,  3761,  3768,  3778,  3785,  3789,  3796,  3801,  3806,  3811,
    3816,  3821,  3826,  3830,  3837,  3843,  3847,  3854,  3861,  3865,
    3872,  3878,  3884,  3893,  3899,  3903,  3909,  3913,  3919,  3924,
    3929,  3933,  3940,  3946,  3955,  3960,  3964,  3971,  3976,  3980,
    3988,  3993,  3998,  4002,  4009,  4015,  4021,  4027,  4037,  4042,
    4047,  4051,  4058,  4063,  4068,  4072,  4079,  4086,  4090,  4098,
    4113,  4129,  4133,  4140,  4159,  4172,  4199,  4204,  4209,  4214,
    4219,  4223,  4230,  4240,  4253,  4271,  4276,  4281,  4286,  4291,
    4296,  4301,  4305,  4312,  4317,  4322,  4326,  4333,  4342,  4348,
    4354,  4359,  4367,  4373,  4385,  4392,  4396,  4403,  4409,  4414,
    4419,  4424,  4429,  4434,  4439,  4444,  4449,  4454,  4459,  4465,
    4469,  4476,  4481,  4486,  4491,  4496,  4501,  4506,  4511,  4516,
    4521,  4526,  4531,  4537,  4541,  4549,  4554,  4559,  4564,  4569,
    4574,  4579,  4584,  4589,  4594,  4599,  4604,  4609,  4614,  4618,
    4625,  4631,  4639,  4645,  4656,  4663,  4670,  4678,  4702,  4706,
    4713,  4718,  4723,  4728,  4732
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "OP_NOTEQUAL",
  "ENABLE", "SIMPLE", "TEXT", "OVER", "YEAR", "INSERT_METHOD", "OP_SEMI",
  "BIGINT", "LIMIT", "OP_GREATERTHAN", "WITH", "ORDER", "OPTION", "LAST",
  "UNBOUNDED", "PRECEDING", "EXCEPT", "NUMERIC", "OP_LESSTHAN", "ACTION",
  "BEFORE", "OP_GREATEREQ", "CHECK", "COMPACT", "FULL", "NATURAL",
  "BINARY", "NATIONAL", "ENUM", "REDUNDANT", "OP_ADD", "CURRENT", "MERGE",
  "TRIGGER", "COMPRESSED", "OP_SUB", "FALSE", "UNIQUE", "WHERE", "MINUTE",
  "FIRST", "ON", "PARTIAL", "DOUBLE", "AFTER", "PRIMARY", "MONTH",
  "DEFERRED", "VALUES", "LONGTEXT", "SQL", "SHARED", "VALIDATION", "OR",
  "VIEW", "INDEX", "GROUP", "OP_MUL", "INPLACE", "FOREIGN", "RESTRICT",
  "SPATIAL", "FOLLOWING", "DEC", "SELECT", "NONE", "DISTINCT", "TRUE",
  "DYNAMIC", "BY", "OP_MOD", "INTEGER", "SECURITY", "IS", "DEFINER", "ROW",
  "ENFORCED", "END", "RECURSIVE", "FOR", "TEMPTABLE", "UNION", "NULLS",
  "UPDATE", "ELSE", "RANGE", "SET", "INVOKER", "OFFSET", "INDEXED",
  "FORCE", "NCHAR", "AND", "INITIALLY", "PRECISION", "FILTER", "WITHOUT",
  "NOT", "DELETE", "DEFFERRABLE", "REAL", "THEN", "UNDEFINED", "DEFAULT",
  "CROSS", "CHAR", "REFERENCES", "OP_XOR", "CASE", "FIXED", "HOUR", "NO",
  "COLUMN", "LOCAL", "DROP", "REPLACE", "ASC", "OP_COMMA", "DISABLE",
  "TABLE", "ARRAY", "IF", "EXTRACT", "LEFT", "FULLTEXT", "HASH",
  "ALGORITHM", "LOCK", "DECIMAL", "PARTITION", "CASCADE", "ADD", "BETWEEN",
  "OP_LESSEQ", "MATCH", "ALL", "ROWS", "JOIN", "LIKE", "OP_RP", "IGNORE",
  "INT", "MEDIUMTEXT", "BOOLEAN", "KEY", "EACH", "USING", "RENAME", "DO",
  "OP_LP", "CHARACTER", "UMINUS", "CAST", "GROUPS", "OUTER", "NULL",
  "SMALLINT", "EXCLUSIVE", "TEMPORARY", "CONSTRAINT", "CREATE",
  "OP_LBRACKET", "WHEN", "IMMEDIATE", "TO", "BTREE", "DAY", "CONFLICT",
  "ROW_FORMAT", "OP_RBRACKET", "EXISTS", "INSERT", "KEYS", "INTO",
  "OP_DIVIDE", "CASCADED", "ISNULL", "AS", "INNER", "INTERSECT", "IN",
  "OP_EQUAL", "VARCHAR", "COPY", "ALTER", "DESC", "FROM", "TINYTEXT",
  "FLOAT", "SECOND", "WINDOW", "NOTHING", "HAVING", "DATE", "TIME",
  "TIMESTAMP", "inet", "JSON", "URL", "uuid", "INTERVAL", "INTLITERAL",
  "FLOATLITERAL", "IDENTIFIER", "STRINGLITERAL", "COMMENTLITERAL", "'.'",
  "\"sys.\"", "$accept", "program", "stmtlist", "stmt", "create_stmt",
  "drop_stmt", "alter_stmt", "select_stmt", "select_with_parens",
  "select_no_parens", "select_clause_list", "select_clause",
  "combine_clause", "opt_from_clause", "select_target",
  "opt_window_clause", "window_clause", "window_def_list", "window_def",
  "window_name", "window", "opt_partition", "opt_frame_clause",
  "range_or_rows", "frame_bound_start", "frame_bound_end", "frame_bound",
  "opt_exist_window_name", "opt_group_clause", "opt_having_clause",
  "opt_where_clause", "where_clause", "from_clause", "table_ref",
  "opt_index", "opt_on", "opt_using", "column_name_list",
  "opt_table_prefix", "join_op", "opt_join_type", "expr_list",
  "opt_limit_clause", "limit_clause", "opt_limit_row_count",
  "opt_order_clause", "opt_order_nulls", "order_item_list", "order_item",
  "opt_order_behavior", "opt_with_clause", "cte_table_list", "cte_table",
  "cte_table_name", "opt_all_or_distinct", "create_table_stmt",
  "create_index_stmt", "create_trigger_stmt", "create_view_stmt",
  "opt_table_option_list", "table_option_list", "table_option",
  "opt_op_comma", "opt_ignore_or_replace", "opt_view_algorithm",
  "opt_sql_security", "opt_index_option", "opt_extra_option",
  "index_algorithm_option", "lock_option", "opt_op_equal",
  "trigger_events", "trigger_name", "trigger_action_time",
  "drop_index_stmt", "drop_table_stmt", "opt_restrict_or_cascade",
  "drop_trigger_stmt", "drop_view_stmt", "insert_stmt", "insert_rest",
  "super_values_list", "values_list", "opt_on_conflict",
  "opt_conflict_expr", "indexed_column_list", "indexed_column",
  "update_stmt", "alter_action", "alter_constant_action",
  "column_def_list", "column_def", "opt_column_constraint_list",
  "column_constraint_list", "column_constraint", "opt_reference_clause",
  "opt_check", "constraint_type", "reference_clause", "opt_foreign_key",
  "opt_foreign_key_actions", "foreign_key_actions", "key_actions",
  "opt_constraint_attribute_spec", "opt_initial_time", "constraint_name",
  "opt_temp", "opt_check_option", "opt_column_name_list_p",
  "set_clause_list", "set_clause", "opt_as_alias", "expr", "operand",
  "cast_expr", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "between_expr", "exists_expr", "function_expr",
  "opt_distinct", "opt_filter_clause", "opt_over_clause", "case_list",
  "case_clause", "comp_expr", "extract_expr", "datetime_field",
  "array_expr", "array_index", "literal", "string_literal",
  "comment_literal", "bool_literal", "num_literal", "int_literal",
  "float_literal", "opt_column", "trigger_body", "opt_if_not_exist",
  "opt_if_exist", "identifier", "as_alias", "table_name", "column_name",
  "opt_index_keyword", "view_name", "function_name", "binary_op",
  "opt_not", "name", "type_name", "character_type",
  "character_with_length", "character_without_length",
  "character_conflicta", "numeric_type", "opt_table_constraint_list",
  "table_constraint_list", "table_constraint", "opt_enforced", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-505)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-602)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     986,   554,  1067,   706,   143,  1599,   -44,  -505,   148,   -49,
     227,  -505,  -505,   -49,  -505,   -49,  -505,   385,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,  -505,   -49,   987,  1304,
    -505,  -505,   543,    74,  1364,   -49,   690,  1304,  1364,  1307,
     577,   577,  1304,  -505,   502,   -23,    31,   477,    97,   184,
    1304,  -505,   561,  -505,  -505,   663,   157,   566,  1523,    37,
    1304,  -505,   592,  1167,   592,   592,   441,   630,    92,   318,
     188,   592,   592,   592,   592,   592,   592,   592,   592,   592,
    -505,   -49,   -49,   -49,   385,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,  -505,  1304,   592,   684,   -49,   -49,
     592,  1304,   -49,   964,  1307,   -49,  1304,   764,  1349,   -49,
     -49,   805,   715,  1304,  1304,  1120,   577,   592,   -49,  -505,
    -505,   -49,   -49,   176,   -49,   732,   946,   871,    36,   171,
     776,   -49,   -49,  1304,   592,  1377,  -505,   -49,  -505,  -505,
    4109,   606,  1304,   949,    35,   112,  -505,  -505,  -505,    97,
     326,   -49,   188,  -505,   143,   953,   924,  1024,   592,   -49,
    1116,   -49,  1149,   -49,   -49,   592,  -505,   -49,  -505,  1364,
     -49,   378,   258,   258,  -505,   -49,   -49,  1135,  1304,   592,
    -505,  -505,   417,   205,   157,   830,  -505,  -505,  -505,  1444,
    1304,   592,   -49,   171,  1188,   793,  1304,   592,  1260,  1134,
    1259,  -505,  1326,   299,  1267,   334,  1004,   -49,   -49,   -49,
    1461,  -505,  -505,  -505,  -505,   844,  -505,  3512,  -505,  1449,
    -505,  -505,  -505,  -505,  -505,  -505,  -505,  3512,  -505,  -505,
    3701,  -505,  1257,  1399,  -505,  -505,  -505,  -505,  2477,  -505,
    1442,  -505,  -505,  -505,  -505,  -505,  -505,  1453,  -505,  -505,
    -505,  -505,  -505,  -505,  -505,  -505,  -505,  1304,  1177,  -505,
     589,  1526,   -49,  -505,   -49,  -505,  -505,   -49,   -49,  -505,
     -49,  -505,  -505,   -49,   -49,   -49,  -505,   -49,  4313,   -49,
    -505,   -49,   -49,   968,  -505,  1463,   445,  1369,  -505,   -49,
     -49,  1170,   -49,   -49,  1307,  4109,  4109,  -505,   -49,    39,
     -49,  -505,   188,   -49,   326,   592,  1485,  -505,  1304,  1304,
    1149,  1304,    22,   573,  1161,  1446,   592,  -505,  -505,   -49,
     595,  -505,   483,  1324,   703,   592,   592,   -49,   -49,   378,
    -505,  -505,  -505,   123,   833,   -49,    88,  -505,  -505,   690,
    1455,   -49,  1364,    62,  1304,  -505,  -505,  -505,  1487,  -505,
     499,  1304,  -505,  1304,  1304,  1304,   592,   592,   -49,   -49,
     -49,  -505,  -505,  3512,  1519,  3716,  -505,  2112,  4109,   559,
     500,  1138,  3905,  4109,  1298,  1495,  1496,  2681,  4109,   -49,
    -505,    22,   -49,  1247,  4109,  4109,  1520,  3512,  3512,  3512,
    3512,  -505,  -505,  -505,  -505,   711,   315,  -505,  3512,  3512,
    3512,  1250,  -505,  -505,  3512,  1560,  3512,  1165,   592,   592,
     592,   592,   592,   592,   592,   592,   592,  2034,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,  4313,   -49,   -49,
     -49,   924,   445,  1369,   -49,   -49,  1170,   -49,   592,   592,
     592,   408,  1491,   592,   -49,  1415,   592,   592,  1250,   592,
     592,   592,   690,  -505,  1524,   624,  1229,   592,   -49,    39,
     592,   592,  -505,   -49,  -505,    22,  1504,  4109,    92,   -49,
      33,  1149,   592,   -49,   924,  4109,   592,   -49,  -505,  -505,
    -505,   592,   -49,  -505,  -505,  -505,  -505,   -49,  1304,   592,
     -49,   833,   592,  1304,  1113,  -505,   592,   258,  1304,   258,
     926,  -505,    67,    63,  1499,  -505,   -49,  1364,  -505,  -505,
    4476,  -505,  1480,  1512,  1389,  2087,  1401,   610,  1227,  -505,
    4109,   592,   -49,  1227,   -49,  1138,  1482,  -505,  -505,  -505,
    -505,  -505,  -505,  1334,  1328,  -505,  -505,   697,   616,  1190,
      57,   592,   -49,  1561,  -505,  4109,  2144,  2376,  2376,  2376,
    1500,  -505,  3512,  3512,  1921,  2376,  2144,  1367,   267,  2144,
    -505,  1560,   -49,   -49,  1519,  3716,  1277,  1512,  -505,    56,
    4109,   117,    -8,   -49,  1415,   575,   177,   106,   964,  4109,
    -505,  -505,   164,   783,  4109,  4109,    92,  1481,  1231,    43,
     592,   -49,  -505,  1231,  1584,   690,   143,   203,  1017,  1552,
    1536,  -505,  -505,  1223,   981,  -505,    69,   583,   -49,  4109,
     592,  4551,  1372,  1304,  1389,  4109,  -505,  4109,  1358,  -505,
    4109,   592,   -49,  4476,   757,  -505,  -505,   -49,   650,   175,
    1171,  1307,  1521,  1602,  1359,   245,  -505,  -505,  1987,  2144,
    3512,   -49,  -505,   592,  2477,  -505,  1527,     9,   311,  1533,
    4313,   -49,  1539,    60,  -505,  1508,   -49,   187,  1200,  1635,
    -505,   183,   -49,   106,  -505,   967,   -49,   370,   -49,  1231,
    1231,    43,  4109,  4109,   -49,    50,  1543,  1280,   122,  -505,
    -505,  -505,  1304,   487,  1176,  1545,  -505,   614,  1304,  -505,
    -505,  -505,  -505,  -505,  -505,   143,   592,   -49,  -505,    63,
     -49,   583,   592,  1550,  1573,   624,  4551,   -49,  1542,  -505,
    1548,  1540,  -505,    71,   440,   -49,   -49,   611,  -505,  1231,
    1424,  -505,   773,   886,  -505,  1547,  -505,   826,  1232,   592,
     -49,  1555,   204,   984,  4109,  4109,  1304,  -505,   -49,  1376,
     -49,  3512,  2087,  1557,  1558,  1661,  1278,  -505,    54,   -49,
      56,   592,  -505,  1239,   592,   -49,   187,  4109,  -505,   662,
    1258,  -505,   592,  -505,  -505,   592,   -49,   370,   592,   -49,
    1231,  1231,   592,   -49,    50,  1630,   143,   178,   -49,   166,
     -49,  -505,  1559,  1562,  1565,  1566,   592,   487,   -49,    69,
    1017,   592,  -505,  -505,   592,   906,  4109,   -49,   592,  4109,
    -505,  -505,   328,   121,  -505,   611,   592,   592,   -49,   -49,
    -505,  -505,  -505,  -505,  -505,   592,   -49,  1307,  1307,  1643,
    1624,  1673,  1006,  1576,  1340,  -505,   679,  1544,  1364,   -49,
     592,   -49,  1376,   592,  2087,  -505,  -505,  4109,  1304,  -505,
     592,   -49,    54,   592,     9,  4109,  1145,  1265,  1577,  1200,
     592,   -49,   481,   122,  1707,  1700,  1705,   592,   -49,  4109,
    4109,  1580,  1583,  -505,  -505,   310,  1120,  1034,  -505,   971,
    1589,  -505,   376,    17,   -49,  1673,  1673,  1304,  -505,  4109,
    1074,  1673,   -49,  1307,  4109,   -49,  1406,  1304,   592,  1586,
     -49,   -49,  1059,  1598,   652,   -49,  -505,  1601,   599,   592,
     -49,  -505,  -505,  -505,   -49,  1098,  -505,   -49,   515,  -505,
     -49,  -505,  1726,  1731,  1086,  1606,  4109,  1304,  -505,  -505,
    -505,  1135,   -49,   755,  -505,  1304,   -49,   434,   -49,    17,
    1074,  1673,  1074,  -505,  1231,  1597,   -49,  1084,   -49,   592,
    1673,  1231,   592,   -49,  -505,  1304,  -505,  -505,  1678,    92,
    1050,    22,  1149,  -505,   -49,   -49,   -49,   -49,   -49,   -49,
    -505,  -505,   755,  -505,  1609,  1610,   592,  -505,  1674,   759,
    -505,   690,   592,   -49,   434,   592,  -505,  -505,  1304,   592,
     -49,  1084,   592,  1074,  1612,  4109,   553,   112,   -49,  -505,
      22,  -505,  -505,   376,  -505,   -49,   592,   240,  1613,  -505,
    -505,  -505,  -505,  -505,  -505,  -505,  2273,  1063,   592,   -49,
    -505,  1517,  1448,   754,   -49,   271,  -505,  1740,  1681,  2885,
     -49,   -49,  1122,  3089,   -49,  1063,   312,   312,  -505,  -505,
    -505,  1659,   512,   -49,  1027,   592,   -49,   271,  -505,  -505,
     140,  3089,   592,   592,  -505,  -505,   -49,   -49,  1647,   -49,
     -49,   -49,   592,  -505,  1206,  1741,  -505,   -49,   954,   -49,
     512,   365,   -49,   513,   592,   -49,  3293,  -505,  -505,  -505,
     592,   -49,   -49,  -505,  -505,   592,   -49,  1697,   -49,   -49,
    3497,  -505,   592,   -49,   -49
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     164,     0,     0,   379,   164,   219,     0,   506,     0,     2,
       0,     7,     8,    12,     9,    25,    24,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    11,    10,   164,     0,
     536,   162,   167,     0,     0,   543,   389,     0,     0,   399,
     533,   533,     0,   378,     0,   379,     0,     0,     0,   164,
       0,   546,     0,   548,   547,     0,   224,     0,   219,     0,
       0,     1,     6,   164,    23,    29,   175,     0,   146,    31,
     166,   181,   184,   187,   191,   262,   265,   273,   276,   303,
     506,     5,    12,    25,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    10,   163,     0,   171,     0,   170,   537,
     538,     0,   172,   389,   399,   537,     0,     0,     0,   540,
     398,     0,   533,     0,     0,   234,   533,   381,   380,    27,
      26,    28,   165,     0,   255,   219,     0,     0,     0,   221,
     529,   220,   550,     0,   551,     0,   507,     3,   174,   173,
     564,   175,     0,     0,   135,   146,    38,    36,    37,     0,
      35,    34,     0,   168,   164,     0,   544,   116,   391,   390,
       0,   539,     0,   537,   541,   542,   532,   534,   271,     0,
     552,   268,   247,   247,   260,   232,   233,     0,     0,   166,
     256,   257,     0,     0,   224,   219,   217,   218,   216,     0,
       0,   226,   225,   224,     0,   529,     0,   221,     0,     0,
       0,   312,     0,   521,     0,   521,   521,   315,    21,   308,
       0,   594,   608,   616,   580,     0,   579,     0,   509,   612,
     597,   430,   615,   508,   606,   578,   600,   563,   609,   592,
     564,   611,     0,     0,   614,   605,   596,   617,   164,   591,
       0,   429,   607,   593,   595,   610,   581,   582,   583,   584,
     585,   586,   587,   588,   514,   517,   503,     0,    42,    43,
     399,   400,   404,   408,   409,   410,   405,   403,   411,   401,
     402,   414,   433,   412,   413,   407,   423,   500,   177,   501,
     502,   512,   513,   544,   422,     0,     0,     0,   569,   572,
     573,   577,   568,   176,   399,   564,   564,    30,   134,   148,
     147,    32,     0,    39,     0,    35,     0,   388,     0,     0,
       0,     0,    92,   392,     0,     0,   535,   266,   267,   274,
     268,   246,     0,   247,     0,   239,   245,   238,   244,   268,
     252,   250,   251,     0,     0,   258,     0,   222,   223,   389,
       0,   530,     0,   193,     0,   314,   316,   317,     0,   520,
     521,     0,   313,     0,     0,     0,   310,   319,   244,   309,
     308,   599,   598,     0,   424,     0,   613,   425,   564,     0,
       0,   470,   564,   564,     0,     0,     0,   164,   564,   554,
     119,    92,    41,     0,   564,   564,   133,     0,     0,     0,
       0,   555,   556,   559,   558,     0,   563,   560,     0,     0,
       0,     0,   557,   426,     0,   417,     0,     0,   421,   432,
     443,   449,   454,   485,   496,   499,   505,   416,   420,   409,
     442,   411,   453,   412,   413,   407,   500,   564,   501,   512,
     513,   537,     0,     0,   572,   573,   577,   568,   511,   516,
     519,   458,     0,   566,   419,     0,   576,   590,     0,   604,
     619,   177,   389,   145,   154,   159,   136,   140,   139,     0,
     148,    40,   169,   545,   117,    92,     0,   564,   146,    91,
       0,     0,   397,   396,   537,   564,   270,   269,   236,   235,
     237,   249,   248,   242,   241,   240,   243,   263,     0,   254,
     253,     0,   259,     0,     0,   528,   531,   247,     0,   247,
     213,   192,   194,     0,     0,   311,   522,     0,   307,   306,
     602,   304,     0,     0,   417,   416,     0,     0,     0,   445,
     564,   473,   471,   476,   472,   470,     0,   491,   487,   490,
     488,   489,   486,     0,     0,   415,   406,     0,    96,     0,
      84,    98,    97,   438,   437,   564,   478,   479,   480,   482,
       0,   427,     0,     0,     0,   481,   435,     0,     0,   477,
     563,   564,   561,   565,   434,     0,     0,   563,   457,   462,
     564,   458,   164,   504,     0,     0,   290,   164,   389,   564,
     157,   158,   151,   159,   564,   564,   146,     0,    93,   142,
      95,    94,   393,   394,     0,   389,   164,     0,   621,   320,
       0,   212,   211,     0,   213,   207,     0,   206,   205,   564,
     523,   538,   324,     0,     0,   564,   444,   564,     0,   494,
     564,   493,   492,   602,   129,   120,   121,   118,     0,   119,
     543,   399,     0,     0,    45,    84,   132,   428,     0,   436,
       0,   515,   497,   562,   164,   441,     0,   467,   462,     0,
     460,   459,     0,   164,   574,     0,   277,   282,     0,     0,
     278,   391,   281,   164,   155,     0,   156,   151,   160,   137,
     138,   142,   564,   564,   301,   142,     0,     0,   385,   198,
     197,   196,     0,     0,     0,     0,   620,   622,     0,   204,
     203,   202,   200,   199,   201,   164,   215,   214,   195,     0,
     209,   208,   206,     0,   297,   159,   602,   570,     0,   336,
       0,     0,   322,   331,   325,   337,   327,   331,   305,   474,
       0,   447,     0,     0,   128,   125,   127,     0,   129,   124,
     123,     0,     0,   105,   564,   564,     0,    33,    44,    86,
      85,     0,   450,     0,     0,     0,     0,   455,   464,   463,
     462,   460,   452,   294,   292,   291,   290,   564,   280,   283,
       0,   279,   282,   150,   149,   153,   152,   151,   161,   300,
     395,   141,   144,   143,   142,     0,   164,     0,   188,   385,
     567,   373,     0,     0,     0,     0,   375,     0,   628,   193,
       0,   629,   321,   178,   210,   229,   564,   299,   571,   564,
     334,   335,   329,   331,   326,   331,   333,   339,   332,   338,
     446,   483,   418,   126,   122,   131,   130,   399,   399,     0,
       0,   109,   105,     0,    88,    46,    49,     0,     0,    54,
      48,    47,     0,    86,   451,   439,   440,   564,    82,   466,
     469,   468,   467,   464,   467,   564,     0,   294,     0,     0,
     287,   286,   164,   385,     0,     0,     0,   387,   386,   564,
     564,     0,     0,   179,   623,     0,   234,   229,   298,     0,
       0,   323,     0,   333,   332,   109,   109,     0,   104,   564,
     113,   107,   106,   399,   564,    83,    88,     0,    53,     0,
      52,    54,     0,     0,    57,    81,   456,     0,     0,   296,
     295,   285,   284,   524,   527,     0,   526,   525,   164,   185,
     189,   382,     0,     0,     0,     0,   564,     0,   228,   227,
     182,   231,   230,   632,   343,     0,   328,     0,   345,   344,
     113,   109,   113,   103,   108,     0,    99,   111,   110,   107,
     109,    87,    90,    89,    50,    82,   461,   465,     0,   146,
      57,     0,     0,   288,    22,   261,   264,   272,   275,   302,
     384,   383,   632,   625,     0,     0,   231,   630,     0,   632,
     330,   389,   342,   341,     0,   346,   101,   102,     0,   115,
     114,   113,   111,   113,     0,   564,    62,    59,    58,   293,
       0,   626,   624,     0,   631,   633,   634,   348,     0,   100,
      51,    56,    63,    64,    65,    55,   564,   148,    59,   289,
     627,     0,     0,   365,   347,   391,   112,     0,     0,   564,
      60,    68,     0,    67,    66,     0,     0,     0,   351,   349,
     350,     0,   370,   340,   365,   355,   354,     0,    69,    78,
       0,   564,    71,    80,    76,    77,    70,    68,   400,   404,
     403,   402,    67,   359,     0,     0,   358,   352,     0,   353,
     370,     0,   363,   370,   367,   366,   564,   357,   356,   360,
     362,   361,   364,   368,   369,   372,   371,     0,    61,    72,
     564,    73,    75,    74,    72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -505,  -505,  1289,  -505,  -505,   914,   -16,  -111,  1434,   875,
    1618,   -18,  1699,  -505,  -505,  -505,  1136,   885,   943,  1028,
     828,   827,  -505,   790,   607,   698,   437,  -505,  1144,   894,
     622,  -459,  1398,  1153,   963,   261,   277,  -244,  -505,  1158,
    1062,   758,  -505,  1648,   238,   -60,  1205,  1214,  -505,  -222,
     153,  1081,  1760,  -505,  1654,  1768,  1769,  1771,  1774,  1014,
    1199,  -392,  1305,  1202,   442,   300,   942,   944,  -170,    44,
     -35,  1629,  1702,  1633,     3,     5,  1246,    25,    26,   965,
    1235,   970,  1060,  1245,   975,   101,  -505,    -2,  1614,  1616,
    1140,  1470,  -505,  1115,  -505,  -505,   384,  -212,  -477,  1031,
    -505,   837,   469,   796,   406,  1151,  1604,   163,    23,  -280,
    1522,   517,  1005,   892,  -178,  -505,   354,  -505,  -505,   820,
     860,  -505,   960,  -505,  1268,  -254,  -504,  -157,  -295,  -505,
     868,  1306,   881,   884,  -505,   777,     0,   961,  -505,   851,
     992,   255,  -505,  1646,  1159,  1052,  1730,  1066,   813,  1786,
    -176,  1308,  -395,   814,  -505,   521,  -505,   666,   734,   840,
     891,  -505,  1055,  1162,   236
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      68,    69,   303,   381,   258,   737,   831,   825,   826,   827,
     893,   949,  1005,  1024,  1046,  1078,  1021,   894,   634,   885,
     468,   469,   382,   538,   821,   938,   980,   155,   539,   627,
     727,   259,   297,   458,   773,   300,   766,   453,   454,   582,
      48,    31,    32,    33,   140,    18,    19,    20,    21,   500,
     501,   502,   700,   603,   131,   192,   866,   174,   175,   176,
     322,   490,   123,   182,    22,    23,   319,    24,    25,    26,
     576,   758,   759,   755,   846,   703,   704,    27,   208,   209,
     598,   599,   712,   713,   714,   871,   715,   716,   973,   928,
    1013,  1036,  1057,  1033,  1062,   683,   118,   778,   102,   312,
     313,   107,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   570,   647,   841,   524,   371,   272,
     273,   533,   274,   275,   276,   277,   427,   279,   280,   281,
     282,   351,   909,   196,   113,   283,   110,    36,   284,    59,
     171,   285,   406,   286,   781,   287,   288,   289,   290,   291,
     292,   685,   686,   687,   970
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    34,    38,    45,    49,    58,     1,   327,   144,    62,
     562,   591,    82,    64,   339,    65,   746,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    93,    79,    28,    34,
     465,    89,    96,    90,    34,   100,   103,    38,    38,   108,
     112,   112,    38,   306,   117,    45,    65,   296,    70,    49,
      38,   296,   151,    91,    92,   673,   129,   117,    58,   134,
      38,   746,   673,    28,   467,   464,   141,   466,   145,   150,
     152,   497,   497,   370,     1,   467,  -208,   525,   497,    60,
     870,    62,    64,    65,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,   190,    34,   133,   708,    96,   100,
     418,    38,   158,   103,   108,   100,    38,   143,   108,   100,
     165,   608,   112,   169,   169,   177,   112,   633,   117,   562,
       1,    65,   179,   183,   100,   185,   159,   143,   191,   193,
     195,   197,   134,    38,   151,   210,   777,    62,   324,    43,
     278,   141,    38,   747,   299,   145,   493,   708,    61,   302,
     304,   305,   152,    17,    49,   646,   100,     1,   658,   158,
       7,   100,   314,   100,   165,    66,   562,   316,   488,    38,
     100,   320,   323,   323,   119,   325,   326,   177,   169,   207,
     777,    84,   334,   183,   129,   185,    80,   568,   605,     1,
      38,   592,   191,   193,   418,   195,   342,     1,     1,   418,
     180,     7,   122,   350,   854,   350,   350,   326,   356,   357,
     210,   127,   517,   659,   522,   498,    17,   365,     7,   562,
     679,   328,   655,   525,   181,   127,    80,   365,   525,   180,
     372,     7,   655,   624,   499,   499,  1066,    63,   377,  -208,
       7,   499,    80,  -164,     7,     7,     7,   680,    80,   418,
     665,  -164,     7,   181,   358,    97,    66,    38,   383,    80,
     108,   405,   408,    80,   409,     7,     7,   410,   411,    80,
     412,     7,    80,   413,   414,   415,     7,   416,     7,   438,
       7,   439,   440,   100,   151,  1011,   443,   445,   482,   446,
     447,   449,   450,   451,   108,   855,     4,     7,   457,   459,
     460,     7,   152,   461,   304,   633,     7,   608,    38,    38,
     314,    38,   470,   472,   314,     7,  1011,   595,   681,   476,
     320,    80,   481,   323,   481,   625,    80,   325,   326,   320,
      80,     7,     7,   489,   491,   492,   191,     4,   146,   103,
     896,   496,    38,   503,    38,   626,   146,   818,   348,     7,
     350,   507,     7,   507,    38,   507,   128,   856,   326,   356,
     357,   668,   494,   365,   514,   365,     7,   514,   522,   518,
     521,   523,   372,     7,   534,    80,  1053,   377,  1012,   100,
      80,   470,   541,   383,     7,     7,     7,   365,   365,   365,
     365,   870,    80,    80,   749,   926,    80,    80,   365,   365,
     365,   557,  1054,   147,   365,   561,   565,   443,   589,  1012,
     646,   147,     7,     7,    80,   349,  1073,   405,   408,   409,
     410,   411,   412,   413,   414,   415,   416,  1055,   438,   439,
     440,   100,   443,   445,   446,   447,   449,   450,  -344,   918,
     642,   571,   317,   321,   416,   574,  1056,    56,   557,     7,
     349,   552,   578,    66,    80,   583,   665,   553,   457,   459,
     353,   355,   597,   100,   600,   470,   708,     7,   145,   590,
     470,   314,   418,   472,   100,   577,     7,   476,   568,   919,
      80,   709,   481,   797,   336,   678,   925,   476,    38,   710,
     489,   491,   989,    38,   158,     1,   844,   323,    38,   323,
     604,   148,   607,   503,   330,   809,   610,    38,     7,   148,
     611,   138,   318,   782,   614,   514,  1010,   521,   518,   331,
      80,     7,   521,   518,   521,   523,   671,     7,   783,     1,
     122,  1009,  1074,   621,   534,    80,   784,     7,   628,    38,
     635,   711,   541,     7,   925,   478,   514,   514,   514,   514,
     785,   569,   365,   365,   514,   514,   514,   557,   439,   514,
      67,   561,   643,   443,   514,   365,    38,   184,     2,   648,
     650,   571,   653,   416,   574,   439,   657,   661,   578,    80,
     139,   519,   667,   583,   793,     7,   145,     7,   520,   675,
     479,   590,   332,   809,     7,   103,    49,   481,   684,     3,
     481,   663,     2,   696,   604,   506,   699,   701,   702,  1061,
    1061,   706,   717,    38,   614,   349,   384,     7,   677,   442,
     120,   160,   621,   706,   728,   116,     7,   729,   628,   653,
     100,   108,   419,     3,   739,   635,    29,   708,   514,   514,
     365,   439,  1002,    80,   377,   624,   384,   748,   648,     7,
       7,   751,   709,   653,     7,   385,   754,   756,   760,   317,
     710,   653,   762,   661,    95,   853,   765,   767,   768,     6,
     480,   675,   990,   965,   772,   774,   138,   158,   779,   624,
     125,   384,    38,   786,   684,   385,   952,   791,    38,   130,
       7,   616,     7,  1003,   471,    49,     7,   696,   617,   503,
     794,   701,   111,     6,   605,   583,   706,   798,    80,     7,
    1004,     7,   711,   803,   805,   806,   807,   805,   654,   419,
     385,     7,    80,   798,    80,   368,   419,   815,   728,   318,
     729,   419,   628,   822,   998,   790,   828,   625,   830,   832,
     833,   365,   514,    40,   580,   139,    38,   840,   842,   843,
     648,   327,     7,   847,   384,   754,   756,   626,   483,   850,
     760,    30,     7,     7,    41,    42,   765,   767,     7,   772,
     106,   625,   484,   772,   774,     7,    49,   386,   857,   779,
     100,   419,     7,   849,     7,   948,     7,   786,   791,   503,
     684,   626,    80,   385,   953,   867,    30,   768,     7,   433,
     887,   136,   873,   803,    80,   805,   122,   142,   806,   807,
     485,   452,   550,   581,   122,    80,   815,   108,   108,     7,
      80,   881,   822,     7,   886,     7,   888,   674,   828,   100,
     384,   830,   832,     7,   514,   967,   904,   154,    38,   967,
     111,   840,   842,   101,   748,  1049,   899,   847,   126,   760,
     907,   850,   908,   779,   162,  1031,   968,  1032,   857,    80,
     968,     7,    55,  1049,   486,   724,   921,   867,    43,   385,
     551,     7,   927,   929,   806,   931,   931,    38,   623,    47,
     937,   931,   939,   108,   725,   942,   886,   828,     7,   986,
     888,   100,   954,   433,   950,   100,   840,   868,   433,     7,
     899,   194,  1049,   580,    64,   179,   959,    79,   908,   769,
     857,   955,     7,   956,   157,     7,   811,    38,   194,   419,
     330,   177,   966,   969,    80,    38,   972,   974,   975,   929,
     937,   931,   937,   957,   958,   331,   979,   981,   982,   726,
     931,     7,   858,   942,   434,    38,   897,   189,   433,   987,
     950,   470,   314,   361,    64,    75,    76,    77,    78,    79,
      55,   915,   969,     7,     7,   328,     7,   814,    80,   969,
     996,   103,   581,   972,   974,   315,   979,   979,    38,   166,
     979,   981,   186,   937,   763,     7,  1007,   145,  1008,   590,
     470,   996,    80,   974,   997,   996,   376,  1015,   362,   979,
       1,     1,    80,   540,   419,   905,  1023,  1025,   332,   590,
     972,   764,   435,  1034,  1035,  1037,   910,   964,  1053,  1041,
    1042,  1043,   295,  1041,  1052,  1025,  1058,  1058,   384,   812,
     187,   612,  1063,  1064,  1034,     7,  1035,  1037,   434,    80,
    1042,  1041,    80,   434,  1054,   601,  1042,  1043,   405,   408,
     410,   412,   188,    35,    35,   426,   865,  1070,  1058,  1070,
    1063,   122,  1075,  1063,   444,  1064,  1080,   385,    39,  1055,
     602,  1070,  1075,     2,     2,   407,  1075,   819,  1082,  1043,
    1080,    35,   880,  1082,  1043,   820,    99,   586,  1056,    35,
     105,   109,   432,   434,    35,     7,   307,   802,   420,   819,
     601,   808,   124,   104,     3,     3,   435,   820,   115,   364,
      94,   435,    35,   375,   923,     7,   384,   101,   436,   367,
     349,  -553,   157,   315,   157,   602,   135,   315,  1031,   429,
    1032,   526,   707,     7,   308,     7,   930,   932,   421,     4,
       4,  1044,   426,   384,   723,   309,   423,    35,   733,   426,
       5,     5,  1002,   156,   426,   385,   109,   936,   161,   424,
     163,   435,   425,    80,   508,   124,   170,    -4,   512,   437,
     417,   433,   354,    80,     6,     6,   153,     7,   308,   384,
     682,     1,   385,   948,   865,    35,   432,   874,  1045,   808,
      80,   432,   420,     7,    35,     7,    80,   420,   991,   198,
     114,   983,   946,  1003,   426,   995,   310,   976,   294,   977,
     444,    37,   436,     7,   156,    80,   429,   436,   385,   563,
    1004,   105,   573,   429,   935,   421,     7,   707,   429,   962,
      35,   407,   421,   423,   935,   369,    80,   421,   422,   428,
     423,   432,   170,    80,   329,   423,   424,   420,    35,   425,
     172,   173,   558,   424,     2,   367,   425,   515,   424,    80,
     999,   425,   343,   437,   417,   172,   173,   436,   437,   417,
     430,   167,    80,    67,    30,   178,     7,   434,   429,   546,
     547,   548,   549,     7,   315,     3,   384,   421,   384,   340,
     554,   555,   556,    80,   596,   423,   559,   898,   564,   575,
     455,   456,   311,   636,   368,   344,   527,     7,   424,   379,
     345,   425,   109,  1067,   311,   346,   434,    81,   437,   417,
       4,   584,     7,   448,  -553,   385,   428,   385,   649,     7,
     431,     5,   422,   428,   875,   876,   527,   422,   428,   682,
     724,   528,   426,   629,    80,   435,   109,     7,   529,   566,
     585,   573,   137,   757,     7,     6,    30,   430,     7,   725,
     463,   156,   156,   156,   430,  1068,   474,   380,    30,   430,
      80,   528,   434,   516,     7,   563,     7,   419,   529,     7,
       7,   199,   347,   537,   435,    80,     7,   422,   428,   543,
     544,   200,   845,   368,   105,   419,    35,    30,   708,     7,
     940,   257,   744,   156,   695,   510,    35,   156,   641,     7,
     504,   757,   530,   709,   726,   384,   429,   431,   845,   430,
     511,   710,   373,   391,   431,   421,   718,   426,   392,   431,
     644,   838,     7,   423,   419,  -331,    80,   380,    46,   721,
     435,    80,   530,   352,   638,   639,   424,   652,     7,   425,
     393,   436,   660,  1028,   385,   254,    80,   515,   384,     7,
    1047,   776,    83,   394,   432,   199,  1072,    80,   531,  1076,
     420,   201,   588,   711,    80,   200,  1029,   202,  1047,   431,
     593,   384,  -331,   121,    30,    30,     7,     7,   106,     7,
     436,   532,   823,   824,  1030,   203,  1059,   385,   531,   204,
     397,   429,   437,  1079,   731,   810,   615,     7,   173,   321,
     421,    30,   205,     7,    30,   848,     7,  1084,   423,   743,
     385,   532,   337,   156,   620,   618,   428,  1071,   206,   387,
     106,   424,   742,    80,   425,   338,   884,    80,   660,   388,
      35,   437,   417,     7,   433,   170,   436,   366,   389,     7,
     510,   390,   374,   736,   594,   201,    30,   430,    80,   105,
     391,   202,   433,   689,    51,   392,   477,   402,     7,   690,
     736,    30,   254,    80,   691,   487,    80,   256,     7,   203,
     393,     7,  -549,   204,   455,    80,     7,   393,    53,   669,
     670,   630,   173,   394,   391,   378,   205,   437,    80,   392,
     394,   433,   884,   395,  1026,   631,  -601,    44,   692,    57,
     422,   428,   206,  1020,   705,    80,   441,   431,    35,  1027,
     719,   393,   720,   256,    80,   722,  1040,   396,   462,   495,
     397,   475,   645,   834,   394,   505,    50,   397,   535,   536,
      51,   545,   430,   693,   572,   579,  -379,   587,   613,   694,
     387,    54,   609,    55,   553,   619,    52,   385,  -549,   637,
     388,   560,   398,   399,    53,   156,   672,   676,   400,   389,
      80,   397,   390,   688,   734,   735,   750,   770,   771,   753,
     745,   391,   752,   109,   401,    43,   392,   761,   789,   434,
     933,   401,   775,   795,   796,   799,   800,   402,   817,   801,
     835,   836,   431,   837,   402,   813,   403,   434,   393,   852,
    -564,   404,   859,   861,   862,   860,   877,   878,   879,   883,
     901,   394,  -379,   911,   395,   889,   912,    54,     7,    55,
     157,   913,    80,   916,   780,     7,   917,   924,   402,   945,
     510,   947,   960,  1001,   951,     7,   434,   961,   396,   963,
     978,   985,   992,   993,   994,  1000,  1016,   435,   397,  1038,
    1039,    43,  1060,  1081,  1069,   315,   903,   301,   149,    80,
     738,   890,   944,   984,   839,   435,  1006,   988,  1083,   740,
     943,   542,   732,   398,   399,   882,   730,   666,   829,   400,
     816,   157,   298,   664,    98,   293,    85,    86,   829,    87,
     426,   705,    88,   863,   869,   698,   697,   606,     7,   922,
     920,   333,   401,   662,   435,   168,   335,   906,   426,   902,
     851,   656,   900,   509,   359,   402,   360,   403,   792,   804,
    1065,  -416,   404,   872,  1014,   787,   473,   432,   164,   651,
     622,   341,   892,  1050,   132,   864,   788,   632,     0,     0,
     705,     0,     0,     0,     0,   432,     7,   426,     0,     0,
       0,  1050,   407,   436,   914,   705,     0,     0,     0,   109,
     109,     0,     0,     0,   429,     0,     0,     0,     0,     0,
     891,   436,     0,   421,   934,     0,     0,     0,     0,   941,
     895,   423,   429,     0,   432,     0,     0,     0,     0,     0,
    1050,   421,     0,     0,   424,     0,     0,   425,     0,   423,
       0,     0,     0,     0,   437,  1048,     0,     0,     0,     0,
     436,   705,   424,     0,   387,   425,     0,     0,     0,   156,
       0,   429,   437,  1048,   388,   109,     0,     0,     0,   829,
     421,     0,     0,   389,     0,     0,   390,     0,   423,     0,
       0,     0,     0,     0,     0,   391,     0,     0,     0,     0,
     392,   424,     0,     0,   425,     0,     0,     0,     0,   156,
       0,   437,  1048,     0,     0,     0,     0,    35,     0,     0,
       0,     0,   393,  1051,   428,     0,     0,     0,     0,     0,
     387,   971,     0,     0,     0,   394,     0,   895,   395,     0,
     388,  1051,   428,     0,   156,     0,     0,     0,     0,   389,
       0,  1022,   390,     0,     0,   430,     0,   640,     0,     0,
       0,   391,   513,     0,  1022,     0,   392,     0,  1022,     0,
     156,     0,   397,   430,     0,     0,     0,   387,     0,     0,
    1051,   428,     0,     0,     0,     0,  1022,   388,   393,     0,
       0,     0,     0,     0,     0,     0,   389,     0,   399,   390,
       0,   394,     0,   400,   395,     0,     0,     0,   391,     0,
       0,  1022,   430,   392,     0,   431,     0,     0,     0,     0,
       0,     0,     0,   741,     0,  1022,   401,     0,   513,     0,
     387,     0,     0,   431,     0,   393,     0,     0,   397,   402,
     388,   403,     0,     0,     0,     0,   404,     0,   394,   389,
       0,   395,   390,     0,     0,   387,     0,     0,     0,     0,
       0,   391,     0,     0,   399,   388,   392,     0,     0,   400,
       7,     0,   431,     0,   389,   567,     0,   390,     0,     0,
       0,     0,     0,     0,     0,   397,   391,  -602,   393,     0,
       0,   392,   401,     0,     0,     0,     0,   388,     0,     0,
       0,   394,     0,     0,   395,   402,   389,   403,     0,   390,
       0,   399,   404,   393,     0,     0,   400,     0,   391,     0,
       0,     0,     0,   392,     0,     0,   394,     0,   513,   395,
       0,     0,     0,     0,     0,     0,     7,     0,   397,   401,
       0,     0,     0,     0,     0,   393,     0,     0,     0,     0,
       0,     0,   402,     0,   403,     0,     0,     0,   394,   404,
       0,   395,     0,   397,   399,     0,     0,     0,     0,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     0,     0,     0,     0,     0,   399,
       0,     0,   401,     0,   400,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   402,     0,   403,     0,     0,
       0,     0,   404,     0,     0,     0,     0,   401,     0,   211,
       0,   399,     0,     0,   212,     0,  -602,     0,     0,     0,
     402,  1017,   403,     0,   213,     0,     7,   404,     0,     0,
       0,     0,     0,   214,   215,   216,     0,     0,  1018,   401,
       0,     0,   217,   218,     0,     0,     0,     0,     0,     0,
     219,     7,   402,     0,   403,     0,   220,     0,     0,  -602,
       0,     0,     0,     0,   221,     0,     0,     0,     0,     0,
     222,     0,     0,     0,   223,     0,     0,     0,   224,     0,
       0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,     0,     0,     0,   226,     0,
       0,     0,     0,     0,   227,     0,     0,   228,     0,     0,
       0,     0,   229,     0,     0,   230,   231,     0,     0,  -602,
       0,     0,     0,     0,     0,     0,     0,   232,  -602,   233,
       0,  -602,     0,     0,     0,   234,     0,     0,     0,  1019,
     391,     0,     0,     0,     0,   392,     0,     0,   235,   236,
     237,     0,     0,     0,     0,     0,   238,   239,     0,   240,
       0,     0,   241,   242,     0,     0,     0,   393,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     394,     0,     0,   395,     0,     0,     0,     0,     0,   243,
       0,     0,     0,     0,   244,   245,     0,     0,     0,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
      30,   256,     7,   211,   257,     0,     0,   397,   212,     0,
       0,     1,     0,     0,     0,     0,     0,     0,   213,     0,
       0,     0,     0,     0,     0,     0,     0,   214,   215,   216,
       0,     0,     0,  -602,     0,     0,   217,   218,     0,     0,
       0,     0,     0,     0,   219,     0,     0,     0,     0,     0,
     220,     0,     0,     0,     0,     0,     0,     0,   221,     0,
       0,   401,     0,     0,   222,     0,     0,     0,   223,     0,
       0,     0,   224,     0,   402,     0,   403,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,     0,     0,
       0,     0,   226,     0,     0,     0,     0,     0,   227,     0,
       0,   228,     0,     0,     0,     7,   229,     0,     0,   230,
     231,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   232,     0,   233,     0,     0,     0,     0,     0,   234,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   235,   236,   237,     0,     0,     0,     0,     0,
     238,   239,     0,   240,     0,     0,   241,   242,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -564,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   243,     0,     0,     0,     0,   244,   245,
       0,     0,     0,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,    30,   256,     7,   211,   257,     0,
       0,     0,   212,     0,     0,     1,     0,     0,     0,     0,
       0,     0,   213,     0,     0,     0,     0,     0,     0,     0,
       0,   214,   215,   216,     0,     0,     0,     0,     0,     0,
     217,   218,     0,     0,     0,     0,     0,     0,   219,     0,
       0,     0,     0,     0,   220,     0,     0,     0,     0,     0,
       0,     0,   221,     0,     0,     0,     0,     0,   222,     0,
       0,     0,   223,     0,     0,     0,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,   226,     0,     0,     0,
       0,     0,   227,     0,     0,   228,     0,     0,     0,     0,
     229,     0,     0,   230,   231,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   232,     0,   233,     0,     0,
       0,     0,     0,   234,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   235,   236,   237,     0,
       0,     0,     0,     0,   238,   239,     0,   240,     0,     0,
     241,   242,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -564,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   243,     0,     0,
       0,     0,   244,   245,     0,     0,     0,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,    30,   256,
      80,   211,   257,     0,     0,     0,   212,     0,     0,     0,
       0,     0,     0,  1017,     0,     0,   213,     0,     0,     0,
       0,     0,     0,     0,     0,   214,   215,   216,     0,     0,
    1018,     0,     0,     0,   217,   218,     0,     0,     0,     0,
       0,     0,   219,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,     0,     0,     0,   221,     0,     0,     0,
       0,     0,   222,     0,     0,     0,   223,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,     0,     0,     0,     0,
     226,     0,     0,     0,     0,     0,   227,     0,     0,   228,
       0,     0,     0,     0,   229,     0,     0,   230,   231,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   232,
       0,   233,     0,     0,     0,     0,     0,   234,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,     0,     0,     0,     0,     0,   238,   239,
       0,   240,     0,     0,   241,   242,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   243,     0,     0,     0,     0,   244,   245,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,    30,   256,     7,   211,   257,     0,     0,     0,
     212,     0,     0,     0,     0,     0,     0,  1017,     0,     0,
     213,     0,     0,     0,     0,     0,     0,     0,     0,   214,
     215,   216,     0,     0,  1018,     0,     0,     0,   217,   218,
       0,     0,     0,     0,     0,     0,   219,     0,     0,     0,
       0,     0,   220,     0,     0,     0,     0,     0,     0,     0,
     221,     0,     0,     0,     0,     0,   222,     0,     0,     0,
     223,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
       0,     0,     0,     0,   226,     0,     0,     0,     0,     0,
     227,     0,     0,   228,     0,     0,     0,     0,   229,     0,
       0,   230,   231,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   232,     0,   233,     0,     0,     0,     0,
       0,   234,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   235,   236,   237,     0,     0,     0,
       0,     0,   238,   239,     0,   240,     0,     0,   241,   242,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   243,     0,     0,     0,     0,
     244,   245,     0,     0,     0,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,    30,   256,    80,   211,
     257,     0,     0,     0,   212,     0,     0,     0,     0,     0,
       0,  1077,     0,     0,   213,     0,     0,     0,     0,     0,
       0,     0,     0,   214,   215,   216,     0,     0,  1018,     0,
       0,     0,   217,   218,     0,     0,     0,     0,     0,     0,
     219,     0,     0,     0,     0,     0,   220,     0,     0,     0,
       0,     0,     0,     0,   221,     0,     0,     0,     0,     0,
     222,     0,     0,     0,   223,     0,     0,     0,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,     0,     0,     0,   226,     0,
       0,     0,     0,     0,   227,     0,     0,   228,     0,     0,
       0,     0,   229,     0,     0,   230,   231,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   232,     0,   233,
       0,     0,     0,     0,     0,   234,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   235,   236,
     237,     0,     0,     0,     0,     0,   238,   239,     0,   240,
       0,     0,   241,   242,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   243,
       0,     0,     0,     0,   244,   245,     0,     0,     0,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
      30,   256,     7,   211,   257,     0,     0,     0,   212,     0,
       0,     0,     0,     0,     0,  1077,     0,     0,   213,     0,
       0,     0,     0,     0,     0,     0,     0,   214,   215,   216,
       0,     0,  1018,     0,     0,     0,   217,   218,     0,     0,
       0,     0,     0,     0,   219,     0,     0,     0,     0,     0,
     220,   217,   218,     0,     0,     0,     0,     0,   221,     0,
       0,     0,     0,     0,   222,     0,     0,     0,   223,     0,
       0,     0,   224,   221,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,     0,     0,     0,   225,     0,     0,
       0,     0,   226,     0,     0,     0,     0,     0,   227,     0,
       0,   228,     0,     0,     0,     0,   229,     0,     0,   230,
     231,     0,     0,   363,     0,     0,     0,     0,     0,     0,
       0,   232,     0,   233,   230,     0,     0,     0,     0,   234,
       0,     0,     0,     0,     0,     0,   232,     0,   233,     0,
       0,     0,   235,   236,   237,     0,     0,     0,     0,     0,
     238,   239,     0,   240,     0,     0,   241,   242,     0,     0,
       0,     0,     0,     0,     0,   238,     0,     0,     0,     0,
       0,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   243,     0,     0,     0,     0,   244,   245,
       0,     0,     0,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,    30,   256,    80,   211,   257,     0,
       0,     0,   212,     0,     0,     0,     0,   254,   255,    30,
     256,     7,   213,   257,     0,     0,     0,     0,     0,     0,
       0,   214,   215,   216,     0,     0,     0,     0,     0,     0,
     217,   218,     0,     0,     0,     0,     0,     0,   219,     0,
       0,     0,     0,     0,   220,   217,   218,     0,     0,     0,
       0,     0,   221,     0,     0,     0,     0,     0,   222,     0,
       0,     0,   223,     0,     0,     0,   224,   221,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   223,     0,     0,
       0,   225,     0,     0,     0,     0,   226,     0,     0,     0,
       0,     0,   227,     0,     0,   228,     0,     0,     0,     0,
     229,     0,     0,   230,   231,     0,     0,   363,     0,     0,
       0,     0,     0,     0,     0,   232,     0,   233,   230,     0,
       0,     0,     0,   234,     0,     0,     0,     0,     0,     0,
     232,     0,   233,     0,     0,     0,   235,   236,   237,     0,
       0,     0,     0,     0,   238,   239,     0,   240,     0,     0,
     241,   242,     0,     0,     0,     0,     0,   368,     0,   238,
       0,     0,     0,     0,     0,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   243,     0,     0,
       0,     0,   244,   245,     0,     0,     0,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,    30,   256,
       7,   211,   257,     0,     0,     0,   212,     0,     0,     0,
       0,   254,   255,    30,   256,    80,   213,   257,     0,     0,
       0,     0,     0,     0,     0,   214,   215,   216,     0,     0,
       0,     0,     0,     0,   217,   218,     0,     0,     0,     0,
       0,     0,   219,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,     0,     0,     0,   221,     0,     0,     0,
       0,     0,   222,     0,     0,     0,   223,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,     0,     0,     0,     0,
     226,     0,     0,     0,     0,     0,   227,     0,     0,   228,
       0,     0,     0,     0,   229,     0,     0,   230,   231,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   232,
       0,   233,     0,     0,     0,     0,     0,   234,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,     0,     0,     0,     0,     0,   238,   239,
       0,   240,     0,     0,   241,   242,     0,     0,     0,     0,
       0,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   243,     0,     0,     0,     0,   244,   245,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,    30,   256,    80,   211,   257,     0,     0,     0,
     212,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     213,     0,     0,     0,     0,     0,     0,     0,     0,   214,
     215,   216,     0,     0,     0,     0,     0,     0,   217,   218,
       0,     0,     0,     0,     0,     0,   219,     0,     0,     0,
       0,     0,   220,     0,     0,     0,     0,     0,     0,     0,
     221,     0,     0,     0,     0,     0,   222,     0,     0,     0,
     223,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
       0,     0,     0,     0,   226,     0,     0,     0,     0,     0,
     227,     0,     0,   228,     0,     0,     0,     0,   229,     0,
       0,   230,   231,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   232,     0,   233,     0,     0,     0,     0,
       0,   234,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   235,   236,   237,     0,     0,     0,
       0,     0,   238,   239,     0,   240,     0,     0,   241,   242,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   243,     0,     0,     0,     0,
     244,   245,     0,     0,     0,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,    30,   256,     7,   211,
     257,     0,     0,     0,   212,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,     0,     0,     0,     0,
       0,     0,     0,   214,   215,   216,     0,     0,     0,     0,
       0,     0,   217,   218,     0,     0,     0,     0,     0,     0,
     219,     0,     0,     0,     0,     0,   220,     0,     0,     0,
       0,     0,     0,     0,   221,     0,     0,     0,     0,     0,
     222,     0,     0,     0,   223,     0,     0,     0,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,     0,     0,     0,   226,     0,
       0,     0,     0,     0,   227,     0,     0,   228,     0,     0,
       0,     0,   229,     0,     0,   230,   231,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   232,     0,   233,
       0,     0,     0,     0,     0,   234,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   235,   236,
     237,     0,     0,     0,     0,     0,   238,   239,     0,   240,
       0,     0,   241,   242,     0,     0,     0,     0,     0,     0,
       0,     0,   211,     0,     0,     0,     0,   212,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   213,     0,   243,
       0,     0,     0,     0,   244,   245,   214,   215,   216,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
      30,   256,    80,   219,   257,     0,     0,     0,     0,   220,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   222,     0,     0,     0,     0,     0,     0,
       0,   224,     0,     0,     0,     0,     0,   211,     0,     0,
       0,     0,   212,     0,     0,     0,   225,     0,     0,     0,
       0,   226,   213,     0,     0,     0,     0,     0,     0,     0,
     228,   214,   215,   216,     0,   229,     0,     0,     0,   231,
       0,     0,     0,     0,     0,     0,     0,     0,   219,     0,
       0,     0,     0,     0,   220,     0,     0,     0,   234,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   222,     0,
       0,   235,   236,   237,     0,     0,   224,     0,     0,     0,
     239,     0,     0,     0,     0,     0,   242,     0,     0,     0,
       0,   225,     0,     0,     0,     0,   226,     0,     0,     0,
       0,     0,     0,     0,     0,   228,     0,     0,     0,     0,
     229,     0,   243,     0,   231,     0,     0,   244,   245,     0,
       0,     0,     0,   246,   247,   248,   249,   250,   251,   252,
     253,     0,     0,   234,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   235,   236,   237,     0,
       0,     0,     0,     0,     0,   239,     0,     0,     0,     0,
       0,   242,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   243,     0,     0,
       0,     0,   244,   245,     0,     0,     0,     0,   246,   247,
     248,   249,   250,   251,   252,   253,     0,     0,     0,     0,
      80
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     3,     4,     5,    14,   177,    68,     9,
     405,   470,    28,    13,   190,    15,     7,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    28,    27,    28,    29,
     310,    28,    32,    28,    34,    35,    36,    37,    38,    39,
      40,    41,    42,   154,    44,    45,    46,    12,    48,    49,
      50,    12,    70,    28,    28,    12,    56,    57,    58,    59,
      60,     7,    12,    63,    42,   309,    66,   311,    68,    69,
      70,     9,     9,   230,    14,    42,     9,   372,     9,   123,
      63,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    58,    95,    59,    26,    98,    99,
     278,   101,   102,   103,   104,   105,   106,    15,   108,   109,
     110,   503,   112,   113,   114,   115,   116,    60,   118,   514,
      14,   121,   122,   123,   124,   125,   103,    15,   128,   129,
     130,   131,   132,   133,   152,   135,    14,   137,   173,   162,
     140,   141,   142,   647,   144,   145,    58,    26,     0,   149,
     150,   151,   152,     0,   154,    99,   156,    14,    52,   159,
     209,   161,   162,   163,   164,    68,   561,   167,    45,   169,
     170,   171,   172,   173,   143,   175,   176,   177,   178,   135,
      14,    28,   182,   183,   184,   185,   209,    70,   121,    14,
     190,   471,   192,   193,   372,   195,   196,    14,    14,   377,
      24,   209,    49,   203,    26,   205,   206,   207,   208,   209,
     210,    54,   369,   107,   371,   153,    63,   217,   209,   614,
      17,   177,    45,   518,    48,    54,   209,   227,   523,    24,
     230,   209,    45,    29,   172,   172,    96,    10,   238,   172,
     209,   172,   209,    68,   209,   209,   209,    44,   209,   427,
      86,    68,   209,    48,   210,   181,    68,   257,   258,   209,
     260,   261,   262,   209,   264,   209,   209,   267,   268,   209,
     270,   209,   209,   273,   274,   275,   209,   277,   209,   279,
     209,   281,   282,   283,   302,    45,   286,   287,   323,   289,
     290,   291,   292,   293,   294,   117,   153,   209,   298,   299,
     300,   209,   302,   303,   304,    60,   209,   699,   308,   309,
     310,   311,   312,   313,   314,   209,    45,   493,   115,   319,
     320,   209,   322,   323,   324,   121,   209,   327,   328,   329,
     209,   209,   209,   333,   334,   335,   336,   153,    20,   339,
     844,   341,   342,   343,   344,   141,    20,   143,    49,   209,
     350,   351,   209,   353,   354,   355,    56,   179,   358,   359,
     360,   583,   339,   363,   364,   365,   209,   367,   525,   369,
     370,   371,   372,   209,   374,   209,    64,   377,   138,   379,
     209,   381,   382,   383,   209,   209,   209,   387,   388,   389,
     390,    63,   209,   209,   648,   872,   209,   209,   398,   399,
     400,   401,    90,    85,   404,   405,   406,   407,   468,   138,
      99,    85,   209,   209,   209,   116,    51,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   115,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   110,   129,
     173,   441,    64,   185,   444,   445,   134,     5,   448,   209,
     116,   136,   452,    68,   209,   455,    86,   142,   458,   459,
     205,   206,   497,   463,   499,   465,    26,   209,   468,   469,
     470,   471,   650,   473,   474,   452,   209,   477,    70,   169,
     209,    41,   482,   705,   184,   596,   110,   487,   488,    49,
     490,   491,   951,   493,   494,    14,   750,   497,   498,   499,
     500,   183,   502,   503,    87,   717,   506,   507,   209,   183,
     510,    70,   134,    26,   514,   515,   993,   517,   518,   102,
     209,   209,   522,   523,   524,   525,   586,   209,    41,    14,
     377,   990,   167,   533,   534,   209,    49,   209,   538,   539,
     540,   101,   542,   209,   110,    62,   546,   547,   548,   549,
      63,   143,   552,   553,   554,   555,   556,   557,   558,   559,
     175,   561,   562,   563,   564,   565,   566,   125,    87,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   209,
     139,    81,   582,   583,   695,   209,   586,   209,    88,   589,
     107,   591,   175,   805,   209,   595,   596,   597,   598,   118,
     600,   578,    87,   603,   604,   350,   606,   607,   608,    97,
      97,   611,   612,   613,   614,   116,    57,   209,   595,   174,
     143,   104,   622,   623,   624,   123,   209,   627,   628,   629,
     630,   631,   278,   118,   634,   635,    82,    26,   638,   639,
     640,   641,    89,   209,   644,    29,    57,   647,   648,   209,
     209,   651,    41,   653,   209,    96,   656,   657,   658,    64,
      49,   661,   662,   663,   121,   776,   666,   667,   668,   188,
     187,   671,   952,   917,   674,   675,    70,   677,   678,    29,
     119,    57,   682,   683,   684,    96,    87,   687,   688,   123,
     209,    81,   209,   140,   121,   695,   209,   697,    88,   699,
     700,   701,   125,   188,   121,   705,   706,   707,   209,   209,
     157,   209,   101,   713,   714,   715,   716,   717,   143,   365,
      96,   209,   209,   723,   209,   166,   372,   727,   728,   134,
     730,   377,   732,   733,   978,   121,   736,   121,   738,   739,
     740,   741,   742,    37,   120,   139,   746,   747,   748,   749,
     750,   921,   209,   753,    57,   755,   756,   141,    55,   759,
     760,   207,   209,   209,    58,    59,   766,   767,   209,   769,
     181,   121,    69,   773,   774,   209,   776,   260,   778,   779,
     780,   427,   209,   121,   209,   133,   209,   787,   788,   789,
     790,   141,   209,    96,   195,   795,   207,   797,   209,   278,
     121,   209,   802,   803,   209,   805,   653,   177,   808,   809,
     107,   294,   101,   189,   661,   209,   816,   817,   818,   209,
     209,   821,   822,   209,   824,   209,   826,   589,   828,   829,
      57,   831,   832,   209,   834,    80,   852,   153,   838,    80,
     125,   841,   842,   153,   844,  1023,   846,   847,   185,   849,
     852,   851,   852,   853,    90,   101,   101,   103,   858,   209,
     101,   209,   130,  1041,   161,   108,   866,   867,   162,    96,
     159,   209,   872,   873,   874,   875,   876,   877,   181,     4,
     880,   881,   882,   883,   127,   885,   886,   887,   209,   949,
     890,   891,   908,   372,   894,   895,   896,   796,   377,   209,
     900,   125,  1080,   120,   904,   905,   908,   907,   908,   671,
     910,   908,   209,   908,   101,   209,   143,   917,   125,   565,
      87,   921,   922,   923,   209,   925,   926,   927,   928,   929,
     930,   931,   932,   908,   908,   102,   936,   937,   938,   182,
     940,   209,   779,   943,   278,   945,   845,    76,   427,   949,
     950,   951,   952,   109,   954,   955,   956,   957,   958,   959,
     130,   860,   962,   209,   209,   921,   209,   141,   209,   969,
     970,   971,   189,   973,   974,   162,   976,   977,   978,   174,
     980,   981,    36,   983,    17,   209,   986,   987,   988,   989,
     990,   991,   209,   993,   971,   995,   238,   997,   154,   999,
      14,    14,   209,   381,   650,   852,  1006,  1007,   175,  1009,
    1010,    44,   278,  1013,  1014,  1015,   853,   916,    64,  1019,
    1020,  1021,    73,  1023,  1024,  1025,  1026,  1027,    57,   143,
      84,   510,  1032,  1033,  1034,   209,  1036,  1037,   372,   209,
    1040,  1041,   209,   377,    90,   119,  1046,  1047,  1048,  1049,
    1050,  1051,   106,     1,     2,   278,   150,  1057,  1058,  1059,
    1060,   908,  1062,  1063,   287,  1065,  1066,    96,     2,   115,
     144,  1071,  1072,    87,    87,   261,  1076,    93,  1078,  1079,
    1080,    29,   821,  1083,  1084,   101,    34,   465,   134,    37,
      38,    39,   278,   427,    42,   209,   143,   713,   278,    93,
     119,   717,    50,    37,   118,   118,   372,   101,    42,   217,
      29,   377,    60,   238,   143,   209,    57,   153,   278,   227,
     116,   153,   309,   310,   311,   144,    60,   314,   101,   278,
     103,   373,   611,   209,   210,   209,   875,   876,   278,   153,
     153,    19,   365,    57,   623,   121,   278,    95,   631,   372,
     164,   164,    89,   101,   377,    96,   104,   880,   106,   278,
     108,   427,   278,   209,   351,   113,   114,     0,   355,   278,
     278,   650,   168,   209,   188,   188,    95,   209,   210,    57,
     163,    14,    96,   133,   150,   133,   372,   803,    66,   805,
     209,   377,   372,   209,   142,   209,   209,   377,   962,   133,
      41,   940,   143,   140,   427,   969,    90,   930,   142,   932,
     433,   144,   372,   209,   162,   209,   365,   377,    96,   405,
     157,   169,   445,   372,   150,   365,   209,   706,   377,   143,
     178,   417,   372,   365,   150,   230,   209,   377,   278,   278,
     372,   427,   190,   209,   178,   377,   365,   427,   196,   365,
     130,   131,   401,   372,    87,   363,   372,   365,   377,   209,
     983,   377,   196,   372,   372,   130,   131,   427,   377,   377,
     278,   112,   209,   175,   207,   116,   209,   611,   427,   387,
     388,   389,   390,   209,   471,   118,    57,   427,    57,   101,
     398,   399,   400,   209,   181,   427,   404,   152,   406,   448,
     295,   296,   153,   545,   166,    45,     8,   209,   427,   257,
     176,   427,   260,   107,   153,    56,   650,    28,   427,   427,
     153,    92,   209,   153,   153,    96,   365,    96,   570,   209,
     278,   164,   372,   372,   817,   818,     8,   377,   377,   163,
     108,    43,   565,   153,   209,   611,   294,   209,    50,   184,
     121,   574,    63,   153,   209,   188,   207,   365,   209,   127,
     308,   309,   310,   311,   372,   159,   314,   190,   207,   377,
     209,    43,   706,   368,   209,   561,   209,  1023,    50,   209,
     209,     4,    56,   378,   650,   209,   209,   427,   427,   384,
     385,    14,   153,   166,   342,  1041,   344,   207,    26,   209,
     883,   211,   644,   351,   181,   353,   354,   355,   557,   209,
     344,   153,   114,    41,   182,    57,   565,   365,   153,   427,
     354,    49,   165,    34,   372,   565,   613,   650,    39,   377,
     153,   153,   209,   565,  1080,    63,   209,   190,     4,    81,
     706,   209,   114,   176,   552,   553,   565,   572,   209,   565,
      61,   611,   577,     5,    96,   205,   209,   565,    57,   209,
    1023,   181,    28,    74,   650,     4,  1060,   209,   170,  1063,
     650,    94,   467,   101,   209,    14,    28,   100,  1041,   427,
     475,    57,   110,    49,   207,   207,   209,   209,   181,   209,
     650,   193,   734,   735,    46,   118,  1027,    96,   170,   122,
     111,   650,   611,  1066,   629,    81,   105,   209,   131,   185,
     650,   207,   135,   209,   207,   757,   209,  1080,   650,   644,
      96,   193,    78,   471,   190,   520,   565,  1058,   151,     3,
     181,   650,   640,   209,   650,    91,   196,   209,   663,    13,
     488,   650,   650,   209,  1023,   493,   706,    98,    22,   209,
     498,    25,   153,   194,   488,    94,   207,   565,   209,   507,
      34,   100,  1041,    27,    41,    39,   320,   178,   209,    33,
     194,   207,   205,   209,    38,   329,   209,   208,   209,   118,
      61,   209,    59,   122,   579,   209,   209,    61,    65,   584,
     585,   539,   131,    74,    34,   153,   135,   706,   209,    39,
      74,  1080,   196,    77,    87,   539,   153,     3,    72,     5,
     650,   650,   151,  1006,   609,   209,   153,   565,   566,   102,
     615,    61,   617,   208,   209,   620,  1019,   101,   143,   174,
     111,   185,   566,   741,    74,   148,    37,   111,   143,   143,
      41,   121,   650,   107,   153,   121,   123,   143,   168,   113,
       3,   128,   153,   130,   142,   173,    57,    96,    59,   159,
      13,   101,   136,   137,    65,   613,   185,    83,   142,    22,
     209,   111,    25,   121,   153,    73,   143,   672,   673,   171,
     153,    34,   143,   631,   165,   162,    39,    52,   143,  1023,
     877,   165,   149,   143,   121,   153,   148,   178,   143,   159,
     143,   143,   650,    42,   178,   158,   180,  1041,    61,    79,
     184,   185,   153,   148,   148,   153,    73,    93,    45,   143,
     143,    74,   123,    16,    77,   181,    26,   128,   209,   130,
     917,    26,   209,   153,   682,   209,   153,   148,   178,   153,
     688,   143,    16,   985,   143,   209,  1080,    16,   101,   143,
     153,    73,   143,   143,    80,   143,   143,  1023,   111,    19,
      79,   162,   103,    66,    23,   952,   852,   149,    69,   209,
     634,   828,   887,   945,   746,  1041,   986,   950,  1080,   635,
     886,   383,   629,   136,   137,   822,   628,   582,   736,   142,
     728,   978,   144,   579,    34,   141,    28,    28,   746,    28,
    1023,   796,    28,   789,   799,   606,   604,   502,   209,   867,
     866,   182,   165,   578,  1080,   113,   183,   852,  1041,   849,
     760,   576,   847,   353,   210,   178,   210,   180,   688,   714,
    1034,   184,   185,   802,   997,   684,   314,  1023,   108,   571,
     534,   195,   837,  1023,    58,   790,   684,   539,    -1,    -1,
     845,    -1,    -1,    -1,    -1,  1041,   209,  1080,    -1,    -1,
      -1,  1041,  1048,  1023,   859,   860,    -1,    -1,    -1,   817,
     818,    -1,    -1,    -1,  1023,    -1,    -1,    -1,    -1,    -1,
     828,  1041,    -1,  1023,   879,    -1,    -1,    -1,    -1,   884,
     838,  1023,  1041,    -1,  1080,    -1,    -1,    -1,    -1,    -1,
    1080,  1041,    -1,    -1,  1023,    -1,    -1,  1023,    -1,  1041,
      -1,    -1,    -1,    -1,  1023,  1023,    -1,    -1,    -1,    -1,
    1080,   916,  1041,    -1,     3,  1041,    -1,    -1,    -1,   877,
      -1,  1080,  1041,  1041,    13,   883,    -1,    -1,    -1,   887,
    1080,    -1,    -1,    22,    -1,    -1,    25,    -1,  1080,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      39,  1080,    -1,    -1,  1080,    -1,    -1,    -1,    -1,   917,
      -1,  1080,  1080,    -1,    -1,    -1,    -1,   925,    -1,    -1,
      -1,    -1,    61,  1023,  1023,    -1,    -1,    -1,    -1,    -1,
       3,   925,    -1,    -1,    -1,    74,    -1,   945,    77,    -1,
      13,  1041,  1041,    -1,   952,    -1,    -1,    -1,    -1,    22,
      -1,  1006,    25,    -1,    -1,  1023,    -1,    96,    -1,    -1,
      -1,    34,   101,    -1,  1019,    -1,    39,    -1,  1023,    -1,
     978,    -1,   111,  1041,    -1,    -1,    -1,     3,    -1,    -1,
    1080,  1080,    -1,    -1,    -1,    -1,  1041,    13,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,   137,    25,
      -1,    74,    -1,   142,    77,    -1,    -1,    -1,    34,    -1,
      -1,  1066,  1080,    39,    -1,  1023,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,  1080,   165,    -1,   101,    -1,
       3,    -1,    -1,  1041,    -1,    61,    -1,    -1,   111,   178,
      13,   180,    -1,    -1,    -1,    -1,   185,    -1,    74,    22,
      -1,    77,    25,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,   137,    13,    39,    -1,    -1,   142,
     209,    -1,  1080,    -1,    22,   101,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    34,     3,    61,    -1,
      -1,    39,   165,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    74,    -1,    -1,    77,   178,    22,   180,    -1,    25,
      -1,   137,   185,    61,    -1,    -1,   142,    -1,    34,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    74,    -1,   101,    77,
      -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,   111,   165,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,   178,    -1,   180,    -1,    -1,    -1,    74,   185,
      -1,    77,    -1,   111,   137,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,   137,
      -1,    -1,   165,    -1,   142,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   178,    -1,   180,    -1,    -1,
      -1,    -1,   185,    -1,    -1,    -1,    -1,   165,    -1,     6,
      -1,   137,    -1,    -1,    11,    -1,   142,    -1,    -1,    -1,
     178,    18,   180,    -1,    21,    -1,   209,   185,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    -1,    -1,    35,   165,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,   209,   178,    -1,   180,    -1,    53,    -1,    -1,   185,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,   104,    -1,    -1,
      -1,    -1,   109,    -1,    -1,   112,   113,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    22,   126,
      -1,    25,    -1,    -1,    -1,   132,    -1,    -1,    -1,   136,
      34,    -1,    -1,    -1,    -1,    39,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,   153,   154,    -1,   156,
      -1,    -1,   159,   160,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,   186,
      -1,    -1,    -1,    -1,   191,   192,    -1,    -1,    -1,    -1,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     6,   211,    -1,    -1,   111,    11,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      -1,    -1,    -1,   137,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,   165,    -1,    -1,    67,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    75,    -1,   178,    -1,   180,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,   104,    -1,    -1,    -1,   209,   109,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,   126,    -1,    -1,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
     153,   154,    -1,   156,    -1,    -1,   159,   160,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,   191,   192,
      -1,    -1,    -1,    -1,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,     6,   211,    -1,
      -1,    -1,    11,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,   104,    -1,    -1,    -1,    -1,
     109,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,   126,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,   153,   154,    -1,   156,    -1,    -1,
     159,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,
      -1,    -1,   191,   192,    -1,    -1,    -1,    -1,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,     6,   211,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,    -1,
      35,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,    -1,    -1,   109,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,   126,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,   154,
      -1,   156,    -1,    -1,   159,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   186,    -1,    -1,    -1,    -1,   191,   192,    -1,    -1,
      -1,    -1,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,     6,   211,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    -1,    -1,    35,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,   104,    -1,    -1,    -1,    -1,   109,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,   126,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,   153,   154,    -1,   156,    -1,    -1,   159,   160,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,
     191,   192,    -1,    -1,    -1,    -1,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     6,
     211,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    -1,    -1,    35,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,   104,    -1,    -1,
      -1,    -1,   109,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,   126,
      -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,   153,   154,    -1,   156,
      -1,    -1,   159,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,
      -1,    -1,    -1,    -1,   191,   192,    -1,    -1,    -1,    -1,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     6,   211,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    39,    40,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    75,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,   104,    -1,    -1,    -1,    -1,   109,    -1,    -1,   112,
     113,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,   126,   112,    -1,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,   126,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
     153,   154,    -1,   156,    -1,    -1,   159,   160,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,   191,   192,
      -1,    -1,    -1,    -1,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,     6,   211,    -1,
      -1,    -1,    11,    -1,    -1,    -1,    -1,   205,   206,   207,
     208,   209,    21,   211,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    39,    40,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    75,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,   104,    -1,    -1,    -1,    -1,
     109,    -1,    -1,   112,   113,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,   126,   112,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
     124,    -1,   126,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,   153,   154,    -1,   156,    -1,    -1,
     159,   160,    -1,    -1,    -1,    -1,    -1,   166,    -1,   153,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,
      -1,    -1,   191,   192,    -1,    -1,    -1,    -1,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,     6,   211,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,   205,   206,   207,   208,   209,    21,   211,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,    -1,    -1,   109,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,   126,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,   154,
      -1,   156,    -1,    -1,   159,   160,    -1,    -1,    -1,    -1,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   186,    -1,    -1,    -1,    -1,   191,   192,    -1,    -1,
      -1,    -1,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,     6,   211,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,   104,    -1,    -1,    -1,    -1,   109,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,   126,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,   153,   154,    -1,   156,    -1,    -1,   159,   160,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,
     191,   192,    -1,    -1,    -1,    -1,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     6,
     211,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,   104,    -1,    -1,
      -1,    -1,   109,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,   126,
      -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,   153,   154,    -1,   156,
      -1,    -1,   159,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,   186,
      -1,    -1,    -1,    -1,   191,   192,    30,    31,    32,    -1,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,    47,   211,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    11,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    95,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,    30,    31,    32,    -1,   109,    -1,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,   145,   146,   147,    -1,    -1,    75,    -1,    -1,    -1,
     154,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
     109,    -1,   186,    -1,   113,    -1,    -1,   191,   192,    -1,
      -1,    -1,    -1,   197,   198,   199,   200,   201,   202,   203,
     204,    -1,    -1,   132,    -1,   209,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,
      -1,    -1,   191,   192,    -1,    -1,    -1,    -1,   197,   198,
     199,   200,   201,   202,   203,   204,    -1,    -1,    -1,    -1,
     209
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    14,    87,   118,   153,   164,   188,   209,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   262,   267,   268,
     269,   270,   286,   287,   289,   290,   291,   299,   348,    82,
     207,   263,   264,   265,   348,   357,   359,   144,   348,   359,
      37,    58,    59,   162,   318,   348,   220,   221,   262,   348,
      37,    41,    57,    65,   128,   130,   276,   318,   348,   361,
     123,     0,   348,    10,   348,   348,    68,   175,   222,   223,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     209,   214,   218,   220,   262,   267,   268,   269,   270,   286,
     287,   289,   290,   299,   263,   121,   348,   181,   264,   357,
     348,   153,   320,   348,   359,   357,   181,   323,   348,   357,
     358,   125,   348,   356,   356,   359,   123,   348,   318,   143,
     143,   220,   262,   284,   357,   119,   185,    54,   277,   348,
     123,   276,   361,    59,   348,   359,   209,   214,    70,   139,
     266,   348,   177,    15,   257,   348,    20,    85,   183,   224,
     348,   223,   348,   263,   153,   249,   357,   360,   348,   320,
     323,   357,    90,   357,   358,   348,   174,   356,   284,   348,
     357,   362,   130,   131,   279,   280,   281,   348,   356,   348,
      24,    48,   285,   348,   276,   348,    36,    84,   106,    76,
      58,   348,   277,   348,   125,   348,   355,   348,   359,     4,
      14,    94,   100,   118,   122,   135,   151,   281,   300,   301,
     348,     6,    11,    21,    30,    31,    32,    39,    40,    47,
      53,    61,    67,    71,    75,    90,    95,   101,   104,   109,
     112,   113,   124,   126,   132,   145,   146,   147,   153,   154,
     156,   159,   160,   186,   191,   192,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   208,   211,   226,   253,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   341,   342,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   357,   360,   363,   365,   367,   368,   369,
     370,   371,   372,   266,   359,    73,    12,   254,   255,   348,
     257,   222,   348,   224,   348,   348,   219,   143,   210,   121,
      90,   153,   321,   322,   348,   360,   348,    64,   134,   288,
     348,   185,   282,   348,   282,   348,   348,   280,   281,   359,
      87,   102,   175,   283,   348,   285,   277,    78,    91,   362,
     101,   355,   348,   359,    45,   176,    56,    56,    49,   116,
     348,   353,   176,   353,   168,   353,   348,   348,   281,   300,
     301,   109,   154,   101,   325,   348,    98,   325,   166,   324,
     339,   340,   348,   165,   153,   221,   253,   348,   153,   357,
     190,   225,   244,   348,    57,    96,   323,     3,    13,    22,
      25,    34,    39,    61,    74,    77,   101,   111,   136,   137,
     142,   165,   178,   180,   185,   348,   364,   365,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   325,   326,   328,
     331,   332,   334,   342,   344,   345,   347,   348,   349,   351,
     352,   357,   365,   367,   369,   370,   371,   372,   348,   348,
     348,   153,   174,   348,   347,   348,   348,   348,   153,   348,
     348,   348,   323,   259,   260,   324,   324,   348,   255,   348,
     348,   348,   143,   357,   249,   321,   249,    42,   242,   243,
     348,   121,   348,   322,   357,   185,   348,   288,    62,   107,
     187,   348,   282,    55,    69,   107,   161,   288,    45,   348,
     283,   348,   348,    58,   320,   174,   348,     9,   153,   172,
     271,   272,   273,   348,   359,   148,   353,   348,   360,   303,
     357,   359,   360,   101,   348,   325,   324,   339,   348,    81,
      88,   348,   339,   348,   339,   340,   253,     8,    43,    50,
     114,   170,   193,   343,   348,   143,   143,   324,   245,   250,
     242,   348,   244,   324,   324,   121,   325,   325,   325,   325,
     101,   159,   136,   142,   325,   325,   325,   348,   351,   325,
     101,   348,   364,   365,   325,   348,   184,   101,    70,   143,
     336,   348,   153,   347,   348,   351,   292,   320,   348,   121,
     120,   189,   261,   348,    92,   121,   242,   143,   324,   257,
     348,   243,   321,   324,   359,   362,   181,   282,   302,   303,
     282,   119,   144,   275,   348,   121,   274,   348,   273,   153,
     348,   348,   367,   168,   348,   105,    81,    88,   324,   173,
     190,   348,   343,   181,    29,   121,   141,   251,   348,   153,
     357,   359,   363,    60,   240,   348,   253,   159,   325,   325,
      96,   351,   173,   348,   153,   359,    99,   337,   348,   253,
     348,   336,   221,   348,   143,    45,   295,   348,    52,   107,
     221,   348,   292,   320,   259,    86,   258,   348,   261,   324,
     324,   257,   185,    12,   256,   348,    83,   320,   219,    17,
      44,   115,   163,   317,   348,   373,   374,   375,   121,    27,
      33,    38,    72,   107,   113,   181,   348,   275,   272,   348,
     274,   348,   348,   297,   298,   324,   348,   367,    26,    41,
      49,   101,   304,   305,   306,   308,   309,   348,   360,   324,
     324,    81,   324,   367,   108,   127,   182,   252,   348,   348,
     251,   221,   245,   323,   153,    73,   194,   227,   228,   348,
     240,    96,   325,   221,   253,   153,     7,   338,   348,   337,
     143,   348,   143,   171,   348,   295,   348,   153,   293,   294,
     348,    52,   348,    17,    44,   348,   258,   348,   348,   256,
     324,   324,   348,   256,   348,   149,   181,    14,   319,   348,
     357,   366,    26,    41,    49,    63,   348,   317,   375,   143,
     121,   348,   302,   219,   348,   143,   121,   261,   348,   153,
     148,   159,   308,   348,   305,   348,   348,   348,   308,   309,
      81,   143,   143,   158,   141,   348,   252,   143,   143,    93,
     101,   246,   348,   253,   253,   229,   230,   231,   348,   357,
     348,   228,   348,   348,   325,   143,   143,    42,   153,   231,
     348,   338,   348,   348,   337,   153,   296,   348,   253,   121,
     348,   294,    79,   219,    26,   117,   179,   348,   319,   153,
     153,   148,   148,   271,   374,   150,   278,   348,   297,   324,
      63,   307,   311,   348,   308,   323,   323,    73,    93,    45,
     247,   348,   246,   143,   196,   241,   348,   121,   348,   181,
     230,   357,   324,   232,   239,   357,   338,   297,   152,   348,
     296,   143,   293,   217,   218,   262,   291,   299,   348,   354,
     319,    16,    26,    26,   324,   297,   153,   153,   129,   169,
     279,   348,   278,   143,   148,   110,   310,   348,   311,   348,
     247,   348,   247,   360,   324,   150,   248,   348,   247,   348,
     323,   324,   348,   241,   229,   153,   143,   143,   133,   233,
     348,   143,    87,   195,   218,   286,   287,   289,   290,   299,
      16,    16,   143,   143,   297,   249,   348,    80,   101,   348,
     376,   359,   348,   310,   348,   348,   248,   248,   153,   348,
     248,   348,   348,   247,   232,    73,   257,   348,   233,   243,
     321,   376,   143,   143,    80,   376,   348,   320,   249,   248,
     143,   253,    89,   140,   157,   234,   235,   348,   348,   243,
     310,    45,   138,   312,   313,   348,   143,    18,    35,   136,
     236,   238,   324,   348,   235,   348,    87,   102,     5,    28,
      46,   101,   103,   315,   348,   348,   313,   348,    19,    79,
     236,   348,   348,   348,    19,    66,   236,   238,   325,   326,
     331,   334,   348,    64,    90,   115,   134,   314,   348,   314,
     103,    97,   316,   348,   348,   315,    96,   107,   159,    23,
     348,   314,   316,    51,   167,   348,   316,    18,   237,   238,
     348,    66,   348,   237,   238
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   212,   213,   214,   214,   214,   214,   215,   215,   215,
     215,   215,   215,   216,   216,   216,   216,   217,   217,   217,
     217,   218,   218,   218,   219,   219,   220,   220,   220,   220,
     221,   222,   222,   223,   223,   223,   224,   224,   224,   224,
     224,   225,   225,   226,   227,   227,   228,   228,   228,   229,
     229,   230,   230,   230,   231,   232,   233,   233,   233,   233,
     234,   234,   234,   235,   235,   235,   235,   235,   236,   236,
     236,   236,   237,   237,   237,   237,   238,   238,   238,   238,
     238,   239,   239,   240,   240,   240,   240,   241,   241,   241,
     241,   242,   242,   243,   243,   243,   244,   244,   244,   245,
     245,   245,   245,   246,   246,   246,   246,   246,   247,   247,
     247,   247,   248,   248,   248,   248,   249,   249,   250,   250,
     251,   251,   251,   251,   251,   252,   252,   252,   252,   252,
     252,   252,   253,   253,   254,   254,   255,   255,   255,   255,
     255,   256,   256,   256,   256,   257,   257,   257,   257,   258,
     258,   258,   258,   258,   259,   259,   260,   261,   261,   261,
     261,   261,   262,   262,   262,   262,   262,   263,   263,   264,
     264,   264,   265,   266,   266,   266,   266,   266,   267,   267,
     267,   267,   268,   268,   268,   269,   269,   269,   270,   270,
     270,   270,   271,   271,   272,   272,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   274,   274,   274,
     274,   275,   275,   275,   275,   275,   276,   276,   276,   276,
     276,   276,   277,   277,   277,   277,   277,   278,   278,   278,
     278,   278,   279,   279,   279,   280,   280,   280,   280,   280,
     281,   281,   281,   281,   281,   281,   282,   282,   282,   282,
     283,   283,   283,   283,   283,   284,   285,   285,   285,   285,
     286,   286,   286,   287,   287,   287,   288,   288,   288,   288,
     288,   289,   289,   289,   290,   290,   290,   291,   292,   292,
     292,   292,   292,   293,   293,   294,   294,   294,   295,   295,
     295,   295,   295,   296,   296,   296,   296,   297,   297,   298,
     299,   299,   299,   299,   300,   300,   300,   300,   300,   300,
     300,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     302,   302,   303,   304,   304,   305,   305,   306,   307,   307,
     308,   308,   308,   308,   309,   309,   309,   309,   309,   309,
     310,   310,   310,   311,   311,   311,   311,   312,   312,   313,
     313,   313,   313,   313,   313,   313,   314,   314,   314,   314,
     314,   314,   314,   315,   315,   315,   315,   315,   316,   316,
     316,   316,   316,   317,   317,   317,   317,   317,   318,   318,
     318,   318,   319,   319,   319,   319,   319,   319,   320,   320,
     320,   320,   321,   321,   322,   322,   322,   322,   323,   323,
     324,   324,   324,   324,   324,   324,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   326,   326,
     326,   326,   327,   327,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   329,   329,   329,   329,   330,   330,   331,
     331,   331,   331,   331,   332,   332,   332,   332,   332,   332,
     333,   333,   334,   334,   334,   335,   335,   336,   336,   336,
     336,   337,   337,   337,   337,   338,   338,   338,   338,   338,
     339,   339,   339,   339,   340,   340,   340,   341,   341,   341,
     341,   341,   341,   342,   342,   342,   343,   343,   343,   343,
     343,   343,   343,   343,   344,   344,   344,   345,   345,   345,
     346,   346,   346,   347,   347,   347,   348,   348,   349,   349,
     349,   349,   350,   350,   351,   351,   351,   352,   352,   352,
     353,   353,   353,   353,   354,   354,   354,   354,   355,   355,
     355,   355,   356,   356,   356,   356,   357,   357,   357,   358,
     358,   358,   358,   359,   360,   360,   361,   361,   361,   361,
     361,   361,   362,   363,   363,   364,   364,   364,   364,   364,
     364,   364,   364,   365,   365,   365,   365,   366,   367,   367,
     367,   367,   368,   368,   369,   369,   369,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     373,   373,   374,   374,   375,   375,   375,   375,   375,   375,
     376,   376,   376,   376,   376
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     2,     2,     1,     1,     3,     3,     2,     2,
       4,     1,     3,     7,     2,     2,     1,     1,     1,     2,
       2,     1,     0,     1,     1,     0,     2,     2,     2,     1,
       3,     5,     2,     2,     1,     4,     3,     0,     2,     2,
       2,     5,     0,     1,     1,     1,     2,     2,     1,     2,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     0,     4,     0,     2,     2,     2,     0,     2,
       2,     1,     0,     2,     2,     2,     2,     2,     2,     6,
       8,     7,     7,     3,     2,     0,     2,     2,     2,     0,
       2,     2,     4,     0,     2,     2,     1,     3,     2,     0,
       1,     1,     3,     2,     2,     1,     2,     1,     1,     0,
       2,     2,     4,     2,     1,     0,     2,     4,     4,     2,
       2,     2,     0,     2,     2,     3,     0,     2,     2,     2,
       2,     0,     2,     2,     1,     3,     3,     1,     1,     0,
       2,     2,     2,     3,     0,     2,     2,     1,     3,     5,
       2,     2,     2,     1,     1,     0,     2,     2,     9,    10,
       2,     2,    11,     2,     2,    11,     2,     2,     9,    11,
       2,     2,     1,     0,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     1,     0,     2,
       2,     1,     1,     0,     2,     2,     3,     3,     3,     0,
       2,     2,     3,     3,     0,     2,     2,     2,     2,     0,
       2,     2,     1,     1,     0,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     2,     2,     1,     0,     2,     2,
       1,     1,     1,     2,     2,     1,     1,     1,     2,     2,
       4,     2,     2,     6,     2,     2,     1,     1,     0,     2,
       2,     4,     2,     2,     5,     2,     2,     7,     2,     3,
       3,     2,     2,     1,     3,     3,     2,     2,     5,     7,
       0,     2,     2,     4,     0,     2,     2,     1,     3,     2,
       9,     8,     2,     2,     3,     5,     3,     3,     1,     2,
       2,     3,     1,     2,     2,     1,     2,     2,     2,     2,
       1,     3,     3,     3,     0,     1,     2,     1,     2,     0,
       5,     0,     2,     2,     2,     2,     1,     1,     2,     2,
       5,     2,     2,     2,     0,     2,     2,     1,     0,     2,
       2,     2,     3,     3,     2,     2,     2,     2,     1,     1,
       2,     2,     2,     2,     3,     0,     2,     2,     2,     2,
       0,     2,     2,     2,     2,     2,     2,     2,     1,     0,
       2,     2,     3,     4,     4,     0,     2,     2,     3,     0,
       2,     2,     1,     3,     3,     5,     2,     2,     1,     0,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     6,     2,
       2,     2,     1,     1,     2,     2,     2,     3,     4,     1,
       1,     2,     2,     1,     3,     3,     4,     3,     3,     6,
       6,     4,     2,     2,     4,     3,     6,     5,     2,     2,
       5,     6,     5,     2,     2,     5,     7,     1,     0,     2,
       2,     5,     0,     2,     2,     4,     2,     0,     2,     2,
       1,     2,     2,     2,     4,     2,     2,     3,     3,     3,
       3,     3,     3,     6,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     4,     2,     2,     4,     2,     2,
       1,     1,     1,     1,     2,     2,     1,     2,     1,     1,
       2,     2,     1,     1,     1,     2,     2,     1,     2,     2,
       1,     0,     2,     2,     1,     1,     1,     1,     3,     0,
       2,     2,     2,     0,     2,     2,     1,     2,     2,     2,
       1,     2,     2,     1,     1,     3,     1,     1,     1,     0,
       2,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     0,     2,     2,     1,     1,     1,
       2,     2,     1,     1,     4,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     0,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     2,     2,
       1,     0,     1,     3,     6,     5,     6,     7,     2,     2,
       1,     2,     0,     2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = SQL_FF_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == SQL_FF_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use SQL_FF_error or SQL_FF_UNDEF. */
#define YYERRCODE SQL_FF_UNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if FF_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined FF_LTYPE_IS_TRIVIAL && FF_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Program* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (result);
  YY_USE (scanner);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Program* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, result, scanner);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, Program* result, yyscan_t scanner)
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !FF_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !FF_DEBUG */


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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
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
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Program* result, yyscan_t scanner)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (result);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_INTLITERAL: /* INTLITERAL  */
#line 448 "bison.y"
           {
	 
}
#line 3135 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATLITERAL: /* FLOATLITERAL  */
#line 448 "bison.y"
           {
	 
}
#line 3143 "bison_parser.cpp"
        break;

    case YYSYMBOL_IDENTIFIER: /* IDENTIFIER  */
#line 444 "bison.y"
           {
	free( (((*yyvaluep).sval)) );
}
#line 3151 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRINGLITERAL: /* STRINGLITERAL  */
#line 444 "bison.y"
           {
	free( (((*yyvaluep).sval)) );
}
#line 3159 "bison_parser.cpp"
        break;

    case YYSYMBOL_COMMENTLITERAL: /* COMMENTLITERAL  */
#line 444 "bison.y"
           {
	free( (((*yyvaluep).sval)) );
}
#line 3167 "bison_parser.cpp"
        break;

    case YYSYMBOL_program: /* program  */
#line 452 "bison.y"
            { if(((*yyvaluep).program_t)!=NULL)((*yyvaluep).program_t)->deep_delete(); }
#line 3173 "bison_parser.cpp"
        break;

    case YYSYMBOL_stmtlist: /* stmtlist  */
#line 452 "bison.y"
            { if(((*yyvaluep).stmtlist_t)!=NULL)((*yyvaluep).stmtlist_t)->deep_delete(); }
#line 3179 "bison_parser.cpp"
        break;

    case YYSYMBOL_stmt: /* stmt  */
#line 452 "bison.y"
            { if(((*yyvaluep).stmt_t)!=NULL)((*yyvaluep).stmt_t)->deep_delete(); }
#line 3185 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_stmt: /* create_stmt  */
#line 452 "bison.y"
            { if(((*yyvaluep).create_stmt_t)!=NULL)((*yyvaluep).create_stmt_t)->deep_delete(); }
#line 3191 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_stmt: /* drop_stmt  */
#line 452 "bison.y"
            { if(((*yyvaluep).drop_stmt_t)!=NULL)((*yyvaluep).drop_stmt_t)->deep_delete(); }
#line 3197 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_stmt: /* alter_stmt  */
#line 452 "bison.y"
            { if(((*yyvaluep).alter_stmt_t)!=NULL)((*yyvaluep).alter_stmt_t)->deep_delete(); }
#line 3203 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_stmt: /* select_stmt  */
#line 452 "bison.y"
            { if(((*yyvaluep).select_stmt_t)!=NULL)((*yyvaluep).select_stmt_t)->deep_delete(); }
#line 3209 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_parens: /* select_with_parens  */
#line 452 "bison.y"
            { if(((*yyvaluep).select_with_parens_t)!=NULL)((*yyvaluep).select_with_parens_t)->deep_delete(); }
#line 3215 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_parens: /* select_no_parens  */
#line 452 "bison.y"
            { if(((*yyvaluep).select_no_parens_t)!=NULL)((*yyvaluep).select_no_parens_t)->deep_delete(); }
#line 3221 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause_list: /* select_clause_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).select_clause_list_t)!=NULL)((*yyvaluep).select_clause_list_t)->deep_delete(); }
#line 3227 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).select_clause_t)!=NULL)((*yyvaluep).select_clause_t)->deep_delete(); }
#line 3233 "bison_parser.cpp"
        break;

    case YYSYMBOL_combine_clause: /* combine_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).combine_clause_t)!=NULL)((*yyvaluep).combine_clause_t)->deep_delete(); }
#line 3239 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_from_clause_t)!=NULL)((*yyvaluep).opt_from_clause_t)->deep_delete(); }
#line 3245 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_target: /* select_target  */
#line 452 "bison.y"
            { if(((*yyvaluep).select_target_t)!=NULL)((*yyvaluep).select_target_t)->deep_delete(); }
#line 3251 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_window_clause: /* opt_window_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_window_clause_t)!=NULL)((*yyvaluep).opt_window_clause_t)->deep_delete(); }
#line 3257 "bison_parser.cpp"
        break;

    case YYSYMBOL_window_clause: /* window_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).window_clause_t)!=NULL)((*yyvaluep).window_clause_t)->deep_delete(); }
#line 3263 "bison_parser.cpp"
        break;

    case YYSYMBOL_window_def_list: /* window_def_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).window_def_list_t)!=NULL)((*yyvaluep).window_def_list_t)->deep_delete(); }
#line 3269 "bison_parser.cpp"
        break;

    case YYSYMBOL_window_def: /* window_def  */
#line 452 "bison.y"
            { if(((*yyvaluep).window_def_t)!=NULL)((*yyvaluep).window_def_t)->deep_delete(); }
#line 3275 "bison_parser.cpp"
        break;

    case YYSYMBOL_window_name: /* window_name  */
#line 452 "bison.y"
            { if(((*yyvaluep).window_name_t)!=NULL)((*yyvaluep).window_name_t)->deep_delete(); }
#line 3281 "bison_parser.cpp"
        break;

    case YYSYMBOL_window: /* window  */
#line 452 "bison.y"
            { if(((*yyvaluep).window_t)!=NULL)((*yyvaluep).window_t)->deep_delete(); }
#line 3287 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_partition: /* opt_partition  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_partition_t)!=NULL)((*yyvaluep).opt_partition_t)->deep_delete(); }
#line 3293 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_frame_clause_t)!=NULL)((*yyvaluep).opt_frame_clause_t)->deep_delete(); }
#line 3299 "bison_parser.cpp"
        break;

    case YYSYMBOL_range_or_rows: /* range_or_rows  */
#line 452 "bison.y"
            { if(((*yyvaluep).range_or_rows_t)!=NULL)((*yyvaluep).range_or_rows_t)->deep_delete(); }
#line 3305 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound_start: /* frame_bound_start  */
#line 452 "bison.y"
            { if(((*yyvaluep).frame_bound_start_t)!=NULL)((*yyvaluep).frame_bound_start_t)->deep_delete(); }
#line 3311 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound_end: /* frame_bound_end  */
#line 452 "bison.y"
            { if(((*yyvaluep).frame_bound_end_t)!=NULL)((*yyvaluep).frame_bound_end_t)->deep_delete(); }
#line 3317 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 452 "bison.y"
            { if(((*yyvaluep).frame_bound_t)!=NULL)((*yyvaluep).frame_bound_t)->deep_delete(); }
#line 3323 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exist_window_name: /* opt_exist_window_name  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_exist_window_name_t)!=NULL)((*yyvaluep).opt_exist_window_name_t)->deep_delete(); }
#line 3329 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group_clause: /* opt_group_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_group_clause_t)!=NULL)((*yyvaluep).opt_group_clause_t)->deep_delete(); }
#line 3335 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having_clause: /* opt_having_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_having_clause_t)!=NULL)((*yyvaluep).opt_having_clause_t)->deep_delete(); }
#line 3341 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where_clause: /* opt_where_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_where_clause_t)!=NULL)((*yyvaluep).opt_where_clause_t)->deep_delete(); }
#line 3347 "bison_parser.cpp"
        break;

    case YYSYMBOL_where_clause: /* where_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).where_clause_t)!=NULL)((*yyvaluep).where_clause_t)->deep_delete(); }
#line 3353 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).from_clause_t)!=NULL)((*yyvaluep).from_clause_t)->deep_delete(); }
#line 3359 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 452 "bison.y"
            { if(((*yyvaluep).table_ref_t)!=NULL)((*yyvaluep).table_ref_t)->deep_delete(); }
#line 3365 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index: /* opt_index  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_index_t)!=NULL)((*yyvaluep).opt_index_t)->deep_delete(); }
#line 3371 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_on: /* opt_on  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_on_t)!=NULL)((*yyvaluep).opt_on_t)->deep_delete(); }
#line 3377 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_using: /* opt_using  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_using_t)!=NULL)((*yyvaluep).opt_using_t)->deep_delete(); }
#line 3383 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name_list: /* column_name_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).column_name_list_t)!=NULL)((*yyvaluep).column_name_list_t)->deep_delete(); }
#line 3389 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_prefix: /* opt_table_prefix  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_table_prefix_t)!=NULL)((*yyvaluep).opt_table_prefix_t)->deep_delete(); }
#line 3395 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_op: /* join_op  */
#line 452 "bison.y"
            { if(((*yyvaluep).join_op_t)!=NULL)((*yyvaluep).join_op_t)->deep_delete(); }
#line 3401 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_join_type_t)!=NULL)((*yyvaluep).opt_join_type_t)->deep_delete(); }
#line 3407 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).expr_list_t)!=NULL)((*yyvaluep).expr_list_t)->deep_delete(); }
#line 3413 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit_clause: /* opt_limit_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_limit_clause_t)!=NULL)((*yyvaluep).opt_limit_clause_t)->deep_delete(); }
#line 3419 "bison_parser.cpp"
        break;

    case YYSYMBOL_limit_clause: /* limit_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).limit_clause_t)!=NULL)((*yyvaluep).limit_clause_t)->deep_delete(); }
#line 3425 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit_row_count: /* opt_limit_row_count  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_limit_row_count_t)!=NULL)((*yyvaluep).opt_limit_row_count_t)->deep_delete(); }
#line 3431 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_clause: /* opt_order_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_order_clause_t)!=NULL)((*yyvaluep).opt_order_clause_t)->deep_delete(); }
#line 3437 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_nulls: /* opt_order_nulls  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_order_nulls_t)!=NULL)((*yyvaluep).opt_order_nulls_t)->deep_delete(); }
#line 3443 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_item_list: /* order_item_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).order_item_list_t)!=NULL)((*yyvaluep).order_item_list_t)->deep_delete(); }
#line 3449 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_item: /* order_item  */
#line 452 "bison.y"
            { if(((*yyvaluep).order_item_t)!=NULL)((*yyvaluep).order_item_t)->deep_delete(); }
#line 3455 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_behavior: /* opt_order_behavior  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_order_behavior_t)!=NULL)((*yyvaluep).opt_order_behavior_t)->deep_delete(); }
#line 3461 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_with_clause_t)!=NULL)((*yyvaluep).opt_with_clause_t)->deep_delete(); }
#line 3467 "bison_parser.cpp"
        break;

    case YYSYMBOL_cte_table_list: /* cte_table_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).cte_table_list_t)!=NULL)((*yyvaluep).cte_table_list_t)->deep_delete(); }
#line 3473 "bison_parser.cpp"
        break;

    case YYSYMBOL_cte_table: /* cte_table  */
#line 452 "bison.y"
            { if(((*yyvaluep).cte_table_t)!=NULL)((*yyvaluep).cte_table_t)->deep_delete(); }
#line 3479 "bison_parser.cpp"
        break;

    case YYSYMBOL_cte_table_name: /* cte_table_name  */
#line 452 "bison.y"
            { if(((*yyvaluep).cte_table_name_t)!=NULL)((*yyvaluep).cte_table_name_t)->deep_delete(); }
#line 3485 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all_or_distinct: /* opt_all_or_distinct  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_all_or_distinct_t)!=NULL)((*yyvaluep).opt_all_or_distinct_t)->deep_delete(); }
#line 3491 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_table_stmt: /* create_table_stmt  */
#line 452 "bison.y"
            { if(((*yyvaluep).create_table_stmt_t)!=NULL)((*yyvaluep).create_table_stmt_t)->deep_delete(); }
#line 3497 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_index_stmt: /* create_index_stmt  */
#line 452 "bison.y"
            { if(((*yyvaluep).create_index_stmt_t)!=NULL)((*yyvaluep).create_index_stmt_t)->deep_delete(); }
#line 3503 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_trigger_stmt: /* create_trigger_stmt  */
#line 452 "bison.y"
            { if(((*yyvaluep).create_trigger_stmt_t)!=NULL)((*yyvaluep).create_trigger_stmt_t)->deep_delete(); }
#line 3509 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_view_stmt: /* create_view_stmt  */
#line 452 "bison.y"
            { if(((*yyvaluep).create_view_stmt_t)!=NULL)((*yyvaluep).create_view_stmt_t)->deep_delete(); }
#line 3515 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_option_list: /* opt_table_option_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_table_option_list_t)!=NULL)((*yyvaluep).opt_table_option_list_t)->deep_delete(); }
#line 3521 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_option_list: /* table_option_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).table_option_list_t)!=NULL)((*yyvaluep).table_option_list_t)->deep_delete(); }
#line 3527 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_option: /* table_option  */
#line 452 "bison.y"
            { if(((*yyvaluep).table_option_t)!=NULL)((*yyvaluep).table_option_t)->deep_delete(); }
#line 3533 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_op_comma: /* opt_op_comma  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_op_comma_t)!=NULL)((*yyvaluep).opt_op_comma_t)->deep_delete(); }
#line 3539 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_ignore_or_replace: /* opt_ignore_or_replace  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_ignore_or_replace_t)!=NULL)((*yyvaluep).opt_ignore_or_replace_t)->deep_delete(); }
#line 3545 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_view_algorithm: /* opt_view_algorithm  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_view_algorithm_t)!=NULL)((*yyvaluep).opt_view_algorithm_t)->deep_delete(); }
#line 3551 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_sql_security: /* opt_sql_security  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_sql_security_t)!=NULL)((*yyvaluep).opt_sql_security_t)->deep_delete(); }
#line 3557 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_option: /* opt_index_option  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_index_option_t)!=NULL)((*yyvaluep).opt_index_option_t)->deep_delete(); }
#line 3563 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_extra_option: /* opt_extra_option  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_extra_option_t)!=NULL)((*yyvaluep).opt_extra_option_t)->deep_delete(); }
#line 3569 "bison_parser.cpp"
        break;

    case YYSYMBOL_index_algorithm_option: /* index_algorithm_option  */
#line 452 "bison.y"
            { if(((*yyvaluep).index_algorithm_option_t)!=NULL)((*yyvaluep).index_algorithm_option_t)->deep_delete(); }
#line 3575 "bison_parser.cpp"
        break;

    case YYSYMBOL_lock_option: /* lock_option  */
#line 452 "bison.y"
            { if(((*yyvaluep).lock_option_t)!=NULL)((*yyvaluep).lock_option_t)->deep_delete(); }
#line 3581 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_op_equal: /* opt_op_equal  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_op_equal_t)!=NULL)((*yyvaluep).opt_op_equal_t)->deep_delete(); }
#line 3587 "bison_parser.cpp"
        break;

    case YYSYMBOL_trigger_events: /* trigger_events  */
#line 452 "bison.y"
            { if(((*yyvaluep).trigger_events_t)!=NULL)((*yyvaluep).trigger_events_t)->deep_delete(); }
#line 3593 "bison_parser.cpp"
        break;

    case YYSYMBOL_trigger_name: /* trigger_name  */
#line 452 "bison.y"
            { if(((*yyvaluep).trigger_name_t)!=NULL)((*yyvaluep).trigger_name_t)->deep_delete(); }
#line 3599 "bison_parser.cpp"
        break;

    case YYSYMBOL_trigger_action_time: /* trigger_action_time  */
#line 452 "bison.y"
            { if(((*yyvaluep).trigger_action_time_t)!=NULL)((*yyvaluep).trigger_action_time_t)->deep_delete(); }
#line 3605 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_index_stmt: /* drop_index_stmt  */
#line 452 "bison.y"
            { if(((*yyvaluep).drop_index_stmt_t)!=NULL)((*yyvaluep).drop_index_stmt_t)->deep_delete(); }
#line 3611 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_table_stmt: /* drop_table_stmt  */
#line 452 "bison.y"
            { if(((*yyvaluep).drop_table_stmt_t)!=NULL)((*yyvaluep).drop_table_stmt_t)->deep_delete(); }
#line 3617 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_restrict_or_cascade: /* opt_restrict_or_cascade  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_restrict_or_cascade_t)!=NULL)((*yyvaluep).opt_restrict_or_cascade_t)->deep_delete(); }
#line 3623 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_trigger_stmt: /* drop_trigger_stmt  */
#line 452 "bison.y"
            { if(((*yyvaluep).drop_trigger_stmt_t)!=NULL)((*yyvaluep).drop_trigger_stmt_t)->deep_delete(); }
#line 3629 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_view_stmt: /* drop_view_stmt  */
#line 452 "bison.y"
            { if(((*yyvaluep).drop_view_stmt_t)!=NULL)((*yyvaluep).drop_view_stmt_t)->deep_delete(); }
#line 3635 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_stmt: /* insert_stmt  */
#line 452 "bison.y"
            { if(((*yyvaluep).insert_stmt_t)!=NULL)((*yyvaluep).insert_stmt_t)->deep_delete(); }
#line 3641 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_rest: /* insert_rest  */
#line 452 "bison.y"
            { if(((*yyvaluep).insert_rest_t)!=NULL)((*yyvaluep).insert_rest_t)->deep_delete(); }
#line 3647 "bison_parser.cpp"
        break;

    case YYSYMBOL_super_values_list: /* super_values_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).super_values_list_t)!=NULL)((*yyvaluep).super_values_list_t)->deep_delete(); }
#line 3653 "bison_parser.cpp"
        break;

    case YYSYMBOL_values_list: /* values_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).values_list_t)!=NULL)((*yyvaluep).values_list_t)->deep_delete(); }
#line 3659 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_on_conflict: /* opt_on_conflict  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_on_conflict_t)!=NULL)((*yyvaluep).opt_on_conflict_t)->deep_delete(); }
#line 3665 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_conflict_expr: /* opt_conflict_expr  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_conflict_expr_t)!=NULL)((*yyvaluep).opt_conflict_expr_t)->deep_delete(); }
#line 3671 "bison_parser.cpp"
        break;

    case YYSYMBOL_indexed_column_list: /* indexed_column_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).indexed_column_list_t)!=NULL)((*yyvaluep).indexed_column_list_t)->deep_delete(); }
#line 3677 "bison_parser.cpp"
        break;

    case YYSYMBOL_indexed_column: /* indexed_column  */
#line 452 "bison.y"
            { if(((*yyvaluep).indexed_column_t)!=NULL)((*yyvaluep).indexed_column_t)->deep_delete(); }
#line 3683 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_stmt: /* update_stmt  */
#line 452 "bison.y"
            { if(((*yyvaluep).update_stmt_t)!=NULL)((*yyvaluep).update_stmt_t)->deep_delete(); }
#line 3689 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 452 "bison.y"
            { if(((*yyvaluep).alter_action_t)!=NULL)((*yyvaluep).alter_action_t)->deep_delete(); }
#line 3695 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_constant_action: /* alter_constant_action  */
#line 452 "bison.y"
            { if(((*yyvaluep).alter_constant_action_t)!=NULL)((*yyvaluep).alter_constant_action_t)->deep_delete(); }
#line 3701 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def_list: /* column_def_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).column_def_list_t)!=NULL)((*yyvaluep).column_def_list_t)->deep_delete(); }
#line 3707 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 452 "bison.y"
            { if(((*yyvaluep).column_def_t)!=NULL)((*yyvaluep).column_def_t)->deep_delete(); }
#line 3713 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraint_list: /* opt_column_constraint_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_column_constraint_list_t)!=NULL)((*yyvaluep).opt_column_constraint_list_t)->deep_delete(); }
#line 3719 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint_list: /* column_constraint_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).column_constraint_list_t)!=NULL)((*yyvaluep).column_constraint_list_t)->deep_delete(); }
#line 3725 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 452 "bison.y"
            { if(((*yyvaluep).column_constraint_t)!=NULL)((*yyvaluep).column_constraint_t)->deep_delete(); }
#line 3731 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_reference_clause: /* opt_reference_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_reference_clause_t)!=NULL)((*yyvaluep).opt_reference_clause_t)->deep_delete(); }
#line 3737 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_check: /* opt_check  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_check_t)!=NULL)((*yyvaluep).opt_check_t)->deep_delete(); }
#line 3743 "bison_parser.cpp"
        break;

    case YYSYMBOL_constraint_type: /* constraint_type  */
#line 452 "bison.y"
            { if(((*yyvaluep).constraint_type_t)!=NULL)((*yyvaluep).constraint_type_t)->deep_delete(); }
#line 3749 "bison_parser.cpp"
        break;

    case YYSYMBOL_reference_clause: /* reference_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).reference_clause_t)!=NULL)((*yyvaluep).reference_clause_t)->deep_delete(); }
#line 3755 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_foreign_key: /* opt_foreign_key  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_foreign_key_t)!=NULL)((*yyvaluep).opt_foreign_key_t)->deep_delete(); }
#line 3761 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_foreign_key_actions: /* opt_foreign_key_actions  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_foreign_key_actions_t)!=NULL)((*yyvaluep).opt_foreign_key_actions_t)->deep_delete(); }
#line 3767 "bison_parser.cpp"
        break;

    case YYSYMBOL_foreign_key_actions: /* foreign_key_actions  */
#line 452 "bison.y"
            { if(((*yyvaluep).foreign_key_actions_t)!=NULL)((*yyvaluep).foreign_key_actions_t)->deep_delete(); }
#line 3773 "bison_parser.cpp"
        break;

    case YYSYMBOL_key_actions: /* key_actions  */
#line 452 "bison.y"
            { if(((*yyvaluep).key_actions_t)!=NULL)((*yyvaluep).key_actions_t)->deep_delete(); }
#line 3779 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_constraint_attribute_spec: /* opt_constraint_attribute_spec  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_constraint_attribute_spec_t)!=NULL)((*yyvaluep).opt_constraint_attribute_spec_t)->deep_delete(); }
#line 3785 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_initial_time: /* opt_initial_time  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_initial_time_t)!=NULL)((*yyvaluep).opt_initial_time_t)->deep_delete(); }
#line 3791 "bison_parser.cpp"
        break;

    case YYSYMBOL_constraint_name: /* constraint_name  */
#line 452 "bison.y"
            { if(((*yyvaluep).constraint_name_t)!=NULL)((*yyvaluep).constraint_name_t)->deep_delete(); }
#line 3797 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_temp: /* opt_temp  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_temp_t)!=NULL)((*yyvaluep).opt_temp_t)->deep_delete(); }
#line 3803 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_check_option: /* opt_check_option  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_check_option_t)!=NULL)((*yyvaluep).opt_check_option_t)->deep_delete(); }
#line 3809 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_name_list_p: /* opt_column_name_list_p  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_column_name_list_p_t)!=NULL)((*yyvaluep).opt_column_name_list_p_t)->deep_delete(); }
#line 3815 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_clause_list: /* set_clause_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).set_clause_list_t)!=NULL)((*yyvaluep).set_clause_list_t)->deep_delete(); }
#line 3821 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_clause: /* set_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).set_clause_t)!=NULL)((*yyvaluep).set_clause_t)->deep_delete(); }
#line 3827 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_as_alias: /* opt_as_alias  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_as_alias_t)!=NULL)((*yyvaluep).opt_as_alias_t)->deep_delete(); }
#line 3833 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 452 "bison.y"
            { if(((*yyvaluep).expr_t)!=NULL)((*yyvaluep).expr_t)->deep_delete(); }
#line 3839 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 452 "bison.y"
            { if(((*yyvaluep).operand_t)!=NULL)((*yyvaluep).operand_t)->deep_delete(); }
#line 3845 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 452 "bison.y"
            { if(((*yyvaluep).cast_expr_t)!=NULL)((*yyvaluep).cast_expr_t)->deep_delete(); }
#line 3851 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 452 "bison.y"
            { if(((*yyvaluep).scalar_expr_t)!=NULL)((*yyvaluep).scalar_expr_t)->deep_delete(); }
#line 3857 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 452 "bison.y"
            { if(((*yyvaluep).unary_expr_t)!=NULL)((*yyvaluep).unary_expr_t)->deep_delete(); }
#line 3863 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 452 "bison.y"
            { if(((*yyvaluep).binary_expr_t)!=NULL)((*yyvaluep).binary_expr_t)->deep_delete(); }
#line 3869 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 452 "bison.y"
            { if(((*yyvaluep).logic_expr_t)!=NULL)((*yyvaluep).logic_expr_t)->deep_delete(); }
#line 3875 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 452 "bison.y"
            { if(((*yyvaluep).in_expr_t)!=NULL)((*yyvaluep).in_expr_t)->deep_delete(); }
#line 3881 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 452 "bison.y"
            { if(((*yyvaluep).case_expr_t)!=NULL)((*yyvaluep).case_expr_t)->deep_delete(); }
#line 3887 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 452 "bison.y"
            { if(((*yyvaluep).between_expr_t)!=NULL)((*yyvaluep).between_expr_t)->deep_delete(); }
#line 3893 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 452 "bison.y"
            { if(((*yyvaluep).exists_expr_t)!=NULL)((*yyvaluep).exists_expr_t)->deep_delete(); }
#line 3899 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 452 "bison.y"
            { if(((*yyvaluep).function_expr_t)!=NULL)((*yyvaluep).function_expr_t)->deep_delete(); }
#line 3905 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_distinct_t)!=NULL)((*yyvaluep).opt_distinct_t)->deep_delete(); }
#line 3911 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_filter_clause: /* opt_filter_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_filter_clause_t)!=NULL)((*yyvaluep).opt_filter_clause_t)->deep_delete(); }
#line 3917 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_over_clause: /* opt_over_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_over_clause_t)!=NULL)((*yyvaluep).opt_over_clause_t)->deep_delete(); }
#line 3923 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).case_list_t)!=NULL)((*yyvaluep).case_list_t)->deep_delete(); }
#line 3929 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_clause: /* case_clause  */
#line 452 "bison.y"
            { if(((*yyvaluep).case_clause_t)!=NULL)((*yyvaluep).case_clause_t)->deep_delete(); }
#line 3935 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 452 "bison.y"
            { if(((*yyvaluep).comp_expr_t)!=NULL)((*yyvaluep).comp_expr_t)->deep_delete(); }
#line 3941 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 452 "bison.y"
            { if(((*yyvaluep).extract_expr_t)!=NULL)((*yyvaluep).extract_expr_t)->deep_delete(); }
#line 3947 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 452 "bison.y"
            { if(((*yyvaluep).datetime_field_t)!=NULL)((*yyvaluep).datetime_field_t)->deep_delete(); }
#line 3953 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 452 "bison.y"
            { if(((*yyvaluep).array_expr_t)!=NULL)((*yyvaluep).array_expr_t)->deep_delete(); }
#line 3959 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 452 "bison.y"
            { if(((*yyvaluep).array_index_t)!=NULL)((*yyvaluep).array_index_t)->deep_delete(); }
#line 3965 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 452 "bison.y"
            { if(((*yyvaluep).literal_t)!=NULL)((*yyvaluep).literal_t)->deep_delete(); }
#line 3971 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 452 "bison.y"
            { if(((*yyvaluep).string_literal_t)!=NULL)((*yyvaluep).string_literal_t)->deep_delete(); }
#line 3977 "bison_parser.cpp"
        break;

    case YYSYMBOL_comment_literal: /* comment_literal  */
#line 452 "bison.y"
            { if(((*yyvaluep).comment_literal_t)!=NULL)((*yyvaluep).comment_literal_t)->deep_delete(); }
#line 3983 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 452 "bison.y"
            { if(((*yyvaluep).bool_literal_t)!=NULL)((*yyvaluep).bool_literal_t)->deep_delete(); }
#line 3989 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 452 "bison.y"
            { if(((*yyvaluep).num_literal_t)!=NULL)((*yyvaluep).num_literal_t)->deep_delete(); }
#line 3995 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 452 "bison.y"
            { if(((*yyvaluep).int_literal_t)!=NULL)((*yyvaluep).int_literal_t)->deep_delete(); }
#line 4001 "bison_parser.cpp"
        break;

    case YYSYMBOL_float_literal: /* float_literal  */
#line 452 "bison.y"
            { if(((*yyvaluep).float_literal_t)!=NULL)((*yyvaluep).float_literal_t)->deep_delete(); }
#line 4007 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column: /* opt_column  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_column_t)!=NULL)((*yyvaluep).opt_column_t)->deep_delete(); }
#line 4013 "bison_parser.cpp"
        break;

    case YYSYMBOL_trigger_body: /* trigger_body  */
#line 452 "bison.y"
            { if(((*yyvaluep).trigger_body_t)!=NULL)((*yyvaluep).trigger_body_t)->deep_delete(); }
#line 4019 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_if_not_exist: /* opt_if_not_exist  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_if_not_exist_t)!=NULL)((*yyvaluep).opt_if_not_exist_t)->deep_delete(); }
#line 4025 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_if_exist: /* opt_if_exist  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_if_exist_t)!=NULL)((*yyvaluep).opt_if_exist_t)->deep_delete(); }
#line 4031 "bison_parser.cpp"
        break;

    case YYSYMBOL_identifier: /* identifier  */
#line 452 "bison.y"
            { if(((*yyvaluep).identifier_t)!=NULL)((*yyvaluep).identifier_t)->deep_delete(); }
#line 4037 "bison_parser.cpp"
        break;

    case YYSYMBOL_as_alias: /* as_alias  */
#line 452 "bison.y"
            { if(((*yyvaluep).as_alias_t)!=NULL)((*yyvaluep).as_alias_t)->deep_delete(); }
#line 4043 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 452 "bison.y"
            { if(((*yyvaluep).table_name_t)!=NULL)((*yyvaluep).table_name_t)->deep_delete(); }
#line 4049 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 452 "bison.y"
            { if(((*yyvaluep).column_name_t)!=NULL)((*yyvaluep).column_name_t)->deep_delete(); }
#line 4055 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_keyword: /* opt_index_keyword  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_index_keyword_t)!=NULL)((*yyvaluep).opt_index_keyword_t)->deep_delete(); }
#line 4061 "bison_parser.cpp"
        break;

    case YYSYMBOL_view_name: /* view_name  */
#line 452 "bison.y"
            { if(((*yyvaluep).view_name_t)!=NULL)((*yyvaluep).view_name_t)->deep_delete(); }
#line 4067 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_name: /* function_name  */
#line 452 "bison.y"
            { if(((*yyvaluep).function_name_t)!=NULL)((*yyvaluep).function_name_t)->deep_delete(); }
#line 4073 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_op: /* binary_op  */
#line 452 "bison.y"
            { if(((*yyvaluep).binary_op_t)!=NULL)((*yyvaluep).binary_op_t)->deep_delete(); }
#line 4079 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not: /* opt_not  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_not_t)!=NULL)((*yyvaluep).opt_not_t)->deep_delete(); }
#line 4085 "bison_parser.cpp"
        break;

    case YYSYMBOL_name: /* name  */
#line 452 "bison.y"
            { if(((*yyvaluep).name_t)!=NULL)((*yyvaluep).name_t)->deep_delete(); }
#line 4091 "bison_parser.cpp"
        break;

    case YYSYMBOL_type_name: /* type_name  */
#line 452 "bison.y"
            { if(((*yyvaluep).type_name_t)!=NULL)((*yyvaluep).type_name_t)->deep_delete(); }
#line 4097 "bison_parser.cpp"
        break;

    case YYSYMBOL_character_type: /* character_type  */
#line 452 "bison.y"
            { if(((*yyvaluep).character_type_t)!=NULL)((*yyvaluep).character_type_t)->deep_delete(); }
#line 4103 "bison_parser.cpp"
        break;

    case YYSYMBOL_character_with_length: /* character_with_length  */
#line 452 "bison.y"
            { if(((*yyvaluep).character_with_length_t)!=NULL)((*yyvaluep).character_with_length_t)->deep_delete(); }
#line 4109 "bison_parser.cpp"
        break;

    case YYSYMBOL_character_without_length: /* character_without_length  */
#line 452 "bison.y"
            { if(((*yyvaluep).character_without_length_t)!=NULL)((*yyvaluep).character_without_length_t)->deep_delete(); }
#line 4115 "bison_parser.cpp"
        break;

    case YYSYMBOL_character_conflicta: /* character_conflicta  */
#line 452 "bison.y"
            { if(((*yyvaluep).character_conflicta_t)!=NULL)((*yyvaluep).character_conflicta_t)->deep_delete(); }
#line 4121 "bison_parser.cpp"
        break;

    case YYSYMBOL_numeric_type: /* numeric_type  */
#line 452 "bison.y"
            { if(((*yyvaluep).numeric_type_t)!=NULL)((*yyvaluep).numeric_type_t)->deep_delete(); }
#line 4127 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_constraint_list: /* opt_table_constraint_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_table_constraint_list_t)!=NULL)((*yyvaluep).opt_table_constraint_list_t)->deep_delete(); }
#line 4133 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint_list: /* table_constraint_list  */
#line 452 "bison.y"
            { if(((*yyvaluep).table_constraint_list_t)!=NULL)((*yyvaluep).table_constraint_list_t)->deep_delete(); }
#line 4139 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 452 "bison.y"
            { if(((*yyvaluep).table_constraint_t)!=NULL)((*yyvaluep).table_constraint_t)->deep_delete(); }
#line 4145 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_enforced: /* opt_enforced  */
#line 452 "bison.y"
            { if(((*yyvaluep).opt_enforced_t)!=NULL)((*yyvaluep).opt_enforced_t)->deep_delete(); }
#line 4151 "bison_parser.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (Program* result, yyscan_t scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined FF_LTYPE_IS_TRIVIAL && FF_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = SQL_FF_EMPTY; /* Cause a token to be read.  */


/* User initialization code.  */
#line 47 "bison.y"
{
    // Initialize
    yylloc.first_column = 0;
    yylloc.last_column = 0;
    yylloc.first_line = 0;
    yylloc.last_line = 0;
    yylloc.total_column = 0;
    yylloc.string_length = 0;
}

#line 4259 "bison_parser.cpp"

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yychar == SQL_FF_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= SQL_YYEOF)
    {
      yychar = SQL_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == SQL_FF_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = SQL_FF_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = SQL_FF_EMPTY;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: stmtlist  */
#line 457 "bison.y"
                  {
		(yyval.program_t) = result;
		(yyval.program_t)->case_idx_ = CASE0;
		(yyval.program_t)->stmtlist_ = (yyvsp[0].stmtlist_t);
				(yyval.program_t) = NULL;

	}
#line 4478 "bison_parser.cpp"
    break;

  case 3: /* stmtlist: stmt OP_SEMI stmtlist  */
#line 468 "bison.y"
                               {
		(yyval.stmtlist_t) = new Stmtlist();
		(yyval.stmtlist_t)->case_idx_ = CASE0;
		(yyval.stmtlist_t)->stmt_ = (yyvsp[-2].stmt_t);
		(yyval.stmtlist_t)->stmtlist_ = (yyvsp[0].stmtlist_t);
		
	}
#line 4490 "bison_parser.cpp"
    break;

  case 4: /* stmtlist: stmt OP_SEMI  */
#line 475 "bison.y"
                      {
		(yyval.stmtlist_t) = new Stmtlist();
		(yyval.stmtlist_t)->case_idx_ = CASE1;
		(yyval.stmtlist_t)->stmt_ = (yyvsp[-1].stmt_t);
		
	}
#line 4501 "bison_parser.cpp"
    break;

  case 5: /* stmtlist: comment_literal stmtlist  */
#line 481 "bison.y"
                                   {
		(yyval.stmtlist_t) = (yyvsp[0].stmtlist_t);
		MERGE_LEFT_COMMENT((yyval.stmtlist_t), (yyvsp[-1].comment_literal_t));
	}
#line 4510 "bison_parser.cpp"
    break;

  case 6: /* stmtlist: stmtlist comment_literal  */
#line 485 "bison.y"
                                   {
		(yyval.stmtlist_t) = (yyvsp[-1].stmtlist_t);
		(yyval.stmtlist_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4519 "bison_parser.cpp"
    break;

  case 7: /* stmt: create_stmt  */
#line 493 "bison.y"
                     {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE0;
		(yyval.stmt_t)->create_stmt_ = (yyvsp[0].create_stmt_t);
		
	}
#line 4530 "bison_parser.cpp"
    break;

  case 8: /* stmt: drop_stmt  */
#line 499 "bison.y"
                   {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE1;
		(yyval.stmt_t)->drop_stmt_ = (yyvsp[0].drop_stmt_t);
		
	}
#line 4541 "bison_parser.cpp"
    break;

  case 9: /* stmt: select_stmt  */
#line 505 "bison.y"
                     {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE2;
		(yyval.stmt_t)->select_stmt_ = (yyvsp[0].select_stmt_t);
		
	}
#line 4552 "bison_parser.cpp"
    break;

  case 10: /* stmt: update_stmt  */
#line 511 "bison.y"
                     {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE3;
		(yyval.stmt_t)->update_stmt_ = (yyvsp[0].update_stmt_t);
		
	}
#line 4563 "bison_parser.cpp"
    break;

  case 11: /* stmt: insert_stmt  */
#line 517 "bison.y"
                     {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE4;
		(yyval.stmt_t)->insert_stmt_ = (yyvsp[0].insert_stmt_t);
		
	}
#line 4574 "bison_parser.cpp"
    break;

  case 12: /* stmt: alter_stmt  */
#line 523 "bison.y"
                    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE5;
		(yyval.stmt_t)->alter_stmt_ = (yyvsp[0].alter_stmt_t);
		
	}
#line 4585 "bison_parser.cpp"
    break;

  case 13: /* create_stmt: create_table_stmt  */
#line 532 "bison.y"
                           {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE0;
		(yyval.create_stmt_t)->create_table_stmt_ = (yyvsp[0].create_table_stmt_t);
		
	}
#line 4596 "bison_parser.cpp"
    break;

  case 14: /* create_stmt: create_index_stmt  */
#line 538 "bison.y"
                           {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE1;
		(yyval.create_stmt_t)->create_index_stmt_ = (yyvsp[0].create_index_stmt_t);
		
	}
#line 4607 "bison_parser.cpp"
    break;

  case 15: /* create_stmt: create_trigger_stmt  */
#line 544 "bison.y"
                             {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE2;
		(yyval.create_stmt_t)->create_trigger_stmt_ = (yyvsp[0].create_trigger_stmt_t);
		
	}
#line 4618 "bison_parser.cpp"
    break;

  case 16: /* create_stmt: create_view_stmt  */
#line 550 "bison.y"
                          {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE3;
		(yyval.create_stmt_t)->create_view_stmt_ = (yyvsp[0].create_view_stmt_t);
		
	}
#line 4629 "bison_parser.cpp"
    break;

  case 17: /* drop_stmt: drop_index_stmt  */
#line 560 "bison.y"
                         {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_stmt_t)->drop_index_stmt_ = (yyvsp[0].drop_index_stmt_t);
		
	}
#line 4640 "bison_parser.cpp"
    break;

  case 18: /* drop_stmt: drop_table_stmt  */
#line 566 "bison.y"
                         {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE1;
		(yyval.drop_stmt_t)->drop_table_stmt_ = (yyvsp[0].drop_table_stmt_t);
		
	}
#line 4651 "bison_parser.cpp"
    break;

  case 19: /* drop_stmt: drop_trigger_stmt  */
#line 572 "bison.y"
                           {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE2;
		(yyval.drop_stmt_t)->drop_trigger_stmt_ = (yyvsp[0].drop_trigger_stmt_t);
		
	}
#line 4662 "bison_parser.cpp"
    break;

  case 20: /* drop_stmt: drop_view_stmt  */
#line 578 "bison.y"
                        {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE3;
		(yyval.drop_stmt_t)->drop_view_stmt_ = (yyvsp[0].drop_view_stmt_t);
		
	}
#line 4673 "bison_parser.cpp"
    break;

  case 21: /* alter_stmt: ALTER TABLE table_name alter_action  */
#line 587 "bison.y"
                                             {
		(yyval.alter_stmt_t) = new AlterStmt();
		(yyval.alter_stmt_t)->case_idx_ = CASE0;
		(yyval.alter_stmt_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.alter_stmt_t)->alter_action_ = (yyvsp[0].alter_action_t);
		
	}
#line 4685 "bison_parser.cpp"
    break;

  case 22: /* alter_stmt: comment_literal alter_stmt  */
#line 594 "bison.y"
                                     {
		(yyval.alter_stmt_t) = (yyvsp[0].alter_stmt_t);
		MERGE_LEFT_COMMENT((yyval.alter_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 4694 "bison_parser.cpp"
    break;

  case 23: /* alter_stmt: alter_stmt comment_literal  */
#line 598 "bison.y"
                                     {
		(yyval.alter_stmt_t) = (yyvsp[-1].alter_stmt_t);
		(yyval.alter_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4703 "bison_parser.cpp"
    break;

  case 24: /* select_stmt: select_no_parens  */
#line 605 "bison.y"
                                      {
		(yyval.select_stmt_t) = new SelectStmt();
		(yyval.select_stmt_t)->case_idx_ = CASE0;
		(yyval.select_stmt_t)->select_no_parens_ = (yyvsp[0].select_no_parens_t);
		
	}
#line 4714 "bison_parser.cpp"
    break;

  case 25: /* select_stmt: select_with_parens  */
#line 611 "bison.y"
                                        {
		(yyval.select_stmt_t) = new SelectStmt();
		(yyval.select_stmt_t)->case_idx_ = CASE1;
		(yyval.select_stmt_t)->select_with_parens_ = (yyvsp[0].select_with_parens_t);
		
	}
#line 4725 "bison_parser.cpp"
    break;

  case 26: /* select_with_parens: OP_LP select_no_parens OP_RP  */
#line 620 "bison.y"
                                      {
		(yyval.select_with_parens_t) = new SelectWithParens();
		(yyval.select_with_parens_t)->case_idx_ = CASE0;
		(yyval.select_with_parens_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 4736 "bison_parser.cpp"
    break;

  case 27: /* select_with_parens: OP_LP select_with_parens OP_RP  */
#line 626 "bison.y"
                                        {
		(yyval.select_with_parens_t) = new SelectWithParens();
		(yyval.select_with_parens_t)->case_idx_ = CASE1;
		(yyval.select_with_parens_t)->select_with_parens_ = (yyvsp[-1].select_with_parens_t);
		
	}
#line 4747 "bison_parser.cpp"
    break;

  case 28: /* select_with_parens: comment_literal select_with_parens  */
#line 632 "bison.y"
                                             {
		(yyval.select_with_parens_t) = (yyvsp[0].select_with_parens_t);
		MERGE_LEFT_COMMENT((yyval.select_with_parens_t), (yyvsp[-1].comment_literal_t));
	}
#line 4756 "bison_parser.cpp"
    break;

  case 29: /* select_with_parens: select_with_parens comment_literal  */
#line 636 "bison.y"
                                             {
		(yyval.select_with_parens_t) = (yyvsp[-1].select_with_parens_t);
		(yyval.select_with_parens_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4765 "bison_parser.cpp"
    break;

  case 30: /* select_no_parens: opt_with_clause select_clause_list opt_order_clause opt_limit_clause  */
#line 643 "bison.y"
                                                                              {
		(yyval.select_no_parens_t) = new SelectNoParens();
		(yyval.select_no_parens_t)->case_idx_ = CASE0;
		(yyval.select_no_parens_t)->opt_with_clause_ = (yyvsp[-3].opt_with_clause_t);
		(yyval.select_no_parens_t)->select_clause_list_ = (yyvsp[-2].select_clause_list_t);
		(yyval.select_no_parens_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.select_no_parens_t)->opt_limit_clause_ = (yyvsp[0].opt_limit_clause_t);
		
	}
#line 4779 "bison_parser.cpp"
    break;

  case 31: /* select_clause_list: select_clause  */
#line 656 "bison.y"
                       {
		(yyval.select_clause_list_t) = new SelectClauseList();
		(yyval.select_clause_list_t)->case_idx_ = CASE0;
		(yyval.select_clause_list_t)->select_clause_ = (yyvsp[0].select_clause_t);
		
	}
#line 4790 "bison_parser.cpp"
    break;

  case 32: /* select_clause_list: select_clause combine_clause select_clause_list  */
#line 662 "bison.y"
                                                         {
		(yyval.select_clause_list_t) = new SelectClauseList();
		(yyval.select_clause_list_t)->case_idx_ = CASE1;
		(yyval.select_clause_list_t)->select_clause_ = (yyvsp[-2].select_clause_t);
		(yyval.select_clause_list_t)->combine_clause_ = (yyvsp[-1].combine_clause_t);
		(yyval.select_clause_list_t)->select_clause_list_ = (yyvsp[0].select_clause_list_t);
		
	}
#line 4803 "bison_parser.cpp"
    break;

  case 33: /* select_clause: SELECT opt_all_or_distinct select_target opt_from_clause opt_where_clause opt_group_clause opt_window_clause  */
#line 674 "bison.y"
                                                                                                                      {
		(yyval.select_clause_t) = new SelectClause();
		(yyval.select_clause_t)->case_idx_ = CASE0;
		(yyval.select_clause_t)->opt_all_or_distinct_ = (yyvsp[-5].opt_all_or_distinct_t);
		(yyval.select_clause_t)->select_target_ = (yyvsp[-4].select_target_t);
		(yyval.select_clause_t)->opt_from_clause_ = (yyvsp[-3].opt_from_clause_t);
		(yyval.select_clause_t)->opt_where_clause_ = (yyvsp[-2].opt_where_clause_t);
		(yyval.select_clause_t)->opt_group_clause_ = (yyvsp[-1].opt_group_clause_t);
		(yyval.select_clause_t)->opt_window_clause_ = (yyvsp[0].opt_window_clause_t);
		
	}
#line 4819 "bison_parser.cpp"
    break;

  case 34: /* select_clause: comment_literal select_clause  */
#line 685 "bison.y"
                                        {
		(yyval.select_clause_t) = (yyvsp[0].select_clause_t);
		MERGE_LEFT_COMMENT((yyval.select_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 4828 "bison_parser.cpp"
    break;

  case 35: /* select_clause: select_clause comment_literal  */
#line 689 "bison.y"
                                        {
		(yyval.select_clause_t) = (yyvsp[-1].select_clause_t);
		(yyval.select_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4837 "bison_parser.cpp"
    break;

  case 36: /* combine_clause: UNION  */
#line 696 "bison.y"
               {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE0;
		
	}
#line 4847 "bison_parser.cpp"
    break;

  case 37: /* combine_clause: INTERSECT  */
#line 701 "bison.y"
                   {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE1;
		
	}
#line 4857 "bison_parser.cpp"
    break;

  case 38: /* combine_clause: EXCEPT  */
#line 706 "bison.y"
                {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE2;
		
	}
#line 4867 "bison_parser.cpp"
    break;

  case 39: /* combine_clause: comment_literal combine_clause  */
#line 711 "bison.y"
                                         {
		(yyval.combine_clause_t) = (yyvsp[0].combine_clause_t);
		MERGE_LEFT_COMMENT((yyval.combine_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 4876 "bison_parser.cpp"
    break;

  case 40: /* combine_clause: combine_clause comment_literal  */
#line 715 "bison.y"
                                         {
		(yyval.combine_clause_t) = (yyvsp[-1].combine_clause_t);
		(yyval.combine_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4885 "bison_parser.cpp"
    break;

  case 41: /* opt_from_clause: from_clause  */
#line 722 "bison.y"
                     {
		(yyval.opt_from_clause_t) = new OptFromClause();
		(yyval.opt_from_clause_t)->case_idx_ = CASE0;
		(yyval.opt_from_clause_t)->from_clause_ = (yyvsp[0].from_clause_t);
		
	}
#line 4896 "bison_parser.cpp"
    break;

  case 42: /* opt_from_clause: %empty  */
#line 728 "bison.y"
          {
		(yyval.opt_from_clause_t) = new OptFromClause();
		(yyval.opt_from_clause_t)->case_idx_ = CASE1;
		
	}
#line 4906 "bison_parser.cpp"
    break;

  case 43: /* select_target: expr_list  */
#line 736 "bison.y"
                   {
		(yyval.select_target_t) = new SelectTarget();
		(yyval.select_target_t)->case_idx_ = CASE0;
		(yyval.select_target_t)->expr_list_ = (yyvsp[0].expr_list_t);
		
	}
#line 4917 "bison_parser.cpp"
    break;

  case 44: /* opt_window_clause: window_clause  */
#line 745 "bison.y"
                       {
		(yyval.opt_window_clause_t) = new OptWindowClause();
		(yyval.opt_window_clause_t)->case_idx_ = CASE0;
		(yyval.opt_window_clause_t)->window_clause_ = (yyvsp[0].window_clause_t);
		
	}
#line 4928 "bison_parser.cpp"
    break;

  case 45: /* opt_window_clause: %empty  */
#line 751 "bison.y"
          {
		(yyval.opt_window_clause_t) = new OptWindowClause();
		(yyval.opt_window_clause_t)->case_idx_ = CASE1;
		
	}
#line 4938 "bison_parser.cpp"
    break;

  case 46: /* window_clause: WINDOW window_def_list  */
#line 759 "bison.y"
                                {
		(yyval.window_clause_t) = new WindowClause();
		(yyval.window_clause_t)->case_idx_ = CASE0;
		(yyval.window_clause_t)->window_def_list_ = (yyvsp[0].window_def_list_t);
		
	}
#line 4949 "bison_parser.cpp"
    break;

  case 47: /* window_clause: comment_literal window_clause  */
#line 765 "bison.y"
                                        {
		(yyval.window_clause_t) = (yyvsp[0].window_clause_t);
		MERGE_LEFT_COMMENT((yyval.window_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 4958 "bison_parser.cpp"
    break;

  case 48: /* window_clause: window_clause comment_literal  */
#line 769 "bison.y"
                                        {
		(yyval.window_clause_t) = (yyvsp[-1].window_clause_t);
		(yyval.window_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4967 "bison_parser.cpp"
    break;

  case 49: /* window_def_list: window_def  */
#line 776 "bison.y"
                    {
		(yyval.window_def_list_t) = new WindowDefList();
		(yyval.window_def_list_t)->case_idx_ = CASE0;
		(yyval.window_def_list_t)->window_def_ = (yyvsp[0].window_def_t);
		
	}
#line 4978 "bison_parser.cpp"
    break;

  case 50: /* window_def_list: window_def OP_COMMA window_def_list  */
#line 782 "bison.y"
                                             {
		(yyval.window_def_list_t) = new WindowDefList();
		(yyval.window_def_list_t)->case_idx_ = CASE1;
		(yyval.window_def_list_t)->window_def_ = (yyvsp[-2].window_def_t);
		(yyval.window_def_list_t)->window_def_list_ = (yyvsp[0].window_def_list_t);
		
	}
#line 4990 "bison_parser.cpp"
    break;

  case 51: /* window_def: window_name AS OP_LP window OP_RP  */
#line 792 "bison.y"
                                           {
		(yyval.window_def_t) = new WindowDef();
		(yyval.window_def_t)->case_idx_ = CASE0;
		(yyval.window_def_t)->window_name_ = (yyvsp[-4].window_name_t);
		(yyval.window_def_t)->window_ = (yyvsp[-1].window_t);
		if((yyval.window_def_t)){
			auto tmp1 = (yyval.window_def_t)->window_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataWindowName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}
	}
#line 5012 "bison_parser.cpp"
    break;

  case 52: /* window_def: comment_literal window_def  */
#line 809 "bison.y"
                                     {
		(yyval.window_def_t) = (yyvsp[0].window_def_t);
		MERGE_LEFT_COMMENT((yyval.window_def_t), (yyvsp[-1].comment_literal_t));
	}
#line 5021 "bison_parser.cpp"
    break;

  case 53: /* window_def: window_def comment_literal  */
#line 813 "bison.y"
                                     {
		(yyval.window_def_t) = (yyvsp[-1].window_def_t);
		(yyval.window_def_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5030 "bison_parser.cpp"
    break;

  case 54: /* window_name: identifier  */
#line 820 "bison.y"
                    {
		(yyval.window_name_t) = new WindowName();
		(yyval.window_name_t)->case_idx_ = CASE0;
		(yyval.window_name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 5041 "bison_parser.cpp"
    break;

  case 55: /* window: opt_exist_window_name opt_partition opt_order_clause opt_frame_clause  */
#line 829 "bison.y"
                                                                               {
		(yyval.window_t) = new Window();
		(yyval.window_t)->case_idx_ = CASE0;
		(yyval.window_t)->opt_exist_window_name_ = (yyvsp[-3].opt_exist_window_name_t);
		(yyval.window_t)->opt_partition_ = (yyvsp[-2].opt_partition_t);
		(yyval.window_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.window_t)->opt_frame_clause_ = (yyvsp[0].opt_frame_clause_t);
		
	}
#line 5055 "bison_parser.cpp"
    break;

  case 56: /* opt_partition: PARTITION BY expr_list  */
#line 841 "bison.y"
                                {
		(yyval.opt_partition_t) = new OptPartition();
		(yyval.opt_partition_t)->case_idx_ = CASE0;
		(yyval.opt_partition_t)->expr_list_ = (yyvsp[0].expr_list_t);
		
	}
#line 5066 "bison_parser.cpp"
    break;

  case 57: /* opt_partition: %empty  */
#line 847 "bison.y"
                  {
		(yyval.opt_partition_t) = new OptPartition();
		(yyval.opt_partition_t)->case_idx_ = CASE1;
		
	}
#line 5076 "bison_parser.cpp"
    break;

  case 58: /* opt_partition: comment_literal opt_partition  */
#line 852 "bison.y"
                                        {
		(yyval.opt_partition_t) = (yyvsp[0].opt_partition_t);
		MERGE_LEFT_COMMENT((yyval.opt_partition_t), (yyvsp[-1].comment_literal_t));
	}
#line 5085 "bison_parser.cpp"
    break;

  case 59: /* opt_partition: opt_partition comment_literal  */
#line 856 "bison.y"
                                        {
		(yyval.opt_partition_t) = (yyvsp[-1].opt_partition_t);
		(yyval.opt_partition_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5094 "bison_parser.cpp"
    break;

  case 60: /* opt_frame_clause: range_or_rows frame_bound_start  */
#line 863 "bison.y"
                                         {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE0;
		(yyval.opt_frame_clause_t)->range_or_rows_ = (yyvsp[-1].range_or_rows_t);
		(yyval.opt_frame_clause_t)->frame_bound_start_ = (yyvsp[0].frame_bound_start_t);
		
	}
#line 5106 "bison_parser.cpp"
    break;

  case 61: /* opt_frame_clause: range_or_rows BETWEEN frame_bound_start AND frame_bound_end  */
#line 870 "bison.y"
                                                                     {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE1;
		(yyval.opt_frame_clause_t)->range_or_rows_ = (yyvsp[-4].range_or_rows_t);
		(yyval.opt_frame_clause_t)->frame_bound_start_ = (yyvsp[-2].frame_bound_start_t);
		(yyval.opt_frame_clause_t)->frame_bound_end_ = (yyvsp[0].frame_bound_end_t);
		
	}
#line 5119 "bison_parser.cpp"
    break;

  case 62: /* opt_frame_clause: %empty  */
#line 878 "bison.y"
          {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE2;
		
	}
#line 5129 "bison_parser.cpp"
    break;

  case 63: /* range_or_rows: RANGE  */
#line 886 "bison.y"
               {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE0;
		
	}
#line 5139 "bison_parser.cpp"
    break;

  case 64: /* range_or_rows: ROWS  */
#line 891 "bison.y"
              {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE1;
		
	}
#line 5149 "bison_parser.cpp"
    break;

  case 65: /* range_or_rows: GROUPS  */
#line 896 "bison.y"
                {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE2;
		
	}
#line 5159 "bison_parser.cpp"
    break;

  case 66: /* range_or_rows: comment_literal range_or_rows  */
#line 901 "bison.y"
                                        {
		(yyval.range_or_rows_t) = (yyvsp[0].range_or_rows_t);
		MERGE_LEFT_COMMENT((yyval.range_or_rows_t), (yyvsp[-1].comment_literal_t));
	}
#line 5168 "bison_parser.cpp"
    break;

  case 67: /* range_or_rows: range_or_rows comment_literal  */
#line 905 "bison.y"
                                        {
		(yyval.range_or_rows_t) = (yyvsp[-1].range_or_rows_t);
		(yyval.range_or_rows_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5177 "bison_parser.cpp"
    break;

  case 68: /* frame_bound_start: frame_bound  */
#line 912 "bison.y"
                     {
		(yyval.frame_bound_start_t) = new FrameBoundStart();
		(yyval.frame_bound_start_t)->case_idx_ = CASE0;
		(yyval.frame_bound_start_t)->frame_bound_ = (yyvsp[0].frame_bound_t);
		
	}
#line 5188 "bison_parser.cpp"
    break;

  case 69: /* frame_bound_start: UNBOUNDED PRECEDING  */
#line 918 "bison.y"
                             {
		(yyval.frame_bound_start_t) = new FrameBoundStart();
		(yyval.frame_bound_start_t)->case_idx_ = CASE1;
		
	}
#line 5198 "bison_parser.cpp"
    break;

  case 70: /* frame_bound_start: comment_literal frame_bound_start  */
#line 923 "bison.y"
                                            {
		(yyval.frame_bound_start_t) = (yyvsp[0].frame_bound_start_t);
		MERGE_LEFT_COMMENT((yyval.frame_bound_start_t), (yyvsp[-1].comment_literal_t));
	}
#line 5207 "bison_parser.cpp"
    break;

  case 71: /* frame_bound_start: frame_bound_start comment_literal  */
#line 927 "bison.y"
                                            {
		(yyval.frame_bound_start_t) = (yyvsp[-1].frame_bound_start_t);
		(yyval.frame_bound_start_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5216 "bison_parser.cpp"
    break;

  case 72: /* frame_bound_end: frame_bound  */
#line 934 "bison.y"
                     {
		(yyval.frame_bound_end_t) = new FrameBoundEnd();
		(yyval.frame_bound_end_t)->case_idx_ = CASE0;
		(yyval.frame_bound_end_t)->frame_bound_ = (yyvsp[0].frame_bound_t);
		
	}
#line 5227 "bison_parser.cpp"
    break;

  case 73: /* frame_bound_end: UNBOUNDED FOLLOWING  */
#line 940 "bison.y"
                             {
		(yyval.frame_bound_end_t) = new FrameBoundEnd();
		(yyval.frame_bound_end_t)->case_idx_ = CASE1;
		
	}
#line 5237 "bison_parser.cpp"
    break;

  case 74: /* frame_bound_end: comment_literal frame_bound_end  */
#line 945 "bison.y"
                                          {
		(yyval.frame_bound_end_t) = (yyvsp[0].frame_bound_end_t);
		MERGE_LEFT_COMMENT((yyval.frame_bound_end_t), (yyvsp[-1].comment_literal_t));
	}
#line 5246 "bison_parser.cpp"
    break;

  case 75: /* frame_bound_end: frame_bound_end comment_literal  */
#line 949 "bison.y"
                                          {
		(yyval.frame_bound_end_t) = (yyvsp[-1].frame_bound_end_t);
		(yyval.frame_bound_end_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5255 "bison_parser.cpp"
    break;

  case 76: /* frame_bound: expr PRECEDING  */
#line 956 "bison.y"
                        {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE0;
		(yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 5266 "bison_parser.cpp"
    break;

  case 77: /* frame_bound: expr FOLLOWING  */
#line 962 "bison.y"
                        {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE1;
		(yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 5277 "bison_parser.cpp"
    break;

  case 78: /* frame_bound: CURRENT ROW  */
#line 968 "bison.y"
                     {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE2;
		
	}
#line 5287 "bison_parser.cpp"
    break;

  case 79: /* frame_bound: comment_literal frame_bound  */
#line 973 "bison.y"
                                      {
		(yyval.frame_bound_t) = (yyvsp[0].frame_bound_t);
		MERGE_LEFT_COMMENT((yyval.frame_bound_t), (yyvsp[-1].comment_literal_t));
	}
#line 5296 "bison_parser.cpp"
    break;

  case 80: /* frame_bound: frame_bound comment_literal  */
#line 977 "bison.y"
                                       {
		(yyval.frame_bound_t) = (yyvsp[-1].frame_bound_t);
		(yyval.frame_bound_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5305 "bison_parser.cpp"
    break;

  case 81: /* opt_exist_window_name: identifier  */
#line 984 "bison.y"
                    {
		(yyval.opt_exist_window_name_t) = new OptExistWindowName();
		(yyval.opt_exist_window_name_t)->case_idx_ = CASE0;
		(yyval.opt_exist_window_name_t)->identifier_ = (yyvsp[0].identifier_t);
		if((yyval.opt_exist_window_name_t)){
			auto tmp1 = (yyval.opt_exist_window_name_t)->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataWindowName; 
				tmp1->scope_ = 1; 
				tmp1->data_flag_ =(DATAFLAG)8; 
			}
		}


	}
#line 5325 "bison_parser.cpp"
    break;

  case 82: /* opt_exist_window_name: %empty  */
#line 999 "bison.y"
          {
		(yyval.opt_exist_window_name_t) = new OptExistWindowName();
		(yyval.opt_exist_window_name_t)->case_idx_ = CASE1;
		
	}
#line 5335 "bison_parser.cpp"
    break;

  case 83: /* opt_group_clause: GROUP BY expr_list opt_having_clause  */
#line 1007 "bison.y"
                                              {
		(yyval.opt_group_clause_t) = new OptGroupClause();
		(yyval.opt_group_clause_t)->case_idx_ = CASE0;
		(yyval.opt_group_clause_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		(yyval.opt_group_clause_t)->opt_having_clause_ = (yyvsp[0].opt_having_clause_t);
		
	}
#line 5347 "bison_parser.cpp"
    break;

  case 84: /* opt_group_clause: %empty  */
#line 1014 "bison.y"
          {
		(yyval.opt_group_clause_t) = new OptGroupClause();
		(yyval.opt_group_clause_t)->case_idx_ = CASE1;
		
	}
#line 5357 "bison_parser.cpp"
    break;

  case 85: /* opt_group_clause: comment_literal opt_group_clause  */
#line 1019 "bison.y"
                                           {
		(yyval.opt_group_clause_t) = (yyvsp[0].opt_group_clause_t);
		MERGE_LEFT_COMMENT((yyval.opt_group_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 5366 "bison_parser.cpp"
    break;

  case 86: /* opt_group_clause: opt_group_clause comment_literal  */
#line 1023 "bison.y"
                                            {
		(yyval.opt_group_clause_t) = (yyvsp[-1].opt_group_clause_t);
		(yyval.opt_group_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5375 "bison_parser.cpp"
    break;

  case 87: /* opt_having_clause: HAVING expr  */
#line 1030 "bison.y"
                     {
		(yyval.opt_having_clause_t) = new OptHavingClause();
		(yyval.opt_having_clause_t)->case_idx_ = CASE0;
		(yyval.opt_having_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 5386 "bison_parser.cpp"
    break;

  case 88: /* opt_having_clause: %empty  */
#line 1036 "bison.y"
          {
		(yyval.opt_having_clause_t) = new OptHavingClause();
		(yyval.opt_having_clause_t)->case_idx_ = CASE1;
		
	}
#line 5396 "bison_parser.cpp"
    break;

  case 89: /* opt_having_clause: comment_literal opt_having_clause  */
#line 1041 "bison.y"
                                            {
		(yyval.opt_having_clause_t) = (yyvsp[0].opt_having_clause_t);
		MERGE_LEFT_COMMENT((yyval.opt_having_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 5405 "bison_parser.cpp"
    break;

  case 90: /* opt_having_clause: opt_having_clause comment_literal  */
#line 1045 "bison.y"
                                             {
		(yyval.opt_having_clause_t) = (yyvsp[-1].opt_having_clause_t);
		(yyval.opt_having_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5414 "bison_parser.cpp"
    break;

  case 91: /* opt_where_clause: where_clause  */
#line 1052 "bison.y"
                      {
		(yyval.opt_where_clause_t) = new OptWhereClause();
		(yyval.opt_where_clause_t)->case_idx_ = CASE0;
		(yyval.opt_where_clause_t)->where_clause_ = (yyvsp[0].where_clause_t);
		
	}
#line 5425 "bison_parser.cpp"
    break;

  case 92: /* opt_where_clause: %empty  */
#line 1058 "bison.y"
          {
		(yyval.opt_where_clause_t) = new OptWhereClause();
		(yyval.opt_where_clause_t)->case_idx_ = CASE1;
		
	}
#line 5435 "bison_parser.cpp"
    break;

  case 93: /* where_clause: WHERE expr  */
#line 1066 "bison.y"
                    {
		(yyval.where_clause_t) = new WhereClause();
		(yyval.where_clause_t)->case_idx_ = CASE0;
		(yyval.where_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 5446 "bison_parser.cpp"
    break;

  case 94: /* where_clause: comment_literal where_clause  */
#line 1072 "bison.y"
                                       {
		(yyval.where_clause_t) = (yyvsp[0].where_clause_t);
		MERGE_LEFT_COMMENT((yyval.where_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 5455 "bison_parser.cpp"
    break;

  case 95: /* where_clause: where_clause comment_literal  */
#line 1076 "bison.y"
                                        {
		(yyval.where_clause_t) = (yyvsp[-1].where_clause_t);
		(yyval.where_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5464 "bison_parser.cpp"
    break;

  case 96: /* from_clause: FROM table_ref  */
#line 1083 "bison.y"
                        {
		(yyval.from_clause_t) = new FromClause();
		(yyval.from_clause_t)->case_idx_ = CASE0;
		(yyval.from_clause_t)->table_ref_ = (yyvsp[0].table_ref_t);
		
	}
#line 5475 "bison_parser.cpp"
    break;

  case 97: /* from_clause: comment_literal from_clause  */
#line 1089 "bison.y"
                                      {
		(yyval.from_clause_t) = (yyvsp[0].from_clause_t);
		MERGE_LEFT_COMMENT((yyval.from_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 5484 "bison_parser.cpp"
    break;

  case 98: /* from_clause: from_clause comment_literal  */
#line 1093 "bison.y"
                                       {
		(yyval.from_clause_t) = (yyvsp[-1].from_clause_t);
		(yyval.from_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5493 "bison_parser.cpp"
    break;

  case 99: /* table_ref: opt_table_prefix table_name opt_as_alias opt_index opt_on opt_using  */
#line 1100 "bison.y"
                                                                             {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE0;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-5].opt_table_prefix_t);
		(yyval.table_ref_t)->table_name_ = (yyvsp[-4].table_name_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-3].opt_as_alias_t);
		(yyval.table_ref_t)->opt_index_ = (yyvsp[-2].opt_index_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
		
	}
#line 5509 "bison_parser.cpp"
    break;

  case 100: /* table_ref: opt_table_prefix function_name OP_LP expr_list OP_RP opt_as_alias opt_on opt_using  */
#line 1111 "bison.y"
                                                                                            {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE1;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-7].opt_table_prefix_t);
		(yyval.table_ref_t)->function_name_ = (yyvsp[-6].function_name_t);
		(yyval.table_ref_t)->expr_list_ = (yyvsp[-4].expr_list_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
		
	}
#line 5525 "bison_parser.cpp"
    break;

  case 101: /* table_ref: opt_table_prefix OP_LP select_no_parens OP_RP opt_as_alias opt_on opt_using  */
#line 1122 "bison.y"
                                                                                     {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE2;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-6].opt_table_prefix_t);
		(yyval.table_ref_t)->select_no_parens_ = (yyvsp[-4].select_no_parens_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
		
	}
#line 5540 "bison_parser.cpp"
    break;

  case 102: /* table_ref: opt_table_prefix OP_LP table_ref OP_RP opt_as_alias opt_on opt_using  */
#line 1132 "bison.y"
                                                                              {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE3;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-6].opt_table_prefix_t);
		(yyval.table_ref_t)->table_ref_ = (yyvsp[-4].table_ref_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
		
	}
#line 5555 "bison_parser.cpp"
    break;

  case 103: /* opt_index: INDEXED BY column_name  */
#line 1145 "bison.y"
                                {
		(yyval.opt_index_t) = new OptIndex();
		(yyval.opt_index_t)->case_idx_ = CASE0;
		(yyval.opt_index_t)->column_name_ = (yyvsp[0].column_name_t);
		
	}
#line 5566 "bison_parser.cpp"
    break;

  case 104: /* opt_index: NOT INDEXED  */
#line 1151 "bison.y"
                     {
		(yyval.opt_index_t) = new OptIndex();
		(yyval.opt_index_t)->case_idx_ = CASE1;
		
	}
#line 5576 "bison_parser.cpp"
    break;

  case 105: /* opt_index: %empty  */
#line 1156 "bison.y"
          {
		(yyval.opt_index_t) = new OptIndex();
		(yyval.opt_index_t)->case_idx_ = CASE2;
		
	}
#line 5586 "bison_parser.cpp"
    break;

  case 106: /* opt_index: comment_literal opt_index  */
#line 1161 "bison.y"
                                    {
		(yyval.opt_index_t) = (yyvsp[0].opt_index_t);
		MERGE_LEFT_COMMENT((yyval.opt_index_t), (yyvsp[-1].comment_literal_t));
	}
#line 5595 "bison_parser.cpp"
    break;

  case 107: /* opt_index: opt_index comment_literal  */
#line 1165 "bison.y"
                                     {
		(yyval.opt_index_t) = (yyvsp[-1].opt_index_t);
		(yyval.opt_index_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5604 "bison_parser.cpp"
    break;

  case 108: /* opt_on: ON expr  */
#line 1172 "bison.y"
                 {
		(yyval.opt_on_t) = new OptOn();
		(yyval.opt_on_t)->case_idx_ = CASE0;
		(yyval.opt_on_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 5615 "bison_parser.cpp"
    break;

  case 109: /* opt_on: %empty  */
#line 1178 "bison.y"
                    {
		(yyval.opt_on_t) = new OptOn();
		(yyval.opt_on_t)->case_idx_ = CASE1;
		
	}
#line 5625 "bison_parser.cpp"
    break;

  case 110: /* opt_on: comment_literal opt_on  */
#line 1183 "bison.y"
                                 {
		(yyval.opt_on_t) = (yyvsp[0].opt_on_t);
		MERGE_LEFT_COMMENT((yyval.opt_on_t), (yyvsp[-1].comment_literal_t));
	}
#line 5634 "bison_parser.cpp"
    break;

  case 111: /* opt_on: opt_on comment_literal  */
#line 1187 "bison.y"
                                  {
		(yyval.opt_on_t) = (yyvsp[-1].opt_on_t);
		(yyval.opt_on_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5643 "bison_parser.cpp"
    break;

  case 112: /* opt_using: USING OP_LP column_name_list OP_RP  */
#line 1194 "bison.y"
                                            {
		(yyval.opt_using_t) = new OptUsing();
		(yyval.opt_using_t)->case_idx_ = CASE0;
		(yyval.opt_using_t)->column_name_list_ = (yyvsp[-1].column_name_list_t);
		
	}
#line 5654 "bison_parser.cpp"
    break;

  case 113: /* opt_using: %empty  */
#line 1200 "bison.y"
          {
		(yyval.opt_using_t) = new OptUsing();
		(yyval.opt_using_t)->case_idx_ = CASE1;
		
	}
#line 5664 "bison_parser.cpp"
    break;

  case 114: /* opt_using: comment_literal opt_using  */
#line 1205 "bison.y"
                                    {
		(yyval.opt_using_t) = (yyvsp[0].opt_using_t);
		MERGE_LEFT_COMMENT((yyval.opt_using_t), (yyvsp[-1].comment_literal_t));
	}
#line 5673 "bison_parser.cpp"
    break;

  case 115: /* opt_using: opt_using comment_literal  */
#line 1209 "bison.y"
                                     {
		(yyval.opt_using_t) = (yyvsp[-1].opt_using_t);
		(yyval.opt_using_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5682 "bison_parser.cpp"
    break;

  case 116: /* column_name_list: column_name  */
#line 1216 "bison.y"
                     {
		(yyval.column_name_list_t) = new ColumnNameList();
		(yyval.column_name_list_t)->case_idx_ = CASE0;
		(yyval.column_name_list_t)->column_name_ = (yyvsp[0].column_name_t);
		
	}
#line 5693 "bison_parser.cpp"
    break;

  case 117: /* column_name_list: column_name OP_COMMA column_name_list  */
#line 1222 "bison.y"
                                               {
		(yyval.column_name_list_t) = new ColumnNameList();
		(yyval.column_name_list_t)->case_idx_ = CASE1;
		(yyval.column_name_list_t)->column_name_ = (yyvsp[-2].column_name_t);
		(yyval.column_name_list_t)->column_name_list_ = (yyvsp[0].column_name_list_t);
		
	}
#line 5705 "bison_parser.cpp"
    break;

  case 118: /* opt_table_prefix: table_ref join_op  */
#line 1232 "bison.y"
                           {
		(yyval.opt_table_prefix_t) = new OptTablePrefix();
		(yyval.opt_table_prefix_t)->case_idx_ = CASE0;
		(yyval.opt_table_prefix_t)->table_ref_ = (yyvsp[-1].table_ref_t);
		(yyval.opt_table_prefix_t)->join_op_ = (yyvsp[0].join_op_t);
		
	}
#line 5717 "bison_parser.cpp"
    break;

  case 119: /* opt_table_prefix: %empty  */
#line 1239 "bison.y"
          {
		(yyval.opt_table_prefix_t) = new OptTablePrefix();
		(yyval.opt_table_prefix_t)->case_idx_ = CASE1;
		
	}
#line 5727 "bison_parser.cpp"
    break;

  case 120: /* join_op: OP_COMMA  */
#line 1247 "bison.y"
                  {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE0;
		
	}
#line 5737 "bison_parser.cpp"
    break;

  case 121: /* join_op: JOIN  */
#line 1252 "bison.y"
              {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE1;
		
	}
#line 5747 "bison_parser.cpp"
    break;

  case 122: /* join_op: NATURAL opt_join_type JOIN  */
#line 1257 "bison.y"
                                    {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE2;
		(yyval.join_op_t)->opt_join_type_ = (yyvsp[-1].opt_join_type_t);
		
	}
#line 5758 "bison_parser.cpp"
    break;

  case 123: /* join_op: comment_literal join_op  */
#line 1263 "bison.y"
                                  {
		(yyval.join_op_t) = (yyvsp[0].join_op_t);
		MERGE_LEFT_COMMENT((yyval.join_op_t), (yyvsp[-1].comment_literal_t));
	}
#line 5767 "bison_parser.cpp"
    break;

  case 124: /* join_op: join_op comment_literal  */
#line 1267 "bison.y"
                                   {
		(yyval.join_op_t) = (yyvsp[-1].join_op_t);
		(yyval.join_op_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5776 "bison_parser.cpp"
    break;

  case 125: /* opt_join_type: LEFT  */
#line 1274 "bison.y"
              {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE0;
		
	}
#line 5786 "bison_parser.cpp"
    break;

  case 126: /* opt_join_type: LEFT OUTER  */
#line 1279 "bison.y"
                    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE1;
		
	}
#line 5796 "bison_parser.cpp"
    break;

  case 127: /* opt_join_type: INNER  */
#line 1284 "bison.y"
               {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE2;
		
	}
#line 5806 "bison_parser.cpp"
    break;

  case 128: /* opt_join_type: CROSS  */
#line 1289 "bison.y"
               {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE3;
		
	}
#line 5816 "bison_parser.cpp"
    break;

  case 129: /* opt_join_type: %empty  */
#line 1294 "bison.y"
          {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE4;
		
	}
#line 5826 "bison_parser.cpp"
    break;

  case 130: /* opt_join_type: comment_literal opt_join_type  */
#line 1299 "bison.y"
                                        {
		(yyval.opt_join_type_t) = (yyvsp[0].opt_join_type_t);
		MERGE_LEFT_COMMENT((yyval.opt_join_type_t), (yyvsp[-1].comment_literal_t));
	}
#line 5835 "bison_parser.cpp"
    break;

  case 131: /* opt_join_type: opt_join_type comment_literal  */
#line 1303 "bison.y"
                                         {
		(yyval.opt_join_type_t) = (yyvsp[-1].opt_join_type_t);
		(yyval.opt_join_type_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5844 "bison_parser.cpp"
    break;

  case 132: /* expr_list: expr opt_as_alias OP_COMMA expr_list  */
#line 1310 "bison.y"
                                              {
		(yyval.expr_list_t) = new ExprList();
		(yyval.expr_list_t)->case_idx_ = CASE0;
		(yyval.expr_list_t)->expr_ = (yyvsp[-3].expr_t);
		(yyval.expr_list_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.expr_list_t)->expr_list_ = (yyvsp[0].expr_list_t);
		
	}
#line 5857 "bison_parser.cpp"
    break;

  case 133: /* expr_list: expr opt_as_alias  */
#line 1318 "bison.y"
                            {
		(yyval.expr_list_t) = new ExprList();
		(yyval.expr_list_t)->case_idx_ = CASE1;
		(yyval.expr_list_t)->expr_ = (yyvsp[-1].expr_t);
		(yyval.expr_list_t)->opt_as_alias_ = (yyvsp[0].opt_as_alias_t);
		
	}
#line 5869 "bison_parser.cpp"
    break;

  case 134: /* opt_limit_clause: limit_clause  */
#line 1328 "bison.y"
                      {
		(yyval.opt_limit_clause_t) = new OptLimitClause();
		(yyval.opt_limit_clause_t)->case_idx_ = CASE0;
		(yyval.opt_limit_clause_t)->limit_clause_ = (yyvsp[0].limit_clause_t);
		
	}
#line 5880 "bison_parser.cpp"
    break;

  case 135: /* opt_limit_clause: %empty  */
#line 1334 "bison.y"
          {
		(yyval.opt_limit_clause_t) = new OptLimitClause();
		(yyval.opt_limit_clause_t)->case_idx_ = CASE1;
		
	}
#line 5890 "bison_parser.cpp"
    break;

  case 136: /* limit_clause: LIMIT expr  */
#line 1342 "bison.y"
                    {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE0;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[0].expr_t);
		
	}
#line 5901 "bison_parser.cpp"
    break;

  case 137: /* limit_clause: LIMIT expr OFFSET expr  */
#line 1348 "bison.y"
                                {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE1;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.limit_clause_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 5913 "bison_parser.cpp"
    break;

  case 138: /* limit_clause: LIMIT expr OP_COMMA expr  */
#line 1355 "bison.y"
                                  {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE2;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.limit_clause_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 5925 "bison_parser.cpp"
    break;

  case 139: /* limit_clause: comment_literal limit_clause  */
#line 1362 "bison.y"
                                       {
		(yyval.limit_clause_t) = (yyvsp[0].limit_clause_t);
		MERGE_LEFT_COMMENT((yyval.limit_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 5934 "bison_parser.cpp"
    break;

  case 140: /* limit_clause: limit_clause comment_literal  */
#line 1366 "bison.y"
                                        {
		(yyval.limit_clause_t) = (yyvsp[-1].limit_clause_t);
		(yyval.limit_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5943 "bison_parser.cpp"
    break;

  case 141: /* opt_limit_row_count: LIMIT expr  */
#line 1373 "bison.y"
                    {
		(yyval.opt_limit_row_count_t) = new OptLimitRowCount();
		(yyval.opt_limit_row_count_t)->case_idx_ = CASE0;
		(yyval.opt_limit_row_count_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 5954 "bison_parser.cpp"
    break;

  case 142: /* opt_limit_row_count: %empty  */
#line 1379 "bison.y"
          {
		(yyval.opt_limit_row_count_t) = new OptLimitRowCount();
		(yyval.opt_limit_row_count_t)->case_idx_ = CASE1;
		
	}
#line 5964 "bison_parser.cpp"
    break;

  case 143: /* opt_limit_row_count: comment_literal opt_limit_row_count  */
#line 1384 "bison.y"
                                              {
		(yyval.opt_limit_row_count_t) = (yyvsp[0].opt_limit_row_count_t);
		MERGE_LEFT_COMMENT((yyval.opt_limit_row_count_t), (yyvsp[-1].comment_literal_t));
	}
#line 5973 "bison_parser.cpp"
    break;

  case 144: /* opt_limit_row_count: opt_limit_row_count comment_literal  */
#line 1388 "bison.y"
                                               {
		(yyval.opt_limit_row_count_t) = (yyvsp[-1].opt_limit_row_count_t);
		(yyval.opt_limit_row_count_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5982 "bison_parser.cpp"
    break;

  case 145: /* opt_order_clause: ORDER BY order_item_list  */
#line 1395 "bison.y"
                                  {
		(yyval.opt_order_clause_t) = new OptOrderClause();
		(yyval.opt_order_clause_t)->case_idx_ = CASE0;
		(yyval.opt_order_clause_t)->order_item_list_ = (yyvsp[0].order_item_list_t);
		
	}
#line 5993 "bison_parser.cpp"
    break;

  case 146: /* opt_order_clause: %empty  */
#line 1401 "bison.y"
          {
		(yyval.opt_order_clause_t) = new OptOrderClause();
		(yyval.opt_order_clause_t)->case_idx_ = CASE1;
		
	}
#line 6003 "bison_parser.cpp"
    break;

  case 147: /* opt_order_clause: comment_literal opt_order_clause  */
#line 1406 "bison.y"
                                           {
		(yyval.opt_order_clause_t) = (yyvsp[0].opt_order_clause_t);
		MERGE_LEFT_COMMENT((yyval.opt_order_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 6012 "bison_parser.cpp"
    break;

  case 148: /* opt_order_clause: opt_order_clause comment_literal  */
#line 1410 "bison.y"
                                            {
		(yyval.opt_order_clause_t) = (yyvsp[-1].opt_order_clause_t);
		(yyval.opt_order_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6021 "bison_parser.cpp"
    break;

  case 149: /* opt_order_nulls: NULLS FIRST  */
#line 1417 "bison.y"
                     {
		(yyval.opt_order_nulls_t) = new OptOrderNulls();
		(yyval.opt_order_nulls_t)->case_idx_ = CASE0;
		
	}
#line 6031 "bison_parser.cpp"
    break;

  case 150: /* opt_order_nulls: NULLS LAST  */
#line 1422 "bison.y"
                    {
		(yyval.opt_order_nulls_t) = new OptOrderNulls();
		(yyval.opt_order_nulls_t)->case_idx_ = CASE1;
		
	}
#line 6041 "bison_parser.cpp"
    break;

  case 151: /* opt_order_nulls: %empty  */
#line 1427 "bison.y"
          {
		(yyval.opt_order_nulls_t) = new OptOrderNulls();
		(yyval.opt_order_nulls_t)->case_idx_ = CASE2;
		
	}
#line 6051 "bison_parser.cpp"
    break;

  case 152: /* opt_order_nulls: comment_literal opt_order_nulls  */
#line 1432 "bison.y"
                                          {
		(yyval.opt_order_nulls_t) = (yyvsp[0].opt_order_nulls_t);
		MERGE_LEFT_COMMENT((yyval.opt_order_nulls_t), (yyvsp[-1].comment_literal_t));
	}
#line 6060 "bison_parser.cpp"
    break;

  case 153: /* opt_order_nulls: opt_order_nulls comment_literal  */
#line 1436 "bison.y"
                                           {
		(yyval.opt_order_nulls_t) = (yyvsp[-1].opt_order_nulls_t);
		(yyval.opt_order_nulls_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6069 "bison_parser.cpp"
    break;

  case 154: /* order_item_list: order_item  */
#line 1443 "bison.y"
                    {
		(yyval.order_item_list_t) = new OrderItemList();
		(yyval.order_item_list_t)->case_idx_ = CASE0;
		(yyval.order_item_list_t)->order_item_ = (yyvsp[0].order_item_t);
		
	}
#line 6080 "bison_parser.cpp"
    break;

  case 155: /* order_item_list: order_item OP_COMMA order_item_list  */
#line 1449 "bison.y"
                                             {
		(yyval.order_item_list_t) = new OrderItemList();
		(yyval.order_item_list_t)->case_idx_ = CASE1;
		(yyval.order_item_list_t)->order_item_ = (yyvsp[-2].order_item_t);
		(yyval.order_item_list_t)->order_item_list_ = (yyvsp[0].order_item_list_t);
		
	}
#line 6092 "bison_parser.cpp"
    break;

  case 156: /* order_item: expr opt_order_behavior opt_order_nulls  */
#line 1459 "bison.y"
                                                 {
		(yyval.order_item_t) = new OrderItem();
		(yyval.order_item_t)->case_idx_ = CASE0;
		(yyval.order_item_t)->expr_ = (yyvsp[-2].expr_t);
		(yyval.order_item_t)->opt_order_behavior_ = (yyvsp[-1].opt_order_behavior_t);
		(yyval.order_item_t)->opt_order_nulls_ = (yyvsp[0].opt_order_nulls_t);
		
	}
#line 6105 "bison_parser.cpp"
    break;

  case 157: /* opt_order_behavior: ASC  */
#line 1470 "bison.y"
             {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE0;
		
	}
#line 6115 "bison_parser.cpp"
    break;

  case 158: /* opt_order_behavior: DESC  */
#line 1475 "bison.y"
              {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE1;
		
	}
#line 6125 "bison_parser.cpp"
    break;

  case 159: /* opt_order_behavior: %empty  */
#line 1480 "bison.y"
          {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE2;
		
	}
#line 6135 "bison_parser.cpp"
    break;

  case 160: /* opt_order_behavior: comment_literal opt_order_behavior  */
#line 1485 "bison.y"
                                             {
		(yyval.opt_order_behavior_t) = (yyvsp[0].opt_order_behavior_t);
		MERGE_LEFT_COMMENT((yyval.opt_order_behavior_t), (yyvsp[-1].comment_literal_t));
	}
#line 6144 "bison_parser.cpp"
    break;

  case 161: /* opt_order_behavior: opt_order_behavior comment_literal  */
#line 1489 "bison.y"
                                              {
		(yyval.opt_order_behavior_t) = (yyvsp[-1].opt_order_behavior_t);
		(yyval.opt_order_behavior_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6153 "bison_parser.cpp"
    break;

  case 162: /* opt_with_clause: WITH cte_table_list  */
#line 1496 "bison.y"
                             {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE0;
		(yyval.opt_with_clause_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
		
	}
#line 6164 "bison_parser.cpp"
    break;

  case 163: /* opt_with_clause: WITH RECURSIVE cte_table_list  */
#line 1502 "bison.y"
                                       {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE1;
		(yyval.opt_with_clause_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
		
	}
#line 6175 "bison_parser.cpp"
    break;

  case 164: /* opt_with_clause: %empty  */
#line 1508 "bison.y"
          {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE2;
		
	}
#line 6185 "bison_parser.cpp"
    break;

  case 165: /* opt_with_clause: comment_literal opt_with_clause  */
#line 1513 "bison.y"
                                          {
		(yyval.opt_with_clause_t) = (yyvsp[0].opt_with_clause_t);
		MERGE_LEFT_COMMENT((yyval.opt_with_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 6194 "bison_parser.cpp"
    break;

  case 166: /* opt_with_clause: opt_with_clause comment_literal  */
#line 1517 "bison.y"
                                           {
		(yyval.opt_with_clause_t) = (yyvsp[-1].opt_with_clause_t);
		(yyval.opt_with_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6203 "bison_parser.cpp"
    break;

  case 167: /* cte_table_list: cte_table  */
#line 1524 "bison.y"
                   {
		(yyval.cte_table_list_t) = new CteTableList();
		(yyval.cte_table_list_t)->case_idx_ = CASE0;
		(yyval.cte_table_list_t)->cte_table_ = (yyvsp[0].cte_table_t);
		
	}
#line 6214 "bison_parser.cpp"
    break;

  case 168: /* cte_table_list: cte_table OP_COMMA cte_table_list  */
#line 1530 "bison.y"
                                           {
		(yyval.cte_table_list_t) = new CteTableList();
		(yyval.cte_table_list_t)->case_idx_ = CASE1;
		(yyval.cte_table_list_t)->cte_table_ = (yyvsp[-2].cte_table_t);
		(yyval.cte_table_list_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
		
	}
#line 6226 "bison_parser.cpp"
    break;

  case 169: /* cte_table: cte_table_name AS OP_LP select_stmt OP_RP  */
#line 1540 "bison.y"
                                                   {
		(yyval.cte_table_t) = new CteTable();
		(yyval.cte_table_t)->case_idx_ = CASE0;
		(yyval.cte_table_t)->cte_table_name_ = (yyvsp[-4].cte_table_name_t);
		(yyval.cte_table_t)->select_stmt_ = (yyvsp[-1].select_stmt_t);
		
	}
#line 6238 "bison_parser.cpp"
    break;

  case 170: /* cte_table: comment_literal cte_table  */
#line 1547 "bison.y"
                                    {
		(yyval.cte_table_t) = (yyvsp[0].cte_table_t);
		MERGE_LEFT_COMMENT((yyval.cte_table_t), (yyvsp[-1].comment_literal_t));
	}
#line 6247 "bison_parser.cpp"
    break;

  case 171: /* cte_table: cte_table comment_literal  */
#line 1551 "bison.y"
                                     {
		(yyval.cte_table_t) = (yyvsp[-1].cte_table_t);
		(yyval.cte_table_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6256 "bison_parser.cpp"
    break;

  case 172: /* cte_table_name: table_name opt_column_name_list_p  */
#line 1558 "bison.y"
                                           {
		(yyval.cte_table_name_t) = new CteTableName();
		(yyval.cte_table_name_t)->case_idx_ = CASE0;
		(yyval.cte_table_name_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.cte_table_name_t)->opt_column_name_list_p_ = (yyvsp[0].opt_column_name_list_p_t);
		
	}
#line 6268 "bison_parser.cpp"
    break;

  case 173: /* opt_all_or_distinct: ALL  */
#line 1568 "bison.y"
             {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE0;
		
	}
#line 6278 "bison_parser.cpp"
    break;

  case 174: /* opt_all_or_distinct: DISTINCT  */
#line 1573 "bison.y"
                  {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE1;
		
	}
#line 6288 "bison_parser.cpp"
    break;

  case 175: /* opt_all_or_distinct: %empty  */
#line 1578 "bison.y"
          {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE2;
		
	}
#line 6298 "bison_parser.cpp"
    break;

  case 176: /* opt_all_or_distinct: comment_literal opt_all_or_distinct  */
#line 1583 "bison.y"
                                              {
		(yyval.opt_all_or_distinct_t) = (yyvsp[0].opt_all_or_distinct_t);
		MERGE_LEFT_COMMENT((yyval.opt_all_or_distinct_t), (yyvsp[-1].comment_literal_t));
	}
#line 6307 "bison_parser.cpp"
    break;

  case 177: /* opt_all_or_distinct: opt_all_or_distinct comment_literal  */
#line 1587 "bison.y"
                                               {
		(yyval.opt_all_or_distinct_t) = (yyvsp[-1].opt_all_or_distinct_t);
		(yyval.opt_all_or_distinct_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6316 "bison_parser.cpp"
    break;

  case 178: /* create_table_stmt: CREATE opt_temp TABLE opt_if_not_exist table_name opt_table_option_list opt_ignore_or_replace AS select_stmt  */
#line 1594 "bison.y"
                                                                                                                      {
		(yyval.create_table_stmt_t) = new CreateTableStmt();
		(yyval.create_table_stmt_t)->case_idx_ = CASE0;
		(yyval.create_table_stmt_t)->opt_temp_ = (yyvsp[-7].opt_temp_t);
		(yyval.create_table_stmt_t)->opt_if_not_exist_ = (yyvsp[-5].opt_if_not_exist_t);
		(yyval.create_table_stmt_t)->table_name_ = (yyvsp[-4].table_name_t);
		(yyval.create_table_stmt_t)->opt_table_option_list_ = (yyvsp[-3].opt_table_option_list_t);
		(yyval.create_table_stmt_t)->opt_ignore_or_replace_ = (yyvsp[-2].opt_ignore_or_replace_t);
		(yyval.create_table_stmt_t)->select_stmt_ = (yyvsp[0].select_stmt_t);
		if((yyval.create_table_stmt_t)){
			auto tmp1 = (yyval.create_table_stmt_t)->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)128; //kAlias
				}
			}
		}


	}
#line 6344 "bison_parser.cpp"
    break;

  case 179: /* create_table_stmt: CREATE opt_temp TABLE opt_if_not_exist table_name OP_LP column_def_list opt_table_constraint_list OP_RP opt_table_option_list  */
#line 1617 "bison.y"
                                                                                                                                       {
		(yyval.create_table_stmt_t) = new CreateTableStmt();
		(yyval.create_table_stmt_t)->case_idx_ = CASE1;
		(yyval.create_table_stmt_t)->opt_temp_ = (yyvsp[-8].opt_temp_t);
		(yyval.create_table_stmt_t)->opt_if_not_exist_ = (yyvsp[-6].opt_if_not_exist_t);
		(yyval.create_table_stmt_t)->table_name_ = (yyvsp[-5].table_name_t);
		(yyval.create_table_stmt_t)->column_def_list_ = (yyvsp[-3].column_def_list_t);
		(yyval.create_table_stmt_t)->opt_table_constraint_list_ = (yyvsp[-2].opt_table_constraint_list_t);
		(yyval.create_table_stmt_t)->opt_table_option_list_ = (yyvsp[0].opt_table_option_list_t);
		if((yyval.create_table_stmt_t)){
			auto tmp1 = (yyval.create_table_stmt_t)->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}

		if((yyval.create_table_stmt_t)){
			auto tmp1 = (yyval.create_table_stmt_t)->column_def_list_; 
			while(tmp1){
				auto tmp2 = tmp1->column_def_; 
				if(tmp2){
					auto tmp3 = tmp2->identifier_; 
					if(tmp3){
						tmp3->data_type_ = kDataColumnName; 
						tmp3->scope_ = 2; 
						tmp3->data_flag_ =(DATAFLAG)1; 
					}
				}
				tmp1 = tmp1->column_def_list_;
			}
		}


	}
#line 6388 "bison_parser.cpp"
    break;

  case 180: /* create_table_stmt: comment_literal create_table_stmt  */
#line 1656 "bison.y"
                                            {
		(yyval.create_table_stmt_t) = (yyvsp[0].create_table_stmt_t);
		MERGE_LEFT_COMMENT((yyval.create_table_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 6397 "bison_parser.cpp"
    break;

  case 181: /* create_table_stmt: create_table_stmt comment_literal  */
#line 1660 "bison.y"
                                             {
		(yyval.create_table_stmt_t) = (yyvsp[-1].create_table_stmt_t);
		(yyval.create_table_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6406 "bison_parser.cpp"
    break;

  case 182: /* create_index_stmt: CREATE opt_index_keyword INDEX table_name ON table_name OP_LP indexed_column_list OP_RP opt_index_option opt_extra_option  */
#line 1667 "bison.y"
                                                                                                                                   {
		(yyval.create_index_stmt_t) = new CreateIndexStmt();
		(yyval.create_index_stmt_t)->case_idx_ = CASE0;
		(yyval.create_index_stmt_t)->opt_index_keyword_ = (yyvsp[-9].opt_index_keyword_t);
		(yyval.create_index_stmt_t)->table_name_1_ = (yyvsp[-7].table_name_t);
		(yyval.create_index_stmt_t)->table_name_2_ = (yyvsp[-5].table_name_t);
		(yyval.create_index_stmt_t)->indexed_column_list_ = (yyvsp[-3].indexed_column_list_t);
		(yyval.create_index_stmt_t)->opt_index_option_ = (yyvsp[-1].opt_index_option_t);
		(yyval.create_index_stmt_t)->opt_extra_option_ = (yyvsp[0].opt_extra_option_t);
		if((yyval.create_index_stmt_t)){
			auto tmp1 = (yyval.create_index_stmt_t)->table_name_1_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 2; 
					tmp2->data_flag_ =(DATAFLAG)128; 
				}
			}
		}

		if((yyval.create_index_stmt_t)){
			auto tmp1 = (yyval.create_index_stmt_t)->table_name_2_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)8; 
				}
			}
		}
	}
#line 6444 "bison_parser.cpp"
    break;

  case 183: /* create_index_stmt: comment_literal create_index_stmt  */
#line 1700 "bison.y"
                                            {
		(yyval.create_index_stmt_t) = (yyvsp[0].create_index_stmt_t);
		MERGE_LEFT_COMMENT((yyval.create_index_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 6453 "bison_parser.cpp"
    break;

  case 184: /* create_index_stmt: create_index_stmt comment_literal  */
#line 1704 "bison.y"
                                             {
		(yyval.create_index_stmt_t) = (yyvsp[-1].create_index_stmt_t);
		(yyval.create_index_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6462 "bison_parser.cpp"
    break;

  case 185: /* create_trigger_stmt: CREATE TRIGGER trigger_name trigger_action_time trigger_events ON table_name FOR EACH ROW trigger_body  */
#line 1711 "bison.y"
                                                                                                                {
		(yyval.create_trigger_stmt_t) = new CreateTriggerStmt();
		(yyval.create_trigger_stmt_t)->case_idx_ = CASE0;
		(yyval.create_trigger_stmt_t)->trigger_name_ = (yyvsp[-8].trigger_name_t);
		(yyval.create_trigger_stmt_t)->trigger_action_time_ = (yyvsp[-7].trigger_action_time_t);
		(yyval.create_trigger_stmt_t)->trigger_events_ = (yyvsp[-6].trigger_events_t);
		(yyval.create_trigger_stmt_t)->table_name_ = (yyvsp[-4].table_name_t);
		(yyval.create_trigger_stmt_t)->trigger_body_ = (yyvsp[0].trigger_body_t);
		if((yyval.create_trigger_stmt_t)){
			auto tmp1 = (yyval.create_trigger_stmt_t)->trigger_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTriggerName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}

		if((yyval.create_trigger_stmt_t)){
			auto tmp1 = (yyval.create_trigger_stmt_t)->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)8; 
				}
			}
		}
	}
#line 6499 "bison_parser.cpp"
    break;

  case 186: /* create_trigger_stmt: comment_literal create_trigger_stmt  */
#line 1743 "bison.y"
                                              {
		(yyval.create_trigger_stmt_t) = (yyvsp[0].create_trigger_stmt_t);
		MERGE_LEFT_COMMENT((yyval.create_trigger_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 6508 "bison_parser.cpp"
    break;

  case 187: /* create_trigger_stmt: create_trigger_stmt comment_literal  */
#line 1747 "bison.y"
                                               {
		(yyval.create_trigger_stmt_t) = (yyvsp[-1].create_trigger_stmt_t);
		(yyval.create_trigger_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6517 "bison_parser.cpp"
    break;

  case 188: /* create_view_stmt: CREATE opt_view_algorithm opt_sql_security VIEW view_name opt_column_name_list_p AS select_stmt opt_check_option  */
#line 1754 "bison.y"
                                                                                                                          {
		(yyval.create_view_stmt_t) = new CreateViewStmt();
		(yyval.create_view_stmt_t)->case_idx_ = CASE0;
		(yyval.create_view_stmt_t)->opt_view_algorithm_ = (yyvsp[-7].opt_view_algorithm_t);
		(yyval.create_view_stmt_t)->opt_sql_security_ = (yyvsp[-6].opt_sql_security_t);
		(yyval.create_view_stmt_t)->view_name_ = (yyvsp[-4].view_name_t);
		(yyval.create_view_stmt_t)->opt_column_name_list_p_ = (yyvsp[-3].opt_column_name_list_p_t);
		(yyval.create_view_stmt_t)->select_stmt_ = (yyvsp[-1].select_stmt_t);
		(yyval.create_view_stmt_t)->opt_check_option_ = (yyvsp[0].opt_check_option_t);
		if((yyval.create_view_stmt_t)){
			auto tmp1 = (yyval.create_view_stmt_t)->view_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 10; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}

		if((yyval.create_view_stmt_t)){
			auto tmp1 = (yyval.create_view_stmt_t)->opt_column_name_list_p_; 
			if(tmp1){
				auto tmp2 = tmp1->column_name_list_; 
				while(tmp2){
					auto tmp3 = tmp2->column_name_; 
					if(tmp3){
						auto tmp4 = tmp3->identifier_; 
						if(tmp4){
							tmp4->data_type_ = kDataColumnName; 
							tmp4->scope_ = 11; 
							tmp4->data_flag_ =(DATAFLAG)1; 
						}
					}
					tmp2 = tmp2->column_name_list_;
				}
			}
		}


	}
#line 6564 "bison_parser.cpp"
    break;

  case 189: /* create_view_stmt: CREATE OR REPLACE opt_view_algorithm opt_sql_security VIEW view_name opt_column_name_list_p AS select_stmt opt_check_option  */
#line 1796 "bison.y"
                                                                                                                                     {
		(yyval.create_view_stmt_t) = new CreateViewStmt();
		(yyval.create_view_stmt_t)->case_idx_ = CASE1;
		(yyval.create_view_stmt_t)->opt_view_algorithm_ = (yyvsp[-7].opt_view_algorithm_t);
		(yyval.create_view_stmt_t)->opt_sql_security_ = (yyvsp[-6].opt_sql_security_t);
		(yyval.create_view_stmt_t)->view_name_ = (yyvsp[-4].view_name_t);
		(yyval.create_view_stmt_t)->opt_column_name_list_p_ = (yyvsp[-3].opt_column_name_list_p_t);
		(yyval.create_view_stmt_t)->select_stmt_ = (yyvsp[-1].select_stmt_t);
		(yyval.create_view_stmt_t)->opt_check_option_ = (yyvsp[0].opt_check_option_t);
		if((yyval.create_view_stmt_t)){
			auto tmp1 = (yyval.create_view_stmt_t)->view_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 10; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}

		if((yyval.create_view_stmt_t)){
			auto tmp1 = (yyval.create_view_stmt_t)->opt_column_name_list_p_; 
			if(tmp1){
				auto tmp2 = tmp1->column_name_list_; 
				while(tmp2){
					auto tmp3 = tmp2->column_name_; 
					if(tmp3){
						auto tmp4 = tmp3->identifier_; 
						if(tmp4){
							tmp4->data_type_ = kDataColumnName; 
							tmp4->scope_ = 11; 
							tmp4->data_flag_ =(DATAFLAG)1; 
						}
					}
					tmp2 = tmp2->column_name_list_;
				}
			}
		}


	}
#line 6611 "bison_parser.cpp"
    break;

  case 190: /* create_view_stmt: comment_literal create_view_stmt  */
#line 1838 "bison.y"
                                           {
		(yyval.create_view_stmt_t) = (yyvsp[0].create_view_stmt_t);
		MERGE_LEFT_COMMENT((yyval.create_view_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 6620 "bison_parser.cpp"
    break;

  case 191: /* create_view_stmt: create_view_stmt comment_literal  */
#line 1842 "bison.y"
                                            {
		(yyval.create_view_stmt_t) = (yyvsp[-1].create_view_stmt_t);
		(yyval.create_view_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6629 "bison_parser.cpp"
    break;

  case 192: /* opt_table_option_list: table_option_list  */
#line 1849 "bison.y"
                           {
		(yyval.opt_table_option_list_t) = new OptTableOptionList();
		(yyval.opt_table_option_list_t)->case_idx_ = CASE0;
		(yyval.opt_table_option_list_t)->table_option_list_ = (yyvsp[0].table_option_list_t);
		
	}
#line 6640 "bison_parser.cpp"
    break;

  case 193: /* opt_table_option_list: %empty  */
#line 1855 "bison.y"
          {
		(yyval.opt_table_option_list_t) = new OptTableOptionList();
		(yyval.opt_table_option_list_t)->case_idx_ = CASE1;
		
	}
#line 6650 "bison_parser.cpp"
    break;

  case 194: /* table_option_list: table_option  */
#line 1863 "bison.y"
                      {
		(yyval.table_option_list_t) = new TableOptionList();
		(yyval.table_option_list_t)->case_idx_ = CASE0;
		(yyval.table_option_list_t)->table_option_ = (yyvsp[0].table_option_t);
		
	}
#line 6661 "bison_parser.cpp"
    break;

  case 195: /* table_option_list: table_option opt_op_comma table_option_list  */
#line 1869 "bison.y"
                                                     {
		(yyval.table_option_list_t) = new TableOptionList();
		(yyval.table_option_list_t)->case_idx_ = CASE1;
		(yyval.table_option_list_t)->table_option_ = (yyvsp[-2].table_option_t);
		(yyval.table_option_list_t)->opt_op_comma_ = (yyvsp[-1].opt_op_comma_t);
		(yyval.table_option_list_t)->table_option_list_ = (yyvsp[0].table_option_list_t);
		
	}
#line 6674 "bison_parser.cpp"
    break;

  case 196: /* table_option: INSERT_METHOD opt_op_equal NO  */
#line 1880 "bison.y"
                                       {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE0;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6685 "bison_parser.cpp"
    break;

  case 197: /* table_option: INSERT_METHOD opt_op_equal FIRST  */
#line 1886 "bison.y"
                                          {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE1;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6696 "bison_parser.cpp"
    break;

  case 198: /* table_option: INSERT_METHOD opt_op_equal LAST  */
#line 1892 "bison.y"
                                         {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE2;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6707 "bison_parser.cpp"
    break;

  case 199: /* table_option: ROW_FORMAT opt_op_equal DEFAULT  */
#line 1898 "bison.y"
                                         {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE3;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6718 "bison_parser.cpp"
    break;

  case 200: /* table_option: ROW_FORMAT opt_op_equal DYNAMIC  */
#line 1904 "bison.y"
                                         {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE4;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6729 "bison_parser.cpp"
    break;

  case 201: /* table_option: ROW_FORMAT opt_op_equal FIXED  */
#line 1910 "bison.y"
                                       {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE5;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6740 "bison_parser.cpp"
    break;

  case 202: /* table_option: ROW_FORMAT opt_op_equal COMPRESSED  */
#line 1916 "bison.y"
                                            {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE6;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6751 "bison_parser.cpp"
    break;

  case 203: /* table_option: ROW_FORMAT opt_op_equal REDUNDANT  */
#line 1922 "bison.y"
                                           {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE7;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6762 "bison_parser.cpp"
    break;

  case 204: /* table_option: ROW_FORMAT opt_op_equal COMPACT  */
#line 1928 "bison.y"
                                         {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE8;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6773 "bison_parser.cpp"
    break;

  case 205: /* table_option: comment_literal table_option  */
#line 1934 "bison.y"
                                       {
		(yyval.table_option_t) = (yyvsp[0].table_option_t);
		MERGE_LEFT_COMMENT((yyval.table_option_t), (yyvsp[-1].comment_literal_t));
	}
#line 6782 "bison_parser.cpp"
    break;

  case 206: /* table_option: table_option comment_literal  */
#line 1938 "bison.y"
                                        {
		(yyval.table_option_t) = (yyvsp[-1].table_option_t);
		(yyval.table_option_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6791 "bison_parser.cpp"
    break;

  case 207: /* opt_op_comma: OP_COMMA  */
#line 1945 "bison.y"
                  {
		(yyval.opt_op_comma_t) = new OptOpComma();
		(yyval.opt_op_comma_t)->case_idx_ = CASE0;
		
	}
#line 6801 "bison_parser.cpp"
    break;

  case 208: /* opt_op_comma: %empty  */
#line 1950 "bison.y"
          {
		(yyval.opt_op_comma_t) = new OptOpComma();
		(yyval.opt_op_comma_t)->case_idx_ = CASE1;
		
	}
#line 6811 "bison_parser.cpp"
    break;

  case 209: /* opt_op_comma: comment_literal opt_op_comma  */
#line 1955 "bison.y"
                                       {
		(yyval.opt_op_comma_t) = (yyvsp[0].opt_op_comma_t);
		MERGE_LEFT_COMMENT((yyval.opt_op_comma_t), (yyvsp[-1].comment_literal_t));
	}
#line 6820 "bison_parser.cpp"
    break;

  case 210: /* opt_op_comma: opt_op_comma comment_literal  */
#line 1959 "bison.y"
                                        {
		(yyval.opt_op_comma_t) = (yyvsp[-1].opt_op_comma_t);
		(yyval.opt_op_comma_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6829 "bison_parser.cpp"
    break;

  case 211: /* opt_ignore_or_replace: IGNORE  */
#line 1966 "bison.y"
                {
		(yyval.opt_ignore_or_replace_t) = new OptIgnoreOrReplace();
		(yyval.opt_ignore_or_replace_t)->case_idx_ = CASE0;
		
	}
#line 6839 "bison_parser.cpp"
    break;

  case 212: /* opt_ignore_or_replace: REPLACE  */
#line 1971 "bison.y"
                 {
		(yyval.opt_ignore_or_replace_t) = new OptIgnoreOrReplace();
		(yyval.opt_ignore_or_replace_t)->case_idx_ = CASE1;
		
	}
#line 6849 "bison_parser.cpp"
    break;

  case 213: /* opt_ignore_or_replace: %empty  */
#line 1976 "bison.y"
          {
		(yyval.opt_ignore_or_replace_t) = new OptIgnoreOrReplace();
		(yyval.opt_ignore_or_replace_t)->case_idx_ = CASE2;
		
	}
#line 6859 "bison_parser.cpp"
    break;

  case 214: /* opt_ignore_or_replace: comment_literal opt_ignore_or_replace  */
#line 1981 "bison.y"
                                                {
		(yyval.opt_ignore_or_replace_t) = (yyvsp[0].opt_ignore_or_replace_t);
		MERGE_LEFT_COMMENT((yyval.opt_ignore_or_replace_t), (yyvsp[-1].comment_literal_t));
	}
#line 6868 "bison_parser.cpp"
    break;

  case 215: /* opt_ignore_or_replace: opt_ignore_or_replace comment_literal  */
#line 1985 "bison.y"
                                                 {
		(yyval.opt_ignore_or_replace_t) = (yyvsp[-1].opt_ignore_or_replace_t);
		(yyval.opt_ignore_or_replace_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6877 "bison_parser.cpp"
    break;

  case 216: /* opt_view_algorithm: ALGORITHM OP_EQUAL UNDEFINED  */
#line 1992 "bison.y"
                                      {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE0;
		
	}
#line 6887 "bison_parser.cpp"
    break;

  case 217: /* opt_view_algorithm: ALGORITHM OP_EQUAL MERGE  */
#line 1997 "bison.y"
                                  {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE1;
		
	}
#line 6897 "bison_parser.cpp"
    break;

  case 218: /* opt_view_algorithm: ALGORITHM OP_EQUAL TEMPTABLE  */
#line 2002 "bison.y"
                                      {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE2;
		
	}
#line 6907 "bison_parser.cpp"
    break;

  case 219: /* opt_view_algorithm: %empty  */
#line 2007 "bison.y"
          {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE3;
		
	}
#line 6917 "bison_parser.cpp"
    break;

  case 220: /* opt_view_algorithm: comment_literal opt_view_algorithm  */
#line 2012 "bison.y"
                                             {
		(yyval.opt_view_algorithm_t) = (yyvsp[0].opt_view_algorithm_t);
		MERGE_LEFT_COMMENT((yyval.opt_view_algorithm_t), (yyvsp[-1].comment_literal_t));
	}
#line 6926 "bison_parser.cpp"
    break;

  case 221: /* opt_view_algorithm: opt_view_algorithm comment_literal  */
#line 2016 "bison.y"
                                              {
		(yyval.opt_view_algorithm_t) = (yyvsp[-1].opt_view_algorithm_t);
		(yyval.opt_view_algorithm_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6935 "bison_parser.cpp"
    break;

  case 222: /* opt_sql_security: SQL SECURITY DEFINER  */
#line 2023 "bison.y"
                              {
		(yyval.opt_sql_security_t) = new OptSqlSecurity();
		(yyval.opt_sql_security_t)->case_idx_ = CASE0;
		
	}
#line 6945 "bison_parser.cpp"
    break;

  case 223: /* opt_sql_security: SQL SECURITY INVOKER  */
#line 2028 "bison.y"
                              {
		(yyval.opt_sql_security_t) = new OptSqlSecurity();
		(yyval.opt_sql_security_t)->case_idx_ = CASE1;
		
	}
#line 6955 "bison_parser.cpp"
    break;

  case 224: /* opt_sql_security: %empty  */
#line 2033 "bison.y"
          {
		(yyval.opt_sql_security_t) = new OptSqlSecurity();
		(yyval.opt_sql_security_t)->case_idx_ = CASE2;
		
	}
#line 6965 "bison_parser.cpp"
    break;

  case 225: /* opt_sql_security: comment_literal opt_sql_security  */
#line 2038 "bison.y"
                                           {
		(yyval.opt_sql_security_t) = (yyvsp[0].opt_sql_security_t);
		MERGE_LEFT_COMMENT((yyval.opt_sql_security_t), (yyvsp[-1].comment_literal_t));
	}
#line 6974 "bison_parser.cpp"
    break;

  case 226: /* opt_sql_security: opt_sql_security comment_literal  */
#line 2042 "bison.y"
                                            {
		(yyval.opt_sql_security_t) = (yyvsp[-1].opt_sql_security_t);
		(yyval.opt_sql_security_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6983 "bison_parser.cpp"
    break;

  case 227: /* opt_index_option: USING BTREE  */
#line 2049 "bison.y"
                     {
		(yyval.opt_index_option_t) = new OptIndexOption();
		(yyval.opt_index_option_t)->case_idx_ = CASE0;
		
	}
#line 6993 "bison_parser.cpp"
    break;

  case 228: /* opt_index_option: USING HASH  */
#line 2054 "bison.y"
                    {
		(yyval.opt_index_option_t) = new OptIndexOption();
		(yyval.opt_index_option_t)->case_idx_ = CASE1;
		
	}
#line 7003 "bison_parser.cpp"
    break;

  case 229: /* opt_index_option: %empty  */
#line 2059 "bison.y"
          {
		(yyval.opt_index_option_t) = new OptIndexOption();
		(yyval.opt_index_option_t)->case_idx_ = CASE2;
		
	}
#line 7013 "bison_parser.cpp"
    break;

  case 230: /* opt_index_option: comment_literal opt_index_option  */
#line 2064 "bison.y"
                                           {
		(yyval.opt_index_option_t) = (yyvsp[0].opt_index_option_t);
		MERGE_LEFT_COMMENT((yyval.opt_index_option_t), (yyvsp[-1].comment_literal_t));
	}
#line 7022 "bison_parser.cpp"
    break;

  case 231: /* opt_index_option: opt_index_option comment_literal  */
#line 2068 "bison.y"
                                            {
		(yyval.opt_index_option_t) = (yyvsp[-1].opt_index_option_t);
		(yyval.opt_index_option_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7031 "bison_parser.cpp"
    break;

  case 232: /* opt_extra_option: index_algorithm_option  */
#line 2075 "bison.y"
                                {
		(yyval.opt_extra_option_t) = new OptExtraOption();
		(yyval.opt_extra_option_t)->case_idx_ = CASE0;
		(yyval.opt_extra_option_t)->index_algorithm_option_ = (yyvsp[0].index_algorithm_option_t);
		
	}
#line 7042 "bison_parser.cpp"
    break;

  case 233: /* opt_extra_option: lock_option  */
#line 2081 "bison.y"
                     {
		(yyval.opt_extra_option_t) = new OptExtraOption();
		(yyval.opt_extra_option_t)->case_idx_ = CASE1;
		(yyval.opt_extra_option_t)->lock_option_ = (yyvsp[0].lock_option_t);
		
	}
#line 7053 "bison_parser.cpp"
    break;

  case 234: /* opt_extra_option: %empty  */
#line 2087 "bison.y"
          {
		(yyval.opt_extra_option_t) = new OptExtraOption();
		(yyval.opt_extra_option_t)->case_idx_ = CASE2;
		
	}
#line 7063 "bison_parser.cpp"
    break;

  case 235: /* index_algorithm_option: ALGORITHM opt_op_equal DEFAULT  */
#line 2095 "bison.y"
                                        {
		(yyval.index_algorithm_option_t) = new IndexAlgorithmOption();
		(yyval.index_algorithm_option_t)->case_idx_ = CASE0;
		(yyval.index_algorithm_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 7074 "bison_parser.cpp"
    break;

  case 236: /* index_algorithm_option: ALGORITHM opt_op_equal INPLACE  */
#line 2101 "bison.y"
                                        {
		(yyval.index_algorithm_option_t) = new IndexAlgorithmOption();
		(yyval.index_algorithm_option_t)->case_idx_ = CASE1;
		(yyval.index_algorithm_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 7085 "bison_parser.cpp"
    break;

  case 237: /* index_algorithm_option: ALGORITHM opt_op_equal COPY  */
#line 2107 "bison.y"
                                     {
		(yyval.index_algorithm_option_t) = new IndexAlgorithmOption();
		(yyval.index_algorithm_option_t)->case_idx_ = CASE2;
		(yyval.index_algorithm_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 7096 "bison_parser.cpp"
    break;

  case 238: /* index_algorithm_option: comment_literal index_algorithm_option  */
#line 2113 "bison.y"
                                                 {
		(yyval.index_algorithm_option_t) = (yyvsp[0].index_algorithm_option_t);
		MERGE_LEFT_COMMENT((yyval.index_algorithm_option_t), (yyvsp[-1].comment_literal_t));
	}
#line 7105 "bison_parser.cpp"
    break;

  case 239: /* index_algorithm_option: index_algorithm_option comment_literal  */
#line 2117 "bison.y"
                                                  {
		(yyval.index_algorithm_option_t) = (yyvsp[-1].index_algorithm_option_t);
		(yyval.index_algorithm_option_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7114 "bison_parser.cpp"
    break;

  case 240: /* lock_option: LOCK opt_op_equal DEFAULT  */
#line 2124 "bison.y"
                                   {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE0;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 7125 "bison_parser.cpp"
    break;

  case 241: /* lock_option: LOCK opt_op_equal NONE  */
#line 2130 "bison.y"
                                {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE1;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 7136 "bison_parser.cpp"
    break;

  case 242: /* lock_option: LOCK opt_op_equal SHARED  */
#line 2136 "bison.y"
                                  {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE2;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 7147 "bison_parser.cpp"
    break;

  case 243: /* lock_option: LOCK opt_op_equal EXCLUSIVE  */
#line 2142 "bison.y"
                                     {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE3;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 7158 "bison_parser.cpp"
    break;

  case 244: /* lock_option: comment_literal lock_option  */
#line 2148 "bison.y"
                                      {
		(yyval.lock_option_t) = (yyvsp[0].lock_option_t);
		MERGE_LEFT_COMMENT((yyval.lock_option_t), (yyvsp[-1].comment_literal_t));
	}
#line 7167 "bison_parser.cpp"
    break;

  case 245: /* lock_option: lock_option comment_literal  */
#line 2152 "bison.y"
                                       {
		(yyval.lock_option_t) = (yyvsp[-1].lock_option_t);
		(yyval.lock_option_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7176 "bison_parser.cpp"
    break;

  case 246: /* opt_op_equal: OP_EQUAL  */
#line 2159 "bison.y"
                  {
		(yyval.opt_op_equal_t) = new OptOpEqual();
		(yyval.opt_op_equal_t)->case_idx_ = CASE0;
		
	}
#line 7186 "bison_parser.cpp"
    break;

  case 247: /* opt_op_equal: %empty  */
#line 2164 "bison.y"
          {
		(yyval.opt_op_equal_t) = new OptOpEqual();
		(yyval.opt_op_equal_t)->case_idx_ = CASE1;
		
	}
#line 7196 "bison_parser.cpp"
    break;

  case 248: /* opt_op_equal: comment_literal opt_op_equal  */
#line 2169 "bison.y"
                                       {
		(yyval.opt_op_equal_t) = (yyvsp[0].opt_op_equal_t);
		MERGE_LEFT_COMMENT((yyval.opt_op_equal_t), (yyvsp[-1].comment_literal_t));
	}
#line 7205 "bison_parser.cpp"
    break;

  case 249: /* opt_op_equal: opt_op_equal comment_literal  */
#line 2173 "bison.y"
                                        {
		(yyval.opt_op_equal_t) = (yyvsp[-1].opt_op_equal_t);
		(yyval.opt_op_equal_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7214 "bison_parser.cpp"
    break;

  case 250: /* trigger_events: DELETE  */
#line 2180 "bison.y"
                {
		(yyval.trigger_events_t) = new TriggerEvents();
		(yyval.trigger_events_t)->case_idx_ = CASE0;
		
	}
#line 7224 "bison_parser.cpp"
    break;

  case 251: /* trigger_events: INSERT  */
#line 2185 "bison.y"
                {
		(yyval.trigger_events_t) = new TriggerEvents();
		(yyval.trigger_events_t)->case_idx_ = CASE1;
		
	}
#line 7234 "bison_parser.cpp"
    break;

  case 252: /* trigger_events: UPDATE  */
#line 2190 "bison.y"
                {
		(yyval.trigger_events_t) = new TriggerEvents();
		(yyval.trigger_events_t)->case_idx_ = CASE2;
		
	}
#line 7244 "bison_parser.cpp"
    break;

  case 253: /* trigger_events: comment_literal trigger_events  */
#line 2195 "bison.y"
                                         {
		(yyval.trigger_events_t) = (yyvsp[0].trigger_events_t);
		MERGE_LEFT_COMMENT((yyval.trigger_events_t), (yyvsp[-1].comment_literal_t));
	}
#line 7253 "bison_parser.cpp"
    break;

  case 254: /* trigger_events: trigger_events comment_literal  */
#line 2199 "bison.y"
                                          {
		(yyval.trigger_events_t) = (yyvsp[-1].trigger_events_t);
		(yyval.trigger_events_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7262 "bison_parser.cpp"
    break;

  case 255: /* trigger_name: identifier  */
#line 2206 "bison.y"
                    {
		(yyval.trigger_name_t) = new TriggerName();
		(yyval.trigger_name_t)->case_idx_ = CASE0;
		(yyval.trigger_name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 7273 "bison_parser.cpp"
    break;

  case 256: /* trigger_action_time: BEFORE  */
#line 2215 "bison.y"
                {
		(yyval.trigger_action_time_t) = new TriggerActionTime();
		(yyval.trigger_action_time_t)->case_idx_ = CASE0;
		
	}
#line 7283 "bison_parser.cpp"
    break;

  case 257: /* trigger_action_time: AFTER  */
#line 2220 "bison.y"
               {
		(yyval.trigger_action_time_t) = new TriggerActionTime();
		(yyval.trigger_action_time_t)->case_idx_ = CASE1;
		
	}
#line 7293 "bison_parser.cpp"
    break;

  case 258: /* trigger_action_time: comment_literal trigger_action_time  */
#line 2225 "bison.y"
                                              {
		(yyval.trigger_action_time_t) = (yyvsp[0].trigger_action_time_t);
		MERGE_LEFT_COMMENT((yyval.trigger_action_time_t), (yyvsp[-1].comment_literal_t));
	}
#line 7302 "bison_parser.cpp"
    break;

  case 259: /* trigger_action_time: trigger_action_time comment_literal  */
#line 2229 "bison.y"
                                               {
		(yyval.trigger_action_time_t) = (yyvsp[-1].trigger_action_time_t);
		(yyval.trigger_action_time_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7311 "bison_parser.cpp"
    break;

  case 260: /* drop_index_stmt: DROP INDEX table_name opt_extra_option  */
#line 2236 "bison.y"
                                                {
		(yyval.drop_index_stmt_t) = new DropIndexStmt();
		(yyval.drop_index_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_index_stmt_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.drop_index_stmt_t)->opt_extra_option_ = (yyvsp[0].opt_extra_option_t);
		if((yyval.drop_index_stmt_t)){
			auto tmp1 = (yyval.drop_index_stmt_t)->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)2; 
				}
			}
		}
	}
#line 7333 "bison_parser.cpp"
    break;

  case 261: /* drop_index_stmt: comment_literal drop_index_stmt  */
#line 2253 "bison.y"
                                          {
		(yyval.drop_index_stmt_t) = (yyvsp[0].drop_index_stmt_t);
		MERGE_LEFT_COMMENT((yyval.drop_index_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 7342 "bison_parser.cpp"
    break;

  case 262: /* drop_index_stmt: drop_index_stmt comment_literal  */
#line 2257 "bison.y"
                                           {
		(yyval.drop_index_stmt_t) = (yyvsp[-1].drop_index_stmt_t);
		(yyval.drop_index_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7351 "bison_parser.cpp"
    break;

  case 263: /* drop_table_stmt: DROP opt_temp TABLE opt_if_exist table_name opt_restrict_or_cascade  */
#line 2264 "bison.y"
                                                                             {
		(yyval.drop_table_stmt_t) = new DropTableStmt();
		(yyval.drop_table_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_table_stmt_t)->opt_temp_ = (yyvsp[-4].opt_temp_t);
		(yyval.drop_table_stmt_t)->opt_if_exist_ = (yyvsp[-2].opt_if_exist_t);
		(yyval.drop_table_stmt_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.drop_table_stmt_t)->opt_restrict_or_cascade_ = (yyvsp[0].opt_restrict_or_cascade_t);
		if((yyval.drop_table_stmt_t)){
			auto tmp1 = (yyval.drop_table_stmt_t)->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)2; 
				}
			}
		}


	}
#line 7377 "bison_parser.cpp"
    break;

  case 264: /* drop_table_stmt: comment_literal drop_table_stmt  */
#line 2285 "bison.y"
                                          {
		(yyval.drop_table_stmt_t) = (yyvsp[0].drop_table_stmt_t);
		MERGE_LEFT_COMMENT((yyval.drop_table_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 7386 "bison_parser.cpp"
    break;

  case 265: /* drop_table_stmt: drop_table_stmt comment_literal  */
#line 2289 "bison.y"
                                           {
		(yyval.drop_table_stmt_t) = (yyvsp[-1].drop_table_stmt_t);
		(yyval.drop_table_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7395 "bison_parser.cpp"
    break;

  case 266: /* opt_restrict_or_cascade: RESTRICT  */
#line 2296 "bison.y"
                  {
		(yyval.opt_restrict_or_cascade_t) = new OptRestrictOrCascade();
		(yyval.opt_restrict_or_cascade_t)->case_idx_ = CASE0;
		
	}
#line 7405 "bison_parser.cpp"
    break;

  case 267: /* opt_restrict_or_cascade: CASCADE  */
#line 2301 "bison.y"
                 {
		(yyval.opt_restrict_or_cascade_t) = new OptRestrictOrCascade();
		(yyval.opt_restrict_or_cascade_t)->case_idx_ = CASE1;
		
	}
#line 7415 "bison_parser.cpp"
    break;

  case 268: /* opt_restrict_or_cascade: %empty  */
#line 2306 "bison.y"
          {
		(yyval.opt_restrict_or_cascade_t) = new OptRestrictOrCascade();
		(yyval.opt_restrict_or_cascade_t)->case_idx_ = CASE2;
		
	}
#line 7425 "bison_parser.cpp"
    break;

  case 269: /* opt_restrict_or_cascade: comment_literal opt_restrict_or_cascade  */
#line 2311 "bison.y"
                                                  {
		(yyval.opt_restrict_or_cascade_t) = (yyvsp[0].opt_restrict_or_cascade_t);
		MERGE_LEFT_COMMENT((yyval.opt_restrict_or_cascade_t), (yyvsp[-1].comment_literal_t));
	}
#line 7434 "bison_parser.cpp"
    break;

  case 270: /* opt_restrict_or_cascade: opt_restrict_or_cascade comment_literal  */
#line 2315 "bison.y"
                                                   {
		(yyval.opt_restrict_or_cascade_t) = (yyvsp[-1].opt_restrict_or_cascade_t);
		(yyval.opt_restrict_or_cascade_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7443 "bison_parser.cpp"
    break;

  case 271: /* drop_trigger_stmt: DROP TRIGGER opt_if_exist trigger_name  */
#line 2322 "bison.y"
                                                {
		(yyval.drop_trigger_stmt_t) = new DropTriggerStmt();
		(yyval.drop_trigger_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_trigger_stmt_t)->opt_if_exist_ = (yyvsp[-1].opt_if_exist_t);
		(yyval.drop_trigger_stmt_t)->trigger_name_ = (yyvsp[0].trigger_name_t);
		if((yyval.drop_trigger_stmt_t)){
			auto tmp1 = (yyval.drop_trigger_stmt_t)->trigger_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTriggerName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)2; 
				}
			}
		}
	}
#line 7465 "bison_parser.cpp"
    break;

  case 272: /* drop_trigger_stmt: comment_literal drop_trigger_stmt  */
#line 2339 "bison.y"
                                            {
		(yyval.drop_trigger_stmt_t) = (yyvsp[0].drop_trigger_stmt_t);
		MERGE_LEFT_COMMENT((yyval.drop_trigger_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 7474 "bison_parser.cpp"
    break;

  case 273: /* drop_trigger_stmt: drop_trigger_stmt comment_literal  */
#line 2343 "bison.y"
                                             {
		(yyval.drop_trigger_stmt_t) = (yyvsp[-1].drop_trigger_stmt_t);
		(yyval.drop_trigger_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7483 "bison_parser.cpp"
    break;

  case 274: /* drop_view_stmt: DROP VIEW opt_if_exist view_name opt_restrict_or_cascade  */
#line 2350 "bison.y"
                                                                  {
		(yyval.drop_view_stmt_t) = new DropViewStmt();
		(yyval.drop_view_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_view_stmt_t)->opt_if_exist_ = (yyvsp[-2].opt_if_exist_t);
		(yyval.drop_view_stmt_t)->view_name_ = (yyvsp[-1].view_name_t);
		(yyval.drop_view_stmt_t)->opt_restrict_or_cascade_ = (yyvsp[0].opt_restrict_or_cascade_t);
		if((yyval.drop_view_stmt_t)){
			auto tmp1 = (yyval.drop_view_stmt_t)->view_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 1; 
					tmp2->data_flag_ =(DATAFLAG)2; 
				}
			}
		}


	}
#line 7508 "bison_parser.cpp"
    break;

  case 275: /* drop_view_stmt: comment_literal drop_view_stmt  */
#line 2370 "bison.y"
                                         {
		(yyval.drop_view_stmt_t) = (yyvsp[0].drop_view_stmt_t);
		MERGE_LEFT_COMMENT((yyval.drop_view_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 7517 "bison_parser.cpp"
    break;

  case 276: /* drop_view_stmt: drop_view_stmt comment_literal  */
#line 2374 "bison.y"
                                          {
		(yyval.drop_view_stmt_t) = (yyvsp[-1].drop_view_stmt_t);
		(yyval.drop_view_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7526 "bison_parser.cpp"
    break;

  case 277: /* insert_stmt: opt_with_clause INSERT INTO table_name opt_as_alias insert_rest opt_on_conflict  */
#line 2381 "bison.y"
                                                                                         {
		(yyval.insert_stmt_t) = new InsertStmt();
		(yyval.insert_stmt_t)->case_idx_ = CASE0;
		(yyval.insert_stmt_t)->opt_with_clause_ = (yyvsp[-6].opt_with_clause_t);
		(yyval.insert_stmt_t)->table_name_ = (yyvsp[-3].table_name_t);
		(yyval.insert_stmt_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.insert_stmt_t)->insert_rest_ = (yyvsp[-1].insert_rest_t);
		(yyval.insert_stmt_t)->opt_on_conflict_ = (yyvsp[0].opt_on_conflict_t);
		
	}
#line 7541 "bison_parser.cpp"
    break;

  case 278: /* insert_rest: opt_column_name_list_p select_no_parens  */
#line 2394 "bison.y"
                                                 {
		(yyval.insert_rest_t) = new InsertRest();
		(yyval.insert_rest_t)->case_idx_ = CASE0;
		(yyval.insert_rest_t)->opt_column_name_list_p_ = (yyvsp[-1].opt_column_name_list_p_t);
		(yyval.insert_rest_t)->select_no_parens_ = (yyvsp[0].select_no_parens_t);
		
	}
#line 7553 "bison_parser.cpp"
    break;

  case 279: /* insert_rest: opt_column_name_list_p DEFAULT VALUES  */
#line 2401 "bison.y"
                                               {
		(yyval.insert_rest_t) = new InsertRest();
		(yyval.insert_rest_t)->case_idx_ = CASE1;
		(yyval.insert_rest_t)->opt_column_name_list_p_ = (yyvsp[-2].opt_column_name_list_p_t);
		
	}
#line 7564 "bison_parser.cpp"
    break;

  case 280: /* insert_rest: opt_column_name_list_p VALUES super_values_list  */
#line 2407 "bison.y"
                                                         {
		(yyval.insert_rest_t) = new InsertRest();
		(yyval.insert_rest_t)->case_idx_ = CASE2;
		(yyval.insert_rest_t)->opt_column_name_list_p_ = (yyvsp[-2].opt_column_name_list_p_t);
		(yyval.insert_rest_t)->super_values_list_ = (yyvsp[0].super_values_list_t);
		
	}
#line 7576 "bison_parser.cpp"
    break;

  case 281: /* insert_rest: comment_literal insert_rest  */
#line 2414 "bison.y"
                                      {
		(yyval.insert_rest_t) = (yyvsp[0].insert_rest_t);
		MERGE_LEFT_COMMENT((yyval.insert_rest_t), (yyvsp[-1].comment_literal_t));
	}
#line 7585 "bison_parser.cpp"
    break;

  case 282: /* insert_rest: insert_rest comment_literal  */
#line 2418 "bison.y"
                                       {
		(yyval.insert_rest_t) = (yyvsp[-1].insert_rest_t);
		(yyval.insert_rest_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7594 "bison_parser.cpp"
    break;

  case 283: /* super_values_list: values_list  */
#line 2425 "bison.y"
                     {
		(yyval.super_values_list_t) = new SuperValuesList();
		(yyval.super_values_list_t)->case_idx_ = CASE0;
		(yyval.super_values_list_t)->values_list_ = (yyvsp[0].values_list_t);
		
	}
#line 7605 "bison_parser.cpp"
    break;

  case 284: /* super_values_list: values_list OP_COMMA super_values_list  */
#line 2431 "bison.y"
                                                {
		(yyval.super_values_list_t) = new SuperValuesList();
		(yyval.super_values_list_t)->case_idx_ = CASE1;
		(yyval.super_values_list_t)->values_list_ = (yyvsp[-2].values_list_t);
		(yyval.super_values_list_t)->super_values_list_ = (yyvsp[0].super_values_list_t);
		
	}
#line 7617 "bison_parser.cpp"
    break;

  case 285: /* values_list: OP_LP expr_list OP_RP  */
#line 2441 "bison.y"
                               {
		(yyval.values_list_t) = new ValuesList();
		(yyval.values_list_t)->case_idx_ = CASE0;
		(yyval.values_list_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 7628 "bison_parser.cpp"
    break;

  case 286: /* values_list: comment_literal values_list  */
#line 2447 "bison.y"
                                      {
		(yyval.values_list_t) = (yyvsp[0].values_list_t);
		MERGE_LEFT_COMMENT((yyval.values_list_t), (yyvsp[-1].comment_literal_t));
	}
#line 7637 "bison_parser.cpp"
    break;

  case 287: /* values_list: values_list comment_literal  */
#line 2451 "bison.y"
                                       {
		(yyval.values_list_t) = (yyvsp[-1].values_list_t);
		(yyval.values_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7646 "bison_parser.cpp"
    break;

  case 288: /* opt_on_conflict: ON CONFLICT opt_conflict_expr DO NOTHING  */
#line 2458 "bison.y"
                                                  {
		(yyval.opt_on_conflict_t) = new OptOnConflict();
		(yyval.opt_on_conflict_t)->case_idx_ = CASE0;
		(yyval.opt_on_conflict_t)->opt_conflict_expr_ = (yyvsp[-2].opt_conflict_expr_t);
		
	}
#line 7657 "bison_parser.cpp"
    break;

  case 289: /* opt_on_conflict: ON CONFLICT opt_conflict_expr DO UPDATE set_clause_list where_clause  */
#line 2464 "bison.y"
                                                                              {
		(yyval.opt_on_conflict_t) = new OptOnConflict();
		(yyval.opt_on_conflict_t)->case_idx_ = CASE1;
		(yyval.opt_on_conflict_t)->opt_conflict_expr_ = (yyvsp[-4].opt_conflict_expr_t);
		(yyval.opt_on_conflict_t)->set_clause_list_ = (yyvsp[-1].set_clause_list_t);
		(yyval.opt_on_conflict_t)->where_clause_ = (yyvsp[0].where_clause_t);
		
	}
#line 7670 "bison_parser.cpp"
    break;

  case 290: /* opt_on_conflict: %empty  */
#line 2472 "bison.y"
          {
		(yyval.opt_on_conflict_t) = new OptOnConflict();
		(yyval.opt_on_conflict_t)->case_idx_ = CASE2;
		
	}
#line 7680 "bison_parser.cpp"
    break;

  case 291: /* opt_on_conflict: comment_literal opt_on_conflict  */
#line 2477 "bison.y"
                                          {
		(yyval.opt_on_conflict_t) = (yyvsp[0].opt_on_conflict_t);
		MERGE_LEFT_COMMENT((yyval.opt_on_conflict_t), (yyvsp[-1].comment_literal_t));
	}
#line 7689 "bison_parser.cpp"
    break;

  case 292: /* opt_on_conflict: opt_on_conflict comment_literal  */
#line 2481 "bison.y"
                                           {
		(yyval.opt_on_conflict_t) = (yyvsp[-1].opt_on_conflict_t);
		(yyval.opt_on_conflict_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7698 "bison_parser.cpp"
    break;

  case 293: /* opt_conflict_expr: OP_LP indexed_column_list OP_RP where_clause  */
#line 2488 "bison.y"
                                                      {
		(yyval.opt_conflict_expr_t) = new OptConflictExpr();
		(yyval.opt_conflict_expr_t)->case_idx_ = CASE0;
		(yyval.opt_conflict_expr_t)->indexed_column_list_ = (yyvsp[-2].indexed_column_list_t);
		(yyval.opt_conflict_expr_t)->where_clause_ = (yyvsp[0].where_clause_t);
		
	}
#line 7710 "bison_parser.cpp"
    break;

  case 294: /* opt_conflict_expr: %empty  */
#line 2495 "bison.y"
          {
		(yyval.opt_conflict_expr_t) = new OptConflictExpr();
		(yyval.opt_conflict_expr_t)->case_idx_ = CASE1;
		
	}
#line 7720 "bison_parser.cpp"
    break;

  case 295: /* opt_conflict_expr: comment_literal opt_conflict_expr  */
#line 2500 "bison.y"
                                            {
		(yyval.opt_conflict_expr_t) = (yyvsp[0].opt_conflict_expr_t);
		MERGE_LEFT_COMMENT((yyval.opt_conflict_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 7729 "bison_parser.cpp"
    break;

  case 296: /* opt_conflict_expr: opt_conflict_expr comment_literal  */
#line 2504 "bison.y"
                                             {
		(yyval.opt_conflict_expr_t) = (yyvsp[-1].opt_conflict_expr_t);
		(yyval.opt_conflict_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7738 "bison_parser.cpp"
    break;

  case 297: /* indexed_column_list: indexed_column  */
#line 2511 "bison.y"
                        {
		(yyval.indexed_column_list_t) = new IndexedColumnList();
		(yyval.indexed_column_list_t)->case_idx_ = CASE0;
		(yyval.indexed_column_list_t)->indexed_column_ = (yyvsp[0].indexed_column_t);
		
	}
#line 7749 "bison_parser.cpp"
    break;

  case 298: /* indexed_column_list: indexed_column OP_COMMA indexed_column_list  */
#line 2517 "bison.y"
                                                     {
		(yyval.indexed_column_list_t) = new IndexedColumnList();
		(yyval.indexed_column_list_t)->case_idx_ = CASE1;
		(yyval.indexed_column_list_t)->indexed_column_ = (yyvsp[-2].indexed_column_t);
		(yyval.indexed_column_list_t)->indexed_column_list_ = (yyvsp[0].indexed_column_list_t);
		
	}
#line 7761 "bison_parser.cpp"
    break;

  case 299: /* indexed_column: expr opt_order_behavior  */
#line 2527 "bison.y"
                                 {
		(yyval.indexed_column_t) = new IndexedColumn();
		(yyval.indexed_column_t)->case_idx_ = CASE0;
		(yyval.indexed_column_t)->expr_ = (yyvsp[-1].expr_t);
		(yyval.indexed_column_t)->opt_order_behavior_ = (yyvsp[0].opt_order_behavior_t);
		
	}
#line 7773 "bison_parser.cpp"
    break;

  case 300: /* update_stmt: UPDATE IGNORE table_name opt_as_alias SET set_clause_list opt_where_clause opt_order_clause opt_limit_row_count  */
#line 2537 "bison.y"
                                                                                                                         {
		(yyval.update_stmt_t) = new UpdateStmt();
		(yyval.update_stmt_t)->case_idx_ = CASE0;
		(yyval.update_stmt_t)->table_name_ = (yyvsp[-6].table_name_t);
		(yyval.update_stmt_t)->opt_as_alias_ = (yyvsp[-5].opt_as_alias_t);
		(yyval.update_stmt_t)->set_clause_list_ = (yyvsp[-3].set_clause_list_t);
		(yyval.update_stmt_t)->opt_where_clause_ = (yyvsp[-2].opt_where_clause_t);
		(yyval.update_stmt_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.update_stmt_t)->opt_limit_row_count_ = (yyvsp[0].opt_limit_row_count_t);
		
	}
#line 7789 "bison_parser.cpp"
    break;

  case 301: /* update_stmt: UPDATE table_name opt_as_alias SET set_clause_list opt_where_clause opt_order_clause opt_limit_row_count  */
#line 2548 "bison.y"
                                                                                                                  {
		(yyval.update_stmt_t) = new UpdateStmt();
		(yyval.update_stmt_t)->case_idx_ = CASE1;
		(yyval.update_stmt_t)->table_name_ = (yyvsp[-6].table_name_t);
		(yyval.update_stmt_t)->opt_as_alias_ = (yyvsp[-5].opt_as_alias_t);
		(yyval.update_stmt_t)->set_clause_list_ = (yyvsp[-3].set_clause_list_t);
		(yyval.update_stmt_t)->opt_where_clause_ = (yyvsp[-2].opt_where_clause_t);
		(yyval.update_stmt_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.update_stmt_t)->opt_limit_row_count_ = (yyvsp[0].opt_limit_row_count_t);
		
	}
#line 7805 "bison_parser.cpp"
    break;

  case 302: /* update_stmt: comment_literal update_stmt  */
#line 2559 "bison.y"
                                      {
		(yyval.update_stmt_t) = (yyvsp[0].update_stmt_t);
		MERGE_LEFT_COMMENT((yyval.update_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 7814 "bison_parser.cpp"
    break;

  case 303: /* update_stmt: update_stmt comment_literal  */
#line 2563 "bison.y"
                                       {
		(yyval.update_stmt_t) = (yyvsp[-1].update_stmt_t);
		(yyval.update_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7823 "bison_parser.cpp"
    break;

  case 304: /* alter_action: RENAME TO table_name  */
#line 2570 "bison.y"
                              {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE0;
		(yyval.alter_action_t)->table_name_ = (yyvsp[0].table_name_t);
		if((yyval.alter_action_t)){
			auto tmp1 = (yyval.alter_action_t)->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 2; 
					tmp2->data_flag_ =(DATAFLAG)64; 
				}
			}
		}


	}
#line 7846 "bison_parser.cpp"
    break;

  case 305: /* alter_action: RENAME opt_column column_name TO column_name  */
#line 2588 "bison.y"
                                                      {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE1;
		(yyval.alter_action_t)->opt_column_ = (yyvsp[-3].opt_column_t);
		(yyval.alter_action_t)->column_name_1_ = (yyvsp[-2].column_name_t);
		(yyval.alter_action_t)->column_name_2_ = (yyvsp[0].column_name_t);
		if((yyval.alter_action_t)){
			auto tmp1 = (yyval.alter_action_t)->column_name_1_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataColumnName; 
					tmp2->scope_ = 2; 
					tmp2->data_flag_ =(DATAFLAG)8; 
				}
			}
		}

		if((yyval.alter_action_t)){
			auto tmp1 = (yyval.alter_action_t)->column_name_2_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataColumnName; 
					tmp2->scope_ = 3; 
					tmp2->data_flag_ =(DATAFLAG)64; 
				}
			}
		}


	}
#line 7883 "bison_parser.cpp"
    break;

  case 306: /* alter_action: ADD opt_column column_def  */
#line 2620 "bison.y"
                                   {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE2;
		(yyval.alter_action_t)->opt_column_ = (yyvsp[-1].opt_column_t);
		(yyval.alter_action_t)->column_def_ = (yyvsp[0].column_def_t);
		if((yyval.alter_action_t)){
			auto tmp1 = (yyval.alter_action_t)->column_def_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataColumnName; 
					tmp2->scope_ = 2; 
					tmp2->data_flag_ =(DATAFLAG)1; 
				}
			}
		}


	}
#line 7907 "bison_parser.cpp"
    break;

  case 307: /* alter_action: DROP opt_column column_name  */
#line 2639 "bison.y"
                                     {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE3;
		(yyval.alter_action_t)->opt_column_ = (yyvsp[-1].opt_column_t);
		(yyval.alter_action_t)->column_name_1_ = (yyvsp[0].column_name_t);
		if((yyval.alter_action_t)){
			auto tmp1 = (yyval.alter_action_t)->column_name_1_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataColumnName; 
					tmp2->scope_ = 2; 
					tmp2->data_flag_ =(DATAFLAG)2; 
				}
			}
		}


	}
#line 7931 "bison_parser.cpp"
    break;

  case 308: /* alter_action: alter_constant_action  */
#line 2658 "bison.y"
                               {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE4;
		(yyval.alter_action_t)->alter_constant_action_ = (yyvsp[0].alter_constant_action_t);
		
	}
#line 7942 "bison_parser.cpp"
    break;

  case 309: /* alter_action: comment_literal alter_action  */
#line 2664 "bison.y"
                                       {
		(yyval.alter_action_t) = (yyvsp[0].alter_action_t);
		MERGE_LEFT_COMMENT((yyval.alter_action_t), (yyvsp[-1].comment_literal_t));
	}
#line 7951 "bison_parser.cpp"
    break;

  case 310: /* alter_action: alter_action comment_literal  */
#line 2668 "bison.y"
                                        {
		(yyval.alter_action_t) = (yyvsp[-1].alter_action_t);
		(yyval.alter_action_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7960 "bison_parser.cpp"
    break;

  case 311: /* alter_constant_action: DROP PRIMARY KEY  */
#line 2675 "bison.y"
                          {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE0;
		
	}
#line 7970 "bison_parser.cpp"
    break;

  case 312: /* alter_constant_action: FORCE  */
#line 2680 "bison.y"
               {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE1;
		
	}
#line 7980 "bison_parser.cpp"
    break;

  case 313: /* alter_constant_action: DISABLE KEYS  */
#line 2685 "bison.y"
                      {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE2;
		
	}
#line 7990 "bison_parser.cpp"
    break;

  case 314: /* alter_constant_action: ENABLE KEYS  */
#line 2690 "bison.y"
                     {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE3;
		
	}
#line 8000 "bison_parser.cpp"
    break;

  case 315: /* alter_constant_action: lock_option  */
#line 2695 "bison.y"
                     {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE4;
		(yyval.alter_constant_action_t)->lock_option_ = (yyvsp[0].lock_option_t);
		
	}
#line 8011 "bison_parser.cpp"
    break;

  case 316: /* alter_constant_action: WITH VALIDATION  */
#line 2701 "bison.y"
                         {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE5;
		
	}
#line 8021 "bison_parser.cpp"
    break;

  case 317: /* alter_constant_action: WITHOUT VALIDATION  */
#line 2706 "bison.y"
                            {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE6;
		
	}
#line 8031 "bison_parser.cpp"
    break;

  case 318: /* alter_constant_action: comment_literal alter_constant_action  */
#line 2711 "bison.y"
                                                {
		(yyval.alter_constant_action_t) = (yyvsp[0].alter_constant_action_t);
		MERGE_LEFT_COMMENT((yyval.alter_constant_action_t), (yyvsp[-1].comment_literal_t));
	}
#line 8040 "bison_parser.cpp"
    break;

  case 319: /* alter_constant_action: alter_constant_action comment_literal  */
#line 2715 "bison.y"
                                                 {
		(yyval.alter_constant_action_t) = (yyvsp[-1].alter_constant_action_t);
		(yyval.alter_constant_action_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8049 "bison_parser.cpp"
    break;

  case 320: /* column_def_list: column_def  */
#line 2722 "bison.y"
                    {
		(yyval.column_def_list_t) = new ColumnDefList();
		(yyval.column_def_list_t)->case_idx_ = CASE0;
		(yyval.column_def_list_t)->column_def_ = (yyvsp[0].column_def_t);
		
	}
#line 8060 "bison_parser.cpp"
    break;

  case 321: /* column_def_list: column_def OP_COMMA column_def_list  */
#line 2728 "bison.y"
                                             {
		(yyval.column_def_list_t) = new ColumnDefList();
		(yyval.column_def_list_t)->case_idx_ = CASE1;
		(yyval.column_def_list_t)->column_def_ = (yyvsp[-2].column_def_t);
		(yyval.column_def_list_t)->column_def_list_ = (yyvsp[0].column_def_list_t);
		
	}
#line 8072 "bison_parser.cpp"
    break;

  case 322: /* column_def: identifier type_name opt_column_constraint_list  */
#line 2738 "bison.y"
                                                         {
		(yyval.column_def_t) = new ColumnDef();
		(yyval.column_def_t)->case_idx_ = CASE0;
		(yyval.column_def_t)->identifier_ = (yyvsp[-2].identifier_t);
		(yyval.column_def_t)->type_name_ = (yyvsp[-1].type_name_t);
		(yyval.column_def_t)->opt_column_constraint_list_ = (yyvsp[0].opt_column_constraint_list_t);
		if((yyval.column_def_t)){
			auto tmp1 = (yyval.column_def_t)->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataColumnName; 
				tmp1->scope_ = 2; 
				tmp1->data_flag_ =(DATAFLAG)1; 
			}
		}


	}
#line 8094 "bison_parser.cpp"
    break;

  case 323: /* opt_column_constraint_list: column_constraint_list opt_check opt_reference_clause  */
#line 2758 "bison.y"
                                                               {
		(yyval.opt_column_constraint_list_t) = new OptColumnConstraintList();
		(yyval.opt_column_constraint_list_t)->case_idx_ = CASE0;
		(yyval.opt_column_constraint_list_t)->column_constraint_list_ = (yyvsp[-2].column_constraint_list_t);
		(yyval.opt_column_constraint_list_t)->opt_check_ = (yyvsp[-1].opt_check_t);
		(yyval.opt_column_constraint_list_t)->opt_reference_clause_ = (yyvsp[0].opt_reference_clause_t);
		
	}
#line 8107 "bison_parser.cpp"
    break;

  case 324: /* opt_column_constraint_list: %empty  */
#line 2766 "bison.y"
          {
		(yyval.opt_column_constraint_list_t) = new OptColumnConstraintList();
		(yyval.opt_column_constraint_list_t)->case_idx_ = CASE1;
		
	}
#line 8117 "bison_parser.cpp"
    break;

  case 325: /* column_constraint_list: column_constraint  */
#line 2774 "bison.y"
                           {
		(yyval.column_constraint_list_t) = new ColumnConstraintList();
		(yyval.column_constraint_list_t)->case_idx_ = CASE0;
		(yyval.column_constraint_list_t)->column_constraint_ = (yyvsp[0].column_constraint_t);
		
	}
#line 8128 "bison_parser.cpp"
    break;

  case 326: /* column_constraint_list: column_constraint column_constraint_list  */
#line 2780 "bison.y"
                                                  {
		(yyval.column_constraint_list_t) = new ColumnConstraintList();
		(yyval.column_constraint_list_t)->case_idx_ = CASE1;
		(yyval.column_constraint_list_t)->column_constraint_ = (yyvsp[-1].column_constraint_t);
		(yyval.column_constraint_list_t)->column_constraint_list_ = (yyvsp[0].column_constraint_list_t);
		
	}
#line 8140 "bison_parser.cpp"
    break;

  case 327: /* column_constraint: constraint_type  */
#line 2790 "bison.y"
                         {
		(yyval.column_constraint_t) = new ColumnConstraint();
		(yyval.column_constraint_t)->case_idx_ = CASE0;
		(yyval.column_constraint_t)->constraint_type_ = (yyvsp[0].constraint_type_t);
		
	}
#line 8151 "bison_parser.cpp"
    break;

  case 328: /* opt_reference_clause: opt_foreign_key reference_clause  */
#line 2799 "bison.y"
                                          {
		(yyval.opt_reference_clause_t) = new OptReferenceClause();
		(yyval.opt_reference_clause_t)->case_idx_ = CASE0;
		(yyval.opt_reference_clause_t)->opt_foreign_key_ = (yyvsp[-1].opt_foreign_key_t);
		(yyval.opt_reference_clause_t)->reference_clause_ = (yyvsp[0].reference_clause_t);
		
	}
#line 8163 "bison_parser.cpp"
    break;

  case 329: /* opt_reference_clause: %empty  */
#line 2806 "bison.y"
          {
		(yyval.opt_reference_clause_t) = new OptReferenceClause();
		(yyval.opt_reference_clause_t)->case_idx_ = CASE1;
		
	}
#line 8173 "bison_parser.cpp"
    break;

  case 330: /* opt_check: CHECK OP_LP expr OP_RP opt_enforced  */
#line 2814 "bison.y"
                                             {
		(yyval.opt_check_t) = new OptCheck();
		(yyval.opt_check_t)->case_idx_ = CASE0;
		(yyval.opt_check_t)->expr_ = (yyvsp[-2].expr_t);
		(yyval.opt_check_t)->opt_enforced_ = (yyvsp[0].opt_enforced_t);
		
	}
#line 8185 "bison_parser.cpp"
    break;

  case 331: /* opt_check: %empty  */
#line 2821 "bison.y"
          {
		(yyval.opt_check_t) = new OptCheck();
		(yyval.opt_check_t)->case_idx_ = CASE1;
		
	}
#line 8195 "bison_parser.cpp"
    break;

  case 332: /* opt_check: comment_literal opt_check  */
#line 2826 "bison.y"
                                    {
		(yyval.opt_check_t) = (yyvsp[0].opt_check_t);
		MERGE_LEFT_COMMENT((yyval.opt_check_t), (yyvsp[-1].comment_literal_t));
	}
#line 8204 "bison_parser.cpp"
    break;

  case 333: /* opt_check: opt_check comment_literal  */
#line 2830 "bison.y"
                                     {
		(yyval.opt_check_t) = (yyvsp[-1].opt_check_t);
		(yyval.opt_check_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8213 "bison_parser.cpp"
    break;

  case 334: /* constraint_type: PRIMARY KEY  */
#line 2837 "bison.y"
                     {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE0;
		
	}
#line 8223 "bison_parser.cpp"
    break;

  case 335: /* constraint_type: NOT NULL  */
#line 2842 "bison.y"
                  {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE1;
		
	}
#line 8233 "bison_parser.cpp"
    break;

  case 336: /* constraint_type: UNIQUE  */
#line 2847 "bison.y"
                {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE2;
		
	}
#line 8243 "bison_parser.cpp"
    break;

  case 337: /* constraint_type: opt_check  */
#line 2852 "bison.y"
                    {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->opt_check_ = (yyvsp[0].opt_check_t);
		(yyval.constraint_type_t)->case_idx_ = CASE3;

	}
#line 8254 "bison_parser.cpp"
    break;

  case 338: /* constraint_type: comment_literal constraint_type  */
#line 2858 "bison.y"
                                          {
		(yyval.constraint_type_t) = (yyvsp[0].constraint_type_t);
		MERGE_LEFT_COMMENT((yyval.constraint_type_t), (yyvsp[-1].comment_literal_t));
	}
#line 8263 "bison_parser.cpp"
    break;

  case 339: /* constraint_type: constraint_type comment_literal  */
#line 2862 "bison.y"
                                           {
		(yyval.constraint_type_t) = (yyvsp[-1].constraint_type_t);
		(yyval.constraint_type_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8272 "bison_parser.cpp"
    break;

  case 340: /* reference_clause: REFERENCES table_name opt_column_name_list_p opt_foreign_key_actions opt_constraint_attribute_spec  */
#line 2869 "bison.y"
                                                                                                            {
		(yyval.reference_clause_t) = new ReferenceClause();
		(yyval.reference_clause_t)->case_idx_ = CASE0;
		(yyval.reference_clause_t)->table_name_ = (yyvsp[-3].table_name_t);
		(yyval.reference_clause_t)->opt_column_name_list_p_ = (yyvsp[-2].opt_column_name_list_p_t);
		(yyval.reference_clause_t)->opt_foreign_key_actions_ = (yyvsp[-1].opt_foreign_key_actions_t);
		(yyval.reference_clause_t)->opt_constraint_attribute_spec_ = (yyvsp[0].opt_constraint_attribute_spec_t);
		if((yyval.reference_clause_t)){
			auto tmp1 = (yyval.reference_clause_t)->table_name_; 
			if(tmp1){
				auto tmp2 = tmp1->identifier_; 
				if(tmp2){
					tmp2->data_type_ = kDataTableName; 
					tmp2->scope_ = 100; 
					tmp2->data_flag_ =(DATAFLAG)8; 
				}
			}
		}

		if((yyval.reference_clause_t)){
			auto tmp1 = (yyval.reference_clause_t)->opt_column_name_list_p_; 
			if(tmp1){
				auto tmp2 = tmp1->column_name_list_; 
				while(tmp2){
					auto tmp3 = tmp2->column_name_; 
					if(tmp3){
						auto tmp4 = tmp3->identifier_; 
						if(tmp4){
							tmp4->data_type_ = kDataColumnName; 
							tmp4->scope_ = 101; 
							tmp4->data_flag_ =(DATAFLAG)8; 
						}
					}
					tmp2 = tmp2->column_name_list_;
				}
			}
		}
	}
#line 8315 "bison_parser.cpp"
    break;

  case 341: /* reference_clause: comment_literal reference_clause  */
#line 2907 "bison.y"
                                           {
		(yyval.reference_clause_t) = (yyvsp[0].reference_clause_t);
		MERGE_LEFT_COMMENT((yyval.reference_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 8324 "bison_parser.cpp"
    break;

  case 342: /* reference_clause: reference_clause comment_literal  */
#line 2911 "bison.y"
                                            {
		(yyval.reference_clause_t) = (yyvsp[-1].reference_clause_t);
		(yyval.reference_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8333 "bison_parser.cpp"
    break;

  case 343: /* opt_foreign_key: FOREIGN KEY  */
#line 2918 "bison.y"
                     {
		(yyval.opt_foreign_key_t) = new OptForeignKey();
		(yyval.opt_foreign_key_t)->case_idx_ = CASE0;
		
	}
#line 8343 "bison_parser.cpp"
    break;

  case 344: /* opt_foreign_key: %empty  */
#line 2923 "bison.y"
          {
		(yyval.opt_foreign_key_t) = new OptForeignKey();
		(yyval.opt_foreign_key_t)->case_idx_ = CASE1;
		
	}
#line 8353 "bison_parser.cpp"
    break;

  case 345: /* opt_foreign_key: comment_literal opt_foreign_key  */
#line 2928 "bison.y"
                                          {
		(yyval.opt_foreign_key_t) = (yyvsp[0].opt_foreign_key_t);
		MERGE_LEFT_COMMENT((yyval.opt_foreign_key_t), (yyvsp[-1].comment_literal_t));
	}
#line 8362 "bison_parser.cpp"
    break;

  case 346: /* opt_foreign_key: opt_foreign_key comment_literal  */
#line 2932 "bison.y"
                                           {
		(yyval.opt_foreign_key_t) = (yyvsp[-1].opt_foreign_key_t);
		(yyval.opt_foreign_key_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8371 "bison_parser.cpp"
    break;

  case 347: /* opt_foreign_key_actions: foreign_key_actions  */
#line 2939 "bison.y"
                             {
		(yyval.opt_foreign_key_actions_t) = new OptForeignKeyActions();
		(yyval.opt_foreign_key_actions_t)->case_idx_ = CASE0;
		(yyval.opt_foreign_key_actions_t)->foreign_key_actions_ = (yyvsp[0].foreign_key_actions_t);
		
	}
#line 8382 "bison_parser.cpp"
    break;

  case 348: /* opt_foreign_key_actions: %empty  */
#line 2945 "bison.y"
          {
		(yyval.opt_foreign_key_actions_t) = new OptForeignKeyActions();
		(yyval.opt_foreign_key_actions_t)->case_idx_ = CASE1;
		
	}
#line 8392 "bison_parser.cpp"
    break;

  case 349: /* foreign_key_actions: MATCH FULL  */
#line 2953 "bison.y"
                    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE0;
		
	}
#line 8402 "bison_parser.cpp"
    break;

  case 350: /* foreign_key_actions: MATCH PARTIAL  */
#line 2958 "bison.y"
                       {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE1;
		
	}
#line 8412 "bison_parser.cpp"
    break;

  case 351: /* foreign_key_actions: MATCH SIMPLE  */
#line 2963 "bison.y"
                      {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE2;
		
	}
#line 8422 "bison_parser.cpp"
    break;

  case 352: /* foreign_key_actions: ON UPDATE key_actions  */
#line 2968 "bison.y"
                               {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE3;
		(yyval.foreign_key_actions_t)->key_actions_ = (yyvsp[0].key_actions_t);
		
	}
#line 8433 "bison_parser.cpp"
    break;

  case 353: /* foreign_key_actions: ON DELETE key_actions  */
#line 2974 "bison.y"
                               {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE4;
		(yyval.foreign_key_actions_t)->key_actions_ = (yyvsp[0].key_actions_t);
		
	}
#line 8444 "bison_parser.cpp"
    break;

  case 354: /* foreign_key_actions: comment_literal foreign_key_actions  */
#line 2980 "bison.y"
                                              {
		(yyval.foreign_key_actions_t) = (yyvsp[0].foreign_key_actions_t);
		MERGE_LEFT_COMMENT((yyval.foreign_key_actions_t), (yyvsp[-1].comment_literal_t));
	}
#line 8453 "bison_parser.cpp"
    break;

  case 355: /* foreign_key_actions: foreign_key_actions comment_literal  */
#line 2984 "bison.y"
                                               {
		(yyval.foreign_key_actions_t) = (yyvsp[-1].foreign_key_actions_t);
		(yyval.foreign_key_actions_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8462 "bison_parser.cpp"
    break;

  case 356: /* key_actions: SET NULL  */
#line 2991 "bison.y"
                  {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE0;
		
	}
#line 8472 "bison_parser.cpp"
    break;

  case 357: /* key_actions: SET DEFAULT  */
#line 2996 "bison.y"
                     {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE1;
		
	}
#line 8482 "bison_parser.cpp"
    break;

  case 358: /* key_actions: CASCADE  */
#line 3001 "bison.y"
                 {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE2;
		
	}
#line 8492 "bison_parser.cpp"
    break;

  case 359: /* key_actions: RESTRICT  */
#line 3006 "bison.y"
                  {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE3;
		
	}
#line 8502 "bison_parser.cpp"
    break;

  case 360: /* key_actions: NO ACTION  */
#line 3011 "bison.y"
                   {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE4;
		
	}
#line 8512 "bison_parser.cpp"
    break;

  case 361: /* key_actions: comment_literal key_actions  */
#line 3016 "bison.y"
                                      {
		(yyval.key_actions_t) = (yyvsp[0].key_actions_t);
		MERGE_LEFT_COMMENT((yyval.key_actions_t), (yyvsp[-1].comment_literal_t));
	}
#line 8521 "bison_parser.cpp"
    break;

  case 362: /* key_actions: key_actions comment_literal  */
#line 3020 "bison.y"
                                      {
		(yyval.key_actions_t) = (yyvsp[-1].key_actions_t);
		(yyval.key_actions_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8530 "bison_parser.cpp"
    break;

  case 363: /* opt_constraint_attribute_spec: DEFFERRABLE opt_initial_time  */
#line 3028 "bison.y"
                                      {
		(yyval.opt_constraint_attribute_spec_t) = new OptConstraintAttributeSpec();
		(yyval.opt_constraint_attribute_spec_t)->case_idx_ = CASE0;
		(yyval.opt_constraint_attribute_spec_t)->opt_initial_time_ = (yyvsp[0].opt_initial_time_t);
		
	}
#line 8541 "bison_parser.cpp"
    break;

  case 364: /* opt_constraint_attribute_spec: NOT DEFFERRABLE opt_initial_time  */
#line 3034 "bison.y"
                                          {
		(yyval.opt_constraint_attribute_spec_t) = new OptConstraintAttributeSpec();
		(yyval.opt_constraint_attribute_spec_t)->case_idx_ = CASE1;
		(yyval.opt_constraint_attribute_spec_t)->opt_initial_time_ = (yyvsp[0].opt_initial_time_t);
		
	}
#line 8552 "bison_parser.cpp"
    break;

  case 365: /* opt_constraint_attribute_spec: %empty  */
#line 3040 "bison.y"
          {
		(yyval.opt_constraint_attribute_spec_t) = new OptConstraintAttributeSpec();
		(yyval.opt_constraint_attribute_spec_t)->case_idx_ = CASE2;
		
	}
#line 8562 "bison_parser.cpp"
    break;

  case 366: /* opt_constraint_attribute_spec: comment_literal opt_constraint_attribute_spec  */
#line 3045 "bison.y"
                                                        {
		(yyval.opt_constraint_attribute_spec_t) = (yyvsp[0].opt_constraint_attribute_spec_t);
		MERGE_LEFT_COMMENT((yyval.opt_constraint_attribute_spec_t), (yyvsp[-1].comment_literal_t));
	}
#line 8571 "bison_parser.cpp"
    break;

  case 367: /* opt_constraint_attribute_spec: opt_constraint_attribute_spec comment_literal  */
#line 3049 "bison.y"
                                                        {
		(yyval.opt_constraint_attribute_spec_t) = (yyvsp[-1].opt_constraint_attribute_spec_t);
		(yyval.opt_constraint_attribute_spec_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8580 "bison_parser.cpp"
    break;

  case 368: /* opt_initial_time: INITIALLY DEFERRED  */
#line 3056 "bison.y"
                            {
		(yyval.opt_initial_time_t) = new OptInitialTime();
		(yyval.opt_initial_time_t)->case_idx_ = CASE0;
		
	}
#line 8590 "bison_parser.cpp"
    break;

  case 369: /* opt_initial_time: INITIALLY IMMEDIATE  */
#line 3061 "bison.y"
                             {
		(yyval.opt_initial_time_t) = new OptInitialTime();
		(yyval.opt_initial_time_t)->case_idx_ = CASE1;
		
	}
#line 8600 "bison_parser.cpp"
    break;

  case 370: /* opt_initial_time: %empty  */
#line 3066 "bison.y"
          {
		(yyval.opt_initial_time_t) = new OptInitialTime();
		(yyval.opt_initial_time_t)->case_idx_ = CASE2;
		
	}
#line 8610 "bison_parser.cpp"
    break;

  case 371: /* opt_initial_time: comment_literal opt_initial_time  */
#line 3071 "bison.y"
                                           {
		(yyval.opt_initial_time_t) = (yyvsp[0].opt_initial_time_t);
		MERGE_LEFT_COMMENT((yyval.opt_initial_time_t), (yyvsp[-1].comment_literal_t));
	}
#line 8619 "bison_parser.cpp"
    break;

  case 372: /* opt_initial_time: opt_initial_time comment_literal  */
#line 3075 "bison.y"
                                            {
		(yyval.opt_initial_time_t) = (yyvsp[-1].opt_initial_time_t);
		(yyval.opt_initial_time_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8628 "bison_parser.cpp"
    break;

  case 373: /* constraint_name: CONSTRAINT name  */
#line 3082 "bison.y"
                         {
		(yyval.constraint_name_t) = new ConstraintName();
		(yyval.constraint_name_t)->case_idx_ = CASE0;
		(yyval.constraint_name_t)->name_ = (yyvsp[0].name_t);
		
	}
#line 8639 "bison_parser.cpp"
    break;

  case 374: /* constraint_name: comment_literal constraint_name  */
#line 3088 "bison.y"
                                          {
		(yyval.constraint_name_t) = (yyvsp[0].constraint_name_t);
		MERGE_LEFT_COMMENT((yyval.constraint_name_t), (yyvsp[-1].comment_literal_t));
	}
#line 8648 "bison_parser.cpp"
    break;

  case 375: /* constraint_name: constraint_name comment_literal  */
#line 3092 "bison.y"
                                          {
		(yyval.constraint_name_t) = (yyvsp[-1].constraint_name_t);
		(yyval.constraint_name_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8657 "bison_parser.cpp"
    break;

  case 376: /* constraint_name: comment_literal constraint_name  */
#line 3096 "bison.y"
                                          {
		(yyval.constraint_name_t) = (yyvsp[0].constraint_name_t);
		MERGE_LEFT_COMMENT((yyval.constraint_name_t), (yyvsp[-1].comment_literal_t));
	}
#line 8666 "bison_parser.cpp"
    break;

  case 377: /* constraint_name: constraint_name comment_literal  */
#line 3100 "bison.y"
                                           {
		(yyval.constraint_name_t) = (yyvsp[-1].constraint_name_t);
		(yyval.constraint_name_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8675 "bison_parser.cpp"
    break;

  case 378: /* opt_temp: TEMPORARY  */
#line 3108 "bison.y"
                   {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE0;
		
	}
#line 8685 "bison_parser.cpp"
    break;

  case 379: /* opt_temp: %empty  */
#line 3113 "bison.y"
          {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE1;
		
	}
#line 8695 "bison_parser.cpp"
    break;

  case 380: /* opt_temp: comment_literal opt_temp  */
#line 3118 "bison.y"
                                   {
		(yyval.opt_temp_t) = (yyvsp[0].opt_temp_t);
		MERGE_LEFT_COMMENT((yyval.opt_temp_t), (yyvsp[-1].comment_literal_t));
	}
#line 8704 "bison_parser.cpp"
    break;

  case 381: /* opt_temp: opt_temp comment_literal  */
#line 3122 "bison.y"
                                   {
		(yyval.opt_temp_t) = (yyvsp[-1].opt_temp_t);
		(yyval.opt_temp_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8713 "bison_parser.cpp"
    break;

  case 382: /* opt_check_option: WITH CHECK OPTION  */
#line 3129 "bison.y"
                           {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE0;
		
	}
#line 8723 "bison_parser.cpp"
    break;

  case 383: /* opt_check_option: WITH CASCADED CHECK OPTION  */
#line 3134 "bison.y"
                                    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE1;
		
	}
#line 8733 "bison_parser.cpp"
    break;

  case 384: /* opt_check_option: WITH LOCAL CHECK OPTION  */
#line 3139 "bison.y"
                                 {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE2;
		
	}
#line 8743 "bison_parser.cpp"
    break;

  case 385: /* opt_check_option: %empty  */
#line 3144 "bison.y"
          {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE3;
		
	}
#line 8753 "bison_parser.cpp"
    break;

  case 386: /* opt_check_option: comment_literal opt_check_option  */
#line 3149 "bison.y"
                                           {
		(yyval.opt_check_option_t) = (yyvsp[0].opt_check_option_t);
		MERGE_LEFT_COMMENT((yyval.opt_check_option_t), (yyvsp[-1].comment_literal_t));
	}
#line 8762 "bison_parser.cpp"
    break;

  case 387: /* opt_check_option: opt_check_option comment_literal  */
#line 3153 "bison.y"
                                           {
		(yyval.opt_check_option_t) = (yyvsp[-1].opt_check_option_t);
		(yyval.opt_check_option_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8771 "bison_parser.cpp"
    break;

  case 388: /* opt_column_name_list_p: OP_LP column_name_list OP_RP  */
#line 3160 "bison.y"
                                      {
		(yyval.opt_column_name_list_p_t) = new OptColumnNameListP();
		(yyval.opt_column_name_list_p_t)->case_idx_ = CASE0;
		(yyval.opt_column_name_list_p_t)->column_name_list_ = (yyvsp[-1].column_name_list_t);
		
	}
#line 8782 "bison_parser.cpp"
    break;

  case 389: /* opt_column_name_list_p: %empty  */
#line 3166 "bison.y"
          {
		(yyval.opt_column_name_list_p_t) = new OptColumnNameListP();
		(yyval.opt_column_name_list_p_t)->case_idx_ = CASE1;
		
	}
#line 8792 "bison_parser.cpp"
    break;

  case 390: /* opt_column_name_list_p: comment_literal opt_column_name_list_p  */
#line 3171 "bison.y"
                                                 {
		(yyval.opt_column_name_list_p_t) = (yyvsp[0].opt_column_name_list_p_t);
		MERGE_LEFT_COMMENT((yyval.opt_column_name_list_p_t), (yyvsp[-1].comment_literal_t));
	}
#line 8801 "bison_parser.cpp"
    break;

  case 391: /* opt_column_name_list_p: opt_column_name_list_p comment_literal  */
#line 3175 "bison.y"
                                                 {
		(yyval.opt_column_name_list_p_t) = (yyvsp[-1].opt_column_name_list_p_t);
		(yyval.opt_column_name_list_p_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8810 "bison_parser.cpp"
    break;

  case 392: /* set_clause_list: set_clause  */
#line 3182 "bison.y"
                    {
		(yyval.set_clause_list_t) = new SetClauseList();
		(yyval.set_clause_list_t)->case_idx_ = CASE0;
		(yyval.set_clause_list_t)->set_clause_ = (yyvsp[0].set_clause_t);
		
	}
#line 8821 "bison_parser.cpp"
    break;

  case 393: /* set_clause_list: set_clause OP_COMMA set_clause_list  */
#line 3188 "bison.y"
                                             {
		(yyval.set_clause_list_t) = new SetClauseList();
		(yyval.set_clause_list_t)->case_idx_ = CASE1;
		(yyval.set_clause_list_t)->set_clause_ = (yyvsp[-2].set_clause_t);
		(yyval.set_clause_list_t)->set_clause_list_ = (yyvsp[0].set_clause_list_t);
		
	}
#line 8833 "bison_parser.cpp"
    break;

  case 394: /* set_clause: column_name OP_EQUAL expr  */
#line 3199 "bison.y"
                                   {
		(yyval.set_clause_t) = new SetClause();
		(yyval.set_clause_t)->case_idx_ = CASE0;
		(yyval.set_clause_t)->column_name_ = (yyvsp[-2].column_name_t);
		(yyval.set_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 8845 "bison_parser.cpp"
    break;

  case 395: /* set_clause: OP_LP column_name_list OP_RP OP_EQUAL expr  */
#line 3206 "bison.y"
                                                    {
		(yyval.set_clause_t) = new SetClause();
		(yyval.set_clause_t)->case_idx_ = CASE1;
		(yyval.set_clause_t)->column_name_list_ = (yyvsp[-3].column_name_list_t);
		(yyval.set_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 8857 "bison_parser.cpp"
    break;

  case 396: /* set_clause: comment_literal set_clause  */
#line 3213 "bison.y"
                                     {
		(yyval.set_clause_t) = (yyvsp[0].set_clause_t);
		MERGE_LEFT_COMMENT((yyval.set_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 8866 "bison_parser.cpp"
    break;

  case 397: /* set_clause: set_clause comment_literal  */
#line 3217 "bison.y"
                                     {
		(yyval.set_clause_t) = (yyvsp[-1].set_clause_t);
		(yyval.set_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8875 "bison_parser.cpp"
    break;

  case 398: /* opt_as_alias: as_alias  */
#line 3224 "bison.y"
                  {
		(yyval.opt_as_alias_t) = new OptAsAlias();
		(yyval.opt_as_alias_t)->case_idx_ = CASE0;
		(yyval.opt_as_alias_t)->as_alias_ = (yyvsp[0].as_alias_t);
		
	}
#line 8886 "bison_parser.cpp"
    break;

  case 399: /* opt_as_alias: %empty  */
#line 3230 "bison.y"
          {
		(yyval.opt_as_alias_t) = new OptAsAlias();
		(yyval.opt_as_alias_t)->case_idx_ = CASE1;
		
	}
#line 8896 "bison_parser.cpp"
    break;

  case 400: /* expr: operand  */
#line 3239 "bison.y"
                 {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE0;
		(yyval.expr_t)->operand_ = (yyvsp[0].operand_t);
		
	}
#line 8907 "bison_parser.cpp"
    break;

  case 401: /* expr: between_expr  */
#line 3245 "bison.y"
                      {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE1;
		(yyval.expr_t)->between_expr_ = (yyvsp[0].between_expr_t);
		
	}
#line 8918 "bison_parser.cpp"
    break;

  case 402: /* expr: exists_expr  */
#line 3251 "bison.y"
                     {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE2;
		(yyval.expr_t)->exists_expr_ = (yyvsp[0].exists_expr_t);
		
	}
#line 8929 "bison_parser.cpp"
    break;

  case 403: /* expr: in_expr  */
#line 3257 "bison.y"
                 {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE3;
		(yyval.expr_t)->in_expr_ = (yyvsp[0].in_expr_t);
		
	}
#line 8940 "bison_parser.cpp"
    break;

  case 404: /* expr: cast_expr  */
#line 3263 "bison.y"
                   {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE4;
		(yyval.expr_t)->cast_expr_ = (yyvsp[0].cast_expr_t);
		
	}
#line 8951 "bison_parser.cpp"
    break;

  case 405: /* expr: logic_expr  */
#line 3269 "bison.y"
                    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE5;
		(yyval.expr_t)->logic_expr_ = (yyvsp[0].logic_expr_t);
		
	}
#line 8962 "bison_parser.cpp"
    break;

  case 406: /* operand: OP_LP expr_list OP_RP  */
#line 3279 "bison.y"
                               {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE0;
		(yyval.operand_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 8973 "bison_parser.cpp"
    break;

  case 407: /* operand: array_index  */
#line 3285 "bison.y"
                     {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE1;
		(yyval.operand_t)->array_index_ = (yyvsp[0].array_index_t);
		
	}
#line 8984 "bison_parser.cpp"
    break;

  case 408: /* operand: scalar_expr  */
#line 3291 "bison.y"
                     {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE2;
		(yyval.operand_t)->scalar_expr_ = (yyvsp[0].scalar_expr_t);
		
	}
#line 8995 "bison_parser.cpp"
    break;

  case 409: /* operand: unary_expr  */
#line 3297 "bison.y"
                    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE3;
		(yyval.operand_t)->unary_expr_ = (yyvsp[0].unary_expr_t);
		
	}
#line 9006 "bison_parser.cpp"
    break;

  case 410: /* operand: binary_expr  */
#line 3303 "bison.y"
                     {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE4;
		(yyval.operand_t)->binary_expr_ = (yyvsp[0].binary_expr_t);
		
	}
#line 9017 "bison_parser.cpp"
    break;

  case 411: /* operand: case_expr  */
#line 3309 "bison.y"
                   {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE5;
		(yyval.operand_t)->case_expr_ = (yyvsp[0].case_expr_t);
		
	}
#line 9028 "bison_parser.cpp"
    break;

  case 412: /* operand: extract_expr  */
#line 3315 "bison.y"
                      {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE6;
		(yyval.operand_t)->extract_expr_ = (yyvsp[0].extract_expr_t);
		
	}
#line 9039 "bison_parser.cpp"
    break;

  case 413: /* operand: array_expr  */
#line 3321 "bison.y"
                    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE7;
		(yyval.operand_t)->array_expr_ = (yyvsp[0].array_expr_t);
		
	}
#line 9050 "bison_parser.cpp"
    break;

  case 414: /* operand: function_expr  */
#line 3327 "bison.y"
                       {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE8;
		(yyval.operand_t)->function_expr_ = (yyvsp[0].function_expr_t);
		
	}
#line 9061 "bison_parser.cpp"
    break;

  case 415: /* operand: OP_LP select_no_parens OP_RP  */
#line 3333 "bison.y"
                                      {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE9;
		(yyval.operand_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 9072 "bison_parser.cpp"
    break;

  case 416: /* operand: comment_literal operand  */
#line 3339 "bison.y"
                                  {
		(yyval.operand_t) = (yyvsp[0].operand_t);
		MERGE_LEFT_COMMENT((yyval.operand_t), (yyvsp[-1].comment_literal_t));
	}
#line 9081 "bison_parser.cpp"
    break;

  case 417: /* operand: operand comment_literal  */
#line 3343 "bison.y"
                                  {
		(yyval.operand_t) = (yyvsp[-1].operand_t);
		(yyval.operand_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9090 "bison_parser.cpp"
    break;

  case 418: /* cast_expr: CAST OP_LP expr AS type_name OP_RP  */
#line 3350 "bison.y"
                                            {
		(yyval.cast_expr_t) = new CastExpr();
		(yyval.cast_expr_t)->case_idx_ = CASE0;
		(yyval.cast_expr_t)->expr_ = (yyvsp[-3].expr_t);
		(yyval.cast_expr_t)->type_name_ = (yyvsp[-1].type_name_t);
		
	}
#line 9102 "bison_parser.cpp"
    break;

  case 419: /* cast_expr: type_name string_literal  */
#line 3357 "bison.y"
                                   {
		(yyval.cast_expr_t) = new CastExpr();
		(yyval.cast_expr_t)->case_idx_ = CASE1;
		(yyval.cast_expr_t)->string_literal_ = (yyvsp[0].string_literal_t);
		(yyval.cast_expr_t)->type_name_ = (yyvsp[-1].type_name_t);
	}
#line 9113 "bison_parser.cpp"
    break;

  case 420: /* cast_expr: comment_literal cast_expr  */
#line 3363 "bison.y"
                                    {
		(yyval.cast_expr_t) = (yyvsp[0].cast_expr_t);
		MERGE_LEFT_COMMENT((yyval.cast_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 9122 "bison_parser.cpp"
    break;

  case 421: /* cast_expr: cast_expr comment_literal  */
#line 3367 "bison.y"
                                    {
		(yyval.cast_expr_t) = (yyvsp[-1].cast_expr_t);
		(yyval.cast_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9131 "bison_parser.cpp"
    break;

  case 422: /* scalar_expr: column_name  */
#line 3374 "bison.y"
                     {
		(yyval.scalar_expr_t) = new ScalarExpr();
		(yyval.scalar_expr_t)->case_idx_ = CASE0;
		(yyval.scalar_expr_t)->column_name_ = (yyvsp[0].column_name_t);
		
	}
#line 9142 "bison_parser.cpp"
    break;

  case 423: /* scalar_expr: literal  */
#line 3380 "bison.y"
                 {
		(yyval.scalar_expr_t) = new ScalarExpr();
		(yyval.scalar_expr_t)->case_idx_ = CASE1;
		(yyval.scalar_expr_t)->literal_ = (yyvsp[0].literal_t);
		
	}
#line 9153 "bison_parser.cpp"
    break;

  case 424: /* unary_expr: OP_SUB operand  */
#line 3389 "bison.y"
                                    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE0;
		(yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
		
	}
#line 9164 "bison_parser.cpp"
    break;

  case 425: /* unary_expr: NOT operand  */
#line 3395 "bison.y"
                              {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE1;
		(yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
		
	}
#line 9175 "bison_parser.cpp"
    break;

  case 426: /* unary_expr: operand ISNULL  */
#line 3401 "bison.y"
                                    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE2;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-1].operand_t);
		
	}
#line 9186 "bison_parser.cpp"
    break;

  case 427: /* unary_expr: operand IS NULL  */
#line 3407 "bison.y"
                         {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE3;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-2].operand_t);
		
	}
#line 9197 "bison_parser.cpp"
    break;

  case 428: /* unary_expr: operand IS NOT NULL  */
#line 3413 "bison.y"
                             {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE4;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-3].operand_t);
		
	}
#line 9208 "bison_parser.cpp"
    break;

  case 429: /* unary_expr: NULL  */
#line 3419 "bison.y"
              {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE5;
		
	}
#line 9218 "bison_parser.cpp"
    break;

  case 430: /* unary_expr: OP_MUL  */
#line 3424 "bison.y"
                {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE6;
		
	}
#line 9228 "bison_parser.cpp"
    break;

  case 431: /* unary_expr: comment_literal unary_expr  */
#line 3429 "bison.y"
                                     {
		(yyval.unary_expr_t) = (yyvsp[0].unary_expr_t);
		MERGE_LEFT_COMMENT((yyval.unary_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 9237 "bison_parser.cpp"
    break;

  case 432: /* unary_expr: unary_expr comment_literal  */
#line 3433 "bison.y"
                                     {
		(yyval.unary_expr_t) = (yyvsp[-1].unary_expr_t);
		(yyval.unary_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9246 "bison_parser.cpp"
    break;

  case 433: /* binary_expr: comp_expr  */
#line 3440 "bison.y"
                   {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE0;
		(yyval.binary_expr_t)->comp_expr_ = (yyvsp[0].comp_expr_t);
		
	}
#line 9257 "bison_parser.cpp"
    break;

  case 434: /* binary_expr: operand binary_op operand  */
#line 3446 "bison.y"
                                               {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE1;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.binary_expr_t)->binary_op_ = (yyvsp[-1].binary_op_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 9270 "bison_parser.cpp"
    break;

  case 435: /* binary_expr: operand LIKE operand  */
#line 3454 "bison.y"
                              {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE2;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 9282 "bison_parser.cpp"
    break;

  case 436: /* binary_expr: operand NOT LIKE operand  */
#line 3461 "bison.y"
                                  {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE3;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-3].operand_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 9294 "bison_parser.cpp"
    break;

  case 437: /* logic_expr: expr AND expr  */
#line 3471 "bison.y"
                       {
		(yyval.logic_expr_t) = new LogicExpr();
		(yyval.logic_expr_t)->case_idx_ = CASE0;
		(yyval.logic_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.logic_expr_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 9306 "bison_parser.cpp"
    break;

  case 438: /* logic_expr: expr OR expr  */
#line 3478 "bison.y"
                      {
		(yyval.logic_expr_t) = new LogicExpr();
		(yyval.logic_expr_t)->case_idx_ = CASE1;
		(yyval.logic_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.logic_expr_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 9318 "bison_parser.cpp"
    break;

  case 439: /* in_expr: operand opt_not IN OP_LP select_no_parens OP_RP  */
#line 3488 "bison.y"
                                                         {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE0;
		(yyval.in_expr_t)->operand_ = (yyvsp[-5].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.in_expr_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 9331 "bison_parser.cpp"
    break;

  case 440: /* in_expr: operand opt_not IN OP_LP expr_list OP_RP  */
#line 3496 "bison.y"
                                                  {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE1;
		(yyval.in_expr_t)->operand_ = (yyvsp[-5].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.in_expr_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 9344 "bison_parser.cpp"
    break;

  case 441: /* in_expr: operand opt_not IN table_name  */
#line 3504 "bison.y"
                                       {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE2;
		(yyval.in_expr_t)->operand_ = (yyvsp[-3].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-2].opt_not_t);
		(yyval.in_expr_t)->table_name_ = (yyvsp[0].table_name_t);
		
	}
#line 9357 "bison_parser.cpp"
    break;

  case 442: /* in_expr: comment_literal in_expr  */
#line 3512 "bison.y"
                                  {
		(yyval.in_expr_t) = (yyvsp[0].in_expr_t);
		MERGE_LEFT_COMMENT((yyval.in_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 9366 "bison_parser.cpp"
    break;

  case 443: /* in_expr: in_expr comment_literal  */
#line 3516 "bison.y"
                                  {
		(yyval.in_expr_t) = (yyvsp[-1].in_expr_t);
		(yyval.in_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9375 "bison_parser.cpp"
    break;

  case 444: /* case_expr: CASE expr case_list END  */
#line 3523 "bison.y"
                                 {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE0;
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.case_expr_t)->case_list_ = (yyvsp[-1].case_list_t);
		
	}
#line 9387 "bison_parser.cpp"
    break;

  case 445: /* case_expr: CASE case_list END  */
#line 3530 "bison.y"
                            {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE1;
		(yyval.case_expr_t)->case_list_ = (yyvsp[-1].case_list_t);
		
	}
#line 9398 "bison_parser.cpp"
    break;

  case 446: /* case_expr: CASE expr case_list ELSE expr END  */
#line 3536 "bison.y"
                                           {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE2;
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-4].expr_t);
		(yyval.case_expr_t)->case_list_ = (yyvsp[-3].case_list_t);
		(yyval.case_expr_t)->expr_2_ = (yyvsp[-1].expr_t);
		
	}
#line 9411 "bison_parser.cpp"
    break;

  case 447: /* case_expr: CASE case_list ELSE expr END  */
#line 3544 "bison.y"
                                      {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE3;
		(yyval.case_expr_t)->case_list_ = (yyvsp[-3].case_list_t);
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-1].expr_t);
		
	}
#line 9423 "bison_parser.cpp"
    break;

  case 448: /* case_expr: comment_literal case_expr  */
#line 3551 "bison.y"
                                    {
		(yyval.case_expr_t) = (yyvsp[0].case_expr_t);
		MERGE_LEFT_COMMENT((yyval.case_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 9432 "bison_parser.cpp"
    break;

  case 449: /* case_expr: case_expr comment_literal  */
#line 3555 "bison.y"
                                    {
		(yyval.case_expr_t) = (yyvsp[-1].case_expr_t);
		(yyval.case_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9441 "bison_parser.cpp"
    break;

  case 450: /* between_expr: operand BETWEEN operand AND operand  */
#line 3562 "bison.y"
                                                          {
		(yyval.between_expr_t) = new BetweenExpr();
		(yyval.between_expr_t)->case_idx_ = CASE0;
		(yyval.between_expr_t)->operand_1_ = (yyvsp[-4].operand_t);
		(yyval.between_expr_t)->operand_2_ = (yyvsp[-2].operand_t);
		(yyval.between_expr_t)->operand_3_ = (yyvsp[0].operand_t);
		
	}
#line 9454 "bison_parser.cpp"
    break;

  case 451: /* between_expr: operand NOT BETWEEN operand AND operand  */
#line 3570 "bison.y"
                                                          {
		(yyval.between_expr_t) = new BetweenExpr();
		(yyval.between_expr_t)->case_idx_ = CASE1;
		(yyval.between_expr_t)->operand_1_ = (yyvsp[-5].operand_t);
		(yyval.between_expr_t)->operand_2_ = (yyvsp[-2].operand_t);
		(yyval.between_expr_t)->operand_3_ = (yyvsp[0].operand_t);
		
	}
#line 9467 "bison_parser.cpp"
    break;

  case 452: /* exists_expr: opt_not EXISTS OP_LP select_no_parens OP_RP  */
#line 3581 "bison.y"
                                                     {
		(yyval.exists_expr_t) = new ExistsExpr();
		(yyval.exists_expr_t)->case_idx_ = CASE0;
		(yyval.exists_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.exists_expr_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 9479 "bison_parser.cpp"
    break;

  case 453: /* exists_expr: comment_literal exists_expr  */
#line 3588 "bison.y"
                                      {
		(yyval.exists_expr_t) = (yyvsp[0].exists_expr_t);
		MERGE_LEFT_COMMENT((yyval.exists_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 9488 "bison_parser.cpp"
    break;

  case 454: /* exists_expr: exists_expr comment_literal  */
#line 3592 "bison.y"
                                      {
		(yyval.exists_expr_t) = (yyvsp[-1].exists_expr_t);
		(yyval.exists_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9497 "bison_parser.cpp"
    break;

  case 455: /* function_expr: function_name OP_LP OP_RP opt_filter_clause opt_over_clause  */
#line 3599 "bison.y"
                                                                     {
		(yyval.function_expr_t) = new FunctionExpr();
		(yyval.function_expr_t)->case_idx_ = CASE0;
		(yyval.function_expr_t)->function_name_ = (yyvsp[-4].function_name_t);
		(yyval.function_expr_t)->opt_filter_clause_ = (yyvsp[-1].opt_filter_clause_t);
		(yyval.function_expr_t)->opt_over_clause_ = (yyvsp[0].opt_over_clause_t);
		
	}
#line 9510 "bison_parser.cpp"
    break;

  case 456: /* function_expr: function_name OP_LP opt_distinct expr_list OP_RP opt_filter_clause opt_over_clause  */
#line 3607 "bison.y"
                                                                                            {
		(yyval.function_expr_t) = new FunctionExpr();
		(yyval.function_expr_t)->case_idx_ = CASE1;
		(yyval.function_expr_t)->function_name_ = (yyvsp[-6].function_name_t);
		(yyval.function_expr_t)->opt_distinct_ = (yyvsp[-4].opt_distinct_t);
		(yyval.function_expr_t)->expr_list_ = (yyvsp[-3].expr_list_t);
		(yyval.function_expr_t)->opt_filter_clause_ = (yyvsp[-1].opt_filter_clause_t);
		(yyval.function_expr_t)->opt_over_clause_ = (yyvsp[0].opt_over_clause_t);
		
	}
#line 9525 "bison_parser.cpp"
    break;

  case 457: /* opt_distinct: DISTINCT  */
#line 3620 "bison.y"
                  {
		(yyval.opt_distinct_t) = new OptDistinct();
		(yyval.opt_distinct_t)->case_idx_ = CASE0;
		
	}
#line 9535 "bison_parser.cpp"
    break;

  case 458: /* opt_distinct: %empty  */
#line 3625 "bison.y"
          {
		(yyval.opt_distinct_t) = new OptDistinct();
		(yyval.opt_distinct_t)->case_idx_ = CASE1;
		
	}
#line 9545 "bison_parser.cpp"
    break;

  case 459: /* opt_distinct: comment_literal opt_distinct  */
#line 3630 "bison.y"
                                       {
		(yyval.opt_distinct_t) = (yyvsp[0].opt_distinct_t);
		MERGE_LEFT_COMMENT((yyval.opt_distinct_t), (yyvsp[-1].comment_literal_t));
	}
#line 9554 "bison_parser.cpp"
    break;

  case 460: /* opt_distinct: opt_distinct comment_literal  */
#line 3634 "bison.y"
                                       {
		(yyval.opt_distinct_t) = (yyvsp[-1].opt_distinct_t);
		(yyval.opt_distinct_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9563 "bison_parser.cpp"
    break;

  case 461: /* opt_filter_clause: FILTER OP_LP WHERE expr OP_RP  */
#line 3641 "bison.y"
                                       {
		(yyval.opt_filter_clause_t) = new OptFilterClause();
		(yyval.opt_filter_clause_t)->case_idx_ = CASE0;
		(yyval.opt_filter_clause_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 9574 "bison_parser.cpp"
    break;

  case 462: /* opt_filter_clause: %empty  */
#line 3647 "bison.y"
          {
		(yyval.opt_filter_clause_t) = new OptFilterClause();
		(yyval.opt_filter_clause_t)->case_idx_ = CASE1;
		
	}
#line 9584 "bison_parser.cpp"
    break;

  case 463: /* opt_filter_clause: comment_literal opt_filter_clause  */
#line 3652 "bison.y"
                                            {
		(yyval.opt_filter_clause_t) = (yyvsp[0].opt_filter_clause_t);
		MERGE_LEFT_COMMENT((yyval.opt_filter_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 9593 "bison_parser.cpp"
    break;

  case 464: /* opt_filter_clause: opt_filter_clause comment_literal  */
#line 3656 "bison.y"
                                            {
		(yyval.opt_filter_clause_t) = (yyvsp[-1].opt_filter_clause_t);
		(yyval.opt_filter_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9602 "bison_parser.cpp"
    break;

  case 465: /* opt_over_clause: OVER OP_LP window OP_RP  */
#line 3663 "bison.y"
                                 {
		(yyval.opt_over_clause_t) = new OptOverClause();
		(yyval.opt_over_clause_t)->case_idx_ = CASE0;
		(yyval.opt_over_clause_t)->window_ = (yyvsp[-1].window_t);
		
	}
#line 9613 "bison_parser.cpp"
    break;

  case 466: /* opt_over_clause: OVER window_name  */
#line 3669 "bison.y"
                          {
		(yyval.opt_over_clause_t) = new OptOverClause();
		(yyval.opt_over_clause_t)->case_idx_ = CASE1;
		(yyval.opt_over_clause_t)->window_name_ = (yyvsp[0].window_name_t);
		
	}
#line 9624 "bison_parser.cpp"
    break;

  case 467: /* opt_over_clause: %empty  */
#line 3675 "bison.y"
          {
		(yyval.opt_over_clause_t) = new OptOverClause();
		(yyval.opt_over_clause_t)->case_idx_ = CASE2;
		
	}
#line 9634 "bison_parser.cpp"
    break;

  case 468: /* opt_over_clause: comment_literal opt_over_clause  */
#line 3680 "bison.y"
                                          {
		(yyval.opt_over_clause_t) = (yyvsp[0].opt_over_clause_t);
		MERGE_LEFT_COMMENT((yyval.opt_over_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 9643 "bison_parser.cpp"
    break;

  case 469: /* opt_over_clause: opt_over_clause comment_literal  */
#line 3684 "bison.y"
                                          {
		(yyval.opt_over_clause_t) = (yyvsp[-1].opt_over_clause_t);
		(yyval.opt_over_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9652 "bison_parser.cpp"
    break;

  case 470: /* case_list: case_clause  */
#line 3691 "bison.y"
                     {
		(yyval.case_list_t) = new CaseList();
		(yyval.case_list_t)->case_idx_ = CASE0;
		(yyval.case_list_t)->case_clause_ = (yyvsp[0].case_clause_t);
		
	}
#line 9663 "bison_parser.cpp"
    break;

  case 471: /* case_list: case_clause case_list  */
#line 3697 "bison.y"
                               {
		(yyval.case_list_t) = new CaseList();
		(yyval.case_list_t)->case_idx_ = CASE1;
		(yyval.case_list_t)->case_clause_ = (yyvsp[-1].case_clause_t);
		(yyval.case_list_t)->case_list_ = (yyvsp[0].case_list_t);
		
	}
#line 9675 "bison_parser.cpp"
    break;

  case 472: /* case_list: comment_literal case_list  */
#line 3704 "bison.y"
                                    {
		(yyval.case_list_t) = (yyvsp[0].case_list_t);
		MERGE_LEFT_COMMENT((yyval.case_list_t), (yyvsp[-1].comment_literal_t));
	}
#line 9684 "bison_parser.cpp"
    break;

  case 473: /* case_list: case_list comment_literal  */
#line 3708 "bison.y"
                                    {
		(yyval.case_list_t) = (yyvsp[-1].case_list_t);
		(yyval.case_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9693 "bison_parser.cpp"
    break;

  case 474: /* case_clause: WHEN expr THEN expr  */
#line 3715 "bison.y"
                             {
		(yyval.case_clause_t) = new CaseClause();
		(yyval.case_clause_t)->case_idx_ = CASE0;
		(yyval.case_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.case_clause_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 9705 "bison_parser.cpp"
    break;

  case 475: /* case_clause: comment_literal case_clause  */
#line 3722 "bison.y"
                                      {
		(yyval.case_clause_t) = (yyvsp[0].case_clause_t);
		MERGE_LEFT_COMMENT((yyval.case_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 9714 "bison_parser.cpp"
    break;

  case 476: /* case_clause: case_clause comment_literal  */
#line 3726 "bison.y"
                                       {
		(yyval.case_clause_t) = (yyvsp[-1].case_clause_t);
		(yyval.case_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9723 "bison_parser.cpp"
    break;

  case 477: /* comp_expr: operand OP_EQUAL operand  */
#line 3733 "bison.y"
                                  {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE0;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 9735 "bison_parser.cpp"
    break;

  case 478: /* comp_expr: operand OP_NOTEQUAL operand  */
#line 3740 "bison.y"
                                     {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE1;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 9747 "bison_parser.cpp"
    break;

  case 479: /* comp_expr: operand OP_GREATERTHAN operand  */
#line 3747 "bison.y"
                                        {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE2;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 9759 "bison_parser.cpp"
    break;

  case 480: /* comp_expr: operand OP_LESSTHAN operand  */
#line 3754 "bison.y"
                                     {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE3;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 9771 "bison_parser.cpp"
    break;

  case 481: /* comp_expr: operand OP_LESSEQ operand  */
#line 3761 "bison.y"
                                   {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE4;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 9783 "bison_parser.cpp"
    break;

  case 482: /* comp_expr: operand OP_GREATEREQ operand  */
#line 3768 "bison.y"
                                      {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE5;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 9795 "bison_parser.cpp"
    break;

  case 483: /* extract_expr: EXTRACT OP_LP datetime_field FROM expr OP_RP  */
#line 3778 "bison.y"
                                                      {
		(yyval.extract_expr_t) = new ExtractExpr();
		(yyval.extract_expr_t)->case_idx_ = CASE0;
		(yyval.extract_expr_t)->datetime_field_ = (yyvsp[-3].datetime_field_t);
		(yyval.extract_expr_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 9807 "bison_parser.cpp"
    break;

  case 484: /* extract_expr: comment_literal extract_expr  */
#line 3785 "bison.y"
                                       {
		(yyval.extract_expr_t) = (yyvsp[0].extract_expr_t);
		MERGE_LEFT_COMMENT((yyval.extract_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 9816 "bison_parser.cpp"
    break;

  case 485: /* extract_expr: extract_expr comment_literal  */
#line 3789 "bison.y"
                                        {
		(yyval.extract_expr_t) = (yyvsp[-1].extract_expr_t);
		(yyval.extract_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9825 "bison_parser.cpp"
    break;

  case 486: /* datetime_field: SECOND  */
#line 3796 "bison.y"
                {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE0;
		
	}
#line 9835 "bison_parser.cpp"
    break;

  case 487: /* datetime_field: MINUTE  */
#line 3801 "bison.y"
                {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE1;
		
	}
#line 9845 "bison_parser.cpp"
    break;

  case 488: /* datetime_field: HOUR  */
#line 3806 "bison.y"
              {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE2;
		
	}
#line 9855 "bison_parser.cpp"
    break;

  case 489: /* datetime_field: DAY  */
#line 3811 "bison.y"
             {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE3;
		
	}
#line 9865 "bison_parser.cpp"
    break;

  case 490: /* datetime_field: MONTH  */
#line 3816 "bison.y"
               {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE4;
		
	}
#line 9875 "bison_parser.cpp"
    break;

  case 491: /* datetime_field: YEAR  */
#line 3821 "bison.y"
              {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE5;
		
	}
#line 9885 "bison_parser.cpp"
    break;

  case 492: /* datetime_field: comment_literal datetime_field  */
#line 3826 "bison.y"
                                         {
		(yyval.datetime_field_t) = (yyvsp[0].datetime_field_t);
		MERGE_LEFT_COMMENT((yyval.datetime_field_t), (yyvsp[-1].comment_literal_t));
	}
#line 9894 "bison_parser.cpp"
    break;

  case 493: /* datetime_field: datetime_field comment_literal  */
#line 3830 "bison.y"
                                          {
		(yyval.datetime_field_t) = (yyvsp[-1].datetime_field_t);
		(yyval.datetime_field_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9903 "bison_parser.cpp"
    break;

  case 494: /* array_expr: ARRAY OP_LBRACKET expr_list OP_RBRACKET  */
#line 3837 "bison.y"
                                                 {
		(yyval.array_expr_t) = new ArrayExpr();
		(yyval.array_expr_t)->case_idx_ = CASE0;
		(yyval.array_expr_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 9914 "bison_parser.cpp"
    break;

  case 495: /* array_expr: comment_literal array_expr  */
#line 3843 "bison.y"
                                     {
		(yyval.array_expr_t) = (yyvsp[0].array_expr_t);
		MERGE_LEFT_COMMENT((yyval.array_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 9923 "bison_parser.cpp"
    break;

  case 496: /* array_expr: array_expr comment_literal  */
#line 3847 "bison.y"
                                      {
		(yyval.array_expr_t) = (yyvsp[-1].array_expr_t);
		(yyval.array_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9932 "bison_parser.cpp"
    break;

  case 497: /* array_index: operand OP_LBRACKET int_literal OP_RBRACKET  */
#line 3854 "bison.y"
                                                     {
		(yyval.array_index_t) = new ArrayIndex();
		(yyval.array_index_t)->case_idx_ = CASE0;
		(yyval.array_index_t)->operand_ = (yyvsp[-3].operand_t);
		(yyval.array_index_t)->int_literal_ = (yyvsp[-1].int_literal_t);
		
	}
#line 9944 "bison_parser.cpp"
    break;

  case 498: /* array_index: comment_literal array_index  */
#line 3861 "bison.y"
                                      {
		(yyval.array_index_t) = (yyvsp[0].array_index_t);
		MERGE_LEFT_COMMENT((yyval.array_index_t), (yyvsp[-1].comment_literal_t));
	}
#line 9953 "bison_parser.cpp"
    break;

  case 499: /* array_index: array_index comment_literal  */
#line 3865 "bison.y"
                                       {
		(yyval.array_index_t) = (yyvsp[-1].array_index_t);
		(yyval.array_index_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9962 "bison_parser.cpp"
    break;

  case 500: /* literal: string_literal  */
#line 3872 "bison.y"
                        {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE0;
		(yyval.literal_t)->string_literal_ = (yyvsp[0].string_literal_t);
		
	}
#line 9973 "bison_parser.cpp"
    break;

  case 501: /* literal: bool_literal  */
#line 3878 "bison.y"
                      {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE1;
		(yyval.literal_t)->bool_literal_ = (yyvsp[0].bool_literal_t);
		
	}
#line 9984 "bison_parser.cpp"
    break;

  case 502: /* literal: num_literal  */
#line 3884 "bison.y"
                     {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE2;
		(yyval.literal_t)->num_literal_ = (yyvsp[0].num_literal_t);
		
	}
#line 9995 "bison_parser.cpp"
    break;

  case 503: /* string_literal: STRINGLITERAL  */
#line 3893 "bison.y"
                       {
		(yyval.string_literal_t) = new StringLiteral();
		(yyval.string_literal_t)->string_val_ = (yyvsp[0].sval);
		free((yyvsp[0].sval));
		
	}
#line 10006 "bison_parser.cpp"
    break;

  case 504: /* string_literal: comment_literal string_literal  */
#line 3899 "bison.y"
                                         {
		(yyval.string_literal_t) = (yyvsp[0].string_literal_t);
		MERGE_LEFT_COMMENT((yyval.string_literal_t), (yyvsp[-1].comment_literal_t));
	}
#line 10015 "bison_parser.cpp"
    break;

  case 505: /* string_literal: string_literal comment_literal  */
#line 3903 "bison.y"
                                         {
		(yyval.string_literal_t) = (yyvsp[-1].string_literal_t);
		(yyval.string_literal_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10024 "bison_parser.cpp"
    break;

  case 506: /* comment_literal: COMMENTLITERAL  */
#line 3909 "bison.y"
                               {
			(yyval.comment_literal_t) = new CommentLiteral();
			(yyval.comment_literal_t)->string_vals_.push_back((yyvsp[0].sval)) ;
		}
#line 10033 "bison_parser.cpp"
    break;

  case 507: /* comment_literal: comment_literal COMMENTLITERAL  */
#line 3913 "bison.y"
                                                {
			(yyval.comment_literal_t) = (yyvsp[-1].comment_literal_t);
			(yyval.comment_literal_t)->string_vals_.push_back((yyvsp[0].sval));
		}
#line 10042 "bison_parser.cpp"
    break;

  case 508: /* bool_literal: TRUE  */
#line 3919 "bison.y"
              {
		(yyval.bool_literal_t) = new BoolLiteral();
		(yyval.bool_literal_t)->case_idx_ = CASE0;
		
	}
#line 10052 "bison_parser.cpp"
    break;

  case 509: /* bool_literal: FALSE  */
#line 3924 "bison.y"
               {
		(yyval.bool_literal_t) = new BoolLiteral();
		(yyval.bool_literal_t)->case_idx_ = CASE1;
		
	}
#line 10062 "bison_parser.cpp"
    break;

  case 510: /* bool_literal: comment_literal bool_literal  */
#line 3929 "bison.y"
                                       {
		(yyval.bool_literal_t) = (yyvsp[0].bool_literal_t);
		MERGE_LEFT_COMMENT((yyval.bool_literal_t), (yyvsp[-1].comment_literal_t));
	}
#line 10071 "bison_parser.cpp"
    break;

  case 511: /* bool_literal: bool_literal comment_literal  */
#line 3933 "bison.y"
                                       {
		(yyval.bool_literal_t) = (yyvsp[-1].bool_literal_t);
		(yyval.bool_literal_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10080 "bison_parser.cpp"
    break;

  case 512: /* num_literal: int_literal  */
#line 3940 "bison.y"
                     {
		(yyval.num_literal_t) = new NumLiteral();
		(yyval.num_literal_t)->case_idx_ = CASE0;
		(yyval.num_literal_t)->int_literal_ = (yyvsp[0].int_literal_t);
		
	}
#line 10091 "bison_parser.cpp"
    break;

  case 513: /* num_literal: float_literal  */
#line 3946 "bison.y"
                       {
		(yyval.num_literal_t) = new NumLiteral();
		(yyval.num_literal_t)->case_idx_ = CASE1;
		(yyval.num_literal_t)->float_literal_ = (yyvsp[0].float_literal_t);
		
	}
#line 10102 "bison_parser.cpp"
    break;

  case 514: /* int_literal: INTLITERAL  */
#line 3955 "bison.y"
                    {
		(yyval.int_literal_t) = new IntLiteral();
		(yyval.int_literal_t)->int_val_ = (yyvsp[0].ival);
		
	}
#line 10112 "bison_parser.cpp"
    break;

  case 515: /* int_literal: comment_literal int_literal  */
#line 3960 "bison.y"
                                      {
		(yyval.int_literal_t) = (yyvsp[0].int_literal_t);
		MERGE_LEFT_COMMENT((yyval.int_literal_t), (yyvsp[-1].comment_literal_t));
	}
#line 10121 "bison_parser.cpp"
    break;

  case 516: /* int_literal: int_literal comment_literal  */
#line 3964 "bison.y"
                                      {
		(yyval.int_literal_t) = (yyvsp[-1].int_literal_t);
		(yyval.int_literal_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10130 "bison_parser.cpp"
    break;

  case 517: /* float_literal: FLOATLITERAL  */
#line 3971 "bison.y"
                      {
		(yyval.float_literal_t) = new FloatLiteral();
		(yyval.float_literal_t)->float_val_ = (yyvsp[0].fval);
		
	}
#line 10140 "bison_parser.cpp"
    break;

  case 518: /* float_literal: comment_literal float_literal  */
#line 3976 "bison.y"
                                        {
		(yyval.float_literal_t) = (yyvsp[0].float_literal_t);
		MERGE_LEFT_COMMENT((yyval.float_literal_t), (yyvsp[-1].comment_literal_t));
	}
#line 10149 "bison_parser.cpp"
    break;

  case 519: /* float_literal: float_literal comment_literal  */
#line 3980 "bison.y"
                                        {
		(yyval.float_literal_t) = (yyvsp[-1].float_literal_t);
		(yyval.float_literal_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10158 "bison_parser.cpp"
    break;

  case 520: /* opt_column: COLUMN  */
#line 3988 "bison.y"
                {
		(yyval.opt_column_t) = new OptColumn();
		(yyval.opt_column_t)->case_idx_ = CASE0;
		
	}
#line 10168 "bison_parser.cpp"
    break;

  case 521: /* opt_column: %empty  */
#line 3993 "bison.y"
          {
		(yyval.opt_column_t) = new OptColumn();
		(yyval.opt_column_t)->case_idx_ = CASE1;
		
	}
#line 10178 "bison_parser.cpp"
    break;

  case 522: /* opt_column: comment_literal opt_column  */
#line 3998 "bison.y"
                                     {
		(yyval.opt_column_t) = (yyvsp[0].opt_column_t);
		MERGE_LEFT_COMMENT((yyval.opt_column_t), (yyvsp[-1].comment_literal_t));
	}
#line 10187 "bison_parser.cpp"
    break;

  case 523: /* opt_column: opt_column comment_literal  */
#line 4002 "bison.y"
                                     {
		(yyval.opt_column_t) = (yyvsp[-1].opt_column_t);
		(yyval.opt_column_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10196 "bison_parser.cpp"
    break;

  case 524: /* trigger_body: drop_stmt  */
#line 4009 "bison.y"
                   {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE0;
		(yyval.trigger_body_t)->drop_stmt_ = (yyvsp[0].drop_stmt_t);
		
	}
#line 10207 "bison_parser.cpp"
    break;

  case 525: /* trigger_body: update_stmt  */
#line 4015 "bison.y"
                     {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE1;
		(yyval.trigger_body_t)->update_stmt_ = (yyvsp[0].update_stmt_t);
		
	}
#line 10218 "bison_parser.cpp"
    break;

  case 526: /* trigger_body: insert_stmt  */
#line 4021 "bison.y"
                     {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE2;
		(yyval.trigger_body_t)->insert_stmt_ = (yyvsp[0].insert_stmt_t);
		
	}
#line 10229 "bison_parser.cpp"
    break;

  case 527: /* trigger_body: alter_stmt  */
#line 4027 "bison.y"
                    {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE3;
		(yyval.trigger_body_t)->alter_stmt_ = (yyvsp[0].alter_stmt_t);
		
	}
#line 10240 "bison_parser.cpp"
    break;

  case 528: /* opt_if_not_exist: IF NOT EXISTS  */
#line 4037 "bison.y"
                       {
		(yyval.opt_if_not_exist_t) = new OptIfNotExist();
		(yyval.opt_if_not_exist_t)->case_idx_ = CASE0;
		
	}
#line 10250 "bison_parser.cpp"
    break;

  case 529: /* opt_if_not_exist: %empty  */
#line 4042 "bison.y"
          {
		(yyval.opt_if_not_exist_t) = new OptIfNotExist();
		(yyval.opt_if_not_exist_t)->case_idx_ = CASE1;
		
	}
#line 10260 "bison_parser.cpp"
    break;

  case 530: /* opt_if_not_exist: comment_literal opt_if_not_exist  */
#line 4047 "bison.y"
                                           {
		(yyval.opt_if_not_exist_t) = (yyvsp[0].opt_if_not_exist_t);
		MERGE_LEFT_COMMENT((yyval.opt_if_not_exist_t), (yyvsp[-1].comment_literal_t));
	}
#line 10269 "bison_parser.cpp"
    break;

  case 531: /* opt_if_not_exist: opt_if_not_exist comment_literal  */
#line 4051 "bison.y"
                                           {
		(yyval.opt_if_not_exist_t) = (yyvsp[-1].opt_if_not_exist_t);
		(yyval.opt_if_not_exist_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10278 "bison_parser.cpp"
    break;

  case 532: /* opt_if_exist: IF EXISTS  */
#line 4058 "bison.y"
                   {
		(yyval.opt_if_exist_t) = new OptIfExist();
		(yyval.opt_if_exist_t)->case_idx_ = CASE0;
		
	}
#line 10288 "bison_parser.cpp"
    break;

  case 533: /* opt_if_exist: %empty  */
#line 4063 "bison.y"
          {
		(yyval.opt_if_exist_t) = new OptIfExist();
		(yyval.opt_if_exist_t)->case_idx_ = CASE1;
		
	}
#line 10298 "bison_parser.cpp"
    break;

  case 534: /* opt_if_exist: comment_literal opt_if_exist  */
#line 4068 "bison.y"
                                       {
		(yyval.opt_if_exist_t) = (yyvsp[0].opt_if_exist_t);
		MERGE_LEFT_COMMENT((yyval.opt_if_exist_t), (yyvsp[-1].comment_literal_t));
	}
#line 10307 "bison_parser.cpp"
    break;

  case 535: /* opt_if_exist: opt_if_exist comment_literal  */
#line 4072 "bison.y"
                                       {
		(yyval.opt_if_exist_t) = (yyvsp[-1].opt_if_exist_t);
		(yyval.opt_if_exist_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10316 "bison_parser.cpp"
    break;

  case 536: /* identifier: IDENTIFIER  */
#line 4079 "bison.y"
                      {
		(yyval.identifier_t) = new Identifier();
		(yyval.identifier_t)->string_val_ = (yyvsp[0].sval);
		// fprintf(stderr,"case 0 IDENTIFIER:%s\n",$1);
		free((yyvsp[0].sval));
		
	}
#line 10328 "bison_parser.cpp"
    break;

  case 537: /* identifier: comment_literal identifier  */
#line 4086 "bison.y"
                                     {
		(yyval.identifier_t) = (yyvsp[0].identifier_t);
		MERGE_LEFT_COMMENT((yyval.identifier_t), (yyvsp[-1].comment_literal_t));
	}
#line 10337 "bison_parser.cpp"
    break;

  case 538: /* identifier: identifier comment_literal  */
#line 4090 "bison.y"
                                     {
		(yyval.identifier_t) = (yyvsp[-1].identifier_t);
		(yyval.identifier_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10346 "bison_parser.cpp"
    break;

  case 539: /* as_alias: AS identifier  */
#line 4098 "bison.y"
                       {
		(yyval.as_alias_t) = new AsAlias();
		(yyval.as_alias_t)->case_idx_ = CASE0;
		(yyval.as_alias_t)->identifier_ = (yyvsp[0].identifier_t);
		if((yyval.as_alias_t)){
			auto tmp1 = (yyval.as_alias_t)->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataAliasName; 
				tmp1->scope_ = 1; 
				tmp1->data_flag_ =(DATAFLAG)1; 
			}
		}


	}
#line 10366 "bison_parser.cpp"
    break;

  case 540: /* as_alias: identifier  */
#line 4113 "bison.y"
                       {
		(yyval.as_alias_t) = new AsAlias();
		(yyval.as_alias_t)->case_idx_ = CASE1;
		(yyval.as_alias_t)->identifier_ = (yyvsp[0].identifier_t);
		if((yyval.as_alias_t)){
			
			auto tmp1 = (yyval.as_alias_t)->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataAliasName; 
				tmp1->scope_ = 1; 
				tmp1->data_flag_ =(DATAFLAG)1; 
			}
		}


	}
#line 10387 "bison_parser.cpp"
    break;

  case 541: /* as_alias: comment_literal as_alias  */
#line 4129 "bison.y"
                                   {
		(yyval.as_alias_t) = (yyvsp[0].as_alias_t);
		MERGE_LEFT_COMMENT((yyval.as_alias_t), (yyvsp[-1].comment_literal_t));
	}
#line 10396 "bison_parser.cpp"
    break;

  case 542: /* as_alias: as_alias comment_literal  */
#line 4133 "bison.y"
                                   {
		(yyval.as_alias_t) = (yyvsp[-1].as_alias_t);
		(yyval.as_alias_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10405 "bison_parser.cpp"
    break;

  case 543: /* table_name: identifier  */
#line 4140 "bison.y"
                    {
		(yyval.table_name_t) = new TableName();
		(yyval.table_name_t)->case_idx_ = CASE0;
		(yyval.table_name_t)->identifier_ = (yyvsp[0].identifier_t);
		if((yyval.table_name_t)){
			auto tmp1 = (yyval.table_name_t)->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataTableName; 
				tmp1->scope_ = 1; 
				tmp1->data_flag_ =(DATAFLAG)8; 
			}
		}


	}
#line 10425 "bison_parser.cpp"
    break;

  case 544: /* column_name: identifier  */
#line 4159 "bison.y"
                    {
		(yyval.column_name_t) = new ColumnName();
		(yyval.column_name_t)->case_idx_ = CASE0;
		(yyval.column_name_t)->identifier_ = (yyvsp[0].identifier_t);
		if((yyval.column_name_t)){
			auto tmp1 = (yyval.column_name_t)->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataColumnName; 
				tmp1->scope_ = 2; 
				tmp1->data_flag_ =(DATAFLAG)8; 
			}
		}
	}
#line 10443 "bison_parser.cpp"
    break;

  case 545: /* column_name: identifier '.' identifier  */
#line 4172 "bison.y"
                                    {
		(yyval.column_name_t) = new ColumnName();
		(yyval.column_name_t)->case_idx_ = CASE1;
		(yyval.column_name_t)->identifier_ = (yyvsp[-2].identifier_t);
		(yyval.column_name_t)->identifier2_ = (yyvsp[0].identifier_t);
		if((yyval.column_name_t)){
			auto tmp1 = (yyval.column_name_t)->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataTableName; 
				tmp1->scope_ = 1; 
				tmp1->data_flag_ =(DATAFLAG)8; 
			}
		}
		if((yyval.column_name_t)){
			auto tmp1 = (yyval.column_name_t)->identifier2_; 
			if(tmp1){
				tmp1->data_type_ = kDataColumnName; 
				tmp1->scope_ = 2; 
				tmp1->data_flag_ =(DATAFLAG)8; 
			}
		}

	}
#line 10471 "bison_parser.cpp"
    break;

  case 546: /* opt_index_keyword: UNIQUE  */
#line 4199 "bison.y"
                {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE0;
		
	}
#line 10481 "bison_parser.cpp"
    break;

  case 547: /* opt_index_keyword: FULLTEXT  */
#line 4204 "bison.y"
                  {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE1;
		
	}
#line 10491 "bison_parser.cpp"
    break;

  case 548: /* opt_index_keyword: SPATIAL  */
#line 4209 "bison.y"
                 {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE2;
		
	}
#line 10501 "bison_parser.cpp"
    break;

  case 549: /* opt_index_keyword: %empty  */
#line 4214 "bison.y"
          {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE3;
		
	}
#line 10511 "bison_parser.cpp"
    break;

  case 550: /* opt_index_keyword: comment_literal opt_index_keyword  */
#line 4219 "bison.y"
                                            {
		(yyval.opt_index_keyword_t) = (yyvsp[0].opt_index_keyword_t);
		MERGE_LEFT_COMMENT((yyval.opt_index_keyword_t), (yyvsp[-1].comment_literal_t));
	}
#line 10520 "bison_parser.cpp"
    break;

  case 551: /* opt_index_keyword: opt_index_keyword comment_literal  */
#line 4223 "bison.y"
                                            {
		(yyval.opt_index_keyword_t) = (yyvsp[-1].opt_index_keyword_t);
		(yyval.opt_index_keyword_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10529 "bison_parser.cpp"
    break;

  case 552: /* view_name: identifier  */
#line 4230 "bison.y"
                    {
		(yyval.view_name_t) = new ViewName();
		(yyval.view_name_t)->case_idx_ = CASE0;
		(yyval.view_name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 10540 "bison_parser.cpp"
    break;

  case 553: /* function_name: identifier  */
#line 4240 "bison.y"
                    {
		(yyval.function_name_t) = new FunctionName();
		(yyval.function_name_t)->case_idx_ = CASE0;
		(yyval.function_name_t)->identifier_ = (yyvsp[0].identifier_t);
		if((yyval.function_name_t)){
			auto tmp1 = (yyval.function_name_t)->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataFunctionName; 
				tmp1->scope_ = 1; 
				tmp1->data_flag_ =(DATAFLAG)4; 
			}
		}
	}
#line 10558 "bison_parser.cpp"
    break;

  case 554: /* function_name: "sys." identifier  */
#line 4253 "bison.y"
                             {
		(yyval.function_name_t) = new FunctionName();
		(yyval.function_name_t)->case_idx_ = CASE1;
		(yyval.function_name_t)->identifier_ = (yyvsp[0].identifier_t);
		if((yyval.function_name_t)){
			auto tmp1 = (yyval.function_name_t)->identifier_; 
			if(tmp1){
				tmp1->data_type_ = kDataFunctionName; 
				tmp1->scope_ = 1; 
				tmp1->data_flag_ =(DATAFLAG)4; 
			}
		}


	}
#line 10578 "bison_parser.cpp"
    break;

  case 555: /* binary_op: OP_ADD  */
#line 4271 "bison.y"
                {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE0;
		
	}
#line 10588 "bison_parser.cpp"
    break;

  case 556: /* binary_op: OP_SUB  */
#line 4276 "bison.y"
                {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE1;
		
	}
#line 10598 "bison_parser.cpp"
    break;

  case 557: /* binary_op: OP_DIVIDE  */
#line 4281 "bison.y"
                   {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE2;
		
	}
#line 10608 "bison_parser.cpp"
    break;

  case 558: /* binary_op: OP_MOD  */
#line 4286 "bison.y"
                {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE3;
		
	}
#line 10618 "bison_parser.cpp"
    break;

  case 559: /* binary_op: OP_MUL  */
#line 4291 "bison.y"
                {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE4;
		
	}
#line 10628 "bison_parser.cpp"
    break;

  case 560: /* binary_op: OP_XOR  */
#line 4296 "bison.y"
                {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE5;
		
	}
#line 10638 "bison_parser.cpp"
    break;

  case 561: /* binary_op: comment_literal binary_op  */
#line 4301 "bison.y"
                                    {
		(yyval.binary_op_t) = (yyvsp[0].binary_op_t);
		MERGE_LEFT_COMMENT((yyval.binary_op_t), (yyvsp[-1].comment_literal_t));
	}
#line 10647 "bison_parser.cpp"
    break;

  case 562: /* binary_op: binary_op comment_literal  */
#line 4305 "bison.y"
                                    {
		(yyval.binary_op_t) = (yyvsp[-1].binary_op_t);
		(yyval.binary_op_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10656 "bison_parser.cpp"
    break;

  case 563: /* opt_not: NOT  */
#line 4312 "bison.y"
             {
		(yyval.opt_not_t) = new OptNot();
		(yyval.opt_not_t)->case_idx_ = CASE0;
		
	}
#line 10666 "bison_parser.cpp"
    break;

  case 564: /* opt_not: %empty  */
#line 4317 "bison.y"
          {
		(yyval.opt_not_t) = new OptNot();
		(yyval.opt_not_t)->case_idx_ = CASE1;
		
	}
#line 10676 "bison_parser.cpp"
    break;

  case 565: /* opt_not: comment_literal opt_not  */
#line 4322 "bison.y"
                                  {
		(yyval.opt_not_t) = (yyvsp[0].opt_not_t);
		MERGE_LEFT_COMMENT((yyval.opt_not_t), (yyvsp[-1].comment_literal_t));
	}
#line 10685 "bison_parser.cpp"
    break;

  case 566: /* opt_not: opt_not comment_literal  */
#line 4326 "bison.y"
                                  {
		(yyval.opt_not_t) = (yyvsp[-1].opt_not_t);
		(yyval.opt_not_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10694 "bison_parser.cpp"
    break;

  case 567: /* name: identifier  */
#line 4333 "bison.y"
                    {
		(yyval.name_t) = new Name();
		(yyval.name_t)->case_idx_ = CASE0;
		(yyval.name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 10705 "bison_parser.cpp"
    break;

  case 568: /* type_name: numeric_type  */
#line 4342 "bison.y"
                      {
		(yyval.type_name_t) = new TypeName();
		(yyval.type_name_t)->case_idx_ = CASE0;
		(yyval.type_name_t)->numeric_type_ = (yyvsp[0].numeric_type_t);
		
	}
#line 10716 "bison_parser.cpp"
    break;

  case 569: /* type_name: character_type  */
#line 4348 "bison.y"
                        {
		(yyval.type_name_t) = new TypeName();
		(yyval.type_name_t)->case_idx_ = CASE1;
		(yyval.type_name_t)->character_type_ = (yyvsp[0].character_type_t);
		
	}
#line 10727 "bison_parser.cpp"
    break;

  case 570: /* type_name: comment_literal type_name  */
#line 4354 "bison.y"
                                    {
		// cout<< "MERGE_LEFT_COMMENT"<<endl;
		(yyval.type_name_t) = (yyvsp[0].type_name_t);
		MERGE_LEFT_COMMENT((yyval.type_name_t), (yyvsp[-1].comment_literal_t));
	}
#line 10737 "bison_parser.cpp"
    break;

  case 571: /* type_name: type_name comment_literal  */
#line 4359 "bison.y"
                                    {
		
		(yyval.type_name_t) = (yyvsp[-1].type_name_t);
		(yyval.type_name_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10747 "bison_parser.cpp"
    break;

  case 572: /* character_type: character_with_length  */
#line 4367 "bison.y"
                               {
		(yyval.character_type_t) = new CharacterType();
		(yyval.character_type_t)->case_idx_ = CASE0;
		(yyval.character_type_t)->character_with_length_ = (yyvsp[0].character_with_length_t);
		
	}
#line 10758 "bison_parser.cpp"
    break;

  case 573: /* character_type: character_without_length  */
#line 4373 "bison.y"
                                  {
		(yyval.character_type_t) = new CharacterType();
		(yyval.character_type_t)->case_idx_ = CASE1;
		(yyval.character_type_t)->character_without_length_ = (yyvsp[0].character_without_length_t);
		// cout<<"character_without_length_"<<endl;
		
		
	}
#line 10771 "bison_parser.cpp"
    break;

  case 574: /* character_with_length: character_conflicta OP_LP int_literal OP_RP  */
#line 4385 "bison.y"
                                                     {
		(yyval.character_with_length_t) = new CharacterWithLength();
		(yyval.character_with_length_t)->case_idx_ = CASE0;
		(yyval.character_with_length_t)->character_conflicta_ = (yyvsp[-3].character_conflicta_t);
		(yyval.character_with_length_t)->int_literal_ = (yyvsp[-1].int_literal_t);
		
	}
#line 10783 "bison_parser.cpp"
    break;

  case 575: /* character_with_length: comment_literal character_with_length  */
#line 4392 "bison.y"
                                                {
		(yyval.character_with_length_t) = (yyvsp[0].character_with_length_t);
		MERGE_LEFT_COMMENT((yyval.character_with_length_t), (yyvsp[-1].comment_literal_t));
	}
#line 10792 "bison_parser.cpp"
    break;

  case 576: /* character_with_length: character_with_length comment_literal  */
#line 4396 "bison.y"
                                                {
		(yyval.character_with_length_t) = (yyvsp[-1].character_with_length_t);
		(yyval.character_with_length_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10801 "bison_parser.cpp"
    break;

  case 577: /* character_without_length: character_conflicta  */
#line 4403 "bison.y"
                             {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE0;
		(yyval.character_without_length_t)->character_conflicta_ = (yyvsp[0].character_conflicta_t);
		
	}
#line 10812 "bison_parser.cpp"
    break;

  case 578: /* character_without_length: SET  */
#line 4409 "bison.y"
             {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE1;
		
	}
#line 10822 "bison_parser.cpp"
    break;

  case 579: /* character_without_length: ENUM  */
#line 4414 "bison.y"
              {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE2;
		
	}
#line 10832 "bison_parser.cpp"
    break;

  case 580: /* character_without_length: BINARY  */
#line 4419 "bison.y"
                {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE3;
		
	}
#line 10842 "bison_parser.cpp"
    break;

  case 581: /* character_without_length: DATE  */
#line 4424 "bison.y"
                      {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE4;
		
	}
#line 10852 "bison_parser.cpp"
    break;

  case 582: /* character_without_length: TIME  */
#line 4429 "bison.y"
                      {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE5;
		
	}
#line 10862 "bison_parser.cpp"
    break;

  case 583: /* character_without_length: TIMESTAMP  */
#line 4434 "bison.y"
                           {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE6;
		
	}
#line 10872 "bison_parser.cpp"
    break;

  case 584: /* character_without_length: inet  */
#line 4439 "bison.y"
                      {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE7;
		
	}
#line 10882 "bison_parser.cpp"
    break;

  case 585: /* character_without_length: JSON  */
#line 4444 "bison.y"
                      {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE8;
		
	}
#line 10892 "bison_parser.cpp"
    break;

  case 586: /* character_without_length: URL  */
#line 4449 "bison.y"
                     {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE9;
		
	}
#line 10902 "bison_parser.cpp"
    break;

  case 587: /* character_without_length: uuid  */
#line 4454 "bison.y"
                      {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE10;
		
	}
#line 10912 "bison_parser.cpp"
    break;

  case 588: /* character_without_length: INTERVAL  */
#line 4459 "bison.y"
                          {
		// fprintf(stderr,"recognize INTERVAL");
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE11;
		
	}
#line 10923 "bison_parser.cpp"
    break;

  case 589: /* character_without_length: comment_literal character_without_length  */
#line 4465 "bison.y"
                                                   {
		(yyval.character_without_length_t) = (yyvsp[0].character_without_length_t);
		MERGE_LEFT_COMMENT((yyval.character_without_length_t), (yyvsp[-1].comment_literal_t));
	}
#line 10932 "bison_parser.cpp"
    break;

  case 590: /* character_without_length: character_without_length comment_literal  */
#line 4469 "bison.y"
                                                   {
		(yyval.character_without_length_t) = (yyvsp[-1].character_without_length_t);
		(yyval.character_without_length_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10941 "bison_parser.cpp"
    break;

  case 591: /* character_conflicta: CHARACTER  */
#line 4476 "bison.y"
                   {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE0;
		
	}
#line 10951 "bison_parser.cpp"
    break;

  case 592: /* character_conflicta: CHAR  */
#line 4481 "bison.y"
              {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE1;
		
	}
#line 10961 "bison_parser.cpp"
    break;

  case 593: /* character_conflicta: VARCHAR  */
#line 4486 "bison.y"
                 {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE2;
		
	}
#line 10971 "bison_parser.cpp"
    break;

  case 594: /* character_conflicta: TEXT  */
#line 4491 "bison.y"
              {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE3;
		
	}
#line 10981 "bison_parser.cpp"
    break;

  case 595: /* character_conflicta: TINYTEXT  */
#line 4496 "bison.y"
                  {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE4;
		
	}
#line 10991 "bison_parser.cpp"
    break;

  case 596: /* character_conflicta: MEDIUMTEXT  */
#line 4501 "bison.y"
                    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE5;
		
	}
#line 11001 "bison_parser.cpp"
    break;

  case 597: /* character_conflicta: LONGTEXT  */
#line 4506 "bison.y"
                  {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE6;
		
	}
#line 11011 "bison_parser.cpp"
    break;

  case 598: /* character_conflicta: NATIONAL CHARACTER  */
#line 4511 "bison.y"
                            {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE7;
		
	}
#line 11021 "bison_parser.cpp"
    break;

  case 599: /* character_conflicta: NATIONAL CHAR  */
#line 4516 "bison.y"
                       {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE8;
		
	}
#line 11031 "bison_parser.cpp"
    break;

  case 600: /* character_conflicta: NCHAR  */
#line 4521 "bison.y"
               {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE9;
		
	}
#line 11041 "bison_parser.cpp"
    break;

  case 601: /* character_conflicta: TIME  */
#line 4526 "bison.y"
                      {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE10;
		
	}
#line 11051 "bison_parser.cpp"
    break;

  case 602: /* character_conflicta: %empty  */
#line 4531 "bison.y"
                     {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE11;
		// cout << "empty type"<<endl;
		
	}
#line 11062 "bison_parser.cpp"
    break;

  case 603: /* character_conflicta: comment_literal character_conflicta  */
#line 4537 "bison.y"
                                              {
		(yyval.character_conflicta_t) = (yyvsp[0].character_conflicta_t);
		MERGE_LEFT_COMMENT((yyval.character_conflicta_t), (yyvsp[-1].comment_literal_t));
	}
#line 11071 "bison_parser.cpp"
    break;

  case 604: /* character_conflicta: character_conflicta comment_literal  */
#line 4541 "bison.y"
                                              {
		(yyval.character_conflicta_t) = (yyvsp[-1].character_conflicta_t);
		(yyval.character_conflicta_t)->right_comment_ = (yyvsp[0].comment_literal_t);
		
	}
#line 11081 "bison_parser.cpp"
    break;

  case 605: /* numeric_type: INT  */
#line 4549 "bison.y"
             {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE0;
		
	}
#line 11091 "bison_parser.cpp"
    break;

  case 606: /* numeric_type: INTEGER  */
#line 4554 "bison.y"
                 {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE1;
		
	}
#line 11101 "bison_parser.cpp"
    break;

  case 607: /* numeric_type: SMALLINT  */
#line 4559 "bison.y"
                  {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE2;
		
	}
#line 11111 "bison_parser.cpp"
    break;

  case 608: /* numeric_type: BIGINT  */
#line 4564 "bison.y"
                {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE3;
		
	}
#line 11121 "bison_parser.cpp"
    break;

  case 609: /* numeric_type: REAL  */
#line 4569 "bison.y"
              {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE4;
		
	}
#line 11131 "bison_parser.cpp"
    break;

  case 610: /* numeric_type: FLOAT  */
#line 4574 "bison.y"
               {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE5;
		
	}
#line 11141 "bison_parser.cpp"
    break;

  case 611: /* numeric_type: FIXED  */
#line 4579 "bison.y"
               {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE6;
		
	}
#line 11151 "bison_parser.cpp"
    break;

  case 612: /* numeric_type: DOUBLE  */
#line 4584 "bison.y"
                {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE7;
		
	}
#line 11161 "bison_parser.cpp"
    break;

  case 613: /* numeric_type: DOUBLE PRECISION  */
#line 4589 "bison.y"
                          {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE8;
		
	}
#line 11171 "bison_parser.cpp"
    break;

  case 614: /* numeric_type: DECIMAL  */
#line 4594 "bison.y"
                 {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE9;
		
	}
#line 11181 "bison_parser.cpp"
    break;

  case 615: /* numeric_type: DEC  */
#line 4599 "bison.y"
             {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE10;
		
	}
#line 11191 "bison_parser.cpp"
    break;

  case 616: /* numeric_type: NUMERIC  */
#line 4604 "bison.y"
                 {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE11;
		
	}
#line 11201 "bison_parser.cpp"
    break;

  case 617: /* numeric_type: BOOLEAN  */
#line 4609 "bison.y"
                 {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE12;
		
	}
#line 11211 "bison_parser.cpp"
    break;

  case 618: /* numeric_type: comment_literal numeric_type  */
#line 4614 "bison.y"
                                       {
		(yyval.numeric_type_t) = (yyvsp[0].numeric_type_t);
		MERGE_LEFT_COMMENT((yyval.numeric_type_t), (yyvsp[-1].comment_literal_t));
	}
#line 11220 "bison_parser.cpp"
    break;

  case 619: /* numeric_type: numeric_type comment_literal  */
#line 4618 "bison.y"
                                       {
		(yyval.numeric_type_t) = (yyvsp[-1].numeric_type_t);
		(yyval.numeric_type_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 11229 "bison_parser.cpp"
    break;

  case 620: /* opt_table_constraint_list: table_constraint_list  */
#line 4625 "bison.y"
                               {
		(yyval.opt_table_constraint_list_t) = new OptTableConstraintList();
		(yyval.opt_table_constraint_list_t)->case_idx_ = CASE0;
		(yyval.opt_table_constraint_list_t)->table_constraint_list_ = (yyvsp[0].table_constraint_list_t);
		
	}
#line 11240 "bison_parser.cpp"
    break;

  case 621: /* opt_table_constraint_list: %empty  */
#line 4631 "bison.y"
          {
		(yyval.opt_table_constraint_list_t) = new OptTableConstraintList();
		(yyval.opt_table_constraint_list_t)->case_idx_ = CASE1;
		
	}
#line 11250 "bison_parser.cpp"
    break;

  case 622: /* table_constraint_list: table_constraint  */
#line 4639 "bison.y"
                          {
		(yyval.table_constraint_list_t) = new TableConstraintList();
		(yyval.table_constraint_list_t)->case_idx_ = CASE0;
		(yyval.table_constraint_list_t)->table_constraint_ = (yyvsp[0].table_constraint_t);
		
	}
#line 11261 "bison_parser.cpp"
    break;

  case 623: /* table_constraint_list: table_constraint OP_COMMA table_constraint_list  */
#line 4645 "bison.y"
                                                         {
		(yyval.table_constraint_list_t) = new TableConstraintList();
		(yyval.table_constraint_list_t)->case_idx_ = CASE1;
		(yyval.table_constraint_list_t)->table_constraint_ = (yyvsp[-2].table_constraint_t);
		(yyval.table_constraint_list_t)->table_constraint_list_ = (yyvsp[0].table_constraint_list_t);
		
	}
#line 11273 "bison_parser.cpp"
    break;

  case 624: /* table_constraint: constraint_name PRIMARY KEY OP_LP indexed_column_list OP_RP  */
#line 4656 "bison.y"
                                                                     {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE0;
		(yyval.table_constraint_t)->constraint_name_ = (yyvsp[-5].constraint_name_t);
		(yyval.table_constraint_t)->indexed_column_list_ = (yyvsp[-1].indexed_column_list_t);
		
	}
#line 11285 "bison_parser.cpp"
    break;

  case 625: /* table_constraint: constraint_name UNIQUE OP_LP indexed_column_list OP_RP  */
#line 4663 "bison.y"
                                                                {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE1;
		(yyval.table_constraint_t)->constraint_name_ = (yyvsp[-4].constraint_name_t);
		(yyval.table_constraint_t)->indexed_column_list_ = (yyvsp[-1].indexed_column_list_t);
		
	}
#line 11297 "bison_parser.cpp"
    break;

  case 626: /* table_constraint: constraint_name CHECK OP_LP expr OP_RP opt_enforced  */
#line 4670 "bison.y"
                                                             {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE2;
		(yyval.table_constraint_t)->constraint_name_ = (yyvsp[-5].constraint_name_t);
		(yyval.table_constraint_t)->expr_ = (yyvsp[-2].expr_t);
		(yyval.table_constraint_t)->opt_enforced_ = (yyvsp[0].opt_enforced_t);
		
	}
#line 11310 "bison_parser.cpp"
    break;

  case 627: /* table_constraint: constraint_name FOREIGN KEY OP_LP column_name_list OP_RP reference_clause  */
#line 4678 "bison.y"
                                                                                   {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE3;
		(yyval.table_constraint_t)->constraint_name_ = (yyvsp[-6].constraint_name_t);
		(yyval.table_constraint_t)->column_name_list_ = (yyvsp[-2].column_name_list_t);
		(yyval.table_constraint_t)->reference_clause_ = (yyvsp[0].reference_clause_t);
		if((yyval.table_constraint_t)){
			auto tmp1 = (yyval.table_constraint_t)->column_name_list_; 
			while(tmp1){
				auto tmp2 = tmp1->column_name_; 
				if(tmp2){
					auto tmp3 = tmp2->identifier_; 
					if(tmp3){
						tmp3->data_type_ = kDataColumnName; 
						tmp3->scope_ = 2; 
						tmp3->data_flag_ =(DATAFLAG)8; 
					}
				}
				tmp1 = tmp1->column_name_list_;
			}
		}


	}
#line 11339 "bison_parser.cpp"
    break;

  case 628: /* table_constraint: comment_literal table_constraint  */
#line 4702 "bison.y"
                                           {
		(yyval.table_constraint_t) = (yyvsp[0].table_constraint_t);
		MERGE_LEFT_COMMENT((yyval.table_constraint_t), (yyvsp[-1].comment_literal_t));
	}
#line 11348 "bison_parser.cpp"
    break;

  case 629: /* table_constraint: table_constraint comment_literal  */
#line 4706 "bison.y"
                                           {
		(yyval.table_constraint_t) = (yyvsp[-1].table_constraint_t);
		(yyval.table_constraint_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 11357 "bison_parser.cpp"
    break;

  case 630: /* opt_enforced: ENFORCED  */
#line 4713 "bison.y"
                  {
		(yyval.opt_enforced_t) = new OptEnforced();
		(yyval.opt_enforced_t)->case_idx_ = CASE0;
		
	}
#line 11367 "bison_parser.cpp"
    break;

  case 631: /* opt_enforced: NOT ENFORCED  */
#line 4718 "bison.y"
                      {
		(yyval.opt_enforced_t) = new OptEnforced();
		(yyval.opt_enforced_t)->case_idx_ = CASE1;
		
	}
#line 11377 "bison_parser.cpp"
    break;

  case 632: /* opt_enforced: %empty  */
#line 4723 "bison.y"
          {
		(yyval.opt_enforced_t) = new OptEnforced();
		(yyval.opt_enforced_t)->case_idx_ = CASE2;
		
	}
#line 11387 "bison_parser.cpp"
    break;

  case 633: /* opt_enforced: comment_literal opt_enforced  */
#line 4728 "bison.y"
                                       {
		(yyval.opt_enforced_t) = (yyvsp[0].opt_enforced_t);
		MERGE_LEFT_COMMENT((yyval.opt_enforced_t), (yyvsp[-1].comment_literal_t));
	}
#line 11396 "bison_parser.cpp"
    break;

  case 634: /* opt_enforced: opt_enforced comment_literal  */
#line 4732 "bison.y"
                                       {
		(yyval.opt_enforced_t) = (yyvsp[-1].opt_enforced_t);
		(yyval.opt_enforced_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 11405 "bison_parser.cpp"
    break;


#line 11409 "bison_parser.cpp"

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
  *++yylsp = yyloc;

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
  yytoken = yychar == SQL_FF_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= SQL_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == SQL_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = SQL_FF_EMPTY;
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != SQL_FF_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 4739 "bison.y"

int yyerror(YYLTYPE* llocp, Program * result, yyscan_t scanner, const char *msg) { 
	// 遇到错误的token，收集起来，添加到数组，返回给调用方
	
	// fprintf(stderr,"%s\n",msg);
	ErrorPosition err;
    err.first_line = llocp->first_line;
    err.first_col = llocp->first_column;
    err.last_line = llocp->last_line;
    err.last_col = llocp->last_column;
    result->errors.push_back(err);  // 将错误位置添加到Program结构
	return 0;
}
