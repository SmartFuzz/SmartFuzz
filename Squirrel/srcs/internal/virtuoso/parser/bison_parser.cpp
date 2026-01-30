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

#line 87 "bison_parser.cpp"

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
  YYSYMBOL_INTLITERAL = 197,               /* INTLITERAL  */
  YYSYMBOL_FLOATLITERAL = 198,             /* FLOATLITERAL  */
  YYSYMBOL_IDENTIFIER = 199,               /* IDENTIFIER  */
  YYSYMBOL_STRINGLITERAL = 200,            /* STRINGLITERAL  */
  YYSYMBOL_COMMENTLITERAL = 201,           /* COMMENTLITERAL  */
  YYSYMBOL_202_ = 202,                     /* '.'  */
  YYSYMBOL_YYACCEPT = 203,                 /* $accept  */
  YYSYMBOL_program = 204,                  /* program  */
  YYSYMBOL_stmtlist = 205,                 /* stmtlist  */
  YYSYMBOL_stmt = 206,                     /* stmt  */
  YYSYMBOL_create_stmt = 207,              /* create_stmt  */
  YYSYMBOL_drop_stmt = 208,                /* drop_stmt  */
  YYSYMBOL_alter_stmt = 209,               /* alter_stmt  */
  YYSYMBOL_select_stmt = 210,              /* select_stmt  */
  YYSYMBOL_select_with_parens = 211,       /* select_with_parens  */
  YYSYMBOL_select_no_parens = 212,         /* select_no_parens  */
  YYSYMBOL_select_clause_list = 213,       /* select_clause_list  */
  YYSYMBOL_select_clause = 214,            /* select_clause  */
  YYSYMBOL_combine_clause = 215,           /* combine_clause  */
  YYSYMBOL_opt_from_clause = 216,          /* opt_from_clause  */
  YYSYMBOL_select_target = 217,            /* select_target  */
  YYSYMBOL_opt_window_clause = 218,        /* opt_window_clause  */
  YYSYMBOL_window_clause = 219,            /* window_clause  */
  YYSYMBOL_window_def_list = 220,          /* window_def_list  */
  YYSYMBOL_window_def = 221,               /* window_def  */
  YYSYMBOL_window_name = 222,              /* window_name  */
  YYSYMBOL_window = 223,                   /* window  */
  YYSYMBOL_opt_partition = 224,            /* opt_partition  */
  YYSYMBOL_opt_frame_clause = 225,         /* opt_frame_clause  */
  YYSYMBOL_range_or_rows = 226,            /* range_or_rows  */
  YYSYMBOL_frame_bound_start = 227,        /* frame_bound_start  */
  YYSYMBOL_frame_bound_end = 228,          /* frame_bound_end  */
  YYSYMBOL_frame_bound = 229,              /* frame_bound  */
  YYSYMBOL_opt_exist_window_name = 230,    /* opt_exist_window_name  */
  YYSYMBOL_opt_group_clause = 231,         /* opt_group_clause  */
  YYSYMBOL_opt_having_clause = 232,        /* opt_having_clause  */
  YYSYMBOL_opt_where_clause = 233,         /* opt_where_clause  */
  YYSYMBOL_where_clause = 234,             /* where_clause  */
  YYSYMBOL_from_clause = 235,              /* from_clause  */
  YYSYMBOL_table_ref = 236,                /* table_ref  */
  YYSYMBOL_opt_index = 237,                /* opt_index  */
  YYSYMBOL_opt_on = 238,                   /* opt_on  */
  YYSYMBOL_opt_using = 239,                /* opt_using  */
  YYSYMBOL_column_name_list = 240,         /* column_name_list  */
  YYSYMBOL_opt_table_prefix = 241,         /* opt_table_prefix  */
  YYSYMBOL_join_op = 242,                  /* join_op  */
  YYSYMBOL_opt_join_type = 243,            /* opt_join_type  */
  YYSYMBOL_expr_list = 244,                /* expr_list  */
  YYSYMBOL_opt_limit_clause = 245,         /* opt_limit_clause  */
  YYSYMBOL_limit_clause = 246,             /* limit_clause  */
  YYSYMBOL_opt_limit_row_count = 247,      /* opt_limit_row_count  */
  YYSYMBOL_opt_order_clause = 248,         /* opt_order_clause  */
  YYSYMBOL_opt_order_nulls = 249,          /* opt_order_nulls  */
  YYSYMBOL_order_item_list = 250,          /* order_item_list  */
  YYSYMBOL_order_item = 251,               /* order_item  */
  YYSYMBOL_opt_order_behavior = 252,       /* opt_order_behavior  */
  YYSYMBOL_opt_with_clause = 253,          /* opt_with_clause  */
  YYSYMBOL_cte_table_list = 254,           /* cte_table_list  */
  YYSYMBOL_cte_table = 255,                /* cte_table  */
  YYSYMBOL_cte_table_name = 256,           /* cte_table_name  */
  YYSYMBOL_opt_all_or_distinct = 257,      /* opt_all_or_distinct  */
  YYSYMBOL_create_table_stmt = 258,        /* create_table_stmt  */
  YYSYMBOL_create_index_stmt = 259,        /* create_index_stmt  */
  YYSYMBOL_create_trigger_stmt = 260,      /* create_trigger_stmt  */
  YYSYMBOL_create_view_stmt = 261,         /* create_view_stmt  */
  YYSYMBOL_opt_table_option_list = 262,    /* opt_table_option_list  */
  YYSYMBOL_table_option_list = 263,        /* table_option_list  */
  YYSYMBOL_table_option = 264,             /* table_option  */
  YYSYMBOL_opt_op_comma = 265,             /* opt_op_comma  */
  YYSYMBOL_opt_ignore_or_replace = 266,    /* opt_ignore_or_replace  */
  YYSYMBOL_opt_view_algorithm = 267,       /* opt_view_algorithm  */
  YYSYMBOL_opt_sql_security = 268,         /* opt_sql_security  */
  YYSYMBOL_opt_index_option = 269,         /* opt_index_option  */
  YYSYMBOL_opt_extra_option = 270,         /* opt_extra_option  */
  YYSYMBOL_index_algorithm_option = 271,   /* index_algorithm_option  */
  YYSYMBOL_lock_option = 272,              /* lock_option  */
  YYSYMBOL_opt_op_equal = 273,             /* opt_op_equal  */
  YYSYMBOL_trigger_events = 274,           /* trigger_events  */
  YYSYMBOL_trigger_name = 275,             /* trigger_name  */
  YYSYMBOL_trigger_action_time = 276,      /* trigger_action_time  */
  YYSYMBOL_drop_index_stmt = 277,          /* drop_index_stmt  */
  YYSYMBOL_drop_table_stmt = 278,          /* drop_table_stmt  */
  YYSYMBOL_opt_restrict_or_cascade = 279,  /* opt_restrict_or_cascade  */
  YYSYMBOL_drop_trigger_stmt = 280,        /* drop_trigger_stmt  */
  YYSYMBOL_drop_view_stmt = 281,           /* drop_view_stmt  */
  YYSYMBOL_insert_stmt = 282,              /* insert_stmt  */
  YYSYMBOL_insert_rest = 283,              /* insert_rest  */
  YYSYMBOL_super_values_list = 284,        /* super_values_list  */
  YYSYMBOL_values_list = 285,              /* values_list  */
  YYSYMBOL_opt_on_conflict = 286,          /* opt_on_conflict  */
  YYSYMBOL_opt_conflict_expr = 287,        /* opt_conflict_expr  */
  YYSYMBOL_indexed_column_list = 288,      /* indexed_column_list  */
  YYSYMBOL_indexed_column = 289,           /* indexed_column  */
  YYSYMBOL_update_stmt = 290,              /* update_stmt  */
  YYSYMBOL_alter_action = 291,             /* alter_action  */
  YYSYMBOL_alter_constant_action = 292,    /* alter_constant_action  */
  YYSYMBOL_column_def_list = 293,          /* column_def_list  */
  YYSYMBOL_column_def = 294,               /* column_def  */
  YYSYMBOL_opt_column_constraint_list = 295, /* opt_column_constraint_list  */
  YYSYMBOL_column_constraint_list = 296,   /* column_constraint_list  */
  YYSYMBOL_column_constraint = 297,        /* column_constraint  */
  YYSYMBOL_opt_reference_clause = 298,     /* opt_reference_clause  */
  YYSYMBOL_opt_check = 299,                /* opt_check  */
  YYSYMBOL_constraint_type = 300,          /* constraint_type  */
  YYSYMBOL_reference_clause = 301,         /* reference_clause  */
  YYSYMBOL_opt_foreign_key = 302,          /* opt_foreign_key  */
  YYSYMBOL_opt_foreign_key_actions = 303,  /* opt_foreign_key_actions  */
  YYSYMBOL_foreign_key_actions = 304,      /* foreign_key_actions  */
  YYSYMBOL_key_actions = 305,              /* key_actions  */
  YYSYMBOL_opt_constraint_attribute_spec = 306, /* opt_constraint_attribute_spec  */
  YYSYMBOL_opt_initial_time = 307,         /* opt_initial_time  */
  YYSYMBOL_constraint_name = 308,          /* constraint_name  */
  YYSYMBOL_opt_temp = 309,                 /* opt_temp  */
  YYSYMBOL_opt_check_option = 310,         /* opt_check_option  */
  YYSYMBOL_opt_column_name_list_p = 311,   /* opt_column_name_list_p  */
  YYSYMBOL_set_clause_list = 312,          /* set_clause_list  */
  YYSYMBOL_set_clause = 313,               /* set_clause  */
  YYSYMBOL_opt_as_alias = 314,             /* opt_as_alias  */
  YYSYMBOL_expr = 315,                     /* expr  */
  YYSYMBOL_operand = 316,                  /* operand  */
  YYSYMBOL_cast_expr = 317,                /* cast_expr  */
  YYSYMBOL_scalar_expr = 318,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 319,               /* unary_expr  */
  YYSYMBOL_binary_expr = 320,              /* binary_expr  */
  YYSYMBOL_logic_expr = 321,               /* logic_expr  */
  YYSYMBOL_in_expr = 322,                  /* in_expr  */
  YYSYMBOL_case_expr = 323,                /* case_expr  */
  YYSYMBOL_between_expr = 324,             /* between_expr  */
  YYSYMBOL_exists_expr = 325,              /* exists_expr  */
  YYSYMBOL_function_expr = 326,            /* function_expr  */
  YYSYMBOL_opt_distinct = 327,             /* opt_distinct  */
  YYSYMBOL_opt_filter_clause = 328,        /* opt_filter_clause  */
  YYSYMBOL_opt_over_clause = 329,          /* opt_over_clause  */
  YYSYMBOL_case_list = 330,                /* case_list  */
  YYSYMBOL_case_clause = 331,              /* case_clause  */
  YYSYMBOL_comp_expr = 332,                /* comp_expr  */
  YYSYMBOL_extract_expr = 333,             /* extract_expr  */
  YYSYMBOL_datetime_field = 334,           /* datetime_field  */
  YYSYMBOL_array_expr = 335,               /* array_expr  */
  YYSYMBOL_array_index = 336,              /* array_index  */
  YYSYMBOL_literal = 337,                  /* literal  */
  YYSYMBOL_string_literal = 338,           /* string_literal  */
  YYSYMBOL_comment_literal = 339,          /* comment_literal  */
  YYSYMBOL_bool_literal = 340,             /* bool_literal  */
  YYSYMBOL_num_literal = 341,              /* num_literal  */
  YYSYMBOL_int_literal = 342,              /* int_literal  */
  YYSYMBOL_float_literal = 343,            /* float_literal  */
  YYSYMBOL_opt_column = 344,               /* opt_column  */
  YYSYMBOL_trigger_body = 345,             /* trigger_body  */
  YYSYMBOL_opt_if_not_exist = 346,         /* opt_if_not_exist  */
  YYSYMBOL_opt_if_exist = 347,             /* opt_if_exist  */
  YYSYMBOL_identifier = 348,               /* identifier  */
  YYSYMBOL_as_alias = 349,                 /* as_alias  */
  YYSYMBOL_table_name = 350,               /* table_name  */
  YYSYMBOL_column_name = 351,              /* column_name  */
  YYSYMBOL_opt_index_keyword = 352,        /* opt_index_keyword  */
  YYSYMBOL_view_name = 353,                /* view_name  */
  YYSYMBOL_function_name = 354,            /* function_name  */
  YYSYMBOL_binary_op = 355,                /* binary_op  */
  YYSYMBOL_opt_not = 356,                  /* opt_not  */
  YYSYMBOL_name = 357,                     /* name  */
  YYSYMBOL_type_name = 358,                /* type_name  */
  YYSYMBOL_character_type = 359,           /* character_type  */
  YYSYMBOL_character_with_length = 360,    /* character_with_length  */
  YYSYMBOL_character_without_length = 361, /* character_without_length  */
  YYSYMBOL_character_conflicta = 362,      /* character_conflicta  */
  YYSYMBOL_numeric_type = 363,             /* numeric_type  */
  YYSYMBOL_opt_table_constraint_list = 364, /* opt_table_constraint_list  */
  YYSYMBOL_table_constraint_list = 365,    /* table_constraint_list  */
  YYSYMBOL_table_constraint = 366,         /* table_constraint  */
  YYSYMBOL_opt_enforced = 367              /* opt_enforced  */
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
#define YYLAST   2752

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  203
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  165
/* YYNRULES -- Number of rules.  */
#define YYNRULES  621
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1067

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   456


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
       2,     2,     2,     2,     2,     2,   202,     2,     2,     2,
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
     195,   196,   197,   198,   199,   200,   201
};

#if FF_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   456,   456,   467,   474,   480,   484,   492,   498,   504,
     510,   516,   522,   531,   537,   543,   549,   559,   565,   571,
     577,   586,   593,   597,   604,   610,   619,   625,   631,   635,
     642,   655,   661,   673,   684,   688,   695,   700,   705,   710,
     714,   721,   727,   735,   744,   750,   758,   764,   768,   775,
     781,   791,   808,   812,   819,   828,   840,   846,   851,   855,
     862,   869,   877,   885,   890,   895,   900,   904,   911,   917,
     922,   926,   933,   939,   944,   948,   955,   961,   967,   972,
     976,   983,   998,  1006,  1013,  1018,  1022,  1029,  1035,  1040,
    1044,  1051,  1057,  1065,  1071,  1075,  1082,  1088,  1092,  1099,
    1110,  1121,  1131,  1144,  1150,  1155,  1160,  1164,  1171,  1177,
    1182,  1186,  1193,  1199,  1204,  1208,  1215,  1221,  1231,  1238,
    1246,  1251,  1256,  1262,  1266,  1273,  1278,  1283,  1288,  1293,
    1298,  1302,  1309,  1317,  1327,  1333,  1341,  1347,  1354,  1361,
    1365,  1372,  1378,  1383,  1387,  1394,  1400,  1405,  1409,  1416,
    1421,  1426,  1431,  1435,  1442,  1448,  1458,  1469,  1474,  1479,
    1484,  1488,  1495,  1501,  1507,  1512,  1516,  1523,  1529,  1539,
    1546,  1550,  1557,  1567,  1572,  1577,  1582,  1586,  1593,  1616,
    1655,  1659,  1666,  1699,  1703,  1710,  1742,  1746,  1753,  1795,
    1837,  1841,  1848,  1854,  1860,  1869,  1877,  1883,  1894,  1900,
    1906,  1912,  1918,  1924,  1930,  1936,  1942,  1948,  1952,  1959,
    1964,  1969,  1973,  1980,  1985,  1990,  1995,  1999,  2006,  2011,
    2016,  2021,  2026,  2030,  2037,  2042,  2047,  2052,  2056,  2063,
    2068,  2073,  2078,  2082,  2089,  2095,  2101,  2109,  2115,  2121,
    2127,  2131,  2138,  2144,  2150,  2156,  2162,  2166,  2173,  2178,
    2183,  2187,  2194,  2199,  2204,  2209,  2213,  2220,  2229,  2234,
    2239,  2243,  2250,  2267,  2271,  2278,  2299,  2303,  2310,  2315,
    2320,  2325,  2329,  2336,  2353,  2357,  2364,  2384,  2388,  2395,
    2408,  2415,  2421,  2428,  2432,  2439,  2445,  2455,  2461,  2465,
    2472,  2478,  2486,  2491,  2495,  2502,  2509,  2514,  2518,  2525,
    2531,  2541,  2551,  2562,  2573,  2577,  2584,  2602,  2634,  2653,
    2672,  2678,  2682,  2689,  2694,  2699,  2704,  2709,  2715,  2720,
    2725,  2729,  2736,  2742,  2754,  2772,  2780,  2790,  2796,  2806,
    2815,  2822,  2830,  2837,  2842,  2846,  2853,  2858,  2863,  2868,
    2872,  2879,  2917,  2921,  2928,  2933,  2938,  2942,  2949,  2955,
    2963,  2968,  2973,  2978,  2984,  2990,  2994,  3001,  3006,  3011,
    3016,  3021,  3026,  3030,  3038,  3044,  3050,  3055,  3059,  3066,
    3071,  3076,  3081,  3085,  3092,  3098,  3102,  3106,  3110,  3118,
    3123,  3128,  3132,  3139,  3144,  3149,  3154,  3159,  3163,  3170,
    3176,  3181,  3185,  3192,  3198,  3209,  3216,  3223,  3227,  3234,
    3240,  3249,  3255,  3261,  3267,  3273,  3279,  3289,  3295,  3301,
    3307,  3313,  3319,  3325,  3331,  3337,  3343,  3349,  3353,  3360,
    3367,  3371,  3378,  3384,  3393,  3399,  3405,  3411,  3417,  3423,
    3428,  3433,  3437,  3444,  3450,  3458,  3465,  3475,  3482,  3492,
    3500,  3508,  3516,  3520,  3527,  3534,  3540,  3548,  3555,  3559,
    3566,  3574,  3585,  3592,  3596,  3603,  3611,  3624,  3629,  3634,
    3638,  3645,  3651,  3656,  3660,  3667,  3673,  3679,  3684,  3688,
    3695,  3701,  3708,  3712,  3719,  3726,  3730,  3737,  3744,  3751,
    3758,  3765,  3772,  3782,  3789,  3793,  3800,  3805,  3810,  3815,
    3820,  3825,  3830,  3834,  3841,  3847,  3851,  3858,  3865,  3869,
    3876,  3882,  3888,  3897,  3903,  3907,  3913,  3917,  3923,  3928,
    3933,  3937,  3944,  3950,  3959,  3964,  3968,  3975,  3980,  3984,
    3992,  3997,  4002,  4006,  4013,  4019,  4025,  4031,  4041,  4046,
    4051,  4055,  4062,  4067,  4072,  4076,  4083,  4090,  4094,  4102,
    4117,  4121,  4128,  4147,  4160,  4187,  4192,  4197,  4202,  4207,
    4211,  4218,  4228,  4246,  4251,  4256,  4261,  4266,  4271,  4276,
    4280,  4287,  4292,  4297,  4301,  4308,  4317,  4323,  4332,  4338,
    4347,  4354,  4358,  4365,  4371,  4376,  4381,  4386,  4390,  4397,
    4402,  4407,  4412,  4417,  4422,  4427,  4432,  4437,  4442,  4447,
    4453,  4457,  4464,  4469,  4474,  4479,  4484,  4489,  4494,  4499,
    4504,  4509,  4514,  4519,  4524,  4529,  4533,  4540,  4546,  4554,
    4560,  4571,  4578,  4585,  4593,  4617,  4621,  4628,  4633,  4638,
    4643,  4647
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
  "FLOAT", "SECOND", "WINDOW", "NOTHING", "HAVING", "INTLITERAL",
  "FLOATLITERAL", "IDENTIFIER", "STRINGLITERAL", "COMMENTLITERAL", "'.'",
  "$accept", "program", "stmtlist", "stmt", "create_stmt", "drop_stmt",
  "alter_stmt", "select_stmt", "select_with_parens", "select_no_parens",
  "select_clause_list", "select_clause", "combine_clause",
  "opt_from_clause", "select_target", "opt_window_clause", "window_clause",
  "window_def_list", "window_def", "window_name", "window",
  "opt_partition", "opt_frame_clause", "range_or_rows",
  "frame_bound_start", "frame_bound_end", "frame_bound",
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

#define YYPACT_NINF (-643)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-563)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1242,   485,  1089,   363,    96,  1668,    34,  -643,    71,   -23,
     212,  -643,  -643,   -23,  -643,   -23,  -643,   539,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,  -643,   -23,  1407,  1357,
    -643,  -643,   418,   242,  1380,   -23,   992,  1357,  1380,   697,
     191,   191,  1357,  -643,   569,   783,   415,   336,    -1,   123,
    1357,  -643,   449,  -643,  -643,   480,     1,   668,  1349,    19,
    1357,  -643,   570,  1227,   570,   570,   743,   603,    49,   374,
     147,   570,   570,   570,   570,   570,   570,   570,   570,   570,
    -643,   -23,   -23,   -23,   539,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,  -643,  1357,   570,   639,   -23,   -23,
     570,  1357,   -23,  1123,   697,   -23,  1357,   806,  1253,   -23,
     851,   715,  1357,  1357,  1248,   191,   570,   -23,  -643,  -643,
     -23,   -23,   162,   -23,   943,  1020,   881,   253,    11,   848,
     -23,   -23,  1357,   570,   869,  -643,   -23,  -643,  -643,  2484,
     811,  1357,   986,    84,    65,  -643,  -643,  -643,    -1,   395,
     -23,   147,  -643,    96,   957,   975,  1041,   570,   -23,  1221,
     -23,  1162,   -23,   570,  -643,   -23,  -643,  1380,   -23,   542,
    1354,  1354,  -643,   -23,   -23,  1255,  1357,   570,  -643,  -643,
    1124,   163,     1,   980,  -643,  -643,  -643,  1457,  1357,   570,
     -23,    11,  1238,   885,  1357,   570,  1323,  1334,  1386,  -643,
    1442,   231,  1404,   646,   910,   -23,   -23,   -23,  1302,  2448,
    -643,  -643,  -643,  2448,  2405,  1371,  1430,  1473,  1434,  -643,
    -643,  -643,  -643,  1237,  -643,   617,  1456,   -23,  -643,   -23,
    -643,  -643,   -23,   -23,  -643,   -23,  -643,  -643,   -23,   -23,
     -23,  -643,   -23,  2538,   -23,  -643,   -23,   -23,  1216,  -643,
    1437,  1093,   -23,   697,  2484,  2484,  -643,   -23,    95,   -23,
    -643,   147,   -23,   395,   570,  1448,  -643,  1357,  1357,  1162,
    1357,    20,   714,  1246,  1409,   570,  -643,  -643,   -23,   596,
    -643,   792,  1360,   647,   570,   570,   -23,   -23,   542,  -643,
    -643,  -643,   107,  1176,   -23,   349,  -643,  -643,   992,  1426,
     -23,  1380,    44,  1357,  -643,  -643,  -643,  1453,  -643,   727,
    1357,  -643,  1357,  1357,  1357,   570,   570,   -23,   -23,   -23,
    2448,  1097,  2551,  1728,  2484,   693,   616,  1001,  2420,  2484,
     360,  1459,  1462,  2103,  2484,  -643,    20,   -23,  1303,  2484,
    2484,  1482,  2448,  2448,  2448,  2448,  -643,  -643,  -643,  -643,
     979,  1395,  -643,  2448,  2448,  2448,  1367,  -643,  -643,  2448,
    1231,  2448,  1137,   570,   570,   570,   570,   570,   570,   570,
     570,   570,  1894,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,  2538,   -23,   -23,   -23,   975,  1093,   570,   570,
     570,   580,  1451,   570,   570,   992,  -643,  1485,   414,  1261,
     570,   -23,    95,   570,   570,  -643,   -23,  -643,    20,  1464,
    2484,    49,   -23,   103,  1162,   570,   -23,   975,  2484,   570,
     -23,  -643,  -643,  -643,   570,   -23,  -643,  -643,  -643,  -643,
     -23,  1357,   570,   -23,  1176,   570,  1357,  1327,  -643,   570,
    1354,  1357,  1354,  1071,  -643,    64,    88,  1463,  -643,   -23,
    1380,  -643,  -643,  2077,  -643,  1441,  1468,  1466,  1960,  1326,
     622,  1068,  -643,  2484,   570,   -23,  1068,   -23,  1001,  1439,
    -643,  -643,  -643,  -643,  -643,  -643,  1364,   419,  -643,  -643,
     517,   444,  1272,   246,   570,   -23,  1517,  -643,  2484,  2004,
    2114,  2114,  2114,  1455,  -643,  2448,  2448,  1643,  2114,  2004,
    1381,  1044,  2004,  -643,  1231,   -23,   -23,  1097,  2551,  1298,
    1468,  -643,   574,  2484,    30,   140,   151,   344,  1123,  2484,
    -643,  -643,   318,  1096,  2484,  2484,    49,  1433,  1316,   106,
     570,   -23,  -643,  1316,  1532,   992,    96,   543,  1165,  1498,
    1079,  -643,  -643,  1348,  1149,  -643,   168,   721,   -23,   133,
    2484,   570,  -643,  -643,  -643,  -643,   970,  -643,  1522,  -643,
    -643,  -643,  -643,  -643,  -643,  -643,  -643,  -643,  -643,  -643,
    -643,  -643,  -643,  -643,  -643,  -643,  2126,   521,  -643,   -23,
     -23,  1188,   -23,  1357,  1466,  2484,  -643,  2484,  1425,  -643,
    2484,   570,   -23,  2077,   676,  -643,  -643,   -23,   610,   223,
    1199,   697,  1469,  1552,  1365,   269,  -643,  -643,  1850,  2004,
    2448,   -23,  -643,   570,  1473,  -643,  1470,    23,   733,  1487,
    2538,   -23,  1488,   149,  1467,   -23,   390,  1202,  1576,  -643,
     351,   -23,   344,  -643,  1136,   -23,   401,   -23,  1316,  1316,
     106,  2484,  2484,   -23,   114,  1484,  1351,   165,  -643,  -643,
    -643,  1357,   636,  1322,  1492,  -643,   779,  1357,  -643,  -643,
    -643,  -643,  -643,  -643,    96,   570,   -23,  1149,  -643,    88,
     -23,   721,   570,  1494,  1518,   414,  -643,  -643,  -643,  2126,
     -23,   -23,  1188,   -23,  -643,  1495,  1483,  -643,   130,   521,
     -23,   592,   570,   570,  1367,   570,   570,  -643,  1316,  1445,
    -643,  1026,  1502,  -643,  1490,  -643,    -3,  1060,   570,   -23,
    1506,   620,   663,  2484,  2484,  1357,  -643,   -23,  1375,   -23,
    2448,  1960,  1509,  1510,  1613,  1321,  -643,    40,   -23,   574,
     570,  -643,  1254,   570,   -23,   390,  2484,  -643,   849,  1260,
    -643,   570,  -643,  -643,   570,   -23,   401,   570,   -23,  1316,
    1316,   570,   -23,   114,  1579,    96,   309,   -23,   181,   -23,
    -643,  1507,  1511,  1514,  1515,   570,   636,   -23,   168,  1165,
     570,  -643,  -643,   -23,    88,   570,   947,  2484,   -23,  -643,
    -643,  1516,   283,   166,  -643,   570,   -23,   958,  -643,  -643,
    -643,  -643,  -643,   570,   -23,   697,   697,  1586,  1582,  1631,
     981,  1535,  1070,  -643,   917,  1499,  1380,   -23,   570,   -23,
    1375,   570,  1960,  -643,  -643,  2484,  1357,  -643,   570,   -23,
      40,   570,    23,  2484,   -17,  1266,  1538,  1202,   570,   -23,
     385,   165,  1667,  1663,  1664,   570,   -23,  2484,  2484,  1540,
    1541,  -643,  -643,   570,   260,  1248,  1038,  -643,  2484,  1547,
    -643,   247,    83,   -23,  -643,  1631,  1631,  1357,  -643,  2484,
    1129,  1631,   -23,   697,  2484,   -23,  1245,  1357,   570,  1544,
     -23,   -23,  1190,  1555,   632,   -23,  -643,  1556,    60,   570,
     -23,  -643,  -643,  -643,   -23,  1282,  -643,   -23,   441,  -643,
     -23,  -643,  1684,  1685,  1191,  1559,  2484,  1357,  -643,  -643,
    -643,  1255,   -23,  1200,  -643,  1357,   -23,   614,   -23,    83,
     570,  1129,  1631,  1129,  -643,  1316,  1553,   -23,  1158,   -23,
     570,  1631,  1316,   570,   -23,  -643,  1357,  -643,  -643,  1630,
      49,   746,    20,  1162,  -643,   -23,   -23,   -23,   -23,   -23,
     -23,  -643,  -643,   880,  -643,  1564,  1565,   570,   880,   992,
     570,   -23,   614,   570,  -643,  -643,  1357,   570,   -23,  1158,
     570,  1129,  1569,  2484,   648,    65,   -23,  -643,    20,  -643,
    1633,   933,  -643,  -643,   247,  -643,   394,  1571,  -643,  -643,
    -643,  -643,  -643,  -643,  -643,  2131,   948,   570,   -23,  -643,
     -23,   570,  -643,  1006,  1461,   826,   -23,   433,  -643,  1697,
    1639,  2235,   -23,   -23,  1308,  2302,   -23,   948,  1049,  1049,
    -643,  -643,  -643,  1619,   454,   -23,   954,   570,   -23,   433,
    -643,  -643,   255,  2302,   570,   570,  -643,  -643,   -23,   -23,
    1550,   -23,   -23,   -23,   570,  -643,   782,  1701,  -643,   -23,
    1109,   -23,   454,   319,   -23,   541,   570,   -23,  2315,  -643,
    -643,  -643,   570,   -23,   -23,  -643,  -643,   570,   -23,  1660,
     -23,   -23,  2339,  -643,   570,   -23,   -23
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     164,     0,     0,   380,   164,   221,     0,   506,     0,     2,
       0,     7,     8,    12,     9,    25,    24,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    11,    10,   164,     0,
     536,   162,   167,     0,     0,   542,   390,     0,     0,   400,
     533,   533,     0,   379,     0,   380,     0,     0,     0,   164,
       0,   545,     0,   547,   546,     0,   226,     0,   221,     0,
       0,     1,     6,   164,    23,    29,   175,     0,   146,    31,
     166,   181,   184,   187,   191,   264,   267,   275,   278,   305,
     506,     5,    12,    25,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    10,   163,     0,   171,     0,   170,   537,
     538,     0,   172,   390,   400,   537,     0,     0,     0,   399,
       0,   533,     0,     0,   236,   533,   382,   381,    27,    26,
      28,   165,     0,   257,   221,     0,     0,     0,   223,   529,
     222,   549,     0,   550,     0,   507,     3,   174,   173,   562,
     175,     0,     0,   135,   146,    38,    36,    37,     0,    35,
      34,     0,   168,   164,     0,   543,   116,   392,   391,     0,
     539,     0,   540,   541,   532,   534,   273,     0,   551,   270,
     249,   249,   262,   234,   235,     0,     0,   166,   258,   259,
       0,     0,   226,   221,   219,   220,   218,     0,     0,   228,
     227,   226,     0,   529,     0,   223,     0,     0,     0,   314,
       0,   521,     0,   521,   521,   317,    21,   310,     0,     0,
     509,   430,   508,   561,   562,     0,     0,   164,     0,   429,
     514,   517,   503,    42,    43,   400,   401,   405,   409,   410,
     411,   406,   404,   412,   402,   403,   415,   433,   413,   414,
     408,   423,   500,   177,   501,   502,   512,   513,   543,   422,
       0,     0,   176,   400,   562,   562,    30,   134,   148,   147,
      32,     0,    39,     0,    35,     0,   389,     0,     0,     0,
       0,    92,   393,     0,     0,   535,   268,   269,   276,   270,
     248,     0,   249,     0,   241,   247,   240,   246,   270,   254,
     252,   253,     0,     0,   260,     0,   224,   225,   390,     0,
     530,     0,   193,     0,   316,   318,   319,     0,   520,   521,
       0,   315,     0,     0,     0,   312,   321,   246,   311,   310,
       0,   424,     0,   425,   562,     0,     0,   470,   562,   562,
       0,     0,     0,   164,   562,   119,    92,    41,     0,   562,
     562,   133,     0,     0,     0,     0,   553,   554,   557,   556,
       0,   561,   558,     0,     0,     0,     0,   555,   426,     0,
     418,     0,     0,   421,   432,   443,   449,   454,   485,   496,
     499,   505,   417,   420,   410,   442,   412,   453,   413,   414,
     408,   500,   562,   501,   512,   513,   537,     0,   511,   516,
     519,   458,     0,   564,   177,   390,   145,   154,   159,   136,
     140,   139,     0,   148,    40,   169,   544,   117,    92,     0,
     562,   146,    91,     0,     0,   398,   397,   537,   562,   272,
     271,   238,   237,   239,   251,   250,   244,   243,   242,   245,
     265,     0,   256,   255,     0,   261,     0,     0,   528,   531,
     249,     0,   249,   215,   192,   196,   193,     0,   313,   522,
       0,   309,   308,   589,   306,     0,     0,   418,   417,     0,
       0,     0,   445,   562,   473,   471,   476,   472,   470,     0,
     491,   487,   490,   488,   489,   486,     0,     0,   416,   407,
       0,    96,     0,    84,    98,    97,   438,   437,   562,   478,
     479,   480,   482,     0,   427,     0,     0,     0,   481,   435,
       0,     0,   477,   561,   562,   559,   563,   434,     0,     0,
     561,   457,   462,   562,   458,   164,   292,   164,   390,   562,
     157,   158,   151,   159,   562,   562,   146,     0,    93,   142,
      95,    94,   394,   395,     0,   390,   164,     0,   608,   322,
       0,   214,   213,     0,   195,   209,     0,   208,   194,   196,
     562,   523,   582,   595,   603,   576,     0,   575,   599,   585,
     602,   593,   574,   588,   596,   580,   598,   601,   592,   584,
     604,   579,   594,   581,   583,   597,   538,   326,   567,   568,
     569,   573,   566,     0,     0,   562,   444,   562,     0,   494,
     562,   493,   492,   589,   129,   120,   121,   118,     0,   119,
     542,   400,     0,     0,    45,    84,   132,   428,     0,   436,
       0,   515,   497,   560,   164,   441,     0,   467,   462,     0,
     460,   459,     0,   164,     0,   279,   284,     0,     0,   280,
     392,   283,   164,   155,     0,   156,   151,   160,   137,   138,
     142,   562,   562,   303,   142,     0,     0,   386,   200,   199,
     198,     0,     0,     0,     0,   607,   609,     0,   206,   205,
     204,   202,   201,   203,   164,   217,   216,   215,   197,     0,
     211,   210,   195,     0,   299,   159,   587,   586,   600,   589,
     571,   577,   573,   605,   338,     0,     0,   324,   333,   327,
     329,     0,   572,   578,     0,   591,   606,   307,   474,     0,
     447,     0,     0,   128,   125,   127,     0,   129,   124,   123,
       0,     0,   105,   562,   562,     0,    33,    44,    86,    85,
       0,   450,     0,     0,     0,     0,   455,   464,   463,   462,
     460,   452,   296,   294,   293,   292,   562,   282,   285,     0,
     281,   284,   150,   149,   153,   152,   151,   161,   302,   396,
     141,   144,   143,   142,     0,   164,     0,   188,   386,   565,
     374,     0,     0,     0,     0,   376,     0,   615,   193,     0,
     616,   323,   178,   207,     0,   212,   231,   562,   301,   336,
     337,     0,   331,   333,   328,   340,   339,     0,   446,   483,
     419,   126,   122,   131,   130,   400,   400,     0,     0,   109,
     105,     0,    88,    46,    49,     0,     0,    54,    48,    47,
       0,    86,   451,   439,   440,   562,    82,   466,   469,   468,
     467,   464,   467,   562,     0,   296,     0,     0,   289,   288,
     164,   386,     0,     0,     0,   388,   387,   562,   562,     0,
       0,   179,   610,   208,     0,   236,   231,   300,   562,     0,
     325,     0,   335,   334,   570,   109,   109,     0,   104,   562,
     113,   107,   106,   400,   562,    83,    88,     0,    53,     0,
      52,    54,     0,     0,    57,    81,   456,     0,     0,   298,
     297,   287,   286,   524,   527,     0,   526,   525,   164,   185,
     189,   383,     0,     0,     0,     0,   562,     0,   230,   229,
     182,   233,   232,     0,   344,     0,   330,     0,   346,   345,
     335,   113,   109,   113,   103,   108,     0,    99,   111,   110,
     107,   109,    87,    90,    89,    50,    82,   461,   465,     0,
     146,    57,     0,     0,   290,    22,   263,   266,   274,   277,
     304,   385,   384,   619,   612,     0,     0,   233,   619,   390,
     343,   342,     0,   347,   101,   102,     0,   115,   114,   113,
     111,   113,     0,   562,    62,    59,    58,   295,     0,   617,
       0,   619,   613,   611,     0,   332,   349,     0,   100,    51,
      56,    63,    64,    65,    55,   562,   148,    59,   291,   618,
     620,   621,   614,     0,     0,   366,   348,   392,   112,     0,
       0,   562,    60,    68,     0,    67,    66,     0,     0,     0,
     352,   350,   351,     0,   371,   341,   366,   356,   355,     0,
      69,    78,     0,   562,    71,    80,    76,    77,    70,    68,
     401,   405,   404,   403,    67,   360,     0,     0,   359,   353,
       0,   354,   371,     0,   364,   371,   368,   367,   562,   358,
     357,   361,   363,   362,   365,   369,   370,   373,   372,     0,
      61,    72,   562,    73,    75,    74,    72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -643,  -643,  1347,  -643,  -643,   899,   -16,   -92,  1460,    73,
    1588,   -18,  1669,  -643,  -643,  -643,  1138,   878,   934,  1018,
     820,   816,  -643,   784,   561,   690,   388,  -643,  1151,   891,
     502,  -405,  1420,  1161,   961,   143,   312,  -196,  -643,  1166,
    1056,   407,  -643,  1622,   132,   -62,  1244,  1249,  -643,  -447,
     493,   380,  1736,  -643,  1632,  1743,  1745,  1746,  1747,  -436,
    1230,  -435,  -453,  1338,   400,   372,   936,   932,  -168,    -9,
     -52,  1603,  1672,  1606,     3,     5,   674,    15,    26,   960,
    1270,   965,  1054,  1278,   974,   356,  -643,    -2,  1587,  1592,
    1144,  1491,  -643,  1117,  -643,  -643,  1024,  1118,  -454,  1028,
    -643,   835,   286,   796,   528,  1160,  1583,  -642,   -24,  -255,
    1542,   524,   873,   876,   457,  -643,   326,  -643,  -643,   661,
     781,  -643,   824,  -643,  1304,    50,  -566,   -50,   516,  -643,
     809,  1339,   832,   856,  -643,   918,     0,   927,  -643,   774,
     931,   492,  -643,  1624,  1243,  1034,  1711,  1009,   822,  1762,
    -172,  1340,  -285,   872,  -643,  1232,  -643,  -138,  -124,  -113,
     171,  -643,  1055,  1173,   553
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      68,    69,   262,   336,   223,   716,   809,   803,   804,   805,
     873,   930,   984,  1006,  1028,  1060,  1003,   874,   604,   865,
     411,   412,   337,   481,   799,   919,   958,   154,   482,   597,
     706,   224,   256,   401,   752,   259,   745,   396,   397,   522,
      48,    31,    32,    33,   139,    18,    19,    20,    21,   443,
     444,   445,   546,   666,   130,   190,   845,   172,   173,   174,
     281,   433,   122,   180,    22,    23,   278,    24,    25,    26,
     516,   737,   738,   734,   824,   673,   674,    27,   206,   207,
     538,   539,   687,   688,   689,   850,   782,   690,   951,   908,
     995,  1018,  1039,  1015,  1044,   652,   117,   757,   102,   271,
     272,   107,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   513,   617,   819,   467,   327,   237,
     238,   476,   239,   240,   241,   242,   382,   244,   245,   246,
     247,   310,   889,   194,   112,   248,   109,    36,   249,    59,
     169,   250,   361,   251,   760,   577,   578,   579,   580,   581,
     582,   654,   655,   656,   972
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    34,    38,    45,    49,    58,   143,   286,   531,    62,
     548,   549,    82,    64,   408,    65,   298,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    93,    79,    28,    34,
     725,    89,    96,    90,    34,   100,   103,    38,    38,   108,
     111,   111,    38,    91,   116,    45,    65,   725,    70,    49,
      38,   726,   150,   440,    92,   126,   128,   116,    58,   133,
      38,   265,   410,    28,   142,   126,   140,    66,   144,   149,
     151,    61,   407,  -210,   409,   505,   637,    47,   132,   158,
     142,    62,    64,    65,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,   670,    34,   255,   440,    96,   100,
     511,    38,   157,   103,   108,   100,    38,   255,   108,   163,
       1,   111,   167,   167,   175,   111,   836,   116,   642,   283,
      65,   177,   181,   100,   183,   205,   642,   189,   191,   193,
     195,   133,    38,   150,   208,   878,    62,     1,   792,   243,
     140,    38,  -207,   258,   144,   410,   849,   933,   261,   263,
     264,   151,   431,    49,     1,   100,   781,    60,   157,   532,
     100,   273,   163,     1,   326,   275,   287,    38,   100,   279,
     282,   282,   505,   284,   285,   175,   167,   440,     7,   756,
     293,   181,   128,   183,     7,   545,   178,   178,    38,   890,
     189,   191,   781,   193,   301,   756,   624,   441,     7,   317,
       7,   309,     7,   309,   309,   285,   315,   316,   208,   322,
     179,   179,    80,   322,   328,    66,   442,   333,   670,   505,
       7,     7,    63,   338,     7,   108,   360,   363,   778,   364,
     425,    80,   365,   366,   773,   367,  -210,     1,   368,   369,
     370,    80,   371,   150,   388,     7,   389,   390,   100,     4,
       7,   393,   394,   108,   545,   934,   876,   400,   402,   403,
     442,   151,   404,   263,   535,     7,    80,    38,    38,   273,
      38,   413,   415,   273,   437,   460,     4,   465,   419,   279,
     307,   424,   282,   424,    80,     7,   284,   285,   279,    80,
     331,  -164,   432,   434,   435,   189,    80,     7,   103,   505,
     439,    38,   446,    38,    80,  -207,   603,     7,     7,   309,
     450,   188,   450,    38,   450,    80,   110,   285,   315,   316,
     322,   457,   322,   457,    80,   461,   464,   466,   328,   603,
     477,     7,   841,   333,     7,   832,   413,   484,   338,   773,
     442,     7,   322,   322,   322,   322,   849,   308,    80,   529,
      80,  1048,     7,   322,   322,   322,   500,   905,     1,   322,
     504,   508,   393,     7,    80,     1,     7,    80,   470,     7,
    1055,   517,   360,   363,   364,   365,   366,   367,   368,   369,
     370,   371,    80,   388,   389,   390,   100,   393,   537,   898,
     540,   514,     7,  -345,   145,   518,   627,   906,   523,     1,
      40,   400,   402,   471,   634,    56,   100,   436,   413,    94,
     472,   144,   530,   413,   273,   145,   415,   100,   465,  -164,
     419,    41,    42,    97,     7,   424,   833,   470,   127,   899,
     419,    38,     7,   432,   434,   624,    38,   157,   680,   993,
     282,    38,   282,   544,   647,   547,   446,     7,     7,   551,
      38,   628,   681,   576,     7,     1,     7,   584,   457,   146,
     464,   461,   471,   682,   640,   464,   461,   464,   466,   472,
      80,   339,     2,   594,   473,   152,   591,   477,   993,   119,
     146,   598,    38,   605,     7,   484,  1056,   634,   834,   457,
     457,   457,   457,    17,   632,   322,   322,   457,   457,   457,
     500,   389,   457,     3,   504,   613,   393,   457,   322,    38,
     340,   646,   618,   620,   514,   623,   626,   630,   518,     7,
     992,    84,   636,   523,   182,    43,   144,   967,     2,   644,
     474,   530,   994,   473,   520,   103,    49,   424,   653,    95,
     424,   680,   121,   665,   667,     7,   669,   671,   672,   547,
       7,  1043,    80,   475,   295,   681,    17,   147,   118,     3,
     648,     7,   684,   988,     7,   595,   682,    29,   124,   374,
     685,   994,   772,     6,   339,     7,   679,   691,   147,   692,
     693,   695,   696,    38,   584,   596,     7,   649,   622,   474,
     629,    80,   591,   679,   707,     7,    80,   708,   598,   623,
     100,   108,    80,   521,   718,   605,   276,    66,   457,   457,
     322,   389,   475,   340,   333,     7,     7,   727,   618,     7,
      80,   730,   686,   623,   332,   733,   735,   739,   159,     6,
     623,   741,   630,   684,    80,   744,   746,   747,  1043,   594,
     644,   685,    80,   751,   753,     7,   157,   758,   374,   594,
     511,    38,   765,   653,   374,     7,   770,    38,   650,   374,
     276,   643,   761,   831,    49,   125,   665,   667,   728,   774,
     775,   671,   710,   616,   339,   523,   277,   762,   968,   679,
     692,   693,   695,   696,    30,   763,     7,   722,   783,   691,
     785,   691,   115,   686,   500,   312,   314,   462,   593,   764,
     373,   946,   426,   586,   463,   629,   793,   707,   374,   708,
     587,   598,   800,   340,    67,   806,   427,   808,   810,   811,
     322,   457,     7,   512,   905,    38,   818,   820,   821,   618,
     277,   595,   825,   286,   733,   735,   469,   981,   828,   739,
       7,   595,    80,     7,     7,   744,   746,   683,   751,   341,
     339,   596,   751,   753,   428,    49,   797,   835,   758,   100,
     977,   596,   308,   796,   798,   929,   765,   770,   446,   653,
       7,   135,   748,   843,   774,     7,   846,   395,   747,   822,
     141,     7,   852,   783,   703,   373,   785,   389,   982,   340,
     373,   129,   153,    80,   793,   108,   108,    80,   106,   861,
     800,   449,   866,   704,   868,   983,   806,   100,   429,   808,
     810,    80,   457,   137,   884,    80,    38,     7,     7,   818,
     820,     7,   727,     7,   879,   825,   121,   739,   887,   828,
     888,   758,   616,     7,   374,   414,   835,     7,   483,   373,
     110,   672,   545,   308,   468,   901,   846,     7,     7,     7,
     683,   907,   909,   910,   421,   912,   912,    38,   705,   324,
     918,   912,   920,   108,     7,   923,   866,   806,   964,     7,
     868,   100,   935,   197,   931,   100,   818,     7,   106,   929,
     879,   137,   138,   198,    64,   177,   940,    79,   888,  1049,
     835,   936,   287,   937,     7,   606,   161,    38,     7,   422,
     769,   175,   947,   938,   375,    38,   950,   952,   953,   909,
     526,   918,   912,   918,   939,     7,    80,   957,   959,   960,
     619,   912,    80,   156,   923,   976,    38,  1013,    80,  1014,
     965,   931,   413,   273,    80,    64,    75,    76,    77,    78,
      79,  1050,   860,   971,     7,    43,   374,    80,   971,   103,
     138,   950,   952,   420,   957,   957,    38,   187,   957,   959,
     969,   918,   430,   199,   986,   144,   987,   530,   413,   200,
     827,   971,   991,   192,   952,   991,   997,   468,   957,   423,
       7,   970,   468,   274,    80,  1005,  1007,   201,   530,   375,
     991,   202,   950,     7,   375,  1016,  1017,  1019,   911,   913,
     171,  1023,  1024,  1025,   203,  1023,  1034,  1007,  1040,  1040,
     192,    39,    80,   969,  1045,  1046,  1016,   384,  1017,  1019,
     204,   723,  1024,  1023,   376,   164,   308,     7,  1024,  1025,
     360,   363,   365,   367,   970,    35,    35,   981,   867,  1052,
    1040,  1052,  1045,   375,  1057,  1045,   104,  1046,  1062,     7,
       7,   114,   378,  1052,  1057,  1013,   184,  1014,  1057,   254,
    1064,  1025,  1062,    35,   961,  1064,  1025,   377,    99,   134,
       7,    35,   105,    55,   797,   379,    35,   373,   313,   676,
     493,     7,   798,   339,   123,   321,    80,   325,   982,   323,
     156,   274,   156,  1008,    35,   274,   384,   844,   362,   380,
     266,   854,   384,   376,   185,   983,   658,   384,  1009,   376,
      55,     7,   659,  1035,   376,   387,   121,   660,     7,   372,
     801,   802,   340,   121,   677,   712,   186,   398,   399,    35,
     501,   378,   451,   847,    80,   155,   455,   378,   494,  1036,
     160,   196,   378,   826,     7,   101,   123,   168,     7,    80,
     253,   661,   377,   742,   379,    80,   384,   377,   348,     7,
     379,   381,   268,   376,  1037,   379,    35,   324,   703,   789,
     383,   349,   917,  1035,   385,    35,     7,   267,   380,   877,
     743,    80,    80,  1038,   380,   288,   662,   704,   844,   380,
     541,   378,   663,     7,   895,   155,   323,   459,   458,  1036,
     387,   105,     7,   302,   372,   387,   377,   480,   352,   372,
      35,   289,   486,   487,   379,   542,   520,   612,   489,   490,
     491,   492,   168,   954,  1037,   955,   290,    -4,    35,   497,
     498,   499,   506,    37,   324,   502,   274,   507,   380,    80,
     381,     1,   705,  1038,   362,     7,   381,   339,   339,   383,
       7,   381,   945,   385,   387,   383,     1,   339,   372,   385,
     383,    80,   356,   289,   385,   346,   864,   392,   541,    80,
     347,     7,     7,   978,   611,   357,   101,   386,   290,   916,
       7,   375,   384,   528,   113,   521,   340,   340,    30,   376,
       7,   533,   348,   542,     7,  1041,   340,    80,     7,   291,
     381,   406,   155,   155,   155,   349,   197,   417,   916,   383,
      80,   269,   447,   385,     2,   270,   198,   378,   339,   855,
     856,   509,   454,   885,    80,     7,  1053,  1026,   651,     2,
       7,   374,   503,   927,   943,   105,   588,    35,     7,   299,
     379,   694,   352,   948,   155,     3,   453,    35,   155,   374,
      80,   291,  -552,   524,   165,   736,   386,   340,   176,    80,
       3,    30,   386,     7,   380,   339,     7,   386,   303,  -552,
     980,   608,   609,   339,  1027,    81,   506,    80,   170,   171,
       4,   121,   525,   339,   458,   170,   171,   921,   374,     7,
      51,     5,   398,  1029,   384,     4,   199,   638,   639,   270,
       7,   376,   200,     7,   340,   697,     5,   823,  -548,   357,
     136,  1029,   340,   736,    53,     6,   386,     7,   267,   823,
     201,     1,   340,   675,   202,   599,   381,   335,     7,   378,
       6,   585,    80,   171,   106,   383,  1061,   203,     7,   385,
     534,   864,   305,     7,   377,    30,    80,    80,   155,     7,
    1066,   614,   379,   204,    80,     7,    80,    67,   698,   342,
     699,    80,  1031,   701,    46,    35,  1010,    80,   787,   343,
     168,    30,  -380,     7,   816,   453,   380,    54,   344,    55,
    1031,   345,   339,     7,   105,   651,   721,     1,    83,  1011,
     346,   601,   387,   335,     2,   347,   372,    30,   306,     7,
     346,   975,   339,    80,    80,   347,   700,  1012,   536,   120,
     304,    43,   209,   210,   749,   750,   600,   348,   615,  1031,
      30,   340,     7,    80,   990,     3,   788,   348,     7,   664,
     349,   495,   755,   350,   211,   296,   329,   496,   381,   280,
     349,   340,   386,    35,   212,   280,  1002,   383,   297,     7,
      80,   385,     7,   342,   590,     7,    30,   351,     7,   715,
       4,    80,  1022,   343,   220,     7,     7,   352,     7,   715,
    1054,     5,   344,  1058,   213,   345,    80,   352,   220,    30,
     311,    80,    80,   330,   346,   214,    44,   334,    57,   347,
     391,   405,   353,   354,   418,     6,   812,   215,   355,   216,
     438,   448,   478,   488,   515,   479,   519,   527,    80,   583,
     496,   348,   589,   340,   607,   645,   550,   155,   641,   657,
     678,   356,   713,   724,   349,   714,   217,   350,   740,   218,
     729,   731,   219,   754,   357,   768,   358,   776,   732,   777,
    -562,   359,   780,   779,   357,   790,   342,  -562,   791,   795,
     675,   351,   813,   814,   386,   815,   343,     7,   830,   857,
     837,   352,   839,   840,   838,   344,  1032,    80,   345,   848,
     220,   221,    30,   222,     7,   858,   859,   346,   863,   914,
     869,   881,   347,   891,  1032,   759,   353,   354,   872,   892,
     893,   453,   355,   896,   897,   904,   675,   926,   928,   932,
     941,   942,   944,   963,   348,    50,   956,   973,   974,    51,
     894,   675,   979,   989,   998,   356,  1020,   349,  1021,   156,
     350,   903,  1042,  1032,  1051,    52,  1063,  -548,   357,   883,
     358,   342,   915,    53,  -417,   359,   260,   922,   148,   610,
     870,   343,   717,   817,   456,   925,   962,   966,   985,   807,
     344,     7,  1065,   345,   352,   274,   719,   924,   485,   807,
     711,   862,   346,   794,   709,   257,   635,   347,   633,   675,
      98,    85,   252,    86,    87,    88,   668,   900,   156,   384,
     354,   543,   902,   292,   166,   355,   376,   294,   631,   348,
     886,  -380,   882,   829,   625,   318,    54,   384,    55,   880,
     319,   771,   349,   452,   376,   350,   784,   853,   356,   786,
     851,   996,  1047,   766,   378,   416,   592,   300,   621,   162,
     131,   357,   602,   358,   842,   702,   767,     0,   359,  1033,
      43,     0,   378,     0,     0,     0,   384,   379,     0,   352,
     871,     0,     0,   376,     7,     0,     0,  1033,     0,     0,
     875,     0,     0,   342,     0,   379,     0,     0,  1004,     0,
       0,   380,     0,   343,     0,   354,     0,     0,     0,     7,
     355,   378,   344,     0,  1004,   345,     0,   387,  1004,   380,
       0,  1030,     0,     0,   346,     0,  1033,     0,     0,   347,
       0,   155,     0,   356,   379,   387,  1004,   342,     0,  1030,
       0,   807,   362,     0,     0,     0,   357,   343,   358,     0,
       0,   348,     0,   359,   949,     0,   344,     0,   380,   345,
       0,  1004,     0,   381,   349,     0,     0,   350,   346,     7,
       0,   155,   383,   347,   387,  1004,   385,     0,  1030,    35,
       0,   381,     0,     0,     0,     0,   720,     0,     0,     0,
     383,   456,     0,     0,   385,   348,     0,     0,     0,     0,
     875,   352,     0,   342,     0,     0,     0,   155,   349,     0,
       0,   350,     0,   343,     0,     0,     0,     0,     0,     0,
     381,     0,   344,     0,     0,   345,     0,   354,     0,   383,
     155,     0,   355,   385,   346,   510,     0,     0,     0,   347,
       0,     0,     0,     0,     0,   352,     0,  -563,     0,     0,
       0,     0,     0,     0,     0,   356,     0,   343,     0,     0,
       0,   348,     0,     0,     0,     0,   344,     0,   357,   345,
     358,   354,     0,     0,   349,   359,   355,   350,   346,   386,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,     0,     0,   386,     0,   356,
       0,   456,     0,     0,     0,   348,     0,     0,     0,     0,
       0,   352,   357,     0,   358,     0,     0,     0,   349,   359,
       0,   350,     0,   552,     0,     0,     0,     0,   553,     0,
       0,     0,     0,     0,     0,     7,   386,   354,   554,     0,
       0,     0,   355,     0,     0,     0,     0,   555,   556,   557,
       0,     0,     0,     0,     0,   352,     0,     1,     0,     0,
       0,     0,     0,     0,   558,   356,     0,  -563,     0,     0,
     559,     0,   552,     0,     0,     0,  -563,   553,   357,  -563,
     358,   354,   209,   210,   560,   359,  -563,   554,   346,   999,
       0,     0,   561,   347,     0,     0,   555,   556,   557,     0,
       0,     7,     0,     0,   211,     0,  1000,   562,     0,   356,
     209,   210,   563,   558,   212,   348,     0,     0,     0,   559,
       0,   564,   357,     0,   358,     0,   565,     0,   349,  -563,
     566,   350,   211,   560,     0,     0,     0,     0,     0,     0,
       0,   561,   212,     0,   213,     7,     0,     0,     0,   567,
       0,     0,     0,     0,     0,   214,   562,     0,     0,     0,
       0,   563,   568,   569,   570,   352,     0,   215,     0,   216,
     564,   571,   213,     0,     0,   565,     0,   572,     0,   566,
       0,     0,     0,   214,     0,     0,     0,     0,     0,     0,
       0,  -563,     0,   999,     0,   215,   217,   216,   567,   218,
       0,     0,   219,   573,     0,     0,     0,  1001,   574,   575,
    1000,   568,   569,   570,   209,   210,     0,  -562,     7,   356,
     571,     0,     0,     0,   217,     0,   572,   218,     0,     0,
     219,     0,   357,     0,   358,     0,   211,     0,     0,     0,
     220,   221,    30,   222,    80,     0,   212,     0,     0,     0,
       0,     0,   573,     0,     0,     7,     0,   574,   575,     0,
     999,     0,     0,     0,     0,     0,     0,    80,   220,   221,
      30,   222,     7,  1059,     0,     0,   213,  1000,     0,     0,
       0,   209,   210,     0,     0,     0,     0,   214,     0,     0,
    1000,     0,     0,     0,   209,   210,     0,  1059,     0,   215,
       0,   216,     0,   211,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   212,  1000,     0,   211,     0,   209,   210,
       0,     0,     0,     0,     0,     0,   212,     0,   217,     0,
       0,   218,     0,     0,   219,     0,     0,     0,     0,     0,
     211,     0,     0,   213,     0,     0,     0,     0,     0,     0,
     212,     0,     0,     0,   214,     0,   213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   215,   214,   216,     0,
       0,     0,   220,   221,    30,   222,     7,     0,     0,   215,
     213,   216,     0,     0,   209,   210,     0,     0,     0,     0,
       0,   214,     0,     0,     0,   217,     0,     0,   218,   209,
     210,   219,     0,   215,     0,   216,   211,     0,   217,     0,
       0,   218,     0,     0,   219,     0,   212,     0,     0,     0,
       0,   211,     0,     0,     0,     0,     0,   209,   210,     0,
       0,   212,   217,     0,     0,   218,     0,     0,   219,   220,
     221,    30,   222,    80,     0,     0,   213,     0,     0,   211,
       0,     0,   220,   221,    30,   222,     7,   214,     0,   212,
       0,   213,     0,   209,   210,     0,     0,     0,     0,   215,
       0,   216,   214,     0,     0,     0,   220,   221,    30,   222,
      80,     0,     0,     0,   215,   211,   216,     0,     0,   320,
       0,     0,     0,     0,     0,   212,     0,     0,   217,     0,
     214,   218,     0,     0,   219,     0,     0,     0,     0,     0,
       0,   324,   215,   217,   216,     0,   218,   209,   210,   219,
       0,     0,     0,     0,     0,   213,   324,     0,     0,     0,
     209,   210,     0,     0,     0,     0,   214,     0,     0,   211,
       0,   217,   220,   221,    30,   222,     7,   219,   215,   212,
     216,     0,   211,     0,     0,     0,     0,   220,   221,    30,
     222,    80,   212,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   217,     0,   213,
     218,     0,     0,   219,     0,   220,   221,    30,   222,     7,
     214,     0,   320,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   215,   214,   216,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   215,     0,   216,     0,     0,
       0,   220,   221,    30,   222,     7,     0,     0,     0,     0,
       0,   217,     0,     0,   218,     0,     0,   219,     0,     0,
       0,     0,     0,     0,   217,     0,     0,     0,     0,     0,
     219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   220,   221,    30,   222,    80,
       0,     0,     0,     0,     0,     0,     0,     0,   220,   221,
      30,   222,    80
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     3,     4,     5,    68,   175,   413,     9,
     446,   446,    28,    13,   269,    15,   188,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    28,    27,    28,    29,
       7,    28,    32,    28,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    28,    44,    45,    46,     7,    48,    49,
      50,   617,    70,     9,    28,    54,    56,    57,    58,    59,
      60,   153,    42,    63,    15,    54,    66,    68,    68,    69,
      70,     0,   268,     9,   270,   360,   523,     4,    59,   103,
      15,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,   547,    95,    12,     9,    98,    99,
      70,   101,   102,   103,   104,   105,   106,    12,   108,   109,
      14,   111,   112,   113,   114,   115,   758,   117,    12,   171,
     120,   121,   122,   123,   124,   134,    12,   127,   128,   129,
     130,   131,   132,   151,   134,   152,   136,    14,   141,   139,
     140,   141,     9,   143,   144,    42,    63,    87,   148,   149,
     150,   151,    45,   153,    14,   155,    26,   123,   158,   414,
     160,   161,   162,    14,   214,   165,   175,   167,   168,   169,
     170,   171,   457,   173,   174,   175,   176,     9,   201,    14,
     180,   181,   182,   183,   201,   121,    24,    24,   188,   831,
     190,   191,    26,   193,   194,    14,    45,   153,   201,   208,
     201,   201,   201,   203,   204,   205,   206,   207,   208,   209,
      48,    48,   201,   213,   214,    68,   172,   217,   671,   504,
     201,   201,    10,   223,   201,   225,   226,   227,   675,   229,
     282,   201,   232,   233,   669,   235,   172,    14,   238,   239,
     240,   201,   242,   261,   244,   201,   246,   247,   248,   153,
     201,   251,   252,   253,   121,   195,   822,   257,   258,   259,
     172,   261,   262,   263,   436,   201,   201,   267,   268,   269,
     270,   271,   272,   273,   298,   325,   153,   327,   278,   279,
      49,   281,   282,   283,   201,   201,   286,   287,   288,   201,
     217,    68,   292,   293,   294,   295,   201,   201,   298,   584,
     300,   301,   302,   303,   201,   172,    60,   201,   201,   309,
     310,    58,   312,   313,   314,   201,   125,   317,   318,   319,
     320,   321,   322,   323,   201,   325,   326,   327,   328,    60,
     330,   201,   768,   333,   201,    26,   336,   337,   338,   774,
     172,   201,   342,   343,   344,   345,    63,   116,   201,   411,
     201,    96,   201,   353,   354,   355,   356,   110,    14,   359,
     360,   361,   362,   201,   201,    14,   201,   201,     8,   201,
      51,   395,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   201,   383,   384,   385,   386,   387,   440,   129,
     442,   391,   201,   110,    20,   395,    52,   851,   398,    14,
      37,   401,   402,    43,    86,     5,   406,    58,   408,    29,
      50,   411,   412,   413,   414,    20,   416,   417,   468,    68,
     420,    58,    59,   181,   201,   425,   117,     8,    56,   169,
     430,   431,   201,   433,   434,    45,   436,   437,   576,    45,
     440,   441,   442,   443,   536,   445,   446,   201,   201,   449,
     450,   107,   576,   453,   201,    14,   201,   457,   458,    85,
     460,   461,    43,   576,   526,   465,   466,   467,   468,    50,
     201,    57,    87,    29,   114,    95,   476,   477,    45,   143,
      85,   481,   482,   483,   201,   485,   167,    86,   179,   489,
     490,   491,   492,     0,   518,   495,   496,   497,   498,   499,
     500,   501,   502,   118,   504,   505,   506,   507,   508,   509,
      96,   535,   512,   513,   514,   515,   516,   517,   518,   201,
     974,    28,   522,   523,   124,   162,   526,   932,    87,   529,
     170,   531,   138,   114,   120,   535,   536,   537,   538,   121,
     540,   679,    49,   543,   544,   201,   546,   547,   548,   549,
     201,    97,   201,   193,   182,   679,    63,   183,   143,   118,
      17,   201,    41,   968,   201,   121,   679,    82,   119,   243,
      49,   138,   664,   188,    57,   201,   576,   577,   183,   579,
     580,   581,   582,   583,   584,   141,   201,    44,   515,   170,
     517,   201,   592,   593,   594,   201,   201,   597,   598,   599,
     600,   601,   201,   189,   604,   605,    64,    68,   608,   609,
     610,   611,   193,    96,   614,   201,   201,   617,   618,   201,
     201,   621,   101,   623,   217,   625,   626,   627,   104,   188,
     630,   631,   632,    41,   201,   635,   636,   637,    97,    29,
     640,    49,   201,   643,   644,   201,   646,   647,   322,    29,
      70,   651,   652,   653,   328,   201,   656,   657,   115,   333,
      64,   529,    26,   755,   664,   185,   666,   667,   618,   669,
     670,   671,   599,    99,    57,   675,   134,    41,   933,   679,
     680,   681,   682,   683,   199,    49,   201,   614,   688,   689,
     690,   691,   123,   101,   694,   203,   204,    81,   181,    63,
     243,   897,    55,    81,    88,   632,   706,   707,   382,   709,
      88,   711,   712,    96,   175,   715,    69,   717,   718,   719,
     720,   721,   201,   143,   110,   725,   726,   727,   728,   729,
     134,   121,   732,   901,   734,   735,   329,    89,   738,   739,
     201,   121,   201,   201,   201,   745,   746,   576,   748,   225,
      57,   141,   752,   753,   107,   755,    93,   757,   758,   759,
     956,   141,   116,   143,   101,   133,   766,   767,   768,   769,
     201,   201,   640,   773,   774,   201,   776,   253,   778,   729,
     177,   201,   782,   783,   108,   328,   786,   787,   140,    96,
     333,   123,   153,   201,   794,   795,   796,   201,   181,   799,
     800,   309,   802,   127,   804,   157,   806,   807,   161,   809,
     810,   201,   812,    70,   830,   201,   816,   201,   201,   819,
     820,   201,   822,   201,   824,   825,   333,   827,   830,   829,
     830,   831,    99,   201,   508,   121,   836,   201,   336,   382,
     125,   841,   121,   116,   328,   845,   846,   201,   201,   201,
     679,   851,   852,   853,    62,   855,   856,   857,   182,   166,
     860,   861,   862,   863,   201,   865,   866,   867,   930,   201,
     870,   871,   888,     4,   874,   875,   876,   201,   181,   133,
     880,    70,   139,    14,   884,   885,   888,   887,   888,   107,
     890,   888,   901,   888,   201,   488,    90,   897,   201,   107,
     121,   901,   902,   888,   243,   905,   906,   907,   908,   909,
     408,   911,   912,   913,   888,   201,   201,   917,   918,   919,
     513,   921,   201,   101,   924,   949,   926,   101,   201,   103,
     930,   931,   932,   933,   201,   935,   936,   937,   938,   939,
     940,   159,   799,   943,   201,   162,   620,   201,   948,   949,
     139,   951,   952,   279,   954,   955,   956,    76,   958,   959,
      80,   961,   288,    94,   964,   965,   966,   967,   968,   100,
     121,   971,   972,   125,   974,   975,   976,   461,   978,   187,
     201,   101,   466,   161,   201,   985,   986,   118,   988,   328,
     990,   122,   992,   201,   333,   995,   996,   997,   855,   856,
     131,  1001,  1002,  1003,   135,  1005,  1006,  1007,  1008,  1009,
     125,     2,   201,    80,  1014,  1015,  1016,   243,  1018,  1019,
     151,   614,  1022,  1023,   243,   174,   116,   201,  1028,  1029,
    1030,  1031,  1032,  1033,   101,     1,     2,    89,   121,  1039,
    1040,  1041,  1042,   382,  1044,  1045,    37,  1047,  1048,   201,
     201,    42,   243,  1053,  1054,   101,    36,   103,  1058,    73,
    1060,  1061,  1062,    29,   921,  1065,  1066,   243,    34,    60,
     201,    37,    38,   130,    93,   243,    42,   620,   168,   109,
     101,   201,   101,    57,    50,   209,   201,   214,   140,   213,
     268,   269,   270,    87,    60,   273,   322,   150,   226,   243,
     143,   143,   328,   322,    84,   157,    27,   333,   102,   328,
     130,   201,    33,    64,   333,   243,   623,    38,   201,   243,
     713,   714,    96,   630,   154,   601,   106,   254,   255,    95,
     356,   322,   310,   777,   201,   101,   314,   328,   159,    90,
     106,   132,   333,   736,   201,   153,   112,   113,   201,   201,
     141,    72,   328,    17,   322,   201,   382,   333,    61,   201,
     328,   243,   121,   382,   115,   333,   132,   166,   108,   143,
     243,    74,   860,    64,   243,   141,   201,   202,   322,   823,
      44,   201,   201,   134,   328,   176,   107,   127,   150,   333,
     119,   382,   113,   201,   838,   161,   320,   324,   322,    90,
     328,   167,   201,   194,   328,   333,   382,   334,   111,   333,
     176,    87,   339,   340,   382,   144,   120,   173,   342,   343,
     344,   345,   188,   911,   115,   913,   102,     0,   194,   353,
     354,   355,   360,   144,   166,   359,   414,   361,   382,   201,
     322,    14,   182,   134,   372,   201,   328,    57,    57,   322,
     201,   333,   896,   322,   382,   328,    14,    57,   382,   328,
     333,   201,   165,    87,   333,    34,   196,   174,   119,   201,
      39,   201,   201,   961,   500,   178,   153,   243,   102,   150,
     201,   620,   508,   410,    41,   189,    96,    96,   199,   508,
     201,   418,    61,   144,   201,  1009,    96,   201,   201,   175,
     382,   267,   268,   269,   270,    74,     4,   273,   150,   382,
     201,    90,   303,   382,    87,   153,    14,   508,    57,   795,
     796,   184,   313,   830,   201,   201,  1040,    19,   163,    87,
     201,  1005,   101,   143,   143,   301,   463,   303,   201,   101,
     508,   153,   111,   143,   310,   118,   312,   313,   314,  1023,
     201,   175,   153,    92,   111,   153,   322,    96,   115,   201,
     118,   199,   328,   201,   508,    57,   201,   333,    45,   153,
     963,   495,   496,    57,    66,    28,   504,   201,   130,   131,
     153,   888,   121,    57,   508,   130,   131,   863,  1062,   201,
      41,   164,   519,  1005,   620,   153,    94,   524,   525,   153,
     201,   620,   100,   201,    96,   583,   164,   153,    59,   178,
      63,  1023,    96,   153,    65,   188,   382,   201,   202,   153,
     118,    14,    96,   550,   122,   153,   508,   190,   201,   620,
     188,   105,   201,   131,   181,   508,  1048,   135,   201,   508,
     431,   196,    56,   201,   620,   199,   201,   201,   414,   201,
    1062,   153,   620,   151,   201,   201,   201,   175,   585,     3,
     587,   201,  1005,   590,     4,   431,     5,   201,   694,    13,
     436,   199,   123,   201,   153,   441,   620,   128,    22,   130,
    1023,    25,    57,   201,   450,   163,   610,    14,    28,    28,
      34,   482,   620,   190,    87,    39,   620,   199,    56,   201,
      34,   948,    57,   201,   201,    39,    81,    46,   181,    49,
     176,   162,    39,    40,   641,   642,   482,    61,   509,  1062,
     199,    96,   201,   201,   971,   118,    81,    61,   201,   181,
      74,   136,   181,    77,    61,    78,   165,   142,   620,   185,
      74,    96,   508,   509,    71,   185,   985,   620,    91,   201,
     201,   620,   201,     3,   190,   201,   199,   101,   201,   194,
     153,   201,  1001,    13,   197,   201,   201,   111,   201,   194,
    1042,   164,    22,  1045,   101,    25,   201,   111,   197,   199,
     176,   201,   201,   153,    34,   112,     3,   153,     5,    39,
     153,   143,   136,   137,   185,   188,   720,   124,   142,   126,
     174,   148,   143,   121,   153,   143,   121,   143,   201,   168,
     142,    61,   173,    96,   159,    83,   153,   583,   185,   121,
      98,   165,   153,   153,    74,    73,   153,    77,    52,   156,
     143,   143,   159,   149,   178,   143,   180,   143,   171,   121,
     184,   185,   159,   148,   178,   143,     3,   174,   158,   143,
     777,   101,   143,   143,   620,    42,    13,   201,    79,    73,
     153,   111,   148,   148,   153,    22,  1005,   201,    25,   153,
     197,   198,   199,   200,   201,    93,    45,    34,   143,   857,
     181,   143,    39,    16,  1023,   651,   136,   137,   815,    26,
      26,   657,   142,   153,   153,   148,   823,   153,   143,   143,
      16,    16,   143,    73,    61,    37,   153,   143,   143,    41,
     837,   838,   143,    80,   143,   165,    19,    74,    79,   897,
      77,   848,   103,  1062,    23,    57,    66,    59,   178,   830,
     180,     3,   859,    65,   184,   185,   148,   864,    69,    96,
     806,    13,   604,   725,   101,   867,   926,   931,   964,   715,
      22,   201,  1062,    25,   111,   933,   605,   866,   338,   725,
     599,   800,    34,   707,   598,   143,   522,    39,   519,   896,
      34,    28,   140,    28,    28,    28,   546,   845,   956,  1005,
     137,   443,   846,   180,   112,   142,  1005,   181,   518,    61,
     830,   123,   827,   739,   516,   208,   128,  1023,   130,   825,
     208,   657,    74,   312,  1023,    77,   689,   783,   165,   691,
     782,   976,  1016,   653,  1005,   273,   477,   193,   514,   108,
      58,   178,   482,   180,   769,   593,   653,    -1,   185,  1005,
     162,    -1,  1023,    -1,    -1,    -1,  1062,  1005,    -1,   111,
     806,    -1,    -1,  1062,   201,    -1,    -1,  1023,    -1,    -1,
     816,    -1,    -1,     3,    -1,  1023,    -1,    -1,   985,    -1,
      -1,  1005,    -1,    13,    -1,   137,    -1,    -1,    -1,   201,
     142,  1062,    22,    -1,  1001,    25,    -1,  1005,  1005,  1023,
      -1,  1005,    -1,    -1,    34,    -1,  1062,    -1,    -1,    39,
      -1,   857,    -1,   165,  1062,  1023,  1023,     3,    -1,  1023,
      -1,   867,  1030,    -1,    -1,    -1,   178,    13,   180,    -1,
      -1,    61,    -1,   185,   905,    -1,    22,    -1,  1062,    25,
      -1,  1048,    -1,  1005,    74,    -1,    -1,    77,    34,   201,
      -1,   897,  1005,    39,  1062,  1062,  1005,    -1,  1062,   905,
      -1,  1023,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
    1023,   101,    -1,    -1,  1023,    61,    -1,    -1,    -1,    -1,
     926,   111,    -1,     3,    -1,    -1,    -1,   933,    74,    -1,
      -1,    77,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
    1062,    -1,    22,    -1,    -1,    25,    -1,   137,    -1,  1062,
     956,    -1,   142,  1062,    34,   101,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,   111,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    -1,    13,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    22,    -1,   178,    25,
     180,   137,    -1,    -1,    74,   185,   142,    77,    34,  1005,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    -1,    -1,    -1,    -1,    -1,  1023,    -1,   165,
      -1,   101,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,   111,   178,    -1,   180,    -1,    -1,    -1,    74,   185,
      -1,    77,    -1,     6,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   201,  1062,   137,    21,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    47,   165,    -1,    13,    -1,    -1,
      53,    -1,     6,    -1,    -1,    -1,    22,    11,   178,    25,
     180,   137,    39,    40,    67,   185,   142,    21,    34,    18,
      -1,    -1,    75,    39,    -1,    -1,    30,    31,    32,    -1,
      -1,   201,    -1,    -1,    61,    -1,    35,    90,    -1,   165,
      39,    40,    95,    47,    71,    61,    -1,    -1,    -1,    53,
      -1,   104,   178,    -1,   180,    -1,   109,    -1,    74,   185,
     113,    77,    61,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    71,    -1,   101,   201,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,   112,    90,    -1,    -1,    -1,
      -1,    95,   145,   146,   147,   111,    -1,   124,    -1,   126,
     104,   154,   101,    -1,    -1,   109,    -1,   160,    -1,   113,
      -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,    -1,    18,    -1,   124,   153,   126,   132,   156,
      -1,    -1,   159,   186,    -1,    -1,    -1,   136,   191,   192,
      35,   145,   146,   147,    39,    40,    -1,   174,   201,   165,
     154,    -1,    -1,    -1,   153,    -1,   160,   156,    -1,    -1,
     159,    -1,   178,    -1,   180,    -1,    61,    -1,    -1,    -1,
     197,   198,   199,   200,   201,    -1,    71,    -1,    -1,    -1,
      -1,    -1,   186,    -1,    -1,   201,    -1,   191,   192,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,   201,   197,   198,
     199,   200,   201,    18,    -1,    -1,   101,    35,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    -1,   112,    -1,    -1,
      35,    -1,    -1,    -1,    39,    40,    -1,    18,    -1,   124,
      -1,   126,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    35,    -1,    61,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,   153,    -1,
      -1,   156,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,   112,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   112,   126,    -1,
      -1,    -1,   197,   198,   199,   200,   201,    -1,    -1,   124,
     101,   126,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,    -1,   153,    -1,    -1,   156,    39,
      40,   159,    -1,   124,    -1,   126,    61,    -1,   153,    -1,
      -1,   156,    -1,    -1,   159,    -1,    71,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      -1,    71,   153,    -1,    -1,   156,    -1,    -1,   159,   197,
     198,   199,   200,   201,    -1,    -1,   101,    -1,    -1,    61,
      -1,    -1,   197,   198,   199,   200,   201,   112,    -1,    71,
      -1,   101,    -1,    39,    40,    -1,    -1,    -1,    -1,   124,
      -1,   126,   112,    -1,    -1,    -1,   197,   198,   199,   200,
     201,    -1,    -1,    -1,   124,    61,   126,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,   153,    -1,
     112,   156,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,   166,   124,   153,   126,    -1,   156,    39,    40,   159,
      -1,    -1,    -1,    -1,    -1,   101,   166,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,   112,    -1,    -1,    61,
      -1,   153,   197,   198,   199,   200,   201,   159,   124,    71,
     126,    -1,    61,    -1,    -1,    -1,    -1,   197,   198,   199,
     200,   201,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,   101,
     156,    -1,    -1,   159,    -1,   197,   198,   199,   200,   201,
     112,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,   112,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,   126,    -1,    -1,
      -1,   197,   198,   199,   200,   201,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,   198,   199,   200,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   198,
     199,   200,   201
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    14,    87,   118,   153,   164,   188,   201,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   253,   258,   259,
     260,   261,   277,   278,   280,   281,   282,   290,   339,    82,
     199,   254,   255,   256,   339,   348,   350,   144,   339,   350,
      37,    58,    59,   162,   309,   339,   211,   212,   253,   339,
      37,    41,    57,    65,   128,   130,   267,   309,   339,   352,
     123,     0,   339,    10,   339,   339,    68,   175,   213,   214,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     201,   205,   209,   211,   253,   258,   259,   260,   261,   277,
     278,   280,   281,   290,   254,   121,   339,   181,   255,   348,
     339,   153,   311,   339,   350,   348,   181,   314,   339,   349,
     125,   339,   347,   347,   350,   123,   339,   309,   143,   143,
     211,   253,   275,   348,   119,   185,    54,   268,   339,   123,
     267,   352,    59,   339,   350,   201,   205,    70,   139,   257,
     339,   177,    15,   248,   339,    20,    85,   183,   215,   339,
     214,   339,   254,   153,   240,   348,   351,   339,   311,   314,
     348,    90,   349,   339,   174,   347,   275,   339,   348,   353,
     130,   131,   270,   271,   272,   339,   347,   339,    24,    48,
     276,   339,   267,   339,    36,    84,   106,    76,    58,   339,
     268,   339,   125,   339,   346,   339,   350,     4,    14,    94,
     100,   118,   122,   135,   151,   272,   291,   292,   339,    39,
      40,    61,    71,   101,   112,   124,   126,   153,   156,   159,
     197,   198,   200,   217,   244,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   332,   333,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   348,   351,
     354,   356,   257,   350,    73,    12,   245,   246,   339,   248,
     213,   339,   215,   339,   339,   210,   143,   202,   121,    90,
     153,   312,   313,   339,   351,   339,    64,   134,   279,   339,
     185,   273,   339,   273,   339,   339,   271,   272,   350,    87,
     102,   175,   274,   339,   276,   268,    78,    91,   353,   101,
     346,   339,   350,    45,   176,    56,    56,    49,   116,   339,
     344,   176,   344,   168,   344,   339,   339,   272,   291,   292,
     101,   316,   339,   316,   166,   315,   330,   331,   339,   165,
     153,   212,   244,   339,   153,   190,   216,   235,   339,    57,
      96,   314,     3,    13,    22,    25,    34,    39,    61,    74,
      77,   101,   111,   136,   137,   142,   165,   178,   180,   185,
     339,   355,   356,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   316,   317,   319,   322,   323,   325,   333,   335,
     336,   338,   339,   340,   342,   343,   348,   356,   339,   339,
     339,   153,   174,   339,   339,   314,   250,   251,   315,   315,
     339,   246,   339,   339,   339,   143,   348,   240,   312,   240,
      42,   233,   234,   339,   121,   339,   313,   348,   185,   339,
     279,    62,   107,   187,   339,   273,    55,    69,   107,   161,
     279,    45,   339,   274,   339,   339,    58,   311,   174,   339,
       9,   153,   172,   262,   263,   264,   339,   350,   148,   344,
     339,   351,   294,   348,   350,   351,   101,   339,   316,   315,
     330,   339,    81,    88,   339,   330,   339,   330,   331,   244,
       8,    43,    50,   114,   170,   193,   334,   339,   143,   143,
     315,   236,   241,   233,   339,   235,   315,   315,   121,   316,
     316,   316,   316,   101,   159,   136,   142,   316,   316,   316,
     339,   342,   316,   101,   339,   355,   356,   316,   339,   184,
     101,    70,   143,   327,   339,   153,   283,   311,   339,   121,
     120,   189,   252,   339,    92,   121,   233,   143,   315,   248,
     339,   234,   312,   315,   350,   353,   181,   273,   293,   294,
     273,   119,   144,   266,   339,   121,   265,   339,   262,   264,
     153,   339,     6,    11,    21,    30,    31,    32,    47,    53,
      67,    75,    90,    95,   104,   109,   113,   132,   145,   146,
     147,   154,   160,   186,   191,   192,   339,   358,   359,   360,
     361,   362,   363,   168,   339,   105,    81,    88,   315,   173,
     190,   339,   334,   181,    29,   121,   141,   242,   339,   153,
     348,   350,   354,    60,   231,   339,   244,   159,   316,   316,
      96,   342,   173,   339,   153,   350,    99,   328,   339,   244,
     339,   327,   212,   339,    45,   286,   339,    52,   107,   212,
     339,   283,   311,   250,    86,   249,   339,   252,   315,   315,
     248,   185,    12,   247,   339,    83,   311,   210,    17,    44,
     115,   163,   308,   339,   364,   365,   366,   121,    27,    33,
      38,    72,   107,   113,   181,   339,   266,   339,   263,   339,
     265,   339,   339,   288,   289,   315,   109,   154,    98,   339,
     360,   361,   362,   363,    41,    49,   101,   295,   296,   297,
     300,   339,   339,   339,   153,   339,   339,   351,   315,   315,
      81,   315,   358,   108,   127,   182,   243,   339,   339,   242,
     212,   236,   314,   153,    73,   194,   218,   219,   339,   231,
      96,   316,   212,   244,   153,     7,   329,   339,   328,   143,
     339,   143,   171,   339,   286,   339,   153,   284,   285,   339,
      52,   339,    17,    44,   339,   249,   339,   339,   247,   315,
     315,   339,   247,   339,   149,   181,    14,   310,   339,   348,
     357,    26,    41,    49,    63,   339,   308,   366,   143,   121,
     339,   293,   210,   264,   339,   339,   143,   121,   252,   148,
     159,    26,   299,   339,   296,   339,   300,   342,    81,   143,
     143,   158,   141,   339,   243,   143,   143,    93,   101,   237,
     339,   244,   244,   220,   221,   222,   339,   348,   339,   219,
     339,   339,   316,   143,   143,    42,   153,   222,   339,   329,
     339,   339,   328,   153,   287,   339,   244,   121,   339,   285,
      79,   210,    26,   117,   179,   339,   310,   153,   153,   148,
     148,   262,   365,   339,   150,   269,   339,   288,   153,    63,
     298,   302,   339,   299,   143,   314,   314,    73,    93,    45,
     238,   339,   237,   143,   196,   232,   339,   121,   339,   181,
     221,   348,   315,   223,   230,   348,   329,   288,   152,   339,
     287,   143,   284,   208,   209,   253,   282,   290,   339,   345,
     310,    16,    26,    26,   315,   288,   153,   153,   129,   169,
     270,   339,   269,   315,   148,   110,   301,   339,   302,   339,
     339,   238,   339,   238,   351,   315,   150,   239,   339,   238,
     339,   314,   315,   339,   232,   220,   153,   143,   143,   133,
     224,   339,   143,    87,   195,   209,   277,   278,   280,   281,
     290,    16,    16,   143,   143,   288,   240,   339,   143,   350,
     339,   301,   339,   339,   239,   239,   153,   339,   239,   339,
     339,   238,   223,    73,   248,   339,   224,   234,   312,    80,
     101,   339,   367,   143,   143,   367,   311,   240,   239,   143,
     244,    89,   140,   157,   225,   226,   339,   339,   234,    80,
     367,   339,   301,    45,   138,   303,   304,   339,   143,    18,
      35,   136,   227,   229,   315,   339,   226,   339,    87,   102,
       5,    28,    46,   101,   103,   306,   339,   339,   304,   339,
      19,    79,   227,   339,   339,   339,    19,    66,   227,   229,
     316,   317,   322,   325,   339,    64,    90,   115,   134,   305,
     339,   305,   103,    97,   307,   339,   339,   306,    96,   107,
     159,    23,   339,   305,   307,    51,   167,   339,   307,    18,
     228,   229,   339,    66,   339,   228,   229
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   203,   204,   205,   205,   205,   205,   206,   206,   206,
     206,   206,   206,   207,   207,   207,   207,   208,   208,   208,
     208,   209,   209,   209,   210,   210,   211,   211,   211,   211,
     212,   213,   213,   214,   214,   214,   215,   215,   215,   215,
     215,   216,   216,   217,   218,   218,   219,   219,   219,   220,
     220,   221,   221,   221,   222,   223,   224,   224,   224,   224,
     225,   225,   225,   226,   226,   226,   226,   226,   227,   227,
     227,   227,   228,   228,   228,   228,   229,   229,   229,   229,
     229,   230,   230,   231,   231,   231,   231,   232,   232,   232,
     232,   233,   233,   234,   234,   234,   235,   235,   235,   236,
     236,   236,   236,   237,   237,   237,   237,   237,   238,   238,
     238,   238,   239,   239,   239,   239,   240,   240,   241,   241,
     242,   242,   242,   242,   242,   243,   243,   243,   243,   243,
     243,   243,   244,   244,   245,   245,   246,   246,   246,   246,
     246,   247,   247,   247,   247,   248,   248,   248,   248,   249,
     249,   249,   249,   249,   250,   250,   251,   252,   252,   252,
     252,   252,   253,   253,   253,   253,   253,   254,   254,   255,
     255,   255,   256,   257,   257,   257,   257,   257,   258,   258,
     258,   258,   259,   259,   259,   260,   260,   260,   261,   261,
     261,   261,   262,   262,   262,   262,   263,   263,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   265,
     265,   265,   265,   266,   266,   266,   266,   266,   267,   267,
     267,   267,   267,   267,   268,   268,   268,   268,   268,   269,
     269,   269,   269,   269,   270,   270,   270,   271,   271,   271,
     271,   271,   272,   272,   272,   272,   272,   272,   273,   273,
     273,   273,   274,   274,   274,   274,   274,   275,   276,   276,
     276,   276,   277,   277,   277,   278,   278,   278,   279,   279,
     279,   279,   279,   280,   280,   280,   281,   281,   281,   282,
     283,   283,   283,   283,   283,   284,   284,   285,   285,   285,
     286,   286,   286,   286,   286,   287,   287,   287,   287,   288,
     288,   289,   290,   290,   290,   290,   291,   291,   291,   291,
     291,   291,   291,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   293,   293,   294,   295,   295,   296,   296,   297,
     298,   298,   299,   299,   299,   299,   300,   300,   300,   300,
     300,   301,   301,   301,   302,   302,   302,   302,   303,   303,
     304,   304,   304,   304,   304,   304,   304,   305,   305,   305,
     305,   305,   305,   305,   306,   306,   306,   306,   306,   307,
     307,   307,   307,   307,   308,   308,   308,   308,   308,   309,
     309,   309,   309,   310,   310,   310,   310,   310,   310,   311,
     311,   311,   311,   312,   312,   313,   313,   313,   313,   314,
     314,   315,   315,   315,   315,   315,   315,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   317,
     317,   317,   318,   318,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   320,   320,   320,   320,   321,   321,   322,
     322,   322,   322,   322,   323,   323,   323,   323,   323,   323,
     324,   324,   325,   325,   325,   326,   326,   327,   327,   327,
     327,   328,   328,   328,   328,   329,   329,   329,   329,   329,
     330,   330,   330,   330,   331,   331,   331,   332,   332,   332,
     332,   332,   332,   333,   333,   333,   334,   334,   334,   334,
     334,   334,   334,   334,   335,   335,   335,   336,   336,   336,
     337,   337,   337,   338,   338,   338,   339,   339,   340,   340,
     340,   340,   341,   341,   342,   342,   342,   343,   343,   343,
     344,   344,   344,   344,   345,   345,   345,   345,   346,   346,
     346,   346,   347,   347,   347,   347,   348,   348,   348,   349,
     349,   349,   350,   351,   351,   352,   352,   352,   352,   352,
     352,   353,   354,   355,   355,   355,   355,   355,   355,   355,
     355,   356,   356,   356,   356,   357,   358,   358,   359,   359,
     360,   360,   360,   361,   361,   361,   361,   361,   361,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   364,   364,   365,
     365,   366,   366,   366,   366,   366,   366,   367,   367,   367,
     367,   367
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
       2,     2,     1,     0,     2,     2,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     1,
       0,     2,     2,     1,     1,     0,     2,     2,     3,     3,
       3,     0,     2,     2,     3,     3,     0,     2,     2,     2,
       2,     0,     2,     2,     1,     1,     0,     3,     3,     3,
       2,     2,     3,     3,     3,     3,     2,     2,     1,     0,
       2,     2,     1,     1,     1,     2,     2,     1,     1,     1,
       2,     2,     4,     2,     2,     6,     2,     2,     1,     1,
       0,     2,     2,     4,     2,     2,     5,     2,     2,     7,
       2,     3,     3,     2,     2,     1,     3,     3,     2,     2,
       5,     7,     0,     2,     2,     4,     0,     2,     2,     1,
       3,     2,     9,     8,     2,     2,     3,     5,     3,     3,
       1,     2,     2,     3,     1,     2,     2,     1,     2,     2,
       2,     2,     1,     3,     3,     3,     0,     1,     2,     1,
       2,     0,     5,     0,     2,     2,     2,     2,     1,     2,
       2,     5,     2,     2,     2,     0,     2,     2,     1,     0,
       2,     2,     2,     3,     3,     2,     2,     2,     2,     1,
       1,     2,     2,     2,     2,     3,     0,     2,     2,     2,
       2,     0,     2,     2,     2,     2,     2,     2,     2,     1,
       0,     2,     2,     3,     4,     4,     0,     2,     2,     3,
       0,     2,     2,     1,     3,     3,     5,     2,     2,     1,
       0,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     6,
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
       2,     2,     1,     1,     3,     1,     1,     1,     0,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     0,     2,     2,     1,     1,     1,     1,     1,
       4,     2,     2,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     0,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     2,     2,     1,     0,     1,
       3,     6,     5,     6,     7,     2,     2,     1,     2,     0,
       2,     2
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
#line 447 "bison.y"
           {
	 
}
#line 2712 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATLITERAL: /* FLOATLITERAL  */
#line 447 "bison.y"
           {
	 
}
#line 2720 "bison_parser.cpp"
        break;

    case YYSYMBOL_IDENTIFIER: /* IDENTIFIER  */
#line 443 "bison.y"
           {
	free( (((*yyvaluep).sval)) );
}
#line 2728 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRINGLITERAL: /* STRINGLITERAL  */
#line 443 "bison.y"
           {
	free( (((*yyvaluep).sval)) );
}
#line 2736 "bison_parser.cpp"
        break;

    case YYSYMBOL_COMMENTLITERAL: /* COMMENTLITERAL  */
#line 443 "bison.y"
           {
	free( (((*yyvaluep).sval)) );
}
#line 2744 "bison_parser.cpp"
        break;

    case YYSYMBOL_program: /* program  */
#line 451 "bison.y"
            { if(((*yyvaluep).program_t)!=NULL)((*yyvaluep).program_t)->deep_delete(); }
#line 2750 "bison_parser.cpp"
        break;

    case YYSYMBOL_stmtlist: /* stmtlist  */
#line 451 "bison.y"
            { if(((*yyvaluep).stmtlist_t)!=NULL)((*yyvaluep).stmtlist_t)->deep_delete(); }
#line 2756 "bison_parser.cpp"
        break;

    case YYSYMBOL_stmt: /* stmt  */
#line 451 "bison.y"
            { if(((*yyvaluep).stmt_t)!=NULL)((*yyvaluep).stmt_t)->deep_delete(); }
#line 2762 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_stmt: /* create_stmt  */
#line 451 "bison.y"
            { if(((*yyvaluep).create_stmt_t)!=NULL)((*yyvaluep).create_stmt_t)->deep_delete(); }
#line 2768 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_stmt: /* drop_stmt  */
#line 451 "bison.y"
            { if(((*yyvaluep).drop_stmt_t)!=NULL)((*yyvaluep).drop_stmt_t)->deep_delete(); }
#line 2774 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_stmt: /* alter_stmt  */
#line 451 "bison.y"
            { if(((*yyvaluep).alter_stmt_t)!=NULL)((*yyvaluep).alter_stmt_t)->deep_delete(); }
#line 2780 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_stmt: /* select_stmt  */
#line 451 "bison.y"
            { if(((*yyvaluep).select_stmt_t)!=NULL)((*yyvaluep).select_stmt_t)->deep_delete(); }
#line 2786 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_parens: /* select_with_parens  */
#line 451 "bison.y"
            { if(((*yyvaluep).select_with_parens_t)!=NULL)((*yyvaluep).select_with_parens_t)->deep_delete(); }
#line 2792 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_parens: /* select_no_parens  */
#line 451 "bison.y"
            { if(((*yyvaluep).select_no_parens_t)!=NULL)((*yyvaluep).select_no_parens_t)->deep_delete(); }
#line 2798 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause_list: /* select_clause_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).select_clause_list_t)!=NULL)((*yyvaluep).select_clause_list_t)->deep_delete(); }
#line 2804 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).select_clause_t)!=NULL)((*yyvaluep).select_clause_t)->deep_delete(); }
#line 2810 "bison_parser.cpp"
        break;

    case YYSYMBOL_combine_clause: /* combine_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).combine_clause_t)!=NULL)((*yyvaluep).combine_clause_t)->deep_delete(); }
#line 2816 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_from_clause_t)!=NULL)((*yyvaluep).opt_from_clause_t)->deep_delete(); }
#line 2822 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_target: /* select_target  */
#line 451 "bison.y"
            { if(((*yyvaluep).select_target_t)!=NULL)((*yyvaluep).select_target_t)->deep_delete(); }
#line 2828 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_window_clause: /* opt_window_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_window_clause_t)!=NULL)((*yyvaluep).opt_window_clause_t)->deep_delete(); }
#line 2834 "bison_parser.cpp"
        break;

    case YYSYMBOL_window_clause: /* window_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).window_clause_t)!=NULL)((*yyvaluep).window_clause_t)->deep_delete(); }
#line 2840 "bison_parser.cpp"
        break;

    case YYSYMBOL_window_def_list: /* window_def_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).window_def_list_t)!=NULL)((*yyvaluep).window_def_list_t)->deep_delete(); }
#line 2846 "bison_parser.cpp"
        break;

    case YYSYMBOL_window_def: /* window_def  */
#line 451 "bison.y"
            { if(((*yyvaluep).window_def_t)!=NULL)((*yyvaluep).window_def_t)->deep_delete(); }
#line 2852 "bison_parser.cpp"
        break;

    case YYSYMBOL_window_name: /* window_name  */
#line 451 "bison.y"
            { if(((*yyvaluep).window_name_t)!=NULL)((*yyvaluep).window_name_t)->deep_delete(); }
#line 2858 "bison_parser.cpp"
        break;

    case YYSYMBOL_window: /* window  */
#line 451 "bison.y"
            { if(((*yyvaluep).window_t)!=NULL)((*yyvaluep).window_t)->deep_delete(); }
#line 2864 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_partition: /* opt_partition  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_partition_t)!=NULL)((*yyvaluep).opt_partition_t)->deep_delete(); }
#line 2870 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_clause: /* opt_frame_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_frame_clause_t)!=NULL)((*yyvaluep).opt_frame_clause_t)->deep_delete(); }
#line 2876 "bison_parser.cpp"
        break;

    case YYSYMBOL_range_or_rows: /* range_or_rows  */
#line 451 "bison.y"
            { if(((*yyvaluep).range_or_rows_t)!=NULL)((*yyvaluep).range_or_rows_t)->deep_delete(); }
#line 2882 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound_start: /* frame_bound_start  */
#line 451 "bison.y"
            { if(((*yyvaluep).frame_bound_start_t)!=NULL)((*yyvaluep).frame_bound_start_t)->deep_delete(); }
#line 2888 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound_end: /* frame_bound_end  */
#line 451 "bison.y"
            { if(((*yyvaluep).frame_bound_end_t)!=NULL)((*yyvaluep).frame_bound_end_t)->deep_delete(); }
#line 2894 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 451 "bison.y"
            { if(((*yyvaluep).frame_bound_t)!=NULL)((*yyvaluep).frame_bound_t)->deep_delete(); }
#line 2900 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exist_window_name: /* opt_exist_window_name  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_exist_window_name_t)!=NULL)((*yyvaluep).opt_exist_window_name_t)->deep_delete(); }
#line 2906 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group_clause: /* opt_group_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_group_clause_t)!=NULL)((*yyvaluep).opt_group_clause_t)->deep_delete(); }
#line 2912 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having_clause: /* opt_having_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_having_clause_t)!=NULL)((*yyvaluep).opt_having_clause_t)->deep_delete(); }
#line 2918 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where_clause: /* opt_where_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_where_clause_t)!=NULL)((*yyvaluep).opt_where_clause_t)->deep_delete(); }
#line 2924 "bison_parser.cpp"
        break;

    case YYSYMBOL_where_clause: /* where_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).where_clause_t)!=NULL)((*yyvaluep).where_clause_t)->deep_delete(); }
#line 2930 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).from_clause_t)!=NULL)((*yyvaluep).from_clause_t)->deep_delete(); }
#line 2936 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 451 "bison.y"
            { if(((*yyvaluep).table_ref_t)!=NULL)((*yyvaluep).table_ref_t)->deep_delete(); }
#line 2942 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index: /* opt_index  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_index_t)!=NULL)((*yyvaluep).opt_index_t)->deep_delete(); }
#line 2948 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_on: /* opt_on  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_on_t)!=NULL)((*yyvaluep).opt_on_t)->deep_delete(); }
#line 2954 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_using: /* opt_using  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_using_t)!=NULL)((*yyvaluep).opt_using_t)->deep_delete(); }
#line 2960 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name_list: /* column_name_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).column_name_list_t)!=NULL)((*yyvaluep).column_name_list_t)->deep_delete(); }
#line 2966 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_prefix: /* opt_table_prefix  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_table_prefix_t)!=NULL)((*yyvaluep).opt_table_prefix_t)->deep_delete(); }
#line 2972 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_op: /* join_op  */
#line 451 "bison.y"
            { if(((*yyvaluep).join_op_t)!=NULL)((*yyvaluep).join_op_t)->deep_delete(); }
#line 2978 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_join_type_t)!=NULL)((*yyvaluep).opt_join_type_t)->deep_delete(); }
#line 2984 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).expr_list_t)!=NULL)((*yyvaluep).expr_list_t)->deep_delete(); }
#line 2990 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit_clause: /* opt_limit_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_limit_clause_t)!=NULL)((*yyvaluep).opt_limit_clause_t)->deep_delete(); }
#line 2996 "bison_parser.cpp"
        break;

    case YYSYMBOL_limit_clause: /* limit_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).limit_clause_t)!=NULL)((*yyvaluep).limit_clause_t)->deep_delete(); }
#line 3002 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit_row_count: /* opt_limit_row_count  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_limit_row_count_t)!=NULL)((*yyvaluep).opt_limit_row_count_t)->deep_delete(); }
#line 3008 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_clause: /* opt_order_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_order_clause_t)!=NULL)((*yyvaluep).opt_order_clause_t)->deep_delete(); }
#line 3014 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_nulls: /* opt_order_nulls  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_order_nulls_t)!=NULL)((*yyvaluep).opt_order_nulls_t)->deep_delete(); }
#line 3020 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_item_list: /* order_item_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).order_item_list_t)!=NULL)((*yyvaluep).order_item_list_t)->deep_delete(); }
#line 3026 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_item: /* order_item  */
#line 451 "bison.y"
            { if(((*yyvaluep).order_item_t)!=NULL)((*yyvaluep).order_item_t)->deep_delete(); }
#line 3032 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_behavior: /* opt_order_behavior  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_order_behavior_t)!=NULL)((*yyvaluep).opt_order_behavior_t)->deep_delete(); }
#line 3038 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_with_clause_t)!=NULL)((*yyvaluep).opt_with_clause_t)->deep_delete(); }
#line 3044 "bison_parser.cpp"
        break;

    case YYSYMBOL_cte_table_list: /* cte_table_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).cte_table_list_t)!=NULL)((*yyvaluep).cte_table_list_t)->deep_delete(); }
#line 3050 "bison_parser.cpp"
        break;

    case YYSYMBOL_cte_table: /* cte_table  */
#line 451 "bison.y"
            { if(((*yyvaluep).cte_table_t)!=NULL)((*yyvaluep).cte_table_t)->deep_delete(); }
#line 3056 "bison_parser.cpp"
        break;

    case YYSYMBOL_cte_table_name: /* cte_table_name  */
#line 451 "bison.y"
            { if(((*yyvaluep).cte_table_name_t)!=NULL)((*yyvaluep).cte_table_name_t)->deep_delete(); }
#line 3062 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all_or_distinct: /* opt_all_or_distinct  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_all_or_distinct_t)!=NULL)((*yyvaluep).opt_all_or_distinct_t)->deep_delete(); }
#line 3068 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_table_stmt: /* create_table_stmt  */
#line 451 "bison.y"
            { if(((*yyvaluep).create_table_stmt_t)!=NULL)((*yyvaluep).create_table_stmt_t)->deep_delete(); }
#line 3074 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_index_stmt: /* create_index_stmt  */
#line 451 "bison.y"
            { if(((*yyvaluep).create_index_stmt_t)!=NULL)((*yyvaluep).create_index_stmt_t)->deep_delete(); }
#line 3080 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_trigger_stmt: /* create_trigger_stmt  */
#line 451 "bison.y"
            { if(((*yyvaluep).create_trigger_stmt_t)!=NULL)((*yyvaluep).create_trigger_stmt_t)->deep_delete(); }
#line 3086 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_view_stmt: /* create_view_stmt  */
#line 451 "bison.y"
            { if(((*yyvaluep).create_view_stmt_t)!=NULL)((*yyvaluep).create_view_stmt_t)->deep_delete(); }
#line 3092 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_option_list: /* opt_table_option_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_table_option_list_t)!=NULL)((*yyvaluep).opt_table_option_list_t)->deep_delete(); }
#line 3098 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_option_list: /* table_option_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).table_option_list_t)!=NULL)((*yyvaluep).table_option_list_t)->deep_delete(); }
#line 3104 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_option: /* table_option  */
#line 451 "bison.y"
            { if(((*yyvaluep).table_option_t)!=NULL)((*yyvaluep).table_option_t)->deep_delete(); }
#line 3110 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_op_comma: /* opt_op_comma  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_op_comma_t)!=NULL)((*yyvaluep).opt_op_comma_t)->deep_delete(); }
#line 3116 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_ignore_or_replace: /* opt_ignore_or_replace  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_ignore_or_replace_t)!=NULL)((*yyvaluep).opt_ignore_or_replace_t)->deep_delete(); }
#line 3122 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_view_algorithm: /* opt_view_algorithm  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_view_algorithm_t)!=NULL)((*yyvaluep).opt_view_algorithm_t)->deep_delete(); }
#line 3128 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_sql_security: /* opt_sql_security  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_sql_security_t)!=NULL)((*yyvaluep).opt_sql_security_t)->deep_delete(); }
#line 3134 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_option: /* opt_index_option  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_index_option_t)!=NULL)((*yyvaluep).opt_index_option_t)->deep_delete(); }
#line 3140 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_extra_option: /* opt_extra_option  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_extra_option_t)!=NULL)((*yyvaluep).opt_extra_option_t)->deep_delete(); }
#line 3146 "bison_parser.cpp"
        break;

    case YYSYMBOL_index_algorithm_option: /* index_algorithm_option  */
#line 451 "bison.y"
            { if(((*yyvaluep).index_algorithm_option_t)!=NULL)((*yyvaluep).index_algorithm_option_t)->deep_delete(); }
#line 3152 "bison_parser.cpp"
        break;

    case YYSYMBOL_lock_option: /* lock_option  */
#line 451 "bison.y"
            { if(((*yyvaluep).lock_option_t)!=NULL)((*yyvaluep).lock_option_t)->deep_delete(); }
#line 3158 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_op_equal: /* opt_op_equal  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_op_equal_t)!=NULL)((*yyvaluep).opt_op_equal_t)->deep_delete(); }
#line 3164 "bison_parser.cpp"
        break;

    case YYSYMBOL_trigger_events: /* trigger_events  */
#line 451 "bison.y"
            { if(((*yyvaluep).trigger_events_t)!=NULL)((*yyvaluep).trigger_events_t)->deep_delete(); }
#line 3170 "bison_parser.cpp"
        break;

    case YYSYMBOL_trigger_name: /* trigger_name  */
#line 451 "bison.y"
            { if(((*yyvaluep).trigger_name_t)!=NULL)((*yyvaluep).trigger_name_t)->deep_delete(); }
#line 3176 "bison_parser.cpp"
        break;

    case YYSYMBOL_trigger_action_time: /* trigger_action_time  */
#line 451 "bison.y"
            { if(((*yyvaluep).trigger_action_time_t)!=NULL)((*yyvaluep).trigger_action_time_t)->deep_delete(); }
#line 3182 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_index_stmt: /* drop_index_stmt  */
#line 451 "bison.y"
            { if(((*yyvaluep).drop_index_stmt_t)!=NULL)((*yyvaluep).drop_index_stmt_t)->deep_delete(); }
#line 3188 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_table_stmt: /* drop_table_stmt  */
#line 451 "bison.y"
            { if(((*yyvaluep).drop_table_stmt_t)!=NULL)((*yyvaluep).drop_table_stmt_t)->deep_delete(); }
#line 3194 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_restrict_or_cascade: /* opt_restrict_or_cascade  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_restrict_or_cascade_t)!=NULL)((*yyvaluep).opt_restrict_or_cascade_t)->deep_delete(); }
#line 3200 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_trigger_stmt: /* drop_trigger_stmt  */
#line 451 "bison.y"
            { if(((*yyvaluep).drop_trigger_stmt_t)!=NULL)((*yyvaluep).drop_trigger_stmt_t)->deep_delete(); }
#line 3206 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_view_stmt: /* drop_view_stmt  */
#line 451 "bison.y"
            { if(((*yyvaluep).drop_view_stmt_t)!=NULL)((*yyvaluep).drop_view_stmt_t)->deep_delete(); }
#line 3212 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_stmt: /* insert_stmt  */
#line 451 "bison.y"
            { if(((*yyvaluep).insert_stmt_t)!=NULL)((*yyvaluep).insert_stmt_t)->deep_delete(); }
#line 3218 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_rest: /* insert_rest  */
#line 451 "bison.y"
            { if(((*yyvaluep).insert_rest_t)!=NULL)((*yyvaluep).insert_rest_t)->deep_delete(); }
#line 3224 "bison_parser.cpp"
        break;

    case YYSYMBOL_super_values_list: /* super_values_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).super_values_list_t)!=NULL)((*yyvaluep).super_values_list_t)->deep_delete(); }
#line 3230 "bison_parser.cpp"
        break;

    case YYSYMBOL_values_list: /* values_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).values_list_t)!=NULL)((*yyvaluep).values_list_t)->deep_delete(); }
#line 3236 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_on_conflict: /* opt_on_conflict  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_on_conflict_t)!=NULL)((*yyvaluep).opt_on_conflict_t)->deep_delete(); }
#line 3242 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_conflict_expr: /* opt_conflict_expr  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_conflict_expr_t)!=NULL)((*yyvaluep).opt_conflict_expr_t)->deep_delete(); }
#line 3248 "bison_parser.cpp"
        break;

    case YYSYMBOL_indexed_column_list: /* indexed_column_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).indexed_column_list_t)!=NULL)((*yyvaluep).indexed_column_list_t)->deep_delete(); }
#line 3254 "bison_parser.cpp"
        break;

    case YYSYMBOL_indexed_column: /* indexed_column  */
#line 451 "bison.y"
            { if(((*yyvaluep).indexed_column_t)!=NULL)((*yyvaluep).indexed_column_t)->deep_delete(); }
#line 3260 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_stmt: /* update_stmt  */
#line 451 "bison.y"
            { if(((*yyvaluep).update_stmt_t)!=NULL)((*yyvaluep).update_stmt_t)->deep_delete(); }
#line 3266 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 451 "bison.y"
            { if(((*yyvaluep).alter_action_t)!=NULL)((*yyvaluep).alter_action_t)->deep_delete(); }
#line 3272 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_constant_action: /* alter_constant_action  */
#line 451 "bison.y"
            { if(((*yyvaluep).alter_constant_action_t)!=NULL)((*yyvaluep).alter_constant_action_t)->deep_delete(); }
#line 3278 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def_list: /* column_def_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).column_def_list_t)!=NULL)((*yyvaluep).column_def_list_t)->deep_delete(); }
#line 3284 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 451 "bison.y"
            { if(((*yyvaluep).column_def_t)!=NULL)((*yyvaluep).column_def_t)->deep_delete(); }
#line 3290 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraint_list: /* opt_column_constraint_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_column_constraint_list_t)!=NULL)((*yyvaluep).opt_column_constraint_list_t)->deep_delete(); }
#line 3296 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint_list: /* column_constraint_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).column_constraint_list_t)!=NULL)((*yyvaluep).column_constraint_list_t)->deep_delete(); }
#line 3302 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 451 "bison.y"
            { if(((*yyvaluep).column_constraint_t)!=NULL)((*yyvaluep).column_constraint_t)->deep_delete(); }
#line 3308 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_reference_clause: /* opt_reference_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_reference_clause_t)!=NULL)((*yyvaluep).opt_reference_clause_t)->deep_delete(); }
#line 3314 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_check: /* opt_check  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_check_t)!=NULL)((*yyvaluep).opt_check_t)->deep_delete(); }
#line 3320 "bison_parser.cpp"
        break;

    case YYSYMBOL_constraint_type: /* constraint_type  */
#line 451 "bison.y"
            { if(((*yyvaluep).constraint_type_t)!=NULL)((*yyvaluep).constraint_type_t)->deep_delete(); }
#line 3326 "bison_parser.cpp"
        break;

    case YYSYMBOL_reference_clause: /* reference_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).reference_clause_t)!=NULL)((*yyvaluep).reference_clause_t)->deep_delete(); }
#line 3332 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_foreign_key: /* opt_foreign_key  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_foreign_key_t)!=NULL)((*yyvaluep).opt_foreign_key_t)->deep_delete(); }
#line 3338 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_foreign_key_actions: /* opt_foreign_key_actions  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_foreign_key_actions_t)!=NULL)((*yyvaluep).opt_foreign_key_actions_t)->deep_delete(); }
#line 3344 "bison_parser.cpp"
        break;

    case YYSYMBOL_foreign_key_actions: /* foreign_key_actions  */
#line 451 "bison.y"
            { if(((*yyvaluep).foreign_key_actions_t)!=NULL)((*yyvaluep).foreign_key_actions_t)->deep_delete(); }
#line 3350 "bison_parser.cpp"
        break;

    case YYSYMBOL_key_actions: /* key_actions  */
#line 451 "bison.y"
            { if(((*yyvaluep).key_actions_t)!=NULL)((*yyvaluep).key_actions_t)->deep_delete(); }
#line 3356 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_constraint_attribute_spec: /* opt_constraint_attribute_spec  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_constraint_attribute_spec_t)!=NULL)((*yyvaluep).opt_constraint_attribute_spec_t)->deep_delete(); }
#line 3362 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_initial_time: /* opt_initial_time  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_initial_time_t)!=NULL)((*yyvaluep).opt_initial_time_t)->deep_delete(); }
#line 3368 "bison_parser.cpp"
        break;

    case YYSYMBOL_constraint_name: /* constraint_name  */
#line 451 "bison.y"
            { if(((*yyvaluep).constraint_name_t)!=NULL)((*yyvaluep).constraint_name_t)->deep_delete(); }
#line 3374 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_temp: /* opt_temp  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_temp_t)!=NULL)((*yyvaluep).opt_temp_t)->deep_delete(); }
#line 3380 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_check_option: /* opt_check_option  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_check_option_t)!=NULL)((*yyvaluep).opt_check_option_t)->deep_delete(); }
#line 3386 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_name_list_p: /* opt_column_name_list_p  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_column_name_list_p_t)!=NULL)((*yyvaluep).opt_column_name_list_p_t)->deep_delete(); }
#line 3392 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_clause_list: /* set_clause_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).set_clause_list_t)!=NULL)((*yyvaluep).set_clause_list_t)->deep_delete(); }
#line 3398 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_clause: /* set_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).set_clause_t)!=NULL)((*yyvaluep).set_clause_t)->deep_delete(); }
#line 3404 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_as_alias: /* opt_as_alias  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_as_alias_t)!=NULL)((*yyvaluep).opt_as_alias_t)->deep_delete(); }
#line 3410 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 451 "bison.y"
            { if(((*yyvaluep).expr_t)!=NULL)((*yyvaluep).expr_t)->deep_delete(); }
#line 3416 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 451 "bison.y"
            { if(((*yyvaluep).operand_t)!=NULL)((*yyvaluep).operand_t)->deep_delete(); }
#line 3422 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 451 "bison.y"
            { if(((*yyvaluep).cast_expr_t)!=NULL)((*yyvaluep).cast_expr_t)->deep_delete(); }
#line 3428 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 451 "bison.y"
            { if(((*yyvaluep).scalar_expr_t)!=NULL)((*yyvaluep).scalar_expr_t)->deep_delete(); }
#line 3434 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 451 "bison.y"
            { if(((*yyvaluep).unary_expr_t)!=NULL)((*yyvaluep).unary_expr_t)->deep_delete(); }
#line 3440 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 451 "bison.y"
            { if(((*yyvaluep).binary_expr_t)!=NULL)((*yyvaluep).binary_expr_t)->deep_delete(); }
#line 3446 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 451 "bison.y"
            { if(((*yyvaluep).logic_expr_t)!=NULL)((*yyvaluep).logic_expr_t)->deep_delete(); }
#line 3452 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 451 "bison.y"
            { if(((*yyvaluep).in_expr_t)!=NULL)((*yyvaluep).in_expr_t)->deep_delete(); }
#line 3458 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 451 "bison.y"
            { if(((*yyvaluep).case_expr_t)!=NULL)((*yyvaluep).case_expr_t)->deep_delete(); }
#line 3464 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 451 "bison.y"
            { if(((*yyvaluep).between_expr_t)!=NULL)((*yyvaluep).between_expr_t)->deep_delete(); }
#line 3470 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 451 "bison.y"
            { if(((*yyvaluep).exists_expr_t)!=NULL)((*yyvaluep).exists_expr_t)->deep_delete(); }
#line 3476 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 451 "bison.y"
            { if(((*yyvaluep).function_expr_t)!=NULL)((*yyvaluep).function_expr_t)->deep_delete(); }
#line 3482 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_distinct_t)!=NULL)((*yyvaluep).opt_distinct_t)->deep_delete(); }
#line 3488 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_filter_clause: /* opt_filter_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_filter_clause_t)!=NULL)((*yyvaluep).opt_filter_clause_t)->deep_delete(); }
#line 3494 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_over_clause: /* opt_over_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_over_clause_t)!=NULL)((*yyvaluep).opt_over_clause_t)->deep_delete(); }
#line 3500 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).case_list_t)!=NULL)((*yyvaluep).case_list_t)->deep_delete(); }
#line 3506 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_clause: /* case_clause  */
#line 451 "bison.y"
            { if(((*yyvaluep).case_clause_t)!=NULL)((*yyvaluep).case_clause_t)->deep_delete(); }
#line 3512 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 451 "bison.y"
            { if(((*yyvaluep).comp_expr_t)!=NULL)((*yyvaluep).comp_expr_t)->deep_delete(); }
#line 3518 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 451 "bison.y"
            { if(((*yyvaluep).extract_expr_t)!=NULL)((*yyvaluep).extract_expr_t)->deep_delete(); }
#line 3524 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 451 "bison.y"
            { if(((*yyvaluep).datetime_field_t)!=NULL)((*yyvaluep).datetime_field_t)->deep_delete(); }
#line 3530 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 451 "bison.y"
            { if(((*yyvaluep).array_expr_t)!=NULL)((*yyvaluep).array_expr_t)->deep_delete(); }
#line 3536 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 451 "bison.y"
            { if(((*yyvaluep).array_index_t)!=NULL)((*yyvaluep).array_index_t)->deep_delete(); }
#line 3542 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 451 "bison.y"
            { if(((*yyvaluep).literal_t)!=NULL)((*yyvaluep).literal_t)->deep_delete(); }
#line 3548 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 451 "bison.y"
            { if(((*yyvaluep).string_literal_t)!=NULL)((*yyvaluep).string_literal_t)->deep_delete(); }
#line 3554 "bison_parser.cpp"
        break;

    case YYSYMBOL_comment_literal: /* comment_literal  */
#line 451 "bison.y"
            { if(((*yyvaluep).comment_literal_t)!=NULL)((*yyvaluep).comment_literal_t)->deep_delete(); }
#line 3560 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 451 "bison.y"
            { if(((*yyvaluep).bool_literal_t)!=NULL)((*yyvaluep).bool_literal_t)->deep_delete(); }
#line 3566 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 451 "bison.y"
            { if(((*yyvaluep).num_literal_t)!=NULL)((*yyvaluep).num_literal_t)->deep_delete(); }
#line 3572 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 451 "bison.y"
            { if(((*yyvaluep).int_literal_t)!=NULL)((*yyvaluep).int_literal_t)->deep_delete(); }
#line 3578 "bison_parser.cpp"
        break;

    case YYSYMBOL_float_literal: /* float_literal  */
#line 451 "bison.y"
            { if(((*yyvaluep).float_literal_t)!=NULL)((*yyvaluep).float_literal_t)->deep_delete(); }
#line 3584 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column: /* opt_column  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_column_t)!=NULL)((*yyvaluep).opt_column_t)->deep_delete(); }
#line 3590 "bison_parser.cpp"
        break;

    case YYSYMBOL_trigger_body: /* trigger_body  */
#line 451 "bison.y"
            { if(((*yyvaluep).trigger_body_t)!=NULL)((*yyvaluep).trigger_body_t)->deep_delete(); }
#line 3596 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_if_not_exist: /* opt_if_not_exist  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_if_not_exist_t)!=NULL)((*yyvaluep).opt_if_not_exist_t)->deep_delete(); }
#line 3602 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_if_exist: /* opt_if_exist  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_if_exist_t)!=NULL)((*yyvaluep).opt_if_exist_t)->deep_delete(); }
#line 3608 "bison_parser.cpp"
        break;

    case YYSYMBOL_identifier: /* identifier  */
#line 451 "bison.y"
            { if(((*yyvaluep).identifier_t)!=NULL)((*yyvaluep).identifier_t)->deep_delete(); }
#line 3614 "bison_parser.cpp"
        break;

    case YYSYMBOL_as_alias: /* as_alias  */
#line 451 "bison.y"
            { if(((*yyvaluep).as_alias_t)!=NULL)((*yyvaluep).as_alias_t)->deep_delete(); }
#line 3620 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 451 "bison.y"
            { if(((*yyvaluep).table_name_t)!=NULL)((*yyvaluep).table_name_t)->deep_delete(); }
#line 3626 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 451 "bison.y"
            { if(((*yyvaluep).column_name_t)!=NULL)((*yyvaluep).column_name_t)->deep_delete(); }
#line 3632 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_keyword: /* opt_index_keyword  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_index_keyword_t)!=NULL)((*yyvaluep).opt_index_keyword_t)->deep_delete(); }
#line 3638 "bison_parser.cpp"
        break;

    case YYSYMBOL_view_name: /* view_name  */
#line 451 "bison.y"
            { if(((*yyvaluep).view_name_t)!=NULL)((*yyvaluep).view_name_t)->deep_delete(); }
#line 3644 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_name: /* function_name  */
#line 451 "bison.y"
            { if(((*yyvaluep).function_name_t)!=NULL)((*yyvaluep).function_name_t)->deep_delete(); }
#line 3650 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_op: /* binary_op  */
#line 451 "bison.y"
            { if(((*yyvaluep).binary_op_t)!=NULL)((*yyvaluep).binary_op_t)->deep_delete(); }
#line 3656 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not: /* opt_not  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_not_t)!=NULL)((*yyvaluep).opt_not_t)->deep_delete(); }
#line 3662 "bison_parser.cpp"
        break;

    case YYSYMBOL_name: /* name  */
#line 451 "bison.y"
            { if(((*yyvaluep).name_t)!=NULL)((*yyvaluep).name_t)->deep_delete(); }
#line 3668 "bison_parser.cpp"
        break;

    case YYSYMBOL_type_name: /* type_name  */
#line 451 "bison.y"
            { if(((*yyvaluep).type_name_t)!=NULL)((*yyvaluep).type_name_t)->deep_delete(); }
#line 3674 "bison_parser.cpp"
        break;

    case YYSYMBOL_character_type: /* character_type  */
#line 451 "bison.y"
            { if(((*yyvaluep).character_type_t)!=NULL)((*yyvaluep).character_type_t)->deep_delete(); }
#line 3680 "bison_parser.cpp"
        break;

    case YYSYMBOL_character_with_length: /* character_with_length  */
#line 451 "bison.y"
            { if(((*yyvaluep).character_with_length_t)!=NULL)((*yyvaluep).character_with_length_t)->deep_delete(); }
#line 3686 "bison_parser.cpp"
        break;

    case YYSYMBOL_character_without_length: /* character_without_length  */
#line 451 "bison.y"
            { if(((*yyvaluep).character_without_length_t)!=NULL)((*yyvaluep).character_without_length_t)->deep_delete(); }
#line 3692 "bison_parser.cpp"
        break;

    case YYSYMBOL_character_conflicta: /* character_conflicta  */
#line 451 "bison.y"
            { if(((*yyvaluep).character_conflicta_t)!=NULL)((*yyvaluep).character_conflicta_t)->deep_delete(); }
#line 3698 "bison_parser.cpp"
        break;

    case YYSYMBOL_numeric_type: /* numeric_type  */
#line 451 "bison.y"
            { if(((*yyvaluep).numeric_type_t)!=NULL)((*yyvaluep).numeric_type_t)->deep_delete(); }
#line 3704 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_constraint_list: /* opt_table_constraint_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_table_constraint_list_t)!=NULL)((*yyvaluep).opt_table_constraint_list_t)->deep_delete(); }
#line 3710 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint_list: /* table_constraint_list  */
#line 451 "bison.y"
            { if(((*yyvaluep).table_constraint_list_t)!=NULL)((*yyvaluep).table_constraint_list_t)->deep_delete(); }
#line 3716 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 451 "bison.y"
            { if(((*yyvaluep).table_constraint_t)!=NULL)((*yyvaluep).table_constraint_t)->deep_delete(); }
#line 3722 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_enforced: /* opt_enforced  */
#line 451 "bison.y"
            { if(((*yyvaluep).opt_enforced_t)!=NULL)((*yyvaluep).opt_enforced_t)->deep_delete(); }
#line 3728 "bison_parser.cpp"
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

#line 3836 "bison_parser.cpp"

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
#line 456 "bison.y"
                  {
		(yyval.program_t) = result;
		(yyval.program_t)->case_idx_ = CASE0;
		(yyval.program_t)->stmtlist_ = (yyvsp[0].stmtlist_t);
				(yyval.program_t) = NULL;

	}
#line 4055 "bison_parser.cpp"
    break;

  case 3: /* stmtlist: stmt OP_SEMI stmtlist  */
#line 467 "bison.y"
                               {
		(yyval.stmtlist_t) = new Stmtlist();
		(yyval.stmtlist_t)->case_idx_ = CASE0;
		(yyval.stmtlist_t)->stmt_ = (yyvsp[-2].stmt_t);
		(yyval.stmtlist_t)->stmtlist_ = (yyvsp[0].stmtlist_t);
		
	}
#line 4067 "bison_parser.cpp"
    break;

  case 4: /* stmtlist: stmt OP_SEMI  */
#line 474 "bison.y"
                      {
		(yyval.stmtlist_t) = new Stmtlist();
		(yyval.stmtlist_t)->case_idx_ = CASE1;
		(yyval.stmtlist_t)->stmt_ = (yyvsp[-1].stmt_t);
		
	}
#line 4078 "bison_parser.cpp"
    break;

  case 5: /* stmtlist: comment_literal stmtlist  */
#line 480 "bison.y"
                                   {
		(yyval.stmtlist_t) = (yyvsp[0].stmtlist_t);
		MERGE_LEFT_COMMENT((yyval.stmtlist_t), (yyvsp[-1].comment_literal_t));
	}
#line 4087 "bison_parser.cpp"
    break;

  case 6: /* stmtlist: stmtlist comment_literal  */
#line 484 "bison.y"
                                   {
		(yyval.stmtlist_t) = (yyvsp[-1].stmtlist_t);
		(yyval.stmtlist_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4096 "bison_parser.cpp"
    break;

  case 7: /* stmt: create_stmt  */
#line 492 "bison.y"
                     {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE0;
		(yyval.stmt_t)->create_stmt_ = (yyvsp[0].create_stmt_t);
		
	}
#line 4107 "bison_parser.cpp"
    break;

  case 8: /* stmt: drop_stmt  */
#line 498 "bison.y"
                   {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE1;
		(yyval.stmt_t)->drop_stmt_ = (yyvsp[0].drop_stmt_t);
		
	}
#line 4118 "bison_parser.cpp"
    break;

  case 9: /* stmt: select_stmt  */
#line 504 "bison.y"
                     {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE2;
		(yyval.stmt_t)->select_stmt_ = (yyvsp[0].select_stmt_t);
		
	}
#line 4129 "bison_parser.cpp"
    break;

  case 10: /* stmt: update_stmt  */
#line 510 "bison.y"
                     {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE3;
		(yyval.stmt_t)->update_stmt_ = (yyvsp[0].update_stmt_t);
		
	}
#line 4140 "bison_parser.cpp"
    break;

  case 11: /* stmt: insert_stmt  */
#line 516 "bison.y"
                     {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE4;
		(yyval.stmt_t)->insert_stmt_ = (yyvsp[0].insert_stmt_t);
		
	}
#line 4151 "bison_parser.cpp"
    break;

  case 12: /* stmt: alter_stmt  */
#line 522 "bison.y"
                    {
		(yyval.stmt_t) = new Stmt();
		(yyval.stmt_t)->case_idx_ = CASE5;
		(yyval.stmt_t)->alter_stmt_ = (yyvsp[0].alter_stmt_t);
		
	}
#line 4162 "bison_parser.cpp"
    break;

  case 13: /* create_stmt: create_table_stmt  */
#line 531 "bison.y"
                           {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE0;
		(yyval.create_stmt_t)->create_table_stmt_ = (yyvsp[0].create_table_stmt_t);
		
	}
#line 4173 "bison_parser.cpp"
    break;

  case 14: /* create_stmt: create_index_stmt  */
#line 537 "bison.y"
                           {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE1;
		(yyval.create_stmt_t)->create_index_stmt_ = (yyvsp[0].create_index_stmt_t);
		
	}
#line 4184 "bison_parser.cpp"
    break;

  case 15: /* create_stmt: create_trigger_stmt  */
#line 543 "bison.y"
                             {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE2;
		(yyval.create_stmt_t)->create_trigger_stmt_ = (yyvsp[0].create_trigger_stmt_t);
		
	}
#line 4195 "bison_parser.cpp"
    break;

  case 16: /* create_stmt: create_view_stmt  */
#line 549 "bison.y"
                          {
		(yyval.create_stmt_t) = new CreateStmt();
		(yyval.create_stmt_t)->case_idx_ = CASE3;
		(yyval.create_stmt_t)->create_view_stmt_ = (yyvsp[0].create_view_stmt_t);
		
	}
#line 4206 "bison_parser.cpp"
    break;

  case 17: /* drop_stmt: drop_index_stmt  */
#line 559 "bison.y"
                         {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE0;
		(yyval.drop_stmt_t)->drop_index_stmt_ = (yyvsp[0].drop_index_stmt_t);
		
	}
#line 4217 "bison_parser.cpp"
    break;

  case 18: /* drop_stmt: drop_table_stmt  */
#line 565 "bison.y"
                         {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE1;
		(yyval.drop_stmt_t)->drop_table_stmt_ = (yyvsp[0].drop_table_stmt_t);
		
	}
#line 4228 "bison_parser.cpp"
    break;

  case 19: /* drop_stmt: drop_trigger_stmt  */
#line 571 "bison.y"
                           {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE2;
		(yyval.drop_stmt_t)->drop_trigger_stmt_ = (yyvsp[0].drop_trigger_stmt_t);
		
	}
#line 4239 "bison_parser.cpp"
    break;

  case 20: /* drop_stmt: drop_view_stmt  */
#line 577 "bison.y"
                        {
		(yyval.drop_stmt_t) = new DropStmt();
		(yyval.drop_stmt_t)->case_idx_ = CASE3;
		(yyval.drop_stmt_t)->drop_view_stmt_ = (yyvsp[0].drop_view_stmt_t);
		
	}
#line 4250 "bison_parser.cpp"
    break;

  case 21: /* alter_stmt: ALTER TABLE table_name alter_action  */
#line 586 "bison.y"
                                             {
		(yyval.alter_stmt_t) = new AlterStmt();
		(yyval.alter_stmt_t)->case_idx_ = CASE0;
		(yyval.alter_stmt_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.alter_stmt_t)->alter_action_ = (yyvsp[0].alter_action_t);
		
	}
#line 4262 "bison_parser.cpp"
    break;

  case 22: /* alter_stmt: comment_literal alter_stmt  */
#line 593 "bison.y"
                                     {
		(yyval.alter_stmt_t) = (yyvsp[0].alter_stmt_t);
		MERGE_LEFT_COMMENT((yyval.alter_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 4271 "bison_parser.cpp"
    break;

  case 23: /* alter_stmt: alter_stmt comment_literal  */
#line 597 "bison.y"
                                     {
		(yyval.alter_stmt_t) = (yyvsp[-1].alter_stmt_t);
		(yyval.alter_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4280 "bison_parser.cpp"
    break;

  case 24: /* select_stmt: select_no_parens  */
#line 604 "bison.y"
                                      {
		(yyval.select_stmt_t) = new SelectStmt();
		(yyval.select_stmt_t)->case_idx_ = CASE0;
		(yyval.select_stmt_t)->select_no_parens_ = (yyvsp[0].select_no_parens_t);
		
	}
#line 4291 "bison_parser.cpp"
    break;

  case 25: /* select_stmt: select_with_parens  */
#line 610 "bison.y"
                                        {
		(yyval.select_stmt_t) = new SelectStmt();
		(yyval.select_stmt_t)->case_idx_ = CASE1;
		(yyval.select_stmt_t)->select_with_parens_ = (yyvsp[0].select_with_parens_t);
		
	}
#line 4302 "bison_parser.cpp"
    break;

  case 26: /* select_with_parens: OP_LP select_no_parens OP_RP  */
#line 619 "bison.y"
                                      {
		(yyval.select_with_parens_t) = new SelectWithParens();
		(yyval.select_with_parens_t)->case_idx_ = CASE0;
		(yyval.select_with_parens_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 4313 "bison_parser.cpp"
    break;

  case 27: /* select_with_parens: OP_LP select_with_parens OP_RP  */
#line 625 "bison.y"
                                        {
		(yyval.select_with_parens_t) = new SelectWithParens();
		(yyval.select_with_parens_t)->case_idx_ = CASE1;
		(yyval.select_with_parens_t)->select_with_parens_ = (yyvsp[-1].select_with_parens_t);
		
	}
#line 4324 "bison_parser.cpp"
    break;

  case 28: /* select_with_parens: comment_literal select_with_parens  */
#line 631 "bison.y"
                                             {
		(yyval.select_with_parens_t) = (yyvsp[0].select_with_parens_t);
		MERGE_LEFT_COMMENT((yyval.select_with_parens_t), (yyvsp[-1].comment_literal_t));
	}
#line 4333 "bison_parser.cpp"
    break;

  case 29: /* select_with_parens: select_with_parens comment_literal  */
#line 635 "bison.y"
                                             {
		(yyval.select_with_parens_t) = (yyvsp[-1].select_with_parens_t);
		(yyval.select_with_parens_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4342 "bison_parser.cpp"
    break;

  case 30: /* select_no_parens: opt_with_clause select_clause_list opt_order_clause opt_limit_clause  */
#line 642 "bison.y"
                                                                              {
		(yyval.select_no_parens_t) = new SelectNoParens();
		(yyval.select_no_parens_t)->case_idx_ = CASE0;
		(yyval.select_no_parens_t)->opt_with_clause_ = (yyvsp[-3].opt_with_clause_t);
		(yyval.select_no_parens_t)->select_clause_list_ = (yyvsp[-2].select_clause_list_t);
		(yyval.select_no_parens_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.select_no_parens_t)->opt_limit_clause_ = (yyvsp[0].opt_limit_clause_t);
		
	}
#line 4356 "bison_parser.cpp"
    break;

  case 31: /* select_clause_list: select_clause  */
#line 655 "bison.y"
                       {
		(yyval.select_clause_list_t) = new SelectClauseList();
		(yyval.select_clause_list_t)->case_idx_ = CASE0;
		(yyval.select_clause_list_t)->select_clause_ = (yyvsp[0].select_clause_t);
		
	}
#line 4367 "bison_parser.cpp"
    break;

  case 32: /* select_clause_list: select_clause combine_clause select_clause_list  */
#line 661 "bison.y"
                                                         {
		(yyval.select_clause_list_t) = new SelectClauseList();
		(yyval.select_clause_list_t)->case_idx_ = CASE1;
		(yyval.select_clause_list_t)->select_clause_ = (yyvsp[-2].select_clause_t);
		(yyval.select_clause_list_t)->combine_clause_ = (yyvsp[-1].combine_clause_t);
		(yyval.select_clause_list_t)->select_clause_list_ = (yyvsp[0].select_clause_list_t);
		
	}
#line 4380 "bison_parser.cpp"
    break;

  case 33: /* select_clause: SELECT opt_all_or_distinct select_target opt_from_clause opt_where_clause opt_group_clause opt_window_clause  */
#line 673 "bison.y"
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
#line 4396 "bison_parser.cpp"
    break;

  case 34: /* select_clause: comment_literal select_clause  */
#line 684 "bison.y"
                                        {
		(yyval.select_clause_t) = (yyvsp[0].select_clause_t);
		MERGE_LEFT_COMMENT((yyval.select_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 4405 "bison_parser.cpp"
    break;

  case 35: /* select_clause: select_clause comment_literal  */
#line 688 "bison.y"
                                        {
		(yyval.select_clause_t) = (yyvsp[-1].select_clause_t);
		(yyval.select_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4414 "bison_parser.cpp"
    break;

  case 36: /* combine_clause: UNION  */
#line 695 "bison.y"
               {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE0;
		
	}
#line 4424 "bison_parser.cpp"
    break;

  case 37: /* combine_clause: INTERSECT  */
#line 700 "bison.y"
                   {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE1;
		
	}
#line 4434 "bison_parser.cpp"
    break;

  case 38: /* combine_clause: EXCEPT  */
#line 705 "bison.y"
                {
		(yyval.combine_clause_t) = new CombineClause();
		(yyval.combine_clause_t)->case_idx_ = CASE2;
		
	}
#line 4444 "bison_parser.cpp"
    break;

  case 39: /* combine_clause: comment_literal combine_clause  */
#line 710 "bison.y"
                                         {
		(yyval.combine_clause_t) = (yyvsp[0].combine_clause_t);
		MERGE_LEFT_COMMENT((yyval.combine_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 4453 "bison_parser.cpp"
    break;

  case 40: /* combine_clause: combine_clause comment_literal  */
#line 714 "bison.y"
                                         {
		(yyval.combine_clause_t) = (yyvsp[-1].combine_clause_t);
		(yyval.combine_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4462 "bison_parser.cpp"
    break;

  case 41: /* opt_from_clause: from_clause  */
#line 721 "bison.y"
                     {
		(yyval.opt_from_clause_t) = new OptFromClause();
		(yyval.opt_from_clause_t)->case_idx_ = CASE0;
		(yyval.opt_from_clause_t)->from_clause_ = (yyvsp[0].from_clause_t);
		
	}
#line 4473 "bison_parser.cpp"
    break;

  case 42: /* opt_from_clause: %empty  */
#line 727 "bison.y"
          {
		(yyval.opt_from_clause_t) = new OptFromClause();
		(yyval.opt_from_clause_t)->case_idx_ = CASE1;
		
	}
#line 4483 "bison_parser.cpp"
    break;

  case 43: /* select_target: expr_list  */
#line 735 "bison.y"
                   {
		(yyval.select_target_t) = new SelectTarget();
		(yyval.select_target_t)->case_idx_ = CASE0;
		(yyval.select_target_t)->expr_list_ = (yyvsp[0].expr_list_t);
		
	}
#line 4494 "bison_parser.cpp"
    break;

  case 44: /* opt_window_clause: window_clause  */
#line 744 "bison.y"
                       {
		(yyval.opt_window_clause_t) = new OptWindowClause();
		(yyval.opt_window_clause_t)->case_idx_ = CASE0;
		(yyval.opt_window_clause_t)->window_clause_ = (yyvsp[0].window_clause_t);
		
	}
#line 4505 "bison_parser.cpp"
    break;

  case 45: /* opt_window_clause: %empty  */
#line 750 "bison.y"
          {
		(yyval.opt_window_clause_t) = new OptWindowClause();
		(yyval.opt_window_clause_t)->case_idx_ = CASE1;
		
	}
#line 4515 "bison_parser.cpp"
    break;

  case 46: /* window_clause: WINDOW window_def_list  */
#line 758 "bison.y"
                                {
		(yyval.window_clause_t) = new WindowClause();
		(yyval.window_clause_t)->case_idx_ = CASE0;
		(yyval.window_clause_t)->window_def_list_ = (yyvsp[0].window_def_list_t);
		
	}
#line 4526 "bison_parser.cpp"
    break;

  case 47: /* window_clause: comment_literal window_clause  */
#line 764 "bison.y"
                                        {
		(yyval.window_clause_t) = (yyvsp[0].window_clause_t);
		MERGE_LEFT_COMMENT((yyval.window_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 4535 "bison_parser.cpp"
    break;

  case 48: /* window_clause: window_clause comment_literal  */
#line 768 "bison.y"
                                        {
		(yyval.window_clause_t) = (yyvsp[-1].window_clause_t);
		(yyval.window_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4544 "bison_parser.cpp"
    break;

  case 49: /* window_def_list: window_def  */
#line 775 "bison.y"
                    {
		(yyval.window_def_list_t) = new WindowDefList();
		(yyval.window_def_list_t)->case_idx_ = CASE0;
		(yyval.window_def_list_t)->window_def_ = (yyvsp[0].window_def_t);
		
	}
#line 4555 "bison_parser.cpp"
    break;

  case 50: /* window_def_list: window_def OP_COMMA window_def_list  */
#line 781 "bison.y"
                                             {
		(yyval.window_def_list_t) = new WindowDefList();
		(yyval.window_def_list_t)->case_idx_ = CASE1;
		(yyval.window_def_list_t)->window_def_ = (yyvsp[-2].window_def_t);
		(yyval.window_def_list_t)->window_def_list_ = (yyvsp[0].window_def_list_t);
		
	}
#line 4567 "bison_parser.cpp"
    break;

  case 51: /* window_def: window_name AS OP_LP window OP_RP  */
#line 791 "bison.y"
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
#line 4589 "bison_parser.cpp"
    break;

  case 52: /* window_def: comment_literal window_def  */
#line 808 "bison.y"
                                     {
		(yyval.window_def_t) = (yyvsp[0].window_def_t);
		MERGE_LEFT_COMMENT((yyval.window_def_t), (yyvsp[-1].comment_literal_t));
	}
#line 4598 "bison_parser.cpp"
    break;

  case 53: /* window_def: window_def comment_literal  */
#line 812 "bison.y"
                                     {
		(yyval.window_def_t) = (yyvsp[-1].window_def_t);
		(yyval.window_def_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4607 "bison_parser.cpp"
    break;

  case 54: /* window_name: identifier  */
#line 819 "bison.y"
                    {
		(yyval.window_name_t) = new WindowName();
		(yyval.window_name_t)->case_idx_ = CASE0;
		(yyval.window_name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 4618 "bison_parser.cpp"
    break;

  case 55: /* window: opt_exist_window_name opt_partition opt_order_clause opt_frame_clause  */
#line 828 "bison.y"
                                                                               {
		(yyval.window_t) = new Window();
		(yyval.window_t)->case_idx_ = CASE0;
		(yyval.window_t)->opt_exist_window_name_ = (yyvsp[-3].opt_exist_window_name_t);
		(yyval.window_t)->opt_partition_ = (yyvsp[-2].opt_partition_t);
		(yyval.window_t)->opt_order_clause_ = (yyvsp[-1].opt_order_clause_t);
		(yyval.window_t)->opt_frame_clause_ = (yyvsp[0].opt_frame_clause_t);
		
	}
#line 4632 "bison_parser.cpp"
    break;

  case 56: /* opt_partition: PARTITION BY expr_list  */
#line 840 "bison.y"
                                {
		(yyval.opt_partition_t) = new OptPartition();
		(yyval.opt_partition_t)->case_idx_ = CASE0;
		(yyval.opt_partition_t)->expr_list_ = (yyvsp[0].expr_list_t);
		
	}
#line 4643 "bison_parser.cpp"
    break;

  case 57: /* opt_partition: %empty  */
#line 846 "bison.y"
                  {
		(yyval.opt_partition_t) = new OptPartition();
		(yyval.opt_partition_t)->case_idx_ = CASE1;
		
	}
#line 4653 "bison_parser.cpp"
    break;

  case 58: /* opt_partition: comment_literal opt_partition  */
#line 851 "bison.y"
                                        {
		(yyval.opt_partition_t) = (yyvsp[0].opt_partition_t);
		MERGE_LEFT_COMMENT((yyval.opt_partition_t), (yyvsp[-1].comment_literal_t));
	}
#line 4662 "bison_parser.cpp"
    break;

  case 59: /* opt_partition: opt_partition comment_literal  */
#line 855 "bison.y"
                                        {
		(yyval.opt_partition_t) = (yyvsp[-1].opt_partition_t);
		(yyval.opt_partition_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4671 "bison_parser.cpp"
    break;

  case 60: /* opt_frame_clause: range_or_rows frame_bound_start  */
#line 862 "bison.y"
                                         {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE0;
		(yyval.opt_frame_clause_t)->range_or_rows_ = (yyvsp[-1].range_or_rows_t);
		(yyval.opt_frame_clause_t)->frame_bound_start_ = (yyvsp[0].frame_bound_start_t);
		
	}
#line 4683 "bison_parser.cpp"
    break;

  case 61: /* opt_frame_clause: range_or_rows BETWEEN frame_bound_start AND frame_bound_end  */
#line 869 "bison.y"
                                                                     {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE1;
		(yyval.opt_frame_clause_t)->range_or_rows_ = (yyvsp[-4].range_or_rows_t);
		(yyval.opt_frame_clause_t)->frame_bound_start_ = (yyvsp[-2].frame_bound_start_t);
		(yyval.opt_frame_clause_t)->frame_bound_end_ = (yyvsp[0].frame_bound_end_t);
		
	}
#line 4696 "bison_parser.cpp"
    break;

  case 62: /* opt_frame_clause: %empty  */
#line 877 "bison.y"
          {
		(yyval.opt_frame_clause_t) = new OptFrameClause();
		(yyval.opt_frame_clause_t)->case_idx_ = CASE2;
		
	}
#line 4706 "bison_parser.cpp"
    break;

  case 63: /* range_or_rows: RANGE  */
#line 885 "bison.y"
               {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE0;
		
	}
#line 4716 "bison_parser.cpp"
    break;

  case 64: /* range_or_rows: ROWS  */
#line 890 "bison.y"
              {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE1;
		
	}
#line 4726 "bison_parser.cpp"
    break;

  case 65: /* range_or_rows: GROUPS  */
#line 895 "bison.y"
                {
		(yyval.range_or_rows_t) = new RangeOrRows();
		(yyval.range_or_rows_t)->case_idx_ = CASE2;
		
	}
#line 4736 "bison_parser.cpp"
    break;

  case 66: /* range_or_rows: comment_literal range_or_rows  */
#line 900 "bison.y"
                                        {
		(yyval.range_or_rows_t) = (yyvsp[0].range_or_rows_t);
		MERGE_LEFT_COMMENT((yyval.range_or_rows_t), (yyvsp[-1].comment_literal_t));
	}
#line 4745 "bison_parser.cpp"
    break;

  case 67: /* range_or_rows: range_or_rows comment_literal  */
#line 904 "bison.y"
                                        {
		(yyval.range_or_rows_t) = (yyvsp[-1].range_or_rows_t);
		(yyval.range_or_rows_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4754 "bison_parser.cpp"
    break;

  case 68: /* frame_bound_start: frame_bound  */
#line 911 "bison.y"
                     {
		(yyval.frame_bound_start_t) = new FrameBoundStart();
		(yyval.frame_bound_start_t)->case_idx_ = CASE0;
		(yyval.frame_bound_start_t)->frame_bound_ = (yyvsp[0].frame_bound_t);
		
	}
#line 4765 "bison_parser.cpp"
    break;

  case 69: /* frame_bound_start: UNBOUNDED PRECEDING  */
#line 917 "bison.y"
                             {
		(yyval.frame_bound_start_t) = new FrameBoundStart();
		(yyval.frame_bound_start_t)->case_idx_ = CASE1;
		
	}
#line 4775 "bison_parser.cpp"
    break;

  case 70: /* frame_bound_start: comment_literal frame_bound_start  */
#line 922 "bison.y"
                                            {
		(yyval.frame_bound_start_t) = (yyvsp[0].frame_bound_start_t);
		MERGE_LEFT_COMMENT((yyval.frame_bound_start_t), (yyvsp[-1].comment_literal_t));
	}
#line 4784 "bison_parser.cpp"
    break;

  case 71: /* frame_bound_start: frame_bound_start comment_literal  */
#line 926 "bison.y"
                                            {
		(yyval.frame_bound_start_t) = (yyvsp[-1].frame_bound_start_t);
		(yyval.frame_bound_start_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4793 "bison_parser.cpp"
    break;

  case 72: /* frame_bound_end: frame_bound  */
#line 933 "bison.y"
                     {
		(yyval.frame_bound_end_t) = new FrameBoundEnd();
		(yyval.frame_bound_end_t)->case_idx_ = CASE0;
		(yyval.frame_bound_end_t)->frame_bound_ = (yyvsp[0].frame_bound_t);
		
	}
#line 4804 "bison_parser.cpp"
    break;

  case 73: /* frame_bound_end: UNBOUNDED FOLLOWING  */
#line 939 "bison.y"
                             {
		(yyval.frame_bound_end_t) = new FrameBoundEnd();
		(yyval.frame_bound_end_t)->case_idx_ = CASE1;
		
	}
#line 4814 "bison_parser.cpp"
    break;

  case 74: /* frame_bound_end: comment_literal frame_bound_end  */
#line 944 "bison.y"
                                          {
		(yyval.frame_bound_end_t) = (yyvsp[0].frame_bound_end_t);
		MERGE_LEFT_COMMENT((yyval.frame_bound_end_t), (yyvsp[-1].comment_literal_t));
	}
#line 4823 "bison_parser.cpp"
    break;

  case 75: /* frame_bound_end: frame_bound_end comment_literal  */
#line 948 "bison.y"
                                          {
		(yyval.frame_bound_end_t) = (yyvsp[-1].frame_bound_end_t);
		(yyval.frame_bound_end_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4832 "bison_parser.cpp"
    break;

  case 76: /* frame_bound: expr PRECEDING  */
#line 955 "bison.y"
                        {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE0;
		(yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 4843 "bison_parser.cpp"
    break;

  case 77: /* frame_bound: expr FOLLOWING  */
#line 961 "bison.y"
                        {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE1;
		(yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 4854 "bison_parser.cpp"
    break;

  case 78: /* frame_bound: CURRENT ROW  */
#line 967 "bison.y"
                     {
		(yyval.frame_bound_t) = new FrameBound();
		(yyval.frame_bound_t)->case_idx_ = CASE2;
		
	}
#line 4864 "bison_parser.cpp"
    break;

  case 79: /* frame_bound: comment_literal frame_bound  */
#line 972 "bison.y"
                                      {
		(yyval.frame_bound_t) = (yyvsp[0].frame_bound_t);
		MERGE_LEFT_COMMENT((yyval.frame_bound_t), (yyvsp[-1].comment_literal_t));
	}
#line 4873 "bison_parser.cpp"
    break;

  case 80: /* frame_bound: frame_bound comment_literal  */
#line 976 "bison.y"
                                       {
		(yyval.frame_bound_t) = (yyvsp[-1].frame_bound_t);
		(yyval.frame_bound_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4882 "bison_parser.cpp"
    break;

  case 81: /* opt_exist_window_name: identifier  */
#line 983 "bison.y"
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
#line 4902 "bison_parser.cpp"
    break;

  case 82: /* opt_exist_window_name: %empty  */
#line 998 "bison.y"
          {
		(yyval.opt_exist_window_name_t) = new OptExistWindowName();
		(yyval.opt_exist_window_name_t)->case_idx_ = CASE1;
		
	}
#line 4912 "bison_parser.cpp"
    break;

  case 83: /* opt_group_clause: GROUP BY expr_list opt_having_clause  */
#line 1006 "bison.y"
                                              {
		(yyval.opt_group_clause_t) = new OptGroupClause();
		(yyval.opt_group_clause_t)->case_idx_ = CASE0;
		(yyval.opt_group_clause_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		(yyval.opt_group_clause_t)->opt_having_clause_ = (yyvsp[0].opt_having_clause_t);
		
	}
#line 4924 "bison_parser.cpp"
    break;

  case 84: /* opt_group_clause: %empty  */
#line 1013 "bison.y"
          {
		(yyval.opt_group_clause_t) = new OptGroupClause();
		(yyval.opt_group_clause_t)->case_idx_ = CASE1;
		
	}
#line 4934 "bison_parser.cpp"
    break;

  case 85: /* opt_group_clause: comment_literal opt_group_clause  */
#line 1018 "bison.y"
                                           {
		(yyval.opt_group_clause_t) = (yyvsp[0].opt_group_clause_t);
		MERGE_LEFT_COMMENT((yyval.opt_group_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 4943 "bison_parser.cpp"
    break;

  case 86: /* opt_group_clause: opt_group_clause comment_literal  */
#line 1022 "bison.y"
                                            {
		(yyval.opt_group_clause_t) = (yyvsp[-1].opt_group_clause_t);
		(yyval.opt_group_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4952 "bison_parser.cpp"
    break;

  case 87: /* opt_having_clause: HAVING expr  */
#line 1029 "bison.y"
                     {
		(yyval.opt_having_clause_t) = new OptHavingClause();
		(yyval.opt_having_clause_t)->case_idx_ = CASE0;
		(yyval.opt_having_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 4963 "bison_parser.cpp"
    break;

  case 88: /* opt_having_clause: %empty  */
#line 1035 "bison.y"
          {
		(yyval.opt_having_clause_t) = new OptHavingClause();
		(yyval.opt_having_clause_t)->case_idx_ = CASE1;
		
	}
#line 4973 "bison_parser.cpp"
    break;

  case 89: /* opt_having_clause: comment_literal opt_having_clause  */
#line 1040 "bison.y"
                                            {
		(yyval.opt_having_clause_t) = (yyvsp[0].opt_having_clause_t);
		MERGE_LEFT_COMMENT((yyval.opt_having_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 4982 "bison_parser.cpp"
    break;

  case 90: /* opt_having_clause: opt_having_clause comment_literal  */
#line 1044 "bison.y"
                                             {
		(yyval.opt_having_clause_t) = (yyvsp[-1].opt_having_clause_t);
		(yyval.opt_having_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 4991 "bison_parser.cpp"
    break;

  case 91: /* opt_where_clause: where_clause  */
#line 1051 "bison.y"
                      {
		(yyval.opt_where_clause_t) = new OptWhereClause();
		(yyval.opt_where_clause_t)->case_idx_ = CASE0;
		(yyval.opt_where_clause_t)->where_clause_ = (yyvsp[0].where_clause_t);
		
	}
#line 5002 "bison_parser.cpp"
    break;

  case 92: /* opt_where_clause: %empty  */
#line 1057 "bison.y"
          {
		(yyval.opt_where_clause_t) = new OptWhereClause();
		(yyval.opt_where_clause_t)->case_idx_ = CASE1;
		
	}
#line 5012 "bison_parser.cpp"
    break;

  case 93: /* where_clause: WHERE expr  */
#line 1065 "bison.y"
                    {
		(yyval.where_clause_t) = new WhereClause();
		(yyval.where_clause_t)->case_idx_ = CASE0;
		(yyval.where_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 5023 "bison_parser.cpp"
    break;

  case 94: /* where_clause: comment_literal where_clause  */
#line 1071 "bison.y"
                                       {
		(yyval.where_clause_t) = (yyvsp[0].where_clause_t);
		MERGE_LEFT_COMMENT((yyval.where_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 5032 "bison_parser.cpp"
    break;

  case 95: /* where_clause: where_clause comment_literal  */
#line 1075 "bison.y"
                                        {
		(yyval.where_clause_t) = (yyvsp[-1].where_clause_t);
		(yyval.where_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5041 "bison_parser.cpp"
    break;

  case 96: /* from_clause: FROM table_ref  */
#line 1082 "bison.y"
                        {
		(yyval.from_clause_t) = new FromClause();
		(yyval.from_clause_t)->case_idx_ = CASE0;
		(yyval.from_clause_t)->table_ref_ = (yyvsp[0].table_ref_t);
		
	}
#line 5052 "bison_parser.cpp"
    break;

  case 97: /* from_clause: comment_literal from_clause  */
#line 1088 "bison.y"
                                      {
		(yyval.from_clause_t) = (yyvsp[0].from_clause_t);
		MERGE_LEFT_COMMENT((yyval.from_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 5061 "bison_parser.cpp"
    break;

  case 98: /* from_clause: from_clause comment_literal  */
#line 1092 "bison.y"
                                       {
		(yyval.from_clause_t) = (yyvsp[-1].from_clause_t);
		(yyval.from_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5070 "bison_parser.cpp"
    break;

  case 99: /* table_ref: opt_table_prefix table_name opt_as_alias opt_index opt_on opt_using  */
#line 1099 "bison.y"
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
#line 5086 "bison_parser.cpp"
    break;

  case 100: /* table_ref: opt_table_prefix function_name OP_LP expr_list OP_RP opt_as_alias opt_on opt_using  */
#line 1110 "bison.y"
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
#line 5102 "bison_parser.cpp"
    break;

  case 101: /* table_ref: opt_table_prefix OP_LP select_no_parens OP_RP opt_as_alias opt_on opt_using  */
#line 1121 "bison.y"
                                                                                     {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE2;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-6].opt_table_prefix_t);
		(yyval.table_ref_t)->select_no_parens_ = (yyvsp[-4].select_no_parens_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
		
	}
#line 5117 "bison_parser.cpp"
    break;

  case 102: /* table_ref: opt_table_prefix OP_LP table_ref OP_RP opt_as_alias opt_on opt_using  */
#line 1131 "bison.y"
                                                                              {
		(yyval.table_ref_t) = new TableRef();
		(yyval.table_ref_t)->case_idx_ = CASE3;
		(yyval.table_ref_t)->opt_table_prefix_ = (yyvsp[-6].opt_table_prefix_t);
		(yyval.table_ref_t)->table_ref_ = (yyvsp[-4].table_ref_t);
		(yyval.table_ref_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
		(yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
		
	}
#line 5132 "bison_parser.cpp"
    break;

  case 103: /* opt_index: INDEXED BY column_name  */
#line 1144 "bison.y"
                                {
		(yyval.opt_index_t) = new OptIndex();
		(yyval.opt_index_t)->case_idx_ = CASE0;
		(yyval.opt_index_t)->column_name_ = (yyvsp[0].column_name_t);
		
	}
#line 5143 "bison_parser.cpp"
    break;

  case 104: /* opt_index: NOT INDEXED  */
#line 1150 "bison.y"
                     {
		(yyval.opt_index_t) = new OptIndex();
		(yyval.opt_index_t)->case_idx_ = CASE1;
		
	}
#line 5153 "bison_parser.cpp"
    break;

  case 105: /* opt_index: %empty  */
#line 1155 "bison.y"
          {
		(yyval.opt_index_t) = new OptIndex();
		(yyval.opt_index_t)->case_idx_ = CASE2;
		
	}
#line 5163 "bison_parser.cpp"
    break;

  case 106: /* opt_index: comment_literal opt_index  */
#line 1160 "bison.y"
                                    {
		(yyval.opt_index_t) = (yyvsp[0].opt_index_t);
		MERGE_LEFT_COMMENT((yyval.opt_index_t), (yyvsp[-1].comment_literal_t));
	}
#line 5172 "bison_parser.cpp"
    break;

  case 107: /* opt_index: opt_index comment_literal  */
#line 1164 "bison.y"
                                     {
		(yyval.opt_index_t) = (yyvsp[-1].opt_index_t);
		(yyval.opt_index_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5181 "bison_parser.cpp"
    break;

  case 108: /* opt_on: ON expr  */
#line 1171 "bison.y"
                 {
		(yyval.opt_on_t) = new OptOn();
		(yyval.opt_on_t)->case_idx_ = CASE0;
		(yyval.opt_on_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 5192 "bison_parser.cpp"
    break;

  case 109: /* opt_on: %empty  */
#line 1177 "bison.y"
                    {
		(yyval.opt_on_t) = new OptOn();
		(yyval.opt_on_t)->case_idx_ = CASE1;
		
	}
#line 5202 "bison_parser.cpp"
    break;

  case 110: /* opt_on: comment_literal opt_on  */
#line 1182 "bison.y"
                                 {
		(yyval.opt_on_t) = (yyvsp[0].opt_on_t);
		MERGE_LEFT_COMMENT((yyval.opt_on_t), (yyvsp[-1].comment_literal_t));
	}
#line 5211 "bison_parser.cpp"
    break;

  case 111: /* opt_on: opt_on comment_literal  */
#line 1186 "bison.y"
                                  {
		(yyval.opt_on_t) = (yyvsp[-1].opt_on_t);
		(yyval.opt_on_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5220 "bison_parser.cpp"
    break;

  case 112: /* opt_using: USING OP_LP column_name_list OP_RP  */
#line 1193 "bison.y"
                                            {
		(yyval.opt_using_t) = new OptUsing();
		(yyval.opt_using_t)->case_idx_ = CASE0;
		(yyval.opt_using_t)->column_name_list_ = (yyvsp[-1].column_name_list_t);
		
	}
#line 5231 "bison_parser.cpp"
    break;

  case 113: /* opt_using: %empty  */
#line 1199 "bison.y"
          {
		(yyval.opt_using_t) = new OptUsing();
		(yyval.opt_using_t)->case_idx_ = CASE1;
		
	}
#line 5241 "bison_parser.cpp"
    break;

  case 114: /* opt_using: comment_literal opt_using  */
#line 1204 "bison.y"
                                    {
		(yyval.opt_using_t) = (yyvsp[0].opt_using_t);
		MERGE_LEFT_COMMENT((yyval.opt_using_t), (yyvsp[-1].comment_literal_t));
	}
#line 5250 "bison_parser.cpp"
    break;

  case 115: /* opt_using: opt_using comment_literal  */
#line 1208 "bison.y"
                                     {
		(yyval.opt_using_t) = (yyvsp[-1].opt_using_t);
		(yyval.opt_using_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5259 "bison_parser.cpp"
    break;

  case 116: /* column_name_list: column_name  */
#line 1215 "bison.y"
                     {
		(yyval.column_name_list_t) = new ColumnNameList();
		(yyval.column_name_list_t)->case_idx_ = CASE0;
		(yyval.column_name_list_t)->column_name_ = (yyvsp[0].column_name_t);
		
	}
#line 5270 "bison_parser.cpp"
    break;

  case 117: /* column_name_list: column_name OP_COMMA column_name_list  */
#line 1221 "bison.y"
                                               {
		(yyval.column_name_list_t) = new ColumnNameList();
		(yyval.column_name_list_t)->case_idx_ = CASE1;
		(yyval.column_name_list_t)->column_name_ = (yyvsp[-2].column_name_t);
		(yyval.column_name_list_t)->column_name_list_ = (yyvsp[0].column_name_list_t);
		
	}
#line 5282 "bison_parser.cpp"
    break;

  case 118: /* opt_table_prefix: table_ref join_op  */
#line 1231 "bison.y"
                           {
		(yyval.opt_table_prefix_t) = new OptTablePrefix();
		(yyval.opt_table_prefix_t)->case_idx_ = CASE0;
		(yyval.opt_table_prefix_t)->table_ref_ = (yyvsp[-1].table_ref_t);
		(yyval.opt_table_prefix_t)->join_op_ = (yyvsp[0].join_op_t);
		
	}
#line 5294 "bison_parser.cpp"
    break;

  case 119: /* opt_table_prefix: %empty  */
#line 1238 "bison.y"
          {
		(yyval.opt_table_prefix_t) = new OptTablePrefix();
		(yyval.opt_table_prefix_t)->case_idx_ = CASE1;
		
	}
#line 5304 "bison_parser.cpp"
    break;

  case 120: /* join_op: OP_COMMA  */
#line 1246 "bison.y"
                  {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE0;
		
	}
#line 5314 "bison_parser.cpp"
    break;

  case 121: /* join_op: JOIN  */
#line 1251 "bison.y"
              {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE1;
		
	}
#line 5324 "bison_parser.cpp"
    break;

  case 122: /* join_op: NATURAL opt_join_type JOIN  */
#line 1256 "bison.y"
                                    {
		(yyval.join_op_t) = new JoinOp();
		(yyval.join_op_t)->case_idx_ = CASE2;
		(yyval.join_op_t)->opt_join_type_ = (yyvsp[-1].opt_join_type_t);
		
	}
#line 5335 "bison_parser.cpp"
    break;

  case 123: /* join_op: comment_literal join_op  */
#line 1262 "bison.y"
                                  {
		(yyval.join_op_t) = (yyvsp[0].join_op_t);
		MERGE_LEFT_COMMENT((yyval.join_op_t), (yyvsp[-1].comment_literal_t));
	}
#line 5344 "bison_parser.cpp"
    break;

  case 124: /* join_op: join_op comment_literal  */
#line 1266 "bison.y"
                                   {
		(yyval.join_op_t) = (yyvsp[-1].join_op_t);
		(yyval.join_op_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5353 "bison_parser.cpp"
    break;

  case 125: /* opt_join_type: LEFT  */
#line 1273 "bison.y"
              {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE0;
		
	}
#line 5363 "bison_parser.cpp"
    break;

  case 126: /* opt_join_type: LEFT OUTER  */
#line 1278 "bison.y"
                    {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE1;
		
	}
#line 5373 "bison_parser.cpp"
    break;

  case 127: /* opt_join_type: INNER  */
#line 1283 "bison.y"
               {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE2;
		
	}
#line 5383 "bison_parser.cpp"
    break;

  case 128: /* opt_join_type: CROSS  */
#line 1288 "bison.y"
               {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE3;
		
	}
#line 5393 "bison_parser.cpp"
    break;

  case 129: /* opt_join_type: %empty  */
#line 1293 "bison.y"
          {
		(yyval.opt_join_type_t) = new OptJoinType();
		(yyval.opt_join_type_t)->case_idx_ = CASE4;
		
	}
#line 5403 "bison_parser.cpp"
    break;

  case 130: /* opt_join_type: comment_literal opt_join_type  */
#line 1298 "bison.y"
                                        {
		(yyval.opt_join_type_t) = (yyvsp[0].opt_join_type_t);
		MERGE_LEFT_COMMENT((yyval.opt_join_type_t), (yyvsp[-1].comment_literal_t));
	}
#line 5412 "bison_parser.cpp"
    break;

  case 131: /* opt_join_type: opt_join_type comment_literal  */
#line 1302 "bison.y"
                                         {
		(yyval.opt_join_type_t) = (yyvsp[-1].opt_join_type_t);
		(yyval.opt_join_type_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5421 "bison_parser.cpp"
    break;

  case 132: /* expr_list: expr opt_as_alias OP_COMMA expr_list  */
#line 1309 "bison.y"
                                              {
		(yyval.expr_list_t) = new ExprList();
		(yyval.expr_list_t)->case_idx_ = CASE0;
		(yyval.expr_list_t)->expr_ = (yyvsp[-3].expr_t);
		(yyval.expr_list_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.expr_list_t)->expr_list_ = (yyvsp[0].expr_list_t);
		
	}
#line 5434 "bison_parser.cpp"
    break;

  case 133: /* expr_list: expr opt_as_alias  */
#line 1317 "bison.y"
                            {
		(yyval.expr_list_t) = new ExprList();
		(yyval.expr_list_t)->case_idx_ = CASE1;
		(yyval.expr_list_t)->expr_ = (yyvsp[-1].expr_t);
		(yyval.expr_list_t)->opt_as_alias_ = (yyvsp[0].opt_as_alias_t);
		
	}
#line 5446 "bison_parser.cpp"
    break;

  case 134: /* opt_limit_clause: limit_clause  */
#line 1327 "bison.y"
                      {
		(yyval.opt_limit_clause_t) = new OptLimitClause();
		(yyval.opt_limit_clause_t)->case_idx_ = CASE0;
		(yyval.opt_limit_clause_t)->limit_clause_ = (yyvsp[0].limit_clause_t);
		
	}
#line 5457 "bison_parser.cpp"
    break;

  case 135: /* opt_limit_clause: %empty  */
#line 1333 "bison.y"
          {
		(yyval.opt_limit_clause_t) = new OptLimitClause();
		(yyval.opt_limit_clause_t)->case_idx_ = CASE1;
		
	}
#line 5467 "bison_parser.cpp"
    break;

  case 136: /* limit_clause: LIMIT expr  */
#line 1341 "bison.y"
                    {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE0;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[0].expr_t);
		
	}
#line 5478 "bison_parser.cpp"
    break;

  case 137: /* limit_clause: LIMIT expr OFFSET expr  */
#line 1347 "bison.y"
                                {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE1;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.limit_clause_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 5490 "bison_parser.cpp"
    break;

  case 138: /* limit_clause: LIMIT expr OP_COMMA expr  */
#line 1354 "bison.y"
                                  {
		(yyval.limit_clause_t) = new LimitClause();
		(yyval.limit_clause_t)->case_idx_ = CASE2;
		(yyval.limit_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.limit_clause_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 5502 "bison_parser.cpp"
    break;

  case 139: /* limit_clause: comment_literal limit_clause  */
#line 1361 "bison.y"
                                       {
		(yyval.limit_clause_t) = (yyvsp[0].limit_clause_t);
		MERGE_LEFT_COMMENT((yyval.limit_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 5511 "bison_parser.cpp"
    break;

  case 140: /* limit_clause: limit_clause comment_literal  */
#line 1365 "bison.y"
                                        {
		(yyval.limit_clause_t) = (yyvsp[-1].limit_clause_t);
		(yyval.limit_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5520 "bison_parser.cpp"
    break;

  case 141: /* opt_limit_row_count: LIMIT expr  */
#line 1372 "bison.y"
                    {
		(yyval.opt_limit_row_count_t) = new OptLimitRowCount();
		(yyval.opt_limit_row_count_t)->case_idx_ = CASE0;
		(yyval.opt_limit_row_count_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 5531 "bison_parser.cpp"
    break;

  case 142: /* opt_limit_row_count: %empty  */
#line 1378 "bison.y"
          {
		(yyval.opt_limit_row_count_t) = new OptLimitRowCount();
		(yyval.opt_limit_row_count_t)->case_idx_ = CASE1;
		
	}
#line 5541 "bison_parser.cpp"
    break;

  case 143: /* opt_limit_row_count: comment_literal opt_limit_row_count  */
#line 1383 "bison.y"
                                              {
		(yyval.opt_limit_row_count_t) = (yyvsp[0].opt_limit_row_count_t);
		MERGE_LEFT_COMMENT((yyval.opt_limit_row_count_t), (yyvsp[-1].comment_literal_t));
	}
#line 5550 "bison_parser.cpp"
    break;

  case 144: /* opt_limit_row_count: opt_limit_row_count comment_literal  */
#line 1387 "bison.y"
                                               {
		(yyval.opt_limit_row_count_t) = (yyvsp[-1].opt_limit_row_count_t);
		(yyval.opt_limit_row_count_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5559 "bison_parser.cpp"
    break;

  case 145: /* opt_order_clause: ORDER BY order_item_list  */
#line 1394 "bison.y"
                                  {
		(yyval.opt_order_clause_t) = new OptOrderClause();
		(yyval.opt_order_clause_t)->case_idx_ = CASE0;
		(yyval.opt_order_clause_t)->order_item_list_ = (yyvsp[0].order_item_list_t);
		
	}
#line 5570 "bison_parser.cpp"
    break;

  case 146: /* opt_order_clause: %empty  */
#line 1400 "bison.y"
          {
		(yyval.opt_order_clause_t) = new OptOrderClause();
		(yyval.opt_order_clause_t)->case_idx_ = CASE1;
		
	}
#line 5580 "bison_parser.cpp"
    break;

  case 147: /* opt_order_clause: comment_literal opt_order_clause  */
#line 1405 "bison.y"
                                           {
		(yyval.opt_order_clause_t) = (yyvsp[0].opt_order_clause_t);
		MERGE_LEFT_COMMENT((yyval.opt_order_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 5589 "bison_parser.cpp"
    break;

  case 148: /* opt_order_clause: opt_order_clause comment_literal  */
#line 1409 "bison.y"
                                            {
		(yyval.opt_order_clause_t) = (yyvsp[-1].opt_order_clause_t);
		(yyval.opt_order_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5598 "bison_parser.cpp"
    break;

  case 149: /* opt_order_nulls: NULLS FIRST  */
#line 1416 "bison.y"
                     {
		(yyval.opt_order_nulls_t) = new OptOrderNulls();
		(yyval.opt_order_nulls_t)->case_idx_ = CASE0;
		
	}
#line 5608 "bison_parser.cpp"
    break;

  case 150: /* opt_order_nulls: NULLS LAST  */
#line 1421 "bison.y"
                    {
		(yyval.opt_order_nulls_t) = new OptOrderNulls();
		(yyval.opt_order_nulls_t)->case_idx_ = CASE1;
		
	}
#line 5618 "bison_parser.cpp"
    break;

  case 151: /* opt_order_nulls: %empty  */
#line 1426 "bison.y"
          {
		(yyval.opt_order_nulls_t) = new OptOrderNulls();
		(yyval.opt_order_nulls_t)->case_idx_ = CASE2;
		
	}
#line 5628 "bison_parser.cpp"
    break;

  case 152: /* opt_order_nulls: comment_literal opt_order_nulls  */
#line 1431 "bison.y"
                                          {
		(yyval.opt_order_nulls_t) = (yyvsp[0].opt_order_nulls_t);
		MERGE_LEFT_COMMENT((yyval.opt_order_nulls_t), (yyvsp[-1].comment_literal_t));
	}
#line 5637 "bison_parser.cpp"
    break;

  case 153: /* opt_order_nulls: opt_order_nulls comment_literal  */
#line 1435 "bison.y"
                                           {
		(yyval.opt_order_nulls_t) = (yyvsp[-1].opt_order_nulls_t);
		(yyval.opt_order_nulls_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5646 "bison_parser.cpp"
    break;

  case 154: /* order_item_list: order_item  */
#line 1442 "bison.y"
                    {
		(yyval.order_item_list_t) = new OrderItemList();
		(yyval.order_item_list_t)->case_idx_ = CASE0;
		(yyval.order_item_list_t)->order_item_ = (yyvsp[0].order_item_t);
		
	}
#line 5657 "bison_parser.cpp"
    break;

  case 155: /* order_item_list: order_item OP_COMMA order_item_list  */
#line 1448 "bison.y"
                                             {
		(yyval.order_item_list_t) = new OrderItemList();
		(yyval.order_item_list_t)->case_idx_ = CASE1;
		(yyval.order_item_list_t)->order_item_ = (yyvsp[-2].order_item_t);
		(yyval.order_item_list_t)->order_item_list_ = (yyvsp[0].order_item_list_t);
		
	}
#line 5669 "bison_parser.cpp"
    break;

  case 156: /* order_item: expr opt_order_behavior opt_order_nulls  */
#line 1458 "bison.y"
                                                 {
		(yyval.order_item_t) = new OrderItem();
		(yyval.order_item_t)->case_idx_ = CASE0;
		(yyval.order_item_t)->expr_ = (yyvsp[-2].expr_t);
		(yyval.order_item_t)->opt_order_behavior_ = (yyvsp[-1].opt_order_behavior_t);
		(yyval.order_item_t)->opt_order_nulls_ = (yyvsp[0].opt_order_nulls_t);
		
	}
#line 5682 "bison_parser.cpp"
    break;

  case 157: /* opt_order_behavior: ASC  */
#line 1469 "bison.y"
             {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE0;
		
	}
#line 5692 "bison_parser.cpp"
    break;

  case 158: /* opt_order_behavior: DESC  */
#line 1474 "bison.y"
              {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE1;
		
	}
#line 5702 "bison_parser.cpp"
    break;

  case 159: /* opt_order_behavior: %empty  */
#line 1479 "bison.y"
          {
		(yyval.opt_order_behavior_t) = new OptOrderBehavior();
		(yyval.opt_order_behavior_t)->case_idx_ = CASE2;
		
	}
#line 5712 "bison_parser.cpp"
    break;

  case 160: /* opt_order_behavior: comment_literal opt_order_behavior  */
#line 1484 "bison.y"
                                             {
		(yyval.opt_order_behavior_t) = (yyvsp[0].opt_order_behavior_t);
		MERGE_LEFT_COMMENT((yyval.opt_order_behavior_t), (yyvsp[-1].comment_literal_t));
	}
#line 5721 "bison_parser.cpp"
    break;

  case 161: /* opt_order_behavior: opt_order_behavior comment_literal  */
#line 1488 "bison.y"
                                              {
		(yyval.opt_order_behavior_t) = (yyvsp[-1].opt_order_behavior_t);
		(yyval.opt_order_behavior_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5730 "bison_parser.cpp"
    break;

  case 162: /* opt_with_clause: WITH cte_table_list  */
#line 1495 "bison.y"
                             {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE0;
		(yyval.opt_with_clause_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
		
	}
#line 5741 "bison_parser.cpp"
    break;

  case 163: /* opt_with_clause: WITH RECURSIVE cte_table_list  */
#line 1501 "bison.y"
                                       {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE1;
		(yyval.opt_with_clause_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
		
	}
#line 5752 "bison_parser.cpp"
    break;

  case 164: /* opt_with_clause: %empty  */
#line 1507 "bison.y"
          {
		(yyval.opt_with_clause_t) = new OptWithClause();
		(yyval.opt_with_clause_t)->case_idx_ = CASE2;
		
	}
#line 5762 "bison_parser.cpp"
    break;

  case 165: /* opt_with_clause: comment_literal opt_with_clause  */
#line 1512 "bison.y"
                                          {
		(yyval.opt_with_clause_t) = (yyvsp[0].opt_with_clause_t);
		MERGE_LEFT_COMMENT((yyval.opt_with_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 5771 "bison_parser.cpp"
    break;

  case 166: /* opt_with_clause: opt_with_clause comment_literal  */
#line 1516 "bison.y"
                                           {
		(yyval.opt_with_clause_t) = (yyvsp[-1].opt_with_clause_t);
		(yyval.opt_with_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5780 "bison_parser.cpp"
    break;

  case 167: /* cte_table_list: cte_table  */
#line 1523 "bison.y"
                   {
		(yyval.cte_table_list_t) = new CteTableList();
		(yyval.cte_table_list_t)->case_idx_ = CASE0;
		(yyval.cte_table_list_t)->cte_table_ = (yyvsp[0].cte_table_t);
		
	}
#line 5791 "bison_parser.cpp"
    break;

  case 168: /* cte_table_list: cte_table OP_COMMA cte_table_list  */
#line 1529 "bison.y"
                                           {
		(yyval.cte_table_list_t) = new CteTableList();
		(yyval.cte_table_list_t)->case_idx_ = CASE1;
		(yyval.cte_table_list_t)->cte_table_ = (yyvsp[-2].cte_table_t);
		(yyval.cte_table_list_t)->cte_table_list_ = (yyvsp[0].cte_table_list_t);
		
	}
#line 5803 "bison_parser.cpp"
    break;

  case 169: /* cte_table: cte_table_name AS OP_LP select_stmt OP_RP  */
#line 1539 "bison.y"
                                                   {
		(yyval.cte_table_t) = new CteTable();
		(yyval.cte_table_t)->case_idx_ = CASE0;
		(yyval.cte_table_t)->cte_table_name_ = (yyvsp[-4].cte_table_name_t);
		(yyval.cte_table_t)->select_stmt_ = (yyvsp[-1].select_stmt_t);
		
	}
#line 5815 "bison_parser.cpp"
    break;

  case 170: /* cte_table: comment_literal cte_table  */
#line 1546 "bison.y"
                                    {
		(yyval.cte_table_t) = (yyvsp[0].cte_table_t);
		MERGE_LEFT_COMMENT((yyval.cte_table_t), (yyvsp[-1].comment_literal_t));
	}
#line 5824 "bison_parser.cpp"
    break;

  case 171: /* cte_table: cte_table comment_literal  */
#line 1550 "bison.y"
                                     {
		(yyval.cte_table_t) = (yyvsp[-1].cte_table_t);
		(yyval.cte_table_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5833 "bison_parser.cpp"
    break;

  case 172: /* cte_table_name: table_name opt_column_name_list_p  */
#line 1557 "bison.y"
                                           {
		(yyval.cte_table_name_t) = new CteTableName();
		(yyval.cte_table_name_t)->case_idx_ = CASE0;
		(yyval.cte_table_name_t)->table_name_ = (yyvsp[-1].table_name_t);
		(yyval.cte_table_name_t)->opt_column_name_list_p_ = (yyvsp[0].opt_column_name_list_p_t);
		
	}
#line 5845 "bison_parser.cpp"
    break;

  case 173: /* opt_all_or_distinct: ALL  */
#line 1567 "bison.y"
             {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE0;
		
	}
#line 5855 "bison_parser.cpp"
    break;

  case 174: /* opt_all_or_distinct: DISTINCT  */
#line 1572 "bison.y"
                  {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE1;
		
	}
#line 5865 "bison_parser.cpp"
    break;

  case 175: /* opt_all_or_distinct: %empty  */
#line 1577 "bison.y"
          {
		(yyval.opt_all_or_distinct_t) = new OptAllOrDistinct();
		(yyval.opt_all_or_distinct_t)->case_idx_ = CASE2;
		
	}
#line 5875 "bison_parser.cpp"
    break;

  case 176: /* opt_all_or_distinct: comment_literal opt_all_or_distinct  */
#line 1582 "bison.y"
                                              {
		(yyval.opt_all_or_distinct_t) = (yyvsp[0].opt_all_or_distinct_t);
		MERGE_LEFT_COMMENT((yyval.opt_all_or_distinct_t), (yyvsp[-1].comment_literal_t));
	}
#line 5884 "bison_parser.cpp"
    break;

  case 177: /* opt_all_or_distinct: opt_all_or_distinct comment_literal  */
#line 1586 "bison.y"
                                               {
		(yyval.opt_all_or_distinct_t) = (yyvsp[-1].opt_all_or_distinct_t);
		(yyval.opt_all_or_distinct_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5893 "bison_parser.cpp"
    break;

  case 178: /* create_table_stmt: CREATE opt_temp TABLE opt_if_not_exist table_name opt_table_option_list opt_ignore_or_replace AS select_stmt  */
#line 1593 "bison.y"
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
					tmp2->data_flag_ =(DATAFLAG)128; 
				}
			}
		}


	}
#line 5921 "bison_parser.cpp"
    break;

  case 179: /* create_table_stmt: CREATE opt_temp TABLE opt_if_not_exist table_name OP_LP column_def_list opt_table_constraint_list OP_RP opt_table_option_list  */
#line 1616 "bison.y"
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
#line 5965 "bison_parser.cpp"
    break;

  case 180: /* create_table_stmt: comment_literal create_table_stmt  */
#line 1655 "bison.y"
                                            {
		(yyval.create_table_stmt_t) = (yyvsp[0].create_table_stmt_t);
		MERGE_LEFT_COMMENT((yyval.create_table_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 5974 "bison_parser.cpp"
    break;

  case 181: /* create_table_stmt: create_table_stmt comment_literal  */
#line 1659 "bison.y"
                                             {
		(yyval.create_table_stmt_t) = (yyvsp[-1].create_table_stmt_t);
		(yyval.create_table_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 5983 "bison_parser.cpp"
    break;

  case 182: /* create_index_stmt: CREATE opt_index_keyword INDEX table_name ON table_name OP_LP indexed_column_list OP_RP opt_index_option opt_extra_option  */
#line 1666 "bison.y"
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
#line 6021 "bison_parser.cpp"
    break;

  case 183: /* create_index_stmt: comment_literal create_index_stmt  */
#line 1699 "bison.y"
                                            {
		(yyval.create_index_stmt_t) = (yyvsp[0].create_index_stmt_t);
		MERGE_LEFT_COMMENT((yyval.create_index_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 6030 "bison_parser.cpp"
    break;

  case 184: /* create_index_stmt: create_index_stmt comment_literal  */
#line 1703 "bison.y"
                                             {
		(yyval.create_index_stmt_t) = (yyvsp[-1].create_index_stmt_t);
		(yyval.create_index_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6039 "bison_parser.cpp"
    break;

  case 185: /* create_trigger_stmt: CREATE TRIGGER trigger_name trigger_action_time trigger_events ON table_name FOR EACH ROW trigger_body  */
#line 1710 "bison.y"
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
#line 6076 "bison_parser.cpp"
    break;

  case 186: /* create_trigger_stmt: comment_literal create_trigger_stmt  */
#line 1742 "bison.y"
                                              {
		(yyval.create_trigger_stmt_t) = (yyvsp[0].create_trigger_stmt_t);
		MERGE_LEFT_COMMENT((yyval.create_trigger_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 6085 "bison_parser.cpp"
    break;

  case 187: /* create_trigger_stmt: create_trigger_stmt comment_literal  */
#line 1746 "bison.y"
                                               {
		(yyval.create_trigger_stmt_t) = (yyvsp[-1].create_trigger_stmt_t);
		(yyval.create_trigger_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6094 "bison_parser.cpp"
    break;

  case 188: /* create_view_stmt: CREATE opt_view_algorithm opt_sql_security VIEW view_name opt_column_name_list_p AS select_stmt opt_check_option  */
#line 1753 "bison.y"
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
#line 6141 "bison_parser.cpp"
    break;

  case 189: /* create_view_stmt: CREATE OR REPLACE opt_view_algorithm opt_sql_security VIEW view_name opt_column_name_list_p AS select_stmt opt_check_option  */
#line 1795 "bison.y"
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
#line 6188 "bison_parser.cpp"
    break;

  case 190: /* create_view_stmt: comment_literal create_view_stmt  */
#line 1837 "bison.y"
                                           {
		(yyval.create_view_stmt_t) = (yyvsp[0].create_view_stmt_t);
		MERGE_LEFT_COMMENT((yyval.create_view_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 6197 "bison_parser.cpp"
    break;

  case 191: /* create_view_stmt: create_view_stmt comment_literal  */
#line 1841 "bison.y"
                                            {
		(yyval.create_view_stmt_t) = (yyvsp[-1].create_view_stmt_t);
		(yyval.create_view_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6206 "bison_parser.cpp"
    break;

  case 192: /* opt_table_option_list: table_option_list  */
#line 1848 "bison.y"
                           {
		(yyval.opt_table_option_list_t) = new OptTableOptionList();
		(yyval.opt_table_option_list_t)->case_idx_ = CASE0;
		(yyval.opt_table_option_list_t)->table_option_list_ = (yyvsp[0].table_option_list_t);
		
	}
#line 6217 "bison_parser.cpp"
    break;

  case 193: /* opt_table_option_list: %empty  */
#line 1854 "bison.y"
          {
		// fprintf(stderr,"opt_table_option_list empty\n");
		(yyval.opt_table_option_list_t) = new OptTableOptionList();
		(yyval.opt_table_option_list_t)->case_idx_ = CASE1;
		
	}
#line 6228 "bison_parser.cpp"
    break;

  case 194: /* opt_table_option_list: comment_literal opt_table_option_list  */
#line 1860 "bison.y"
                                                {
		// TOFIX
		(yyval.opt_table_option_list_t) = (yyvsp[0].opt_table_option_list_t);
		// if($$->left_comment_!=NULL)std::cout<< "left_comment_ before" <<$$->left_comment_->to_string()<<std::endl;
		// if($$->left_comment_!=NULL){$$->left_comment_->string_vals_.insert($$->left_comment_->string_vals_.begin(),$1->string_vals_.begin(),$1->string_vals_.end());}
		// else {MERGE_LEFT_COMMENT($$, $1);}
		MERGE_LEFT_COMMENT((yyval.opt_table_option_list_t), (yyvsp[-1].comment_literal_t));
		// std::cout<< "left_comment_ after" <<$$->left_comment_->to_string()<<std::endl;
	}
#line 6242 "bison_parser.cpp"
    break;

  case 195: /* opt_table_option_list: opt_table_option_list comment_literal  */
#line 1869 "bison.y"
                                                 {
		(yyval.opt_table_option_list_t) = (yyvsp[-1].opt_table_option_list_t);
		(yyval.opt_table_option_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
		// std::cout<< "right_comment_" <<$$->right_comment_->to_string()<<std::endl;
	}
#line 6252 "bison_parser.cpp"
    break;

  case 196: /* table_option_list: table_option  */
#line 1877 "bison.y"
                      {
		(yyval.table_option_list_t) = new TableOptionList();
		(yyval.table_option_list_t)->case_idx_ = CASE0;
		(yyval.table_option_list_t)->table_option_ = (yyvsp[0].table_option_t);
		
	}
#line 6263 "bison_parser.cpp"
    break;

  case 197: /* table_option_list: table_option opt_op_comma table_option_list  */
#line 1883 "bison.y"
                                                     {
		(yyval.table_option_list_t) = new TableOptionList();
		(yyval.table_option_list_t)->case_idx_ = CASE1;
		(yyval.table_option_list_t)->table_option_ = (yyvsp[-2].table_option_t);
		(yyval.table_option_list_t)->opt_op_comma_ = (yyvsp[-1].opt_op_comma_t);
		(yyval.table_option_list_t)->table_option_list_ = (yyvsp[0].table_option_list_t);
		
	}
#line 6276 "bison_parser.cpp"
    break;

  case 198: /* table_option: INSERT_METHOD opt_op_equal NO  */
#line 1894 "bison.y"
                                       {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE0;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6287 "bison_parser.cpp"
    break;

  case 199: /* table_option: INSERT_METHOD opt_op_equal FIRST  */
#line 1900 "bison.y"
                                          {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE1;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6298 "bison_parser.cpp"
    break;

  case 200: /* table_option: INSERT_METHOD opt_op_equal LAST  */
#line 1906 "bison.y"
                                         {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE2;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6309 "bison_parser.cpp"
    break;

  case 201: /* table_option: ROW_FORMAT opt_op_equal DEFAULT  */
#line 1912 "bison.y"
                                         {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE3;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6320 "bison_parser.cpp"
    break;

  case 202: /* table_option: ROW_FORMAT opt_op_equal DYNAMIC  */
#line 1918 "bison.y"
                                         {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE4;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6331 "bison_parser.cpp"
    break;

  case 203: /* table_option: ROW_FORMAT opt_op_equal FIXED  */
#line 1924 "bison.y"
                                       {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE5;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6342 "bison_parser.cpp"
    break;

  case 204: /* table_option: ROW_FORMAT opt_op_equal COMPRESSED  */
#line 1930 "bison.y"
                                            {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE6;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6353 "bison_parser.cpp"
    break;

  case 205: /* table_option: ROW_FORMAT opt_op_equal REDUNDANT  */
#line 1936 "bison.y"
                                           {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE7;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6364 "bison_parser.cpp"
    break;

  case 206: /* table_option: ROW_FORMAT opt_op_equal COMPACT  */
#line 1942 "bison.y"
                                         {
		(yyval.table_option_t) = new TableOption();
		(yyval.table_option_t)->case_idx_ = CASE8;
		(yyval.table_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6375 "bison_parser.cpp"
    break;

  case 207: /* table_option: comment_literal table_option  */
#line 1948 "bison.y"
                                       {
		(yyval.table_option_t) = (yyvsp[0].table_option_t);
		MERGE_LEFT_COMMENT((yyval.table_option_t), (yyvsp[-1].comment_literal_t));
	}
#line 6384 "bison_parser.cpp"
    break;

  case 208: /* table_option: table_option comment_literal  */
#line 1952 "bison.y"
                                        {
		(yyval.table_option_t) = (yyvsp[-1].table_option_t);
		(yyval.table_option_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6393 "bison_parser.cpp"
    break;

  case 209: /* opt_op_comma: OP_COMMA  */
#line 1959 "bison.y"
                  {
		(yyval.opt_op_comma_t) = new OptOpComma();
		(yyval.opt_op_comma_t)->case_idx_ = CASE0;
		
	}
#line 6403 "bison_parser.cpp"
    break;

  case 210: /* opt_op_comma: %empty  */
#line 1964 "bison.y"
          {
		(yyval.opt_op_comma_t) = new OptOpComma();
		(yyval.opt_op_comma_t)->case_idx_ = CASE1;
		
	}
#line 6413 "bison_parser.cpp"
    break;

  case 211: /* opt_op_comma: comment_literal opt_op_comma  */
#line 1969 "bison.y"
                                       {
		(yyval.opt_op_comma_t) = (yyvsp[0].opt_op_comma_t);
		MERGE_LEFT_COMMENT((yyval.opt_op_comma_t), (yyvsp[-1].comment_literal_t));
	}
#line 6422 "bison_parser.cpp"
    break;

  case 212: /* opt_op_comma: opt_op_comma comment_literal  */
#line 1973 "bison.y"
                                        {
		(yyval.opt_op_comma_t) = (yyvsp[-1].opt_op_comma_t);
		(yyval.opt_op_comma_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6431 "bison_parser.cpp"
    break;

  case 213: /* opt_ignore_or_replace: IGNORE  */
#line 1980 "bison.y"
                {
		(yyval.opt_ignore_or_replace_t) = new OptIgnoreOrReplace();
		(yyval.opt_ignore_or_replace_t)->case_idx_ = CASE0;
		
	}
#line 6441 "bison_parser.cpp"
    break;

  case 214: /* opt_ignore_or_replace: REPLACE  */
#line 1985 "bison.y"
                 {
		(yyval.opt_ignore_or_replace_t) = new OptIgnoreOrReplace();
		(yyval.opt_ignore_or_replace_t)->case_idx_ = CASE1;
		
	}
#line 6451 "bison_parser.cpp"
    break;

  case 215: /* opt_ignore_or_replace: %empty  */
#line 1990 "bison.y"
          {
		(yyval.opt_ignore_or_replace_t) = new OptIgnoreOrReplace();
		(yyval.opt_ignore_or_replace_t)->case_idx_ = CASE2;
		
	}
#line 6461 "bison_parser.cpp"
    break;

  case 216: /* opt_ignore_or_replace: comment_literal opt_ignore_or_replace  */
#line 1995 "bison.y"
                                                {
		(yyval.opt_ignore_or_replace_t) = (yyvsp[0].opt_ignore_or_replace_t);
		MERGE_LEFT_COMMENT((yyval.opt_ignore_or_replace_t), (yyvsp[-1].comment_literal_t));
	}
#line 6470 "bison_parser.cpp"
    break;

  case 217: /* opt_ignore_or_replace: opt_ignore_or_replace comment_literal  */
#line 1999 "bison.y"
                                                 {
		(yyval.opt_ignore_or_replace_t) = (yyvsp[-1].opt_ignore_or_replace_t);
		(yyval.opt_ignore_or_replace_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6479 "bison_parser.cpp"
    break;

  case 218: /* opt_view_algorithm: ALGORITHM OP_EQUAL UNDEFINED  */
#line 2006 "bison.y"
                                      {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE0;
		
	}
#line 6489 "bison_parser.cpp"
    break;

  case 219: /* opt_view_algorithm: ALGORITHM OP_EQUAL MERGE  */
#line 2011 "bison.y"
                                  {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE1;
		
	}
#line 6499 "bison_parser.cpp"
    break;

  case 220: /* opt_view_algorithm: ALGORITHM OP_EQUAL TEMPTABLE  */
#line 2016 "bison.y"
                                      {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE2;
		
	}
#line 6509 "bison_parser.cpp"
    break;

  case 221: /* opt_view_algorithm: %empty  */
#line 2021 "bison.y"
          {
		(yyval.opt_view_algorithm_t) = new OptViewAlgorithm();
		(yyval.opt_view_algorithm_t)->case_idx_ = CASE3;
		
	}
#line 6519 "bison_parser.cpp"
    break;

  case 222: /* opt_view_algorithm: comment_literal opt_view_algorithm  */
#line 2026 "bison.y"
                                             {
		(yyval.opt_view_algorithm_t) = (yyvsp[0].opt_view_algorithm_t);
		MERGE_LEFT_COMMENT((yyval.opt_view_algorithm_t), (yyvsp[-1].comment_literal_t));
	}
#line 6528 "bison_parser.cpp"
    break;

  case 223: /* opt_view_algorithm: opt_view_algorithm comment_literal  */
#line 2030 "bison.y"
                                              {
		(yyval.opt_view_algorithm_t) = (yyvsp[-1].opt_view_algorithm_t);
		(yyval.opt_view_algorithm_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6537 "bison_parser.cpp"
    break;

  case 224: /* opt_sql_security: SQL SECURITY DEFINER  */
#line 2037 "bison.y"
                              {
		(yyval.opt_sql_security_t) = new OptSqlSecurity();
		(yyval.opt_sql_security_t)->case_idx_ = CASE0;
		
	}
#line 6547 "bison_parser.cpp"
    break;

  case 225: /* opt_sql_security: SQL SECURITY INVOKER  */
#line 2042 "bison.y"
                              {
		(yyval.opt_sql_security_t) = new OptSqlSecurity();
		(yyval.opt_sql_security_t)->case_idx_ = CASE1;
		
	}
#line 6557 "bison_parser.cpp"
    break;

  case 226: /* opt_sql_security: %empty  */
#line 2047 "bison.y"
          {
		(yyval.opt_sql_security_t) = new OptSqlSecurity();
		(yyval.opt_sql_security_t)->case_idx_ = CASE2;
		
	}
#line 6567 "bison_parser.cpp"
    break;

  case 227: /* opt_sql_security: comment_literal opt_sql_security  */
#line 2052 "bison.y"
                                           {
		(yyval.opt_sql_security_t) = (yyvsp[0].opt_sql_security_t);
		MERGE_LEFT_COMMENT((yyval.opt_sql_security_t), (yyvsp[-1].comment_literal_t));
	}
#line 6576 "bison_parser.cpp"
    break;

  case 228: /* opt_sql_security: opt_sql_security comment_literal  */
#line 2056 "bison.y"
                                            {
		(yyval.opt_sql_security_t) = (yyvsp[-1].opt_sql_security_t);
		(yyval.opt_sql_security_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6585 "bison_parser.cpp"
    break;

  case 229: /* opt_index_option: USING BTREE  */
#line 2063 "bison.y"
                     {
		(yyval.opt_index_option_t) = new OptIndexOption();
		(yyval.opt_index_option_t)->case_idx_ = CASE0;
		
	}
#line 6595 "bison_parser.cpp"
    break;

  case 230: /* opt_index_option: USING HASH  */
#line 2068 "bison.y"
                    {
		(yyval.opt_index_option_t) = new OptIndexOption();
		(yyval.opt_index_option_t)->case_idx_ = CASE1;
		
	}
#line 6605 "bison_parser.cpp"
    break;

  case 231: /* opt_index_option: %empty  */
#line 2073 "bison.y"
          {
		(yyval.opt_index_option_t) = new OptIndexOption();
		(yyval.opt_index_option_t)->case_idx_ = CASE2;
		
	}
#line 6615 "bison_parser.cpp"
    break;

  case 232: /* opt_index_option: comment_literal opt_index_option  */
#line 2078 "bison.y"
                                           {
		(yyval.opt_index_option_t) = (yyvsp[0].opt_index_option_t);
		MERGE_LEFT_COMMENT((yyval.opt_index_option_t), (yyvsp[-1].comment_literal_t));
	}
#line 6624 "bison_parser.cpp"
    break;

  case 233: /* opt_index_option: opt_index_option comment_literal  */
#line 2082 "bison.y"
                                            {
		(yyval.opt_index_option_t) = (yyvsp[-1].opt_index_option_t);
		(yyval.opt_index_option_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6633 "bison_parser.cpp"
    break;

  case 234: /* opt_extra_option: index_algorithm_option  */
#line 2089 "bison.y"
                                {
		(yyval.opt_extra_option_t) = new OptExtraOption();
		(yyval.opt_extra_option_t)->case_idx_ = CASE0;
		(yyval.opt_extra_option_t)->index_algorithm_option_ = (yyvsp[0].index_algorithm_option_t);
		
	}
#line 6644 "bison_parser.cpp"
    break;

  case 235: /* opt_extra_option: lock_option  */
#line 2095 "bison.y"
                     {
		(yyval.opt_extra_option_t) = new OptExtraOption();
		(yyval.opt_extra_option_t)->case_idx_ = CASE1;
		(yyval.opt_extra_option_t)->lock_option_ = (yyvsp[0].lock_option_t);
		
	}
#line 6655 "bison_parser.cpp"
    break;

  case 236: /* opt_extra_option: %empty  */
#line 2101 "bison.y"
          {
		(yyval.opt_extra_option_t) = new OptExtraOption();
		(yyval.opt_extra_option_t)->case_idx_ = CASE2;
		
	}
#line 6665 "bison_parser.cpp"
    break;

  case 237: /* index_algorithm_option: ALGORITHM opt_op_equal DEFAULT  */
#line 2109 "bison.y"
                                        {
		(yyval.index_algorithm_option_t) = new IndexAlgorithmOption();
		(yyval.index_algorithm_option_t)->case_idx_ = CASE0;
		(yyval.index_algorithm_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6676 "bison_parser.cpp"
    break;

  case 238: /* index_algorithm_option: ALGORITHM opt_op_equal INPLACE  */
#line 2115 "bison.y"
                                        {
		(yyval.index_algorithm_option_t) = new IndexAlgorithmOption();
		(yyval.index_algorithm_option_t)->case_idx_ = CASE1;
		(yyval.index_algorithm_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6687 "bison_parser.cpp"
    break;

  case 239: /* index_algorithm_option: ALGORITHM opt_op_equal COPY  */
#line 2121 "bison.y"
                                     {
		(yyval.index_algorithm_option_t) = new IndexAlgorithmOption();
		(yyval.index_algorithm_option_t)->case_idx_ = CASE2;
		(yyval.index_algorithm_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6698 "bison_parser.cpp"
    break;

  case 240: /* index_algorithm_option: comment_literal index_algorithm_option  */
#line 2127 "bison.y"
                                                 {
		(yyval.index_algorithm_option_t) = (yyvsp[0].index_algorithm_option_t);
		MERGE_LEFT_COMMENT((yyval.index_algorithm_option_t), (yyvsp[-1].comment_literal_t));
	}
#line 6707 "bison_parser.cpp"
    break;

  case 241: /* index_algorithm_option: index_algorithm_option comment_literal  */
#line 2131 "bison.y"
                                                  {
		(yyval.index_algorithm_option_t) = (yyvsp[-1].index_algorithm_option_t);
		(yyval.index_algorithm_option_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6716 "bison_parser.cpp"
    break;

  case 242: /* lock_option: LOCK opt_op_equal DEFAULT  */
#line 2138 "bison.y"
                                   {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE0;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6727 "bison_parser.cpp"
    break;

  case 243: /* lock_option: LOCK opt_op_equal NONE  */
#line 2144 "bison.y"
                                {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE1;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6738 "bison_parser.cpp"
    break;

  case 244: /* lock_option: LOCK opt_op_equal SHARED  */
#line 2150 "bison.y"
                                  {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE2;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6749 "bison_parser.cpp"
    break;

  case 245: /* lock_option: LOCK opt_op_equal EXCLUSIVE  */
#line 2156 "bison.y"
                                     {
		(yyval.lock_option_t) = new LockOption();
		(yyval.lock_option_t)->case_idx_ = CASE3;
		(yyval.lock_option_t)->opt_op_equal_ = (yyvsp[-1].opt_op_equal_t);
		
	}
#line 6760 "bison_parser.cpp"
    break;

  case 246: /* lock_option: comment_literal lock_option  */
#line 2162 "bison.y"
                                      {
		(yyval.lock_option_t) = (yyvsp[0].lock_option_t);
		MERGE_LEFT_COMMENT((yyval.lock_option_t), (yyvsp[-1].comment_literal_t));
	}
#line 6769 "bison_parser.cpp"
    break;

  case 247: /* lock_option: lock_option comment_literal  */
#line 2166 "bison.y"
                                       {
		(yyval.lock_option_t) = (yyvsp[-1].lock_option_t);
		(yyval.lock_option_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6778 "bison_parser.cpp"
    break;

  case 248: /* opt_op_equal: OP_EQUAL  */
#line 2173 "bison.y"
                  {
		(yyval.opt_op_equal_t) = new OptOpEqual();
		(yyval.opt_op_equal_t)->case_idx_ = CASE0;
		
	}
#line 6788 "bison_parser.cpp"
    break;

  case 249: /* opt_op_equal: %empty  */
#line 2178 "bison.y"
          {
		(yyval.opt_op_equal_t) = new OptOpEqual();
		(yyval.opt_op_equal_t)->case_idx_ = CASE1;
		
	}
#line 6798 "bison_parser.cpp"
    break;

  case 250: /* opt_op_equal: comment_literal opt_op_equal  */
#line 2183 "bison.y"
                                       {
		(yyval.opt_op_equal_t) = (yyvsp[0].opt_op_equal_t);
		MERGE_LEFT_COMMENT((yyval.opt_op_equal_t), (yyvsp[-1].comment_literal_t));
	}
#line 6807 "bison_parser.cpp"
    break;

  case 251: /* opt_op_equal: opt_op_equal comment_literal  */
#line 2187 "bison.y"
                                        {
		(yyval.opt_op_equal_t) = (yyvsp[-1].opt_op_equal_t);
		(yyval.opt_op_equal_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6816 "bison_parser.cpp"
    break;

  case 252: /* trigger_events: DELETE  */
#line 2194 "bison.y"
                {
		(yyval.trigger_events_t) = new TriggerEvents();
		(yyval.trigger_events_t)->case_idx_ = CASE0;
		
	}
#line 6826 "bison_parser.cpp"
    break;

  case 253: /* trigger_events: INSERT  */
#line 2199 "bison.y"
                {
		(yyval.trigger_events_t) = new TriggerEvents();
		(yyval.trigger_events_t)->case_idx_ = CASE1;
		
	}
#line 6836 "bison_parser.cpp"
    break;

  case 254: /* trigger_events: UPDATE  */
#line 2204 "bison.y"
                {
		(yyval.trigger_events_t) = new TriggerEvents();
		(yyval.trigger_events_t)->case_idx_ = CASE2;
		
	}
#line 6846 "bison_parser.cpp"
    break;

  case 255: /* trigger_events: comment_literal trigger_events  */
#line 2209 "bison.y"
                                         {
		(yyval.trigger_events_t) = (yyvsp[0].trigger_events_t);
		MERGE_LEFT_COMMENT((yyval.trigger_events_t), (yyvsp[-1].comment_literal_t));
	}
#line 6855 "bison_parser.cpp"
    break;

  case 256: /* trigger_events: trigger_events comment_literal  */
#line 2213 "bison.y"
                                          {
		(yyval.trigger_events_t) = (yyvsp[-1].trigger_events_t);
		(yyval.trigger_events_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6864 "bison_parser.cpp"
    break;

  case 257: /* trigger_name: identifier  */
#line 2220 "bison.y"
                    {
		(yyval.trigger_name_t) = new TriggerName();
		(yyval.trigger_name_t)->case_idx_ = CASE0;
		(yyval.trigger_name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 6875 "bison_parser.cpp"
    break;

  case 258: /* trigger_action_time: BEFORE  */
#line 2229 "bison.y"
                {
		(yyval.trigger_action_time_t) = new TriggerActionTime();
		(yyval.trigger_action_time_t)->case_idx_ = CASE0;
		
	}
#line 6885 "bison_parser.cpp"
    break;

  case 259: /* trigger_action_time: AFTER  */
#line 2234 "bison.y"
               {
		(yyval.trigger_action_time_t) = new TriggerActionTime();
		(yyval.trigger_action_time_t)->case_idx_ = CASE1;
		
	}
#line 6895 "bison_parser.cpp"
    break;

  case 260: /* trigger_action_time: comment_literal trigger_action_time  */
#line 2239 "bison.y"
                                              {
		(yyval.trigger_action_time_t) = (yyvsp[0].trigger_action_time_t);
		MERGE_LEFT_COMMENT((yyval.trigger_action_time_t), (yyvsp[-1].comment_literal_t));
	}
#line 6904 "bison_parser.cpp"
    break;

  case 261: /* trigger_action_time: trigger_action_time comment_literal  */
#line 2243 "bison.y"
                                               {
		(yyval.trigger_action_time_t) = (yyvsp[-1].trigger_action_time_t);
		(yyval.trigger_action_time_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6913 "bison_parser.cpp"
    break;

  case 262: /* drop_index_stmt: DROP INDEX table_name opt_extra_option  */
#line 2250 "bison.y"
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
#line 6935 "bison_parser.cpp"
    break;

  case 263: /* drop_index_stmt: comment_literal drop_index_stmt  */
#line 2267 "bison.y"
                                          {
		(yyval.drop_index_stmt_t) = (yyvsp[0].drop_index_stmt_t);
		MERGE_LEFT_COMMENT((yyval.drop_index_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 6944 "bison_parser.cpp"
    break;

  case 264: /* drop_index_stmt: drop_index_stmt comment_literal  */
#line 2271 "bison.y"
                                           {
		(yyval.drop_index_stmt_t) = (yyvsp[-1].drop_index_stmt_t);
		(yyval.drop_index_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6953 "bison_parser.cpp"
    break;

  case 265: /* drop_table_stmt: DROP opt_temp TABLE opt_if_exist table_name opt_restrict_or_cascade  */
#line 2278 "bison.y"
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
#line 6979 "bison_parser.cpp"
    break;

  case 266: /* drop_table_stmt: comment_literal drop_table_stmt  */
#line 2299 "bison.y"
                                          {
		(yyval.drop_table_stmt_t) = (yyvsp[0].drop_table_stmt_t);
		MERGE_LEFT_COMMENT((yyval.drop_table_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 6988 "bison_parser.cpp"
    break;

  case 267: /* drop_table_stmt: drop_table_stmt comment_literal  */
#line 2303 "bison.y"
                                           {
		(yyval.drop_table_stmt_t) = (yyvsp[-1].drop_table_stmt_t);
		(yyval.drop_table_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 6997 "bison_parser.cpp"
    break;

  case 268: /* opt_restrict_or_cascade: RESTRICT  */
#line 2310 "bison.y"
                  {
		(yyval.opt_restrict_or_cascade_t) = new OptRestrictOrCascade();
		(yyval.opt_restrict_or_cascade_t)->case_idx_ = CASE0;
		
	}
#line 7007 "bison_parser.cpp"
    break;

  case 269: /* opt_restrict_or_cascade: CASCADE  */
#line 2315 "bison.y"
                 {
		(yyval.opt_restrict_or_cascade_t) = new OptRestrictOrCascade();
		(yyval.opt_restrict_or_cascade_t)->case_idx_ = CASE1;
		
	}
#line 7017 "bison_parser.cpp"
    break;

  case 270: /* opt_restrict_or_cascade: %empty  */
#line 2320 "bison.y"
          {
		(yyval.opt_restrict_or_cascade_t) = new OptRestrictOrCascade();
		(yyval.opt_restrict_or_cascade_t)->case_idx_ = CASE2;
		
	}
#line 7027 "bison_parser.cpp"
    break;

  case 271: /* opt_restrict_or_cascade: comment_literal opt_restrict_or_cascade  */
#line 2325 "bison.y"
                                                  {
		(yyval.opt_restrict_or_cascade_t) = (yyvsp[0].opt_restrict_or_cascade_t);
		MERGE_LEFT_COMMENT((yyval.opt_restrict_or_cascade_t), (yyvsp[-1].comment_literal_t));
	}
#line 7036 "bison_parser.cpp"
    break;

  case 272: /* opt_restrict_or_cascade: opt_restrict_or_cascade comment_literal  */
#line 2329 "bison.y"
                                                   {
		(yyval.opt_restrict_or_cascade_t) = (yyvsp[-1].opt_restrict_or_cascade_t);
		(yyval.opt_restrict_or_cascade_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7045 "bison_parser.cpp"
    break;

  case 273: /* drop_trigger_stmt: DROP TRIGGER opt_if_exist trigger_name  */
#line 2336 "bison.y"
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
#line 7067 "bison_parser.cpp"
    break;

  case 274: /* drop_trigger_stmt: comment_literal drop_trigger_stmt  */
#line 2353 "bison.y"
                                            {
		(yyval.drop_trigger_stmt_t) = (yyvsp[0].drop_trigger_stmt_t);
		MERGE_LEFT_COMMENT((yyval.drop_trigger_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 7076 "bison_parser.cpp"
    break;

  case 275: /* drop_trigger_stmt: drop_trigger_stmt comment_literal  */
#line 2357 "bison.y"
                                             {
		(yyval.drop_trigger_stmt_t) = (yyvsp[-1].drop_trigger_stmt_t);
		(yyval.drop_trigger_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7085 "bison_parser.cpp"
    break;

  case 276: /* drop_view_stmt: DROP VIEW opt_if_exist view_name opt_restrict_or_cascade  */
#line 2364 "bison.y"
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
#line 7110 "bison_parser.cpp"
    break;

  case 277: /* drop_view_stmt: comment_literal drop_view_stmt  */
#line 2384 "bison.y"
                                         {
		(yyval.drop_view_stmt_t) = (yyvsp[0].drop_view_stmt_t);
		MERGE_LEFT_COMMENT((yyval.drop_view_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 7119 "bison_parser.cpp"
    break;

  case 278: /* drop_view_stmt: drop_view_stmt comment_literal  */
#line 2388 "bison.y"
                                          {
		(yyval.drop_view_stmt_t) = (yyvsp[-1].drop_view_stmt_t);
		(yyval.drop_view_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7128 "bison_parser.cpp"
    break;

  case 279: /* insert_stmt: opt_with_clause INSERT INTO table_name opt_as_alias insert_rest opt_on_conflict  */
#line 2395 "bison.y"
                                                                                         {
		(yyval.insert_stmt_t) = new InsertStmt();
		(yyval.insert_stmt_t)->case_idx_ = CASE0;
		(yyval.insert_stmt_t)->opt_with_clause_ = (yyvsp[-6].opt_with_clause_t);
		(yyval.insert_stmt_t)->table_name_ = (yyvsp[-3].table_name_t);
		(yyval.insert_stmt_t)->opt_as_alias_ = (yyvsp[-2].opt_as_alias_t);
		(yyval.insert_stmt_t)->insert_rest_ = (yyvsp[-1].insert_rest_t);
		(yyval.insert_stmt_t)->opt_on_conflict_ = (yyvsp[0].opt_on_conflict_t);
		
	}
#line 7143 "bison_parser.cpp"
    break;

  case 280: /* insert_rest: opt_column_name_list_p select_no_parens  */
#line 2408 "bison.y"
                                                 {
		(yyval.insert_rest_t) = new InsertRest();
		(yyval.insert_rest_t)->case_idx_ = CASE0;
		(yyval.insert_rest_t)->opt_column_name_list_p_ = (yyvsp[-1].opt_column_name_list_p_t);
		(yyval.insert_rest_t)->select_no_parens_ = (yyvsp[0].select_no_parens_t);
		
	}
#line 7155 "bison_parser.cpp"
    break;

  case 281: /* insert_rest: opt_column_name_list_p DEFAULT VALUES  */
#line 2415 "bison.y"
                                               {
		(yyval.insert_rest_t) = new InsertRest();
		(yyval.insert_rest_t)->case_idx_ = CASE1;
		(yyval.insert_rest_t)->opt_column_name_list_p_ = (yyvsp[-2].opt_column_name_list_p_t);
		
	}
#line 7166 "bison_parser.cpp"
    break;

  case 282: /* insert_rest: opt_column_name_list_p VALUES super_values_list  */
#line 2421 "bison.y"
                                                         {
		(yyval.insert_rest_t) = new InsertRest();
		(yyval.insert_rest_t)->case_idx_ = CASE2;
		(yyval.insert_rest_t)->opt_column_name_list_p_ = (yyvsp[-2].opt_column_name_list_p_t);
		(yyval.insert_rest_t)->super_values_list_ = (yyvsp[0].super_values_list_t);
		
	}
#line 7178 "bison_parser.cpp"
    break;

  case 283: /* insert_rest: comment_literal insert_rest  */
#line 2428 "bison.y"
                                      {
		(yyval.insert_rest_t) = (yyvsp[0].insert_rest_t);
		MERGE_LEFT_COMMENT((yyval.insert_rest_t), (yyvsp[-1].comment_literal_t));
	}
#line 7187 "bison_parser.cpp"
    break;

  case 284: /* insert_rest: insert_rest comment_literal  */
#line 2432 "bison.y"
                                       {
		(yyval.insert_rest_t) = (yyvsp[-1].insert_rest_t);
		(yyval.insert_rest_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7196 "bison_parser.cpp"
    break;

  case 285: /* super_values_list: values_list  */
#line 2439 "bison.y"
                     {
		(yyval.super_values_list_t) = new SuperValuesList();
		(yyval.super_values_list_t)->case_idx_ = CASE0;
		(yyval.super_values_list_t)->values_list_ = (yyvsp[0].values_list_t);
		
	}
#line 7207 "bison_parser.cpp"
    break;

  case 286: /* super_values_list: values_list OP_COMMA super_values_list  */
#line 2445 "bison.y"
                                                {
		(yyval.super_values_list_t) = new SuperValuesList();
		(yyval.super_values_list_t)->case_idx_ = CASE1;
		(yyval.super_values_list_t)->values_list_ = (yyvsp[-2].values_list_t);
		(yyval.super_values_list_t)->super_values_list_ = (yyvsp[0].super_values_list_t);
		
	}
#line 7219 "bison_parser.cpp"
    break;

  case 287: /* values_list: OP_LP expr_list OP_RP  */
#line 2455 "bison.y"
                               {
		(yyval.values_list_t) = new ValuesList();
		(yyval.values_list_t)->case_idx_ = CASE0;
		(yyval.values_list_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 7230 "bison_parser.cpp"
    break;

  case 288: /* values_list: comment_literal values_list  */
#line 2461 "bison.y"
                                      {
		(yyval.values_list_t) = (yyvsp[0].values_list_t);
		MERGE_LEFT_COMMENT((yyval.values_list_t), (yyvsp[-1].comment_literal_t));
	}
#line 7239 "bison_parser.cpp"
    break;

  case 289: /* values_list: values_list comment_literal  */
#line 2465 "bison.y"
                                       {
		(yyval.values_list_t) = (yyvsp[-1].values_list_t);
		(yyval.values_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7248 "bison_parser.cpp"
    break;

  case 290: /* opt_on_conflict: ON CONFLICT opt_conflict_expr DO NOTHING  */
#line 2472 "bison.y"
                                                  {
		(yyval.opt_on_conflict_t) = new OptOnConflict();
		(yyval.opt_on_conflict_t)->case_idx_ = CASE0;
		(yyval.opt_on_conflict_t)->opt_conflict_expr_ = (yyvsp[-2].opt_conflict_expr_t);
		
	}
#line 7259 "bison_parser.cpp"
    break;

  case 291: /* opt_on_conflict: ON CONFLICT opt_conflict_expr DO UPDATE set_clause_list where_clause  */
#line 2478 "bison.y"
                                                                              {
		(yyval.opt_on_conflict_t) = new OptOnConflict();
		(yyval.opt_on_conflict_t)->case_idx_ = CASE1;
		(yyval.opt_on_conflict_t)->opt_conflict_expr_ = (yyvsp[-4].opt_conflict_expr_t);
		(yyval.opt_on_conflict_t)->set_clause_list_ = (yyvsp[-1].set_clause_list_t);
		(yyval.opt_on_conflict_t)->where_clause_ = (yyvsp[0].where_clause_t);
		
	}
#line 7272 "bison_parser.cpp"
    break;

  case 292: /* opt_on_conflict: %empty  */
#line 2486 "bison.y"
          {
		(yyval.opt_on_conflict_t) = new OptOnConflict();
		(yyval.opt_on_conflict_t)->case_idx_ = CASE2;
		
	}
#line 7282 "bison_parser.cpp"
    break;

  case 293: /* opt_on_conflict: comment_literal opt_on_conflict  */
#line 2491 "bison.y"
                                          {
		(yyval.opt_on_conflict_t) = (yyvsp[0].opt_on_conflict_t);
		MERGE_LEFT_COMMENT((yyval.opt_on_conflict_t), (yyvsp[-1].comment_literal_t));
	}
#line 7291 "bison_parser.cpp"
    break;

  case 294: /* opt_on_conflict: opt_on_conflict comment_literal  */
#line 2495 "bison.y"
                                           {
		(yyval.opt_on_conflict_t) = (yyvsp[-1].opt_on_conflict_t);
		(yyval.opt_on_conflict_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7300 "bison_parser.cpp"
    break;

  case 295: /* opt_conflict_expr: OP_LP indexed_column_list OP_RP where_clause  */
#line 2502 "bison.y"
                                                      {
		(yyval.opt_conflict_expr_t) = new OptConflictExpr();
		(yyval.opt_conflict_expr_t)->case_idx_ = CASE0;
		(yyval.opt_conflict_expr_t)->indexed_column_list_ = (yyvsp[-2].indexed_column_list_t);
		(yyval.opt_conflict_expr_t)->where_clause_ = (yyvsp[0].where_clause_t);
		
	}
#line 7312 "bison_parser.cpp"
    break;

  case 296: /* opt_conflict_expr: %empty  */
#line 2509 "bison.y"
          {
		(yyval.opt_conflict_expr_t) = new OptConflictExpr();
		(yyval.opt_conflict_expr_t)->case_idx_ = CASE1;
		
	}
#line 7322 "bison_parser.cpp"
    break;

  case 297: /* opt_conflict_expr: comment_literal opt_conflict_expr  */
#line 2514 "bison.y"
                                            {
		(yyval.opt_conflict_expr_t) = (yyvsp[0].opt_conflict_expr_t);
		MERGE_LEFT_COMMENT((yyval.opt_conflict_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 7331 "bison_parser.cpp"
    break;

  case 298: /* opt_conflict_expr: opt_conflict_expr comment_literal  */
#line 2518 "bison.y"
                                             {
		(yyval.opt_conflict_expr_t) = (yyvsp[-1].opt_conflict_expr_t);
		(yyval.opt_conflict_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7340 "bison_parser.cpp"
    break;

  case 299: /* indexed_column_list: indexed_column  */
#line 2525 "bison.y"
                        {
		(yyval.indexed_column_list_t) = new IndexedColumnList();
		(yyval.indexed_column_list_t)->case_idx_ = CASE0;
		(yyval.indexed_column_list_t)->indexed_column_ = (yyvsp[0].indexed_column_t);
		
	}
#line 7351 "bison_parser.cpp"
    break;

  case 300: /* indexed_column_list: indexed_column OP_COMMA indexed_column_list  */
#line 2531 "bison.y"
                                                     {
		(yyval.indexed_column_list_t) = new IndexedColumnList();
		(yyval.indexed_column_list_t)->case_idx_ = CASE1;
		(yyval.indexed_column_list_t)->indexed_column_ = (yyvsp[-2].indexed_column_t);
		(yyval.indexed_column_list_t)->indexed_column_list_ = (yyvsp[0].indexed_column_list_t);
		
	}
#line 7363 "bison_parser.cpp"
    break;

  case 301: /* indexed_column: expr opt_order_behavior  */
#line 2541 "bison.y"
                                 {
		(yyval.indexed_column_t) = new IndexedColumn();
		(yyval.indexed_column_t)->case_idx_ = CASE0;
		(yyval.indexed_column_t)->expr_ = (yyvsp[-1].expr_t);
		(yyval.indexed_column_t)->opt_order_behavior_ = (yyvsp[0].opt_order_behavior_t);
		
	}
#line 7375 "bison_parser.cpp"
    break;

  case 302: /* update_stmt: UPDATE IGNORE table_name opt_as_alias SET set_clause_list opt_where_clause opt_order_clause opt_limit_row_count  */
#line 2551 "bison.y"
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
#line 7391 "bison_parser.cpp"
    break;

  case 303: /* update_stmt: UPDATE table_name opt_as_alias SET set_clause_list opt_where_clause opt_order_clause opt_limit_row_count  */
#line 2562 "bison.y"
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
#line 7407 "bison_parser.cpp"
    break;

  case 304: /* update_stmt: comment_literal update_stmt  */
#line 2573 "bison.y"
                                      {
		(yyval.update_stmt_t) = (yyvsp[0].update_stmt_t);
		MERGE_LEFT_COMMENT((yyval.update_stmt_t), (yyvsp[-1].comment_literal_t));
	}
#line 7416 "bison_parser.cpp"
    break;

  case 305: /* update_stmt: update_stmt comment_literal  */
#line 2577 "bison.y"
                                       {
		(yyval.update_stmt_t) = (yyvsp[-1].update_stmt_t);
		(yyval.update_stmt_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7425 "bison_parser.cpp"
    break;

  case 306: /* alter_action: RENAME TO table_name  */
#line 2584 "bison.y"
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
#line 7448 "bison_parser.cpp"
    break;

  case 307: /* alter_action: RENAME opt_column column_name TO column_name  */
#line 2602 "bison.y"
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
#line 7485 "bison_parser.cpp"
    break;

  case 308: /* alter_action: ADD opt_column column_def  */
#line 2634 "bison.y"
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
#line 7509 "bison_parser.cpp"
    break;

  case 309: /* alter_action: DROP opt_column column_name  */
#line 2653 "bison.y"
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
#line 7533 "bison_parser.cpp"
    break;

  case 310: /* alter_action: alter_constant_action  */
#line 2672 "bison.y"
                               {
		(yyval.alter_action_t) = new AlterAction();
		(yyval.alter_action_t)->case_idx_ = CASE4;
		(yyval.alter_action_t)->alter_constant_action_ = (yyvsp[0].alter_constant_action_t);
		
	}
#line 7544 "bison_parser.cpp"
    break;

  case 311: /* alter_action: comment_literal alter_action  */
#line 2678 "bison.y"
                                       {
		(yyval.alter_action_t) = (yyvsp[0].alter_action_t);
		MERGE_LEFT_COMMENT((yyval.alter_action_t), (yyvsp[-1].comment_literal_t));
	}
#line 7553 "bison_parser.cpp"
    break;

  case 312: /* alter_action: alter_action comment_literal  */
#line 2682 "bison.y"
                                        {
		(yyval.alter_action_t) = (yyvsp[-1].alter_action_t);
		(yyval.alter_action_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7562 "bison_parser.cpp"
    break;

  case 313: /* alter_constant_action: DROP PRIMARY KEY  */
#line 2689 "bison.y"
                          {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE0;
		
	}
#line 7572 "bison_parser.cpp"
    break;

  case 314: /* alter_constant_action: FORCE  */
#line 2694 "bison.y"
               {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE1;
		
	}
#line 7582 "bison_parser.cpp"
    break;

  case 315: /* alter_constant_action: DISABLE KEYS  */
#line 2699 "bison.y"
                      {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE2;
		
	}
#line 7592 "bison_parser.cpp"
    break;

  case 316: /* alter_constant_action: ENABLE KEYS  */
#line 2704 "bison.y"
                     {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE3;
		
	}
#line 7602 "bison_parser.cpp"
    break;

  case 317: /* alter_constant_action: lock_option  */
#line 2709 "bison.y"
                     {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE4;
		(yyval.alter_constant_action_t)->lock_option_ = (yyvsp[0].lock_option_t);
		
	}
#line 7613 "bison_parser.cpp"
    break;

  case 318: /* alter_constant_action: WITH VALIDATION  */
#line 2715 "bison.y"
                         {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE5;
		
	}
#line 7623 "bison_parser.cpp"
    break;

  case 319: /* alter_constant_action: WITHOUT VALIDATION  */
#line 2720 "bison.y"
                            {
		(yyval.alter_constant_action_t) = new AlterConstantAction();
		(yyval.alter_constant_action_t)->case_idx_ = CASE6;
		
	}
#line 7633 "bison_parser.cpp"
    break;

  case 320: /* alter_constant_action: comment_literal alter_constant_action  */
#line 2725 "bison.y"
                                                {
		(yyval.alter_constant_action_t) = (yyvsp[0].alter_constant_action_t);
		MERGE_LEFT_COMMENT((yyval.alter_constant_action_t), (yyvsp[-1].comment_literal_t));
	}
#line 7642 "bison_parser.cpp"
    break;

  case 321: /* alter_constant_action: alter_constant_action comment_literal  */
#line 2729 "bison.y"
                                                 {
		(yyval.alter_constant_action_t) = (yyvsp[-1].alter_constant_action_t);
		(yyval.alter_constant_action_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7651 "bison_parser.cpp"
    break;

  case 322: /* column_def_list: column_def  */
#line 2736 "bison.y"
                    {
		(yyval.column_def_list_t) = new ColumnDefList();
		(yyval.column_def_list_t)->case_idx_ = CASE0;
		(yyval.column_def_list_t)->column_def_ = (yyvsp[0].column_def_t);
		
	}
#line 7662 "bison_parser.cpp"
    break;

  case 323: /* column_def_list: column_def OP_COMMA column_def_list  */
#line 2742 "bison.y"
                                             {
		(yyval.column_def_list_t) = new ColumnDefList();
		(yyval.column_def_list_t)->case_idx_ = CASE1;
		(yyval.column_def_list_t)->column_def_ = (yyvsp[-2].column_def_t);
		(yyval.column_def_list_t)->column_def_list_ = (yyvsp[0].column_def_list_t);
		
	}
#line 7674 "bison_parser.cpp"
    break;

  case 324: /* column_def: identifier type_name opt_column_constraint_list  */
#line 2754 "bison.y"
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
#line 7694 "bison_parser.cpp"
    break;

  case 325: /* opt_column_constraint_list: column_constraint_list opt_check opt_reference_clause  */
#line 2772 "bison.y"
                                                               {
		(yyval.opt_column_constraint_list_t) = new OptColumnConstraintList();
		(yyval.opt_column_constraint_list_t)->case_idx_ = CASE0;
		(yyval.opt_column_constraint_list_t)->column_constraint_list_ = (yyvsp[-2].column_constraint_list_t);
		(yyval.opt_column_constraint_list_t)->opt_check_ = (yyvsp[-1].opt_check_t);
		(yyval.opt_column_constraint_list_t)->opt_reference_clause_ = (yyvsp[0].opt_reference_clause_t);
		
	}
#line 7707 "bison_parser.cpp"
    break;

  case 326: /* opt_column_constraint_list: %empty  */
#line 2780 "bison.y"
          {
		(yyval.opt_column_constraint_list_t) = new OptColumnConstraintList();
		(yyval.opt_column_constraint_list_t)->case_idx_ = CASE1;
		
	}
#line 7717 "bison_parser.cpp"
    break;

  case 327: /* column_constraint_list: column_constraint  */
#line 2790 "bison.y"
                           {
		(yyval.column_constraint_list_t) = new ColumnConstraintList();
		(yyval.column_constraint_list_t)->case_idx_ = CASE0;
		(yyval.column_constraint_list_t)->column_constraint_ = (yyvsp[0].column_constraint_t);
		
	}
#line 7728 "bison_parser.cpp"
    break;

  case 328: /* column_constraint_list: column_constraint column_constraint_list  */
#line 2796 "bison.y"
                                                  {
		(yyval.column_constraint_list_t) = new ColumnConstraintList();
		(yyval.column_constraint_list_t)->case_idx_ = CASE1;
		(yyval.column_constraint_list_t)->column_constraint_ = (yyvsp[-1].column_constraint_t);
		(yyval.column_constraint_list_t)->column_constraint_list_ = (yyvsp[0].column_constraint_list_t);
		
	}
#line 7740 "bison_parser.cpp"
    break;

  case 329: /* column_constraint: constraint_type  */
#line 2806 "bison.y"
                         {
		(yyval.column_constraint_t) = new ColumnConstraint();
		(yyval.column_constraint_t)->case_idx_ = CASE0;
		(yyval.column_constraint_t)->constraint_type_ = (yyvsp[0].constraint_type_t);
		
	}
#line 7751 "bison_parser.cpp"
    break;

  case 330: /* opt_reference_clause: opt_foreign_key reference_clause  */
#line 2815 "bison.y"
                                          {
		(yyval.opt_reference_clause_t) = new OptReferenceClause();
		(yyval.opt_reference_clause_t)->case_idx_ = CASE0;
		(yyval.opt_reference_clause_t)->opt_foreign_key_ = (yyvsp[-1].opt_foreign_key_t);
		(yyval.opt_reference_clause_t)->reference_clause_ = (yyvsp[0].reference_clause_t);
		
	}
#line 7763 "bison_parser.cpp"
    break;

  case 331: /* opt_reference_clause: %empty  */
#line 2822 "bison.y"
          {
		(yyval.opt_reference_clause_t) = new OptReferenceClause();
		(yyval.opt_reference_clause_t)->case_idx_ = CASE1;
		
	}
#line 7773 "bison_parser.cpp"
    break;

  case 332: /* opt_check: CHECK OP_LP expr OP_RP opt_enforced  */
#line 2830 "bison.y"
                                             {
		(yyval.opt_check_t) = new OptCheck();
		(yyval.opt_check_t)->case_idx_ = CASE0;
		(yyval.opt_check_t)->expr_ = (yyvsp[-2].expr_t);
		(yyval.opt_check_t)->opt_enforced_ = (yyvsp[0].opt_enforced_t);
		
	}
#line 7785 "bison_parser.cpp"
    break;

  case 333: /* opt_check: %empty  */
#line 2837 "bison.y"
          {
		(yyval.opt_check_t) = new OptCheck();
		(yyval.opt_check_t)->case_idx_ = CASE1;
		
	}
#line 7795 "bison_parser.cpp"
    break;

  case 334: /* opt_check: comment_literal opt_check  */
#line 2842 "bison.y"
                                    {
		(yyval.opt_check_t) = (yyvsp[0].opt_check_t);
		MERGE_LEFT_COMMENT((yyval.opt_check_t), (yyvsp[-1].comment_literal_t));
	}
#line 7804 "bison_parser.cpp"
    break;

  case 335: /* opt_check: opt_check comment_literal  */
#line 2846 "bison.y"
                                     {
		(yyval.opt_check_t) = (yyvsp[-1].opt_check_t);
		(yyval.opt_check_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7813 "bison_parser.cpp"
    break;

  case 336: /* constraint_type: PRIMARY KEY  */
#line 2853 "bison.y"
                     {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE0;
		
	}
#line 7823 "bison_parser.cpp"
    break;

  case 337: /* constraint_type: NOT NULL  */
#line 2858 "bison.y"
                  {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE1;
		
	}
#line 7833 "bison_parser.cpp"
    break;

  case 338: /* constraint_type: UNIQUE  */
#line 2863 "bison.y"
                {
		(yyval.constraint_type_t) = new ConstraintType();
		(yyval.constraint_type_t)->case_idx_ = CASE2;
		
	}
#line 7843 "bison_parser.cpp"
    break;

  case 339: /* constraint_type: comment_literal constraint_type  */
#line 2868 "bison.y"
                                          {
		(yyval.constraint_type_t) = (yyvsp[0].constraint_type_t);
		MERGE_LEFT_COMMENT((yyval.constraint_type_t), (yyvsp[-1].comment_literal_t));
	}
#line 7852 "bison_parser.cpp"
    break;

  case 340: /* constraint_type: constraint_type comment_literal  */
#line 2872 "bison.y"
                                           {
		(yyval.constraint_type_t) = (yyvsp[-1].constraint_type_t);
		(yyval.constraint_type_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7861 "bison_parser.cpp"
    break;

  case 341: /* reference_clause: REFERENCES table_name opt_column_name_list_p opt_foreign_key_actions opt_constraint_attribute_spec  */
#line 2879 "bison.y"
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
#line 7904 "bison_parser.cpp"
    break;

  case 342: /* reference_clause: comment_literal reference_clause  */
#line 2917 "bison.y"
                                           {
		(yyval.reference_clause_t) = (yyvsp[0].reference_clause_t);
		MERGE_LEFT_COMMENT((yyval.reference_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 7913 "bison_parser.cpp"
    break;

  case 343: /* reference_clause: reference_clause comment_literal  */
#line 2921 "bison.y"
                                            {
		(yyval.reference_clause_t) = (yyvsp[-1].reference_clause_t);
		(yyval.reference_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7922 "bison_parser.cpp"
    break;

  case 344: /* opt_foreign_key: FOREIGN KEY  */
#line 2928 "bison.y"
                     {
		(yyval.opt_foreign_key_t) = new OptForeignKey();
		(yyval.opt_foreign_key_t)->case_idx_ = CASE0;
		
	}
#line 7932 "bison_parser.cpp"
    break;

  case 345: /* opt_foreign_key: %empty  */
#line 2933 "bison.y"
          {
		(yyval.opt_foreign_key_t) = new OptForeignKey();
		(yyval.opt_foreign_key_t)->case_idx_ = CASE1;
		
	}
#line 7942 "bison_parser.cpp"
    break;

  case 346: /* opt_foreign_key: comment_literal opt_foreign_key  */
#line 2938 "bison.y"
                                          {
		(yyval.opt_foreign_key_t) = (yyvsp[0].opt_foreign_key_t);
		MERGE_LEFT_COMMENT((yyval.opt_foreign_key_t), (yyvsp[-1].comment_literal_t));
	}
#line 7951 "bison_parser.cpp"
    break;

  case 347: /* opt_foreign_key: opt_foreign_key comment_literal  */
#line 2942 "bison.y"
                                           {
		(yyval.opt_foreign_key_t) = (yyvsp[-1].opt_foreign_key_t);
		(yyval.opt_foreign_key_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 7960 "bison_parser.cpp"
    break;

  case 348: /* opt_foreign_key_actions: foreign_key_actions  */
#line 2949 "bison.y"
                             {
		(yyval.opt_foreign_key_actions_t) = new OptForeignKeyActions();
		(yyval.opt_foreign_key_actions_t)->case_idx_ = CASE0;
		(yyval.opt_foreign_key_actions_t)->foreign_key_actions_ = (yyvsp[0].foreign_key_actions_t);
		
	}
#line 7971 "bison_parser.cpp"
    break;

  case 349: /* opt_foreign_key_actions: %empty  */
#line 2955 "bison.y"
          {
		(yyval.opt_foreign_key_actions_t) = new OptForeignKeyActions();
		(yyval.opt_foreign_key_actions_t)->case_idx_ = CASE1;
		
	}
#line 7981 "bison_parser.cpp"
    break;

  case 350: /* foreign_key_actions: MATCH FULL  */
#line 2963 "bison.y"
                    {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE0;
		
	}
#line 7991 "bison_parser.cpp"
    break;

  case 351: /* foreign_key_actions: MATCH PARTIAL  */
#line 2968 "bison.y"
                       {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE1;
		
	}
#line 8001 "bison_parser.cpp"
    break;

  case 352: /* foreign_key_actions: MATCH SIMPLE  */
#line 2973 "bison.y"
                      {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE2;
		
	}
#line 8011 "bison_parser.cpp"
    break;

  case 353: /* foreign_key_actions: ON UPDATE key_actions  */
#line 2978 "bison.y"
                               {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE3;
		(yyval.foreign_key_actions_t)->key_actions_ = (yyvsp[0].key_actions_t);
		
	}
#line 8022 "bison_parser.cpp"
    break;

  case 354: /* foreign_key_actions: ON DELETE key_actions  */
#line 2984 "bison.y"
                               {
		(yyval.foreign_key_actions_t) = new ForeignKeyActions();
		(yyval.foreign_key_actions_t)->case_idx_ = CASE4;
		(yyval.foreign_key_actions_t)->key_actions_ = (yyvsp[0].key_actions_t);
		
	}
#line 8033 "bison_parser.cpp"
    break;

  case 355: /* foreign_key_actions: comment_literal foreign_key_actions  */
#line 2990 "bison.y"
                                              {
		(yyval.foreign_key_actions_t) = (yyvsp[0].foreign_key_actions_t);
		MERGE_LEFT_COMMENT((yyval.foreign_key_actions_t), (yyvsp[-1].comment_literal_t));
	}
#line 8042 "bison_parser.cpp"
    break;

  case 356: /* foreign_key_actions: foreign_key_actions comment_literal  */
#line 2994 "bison.y"
                                               {
		(yyval.foreign_key_actions_t) = (yyvsp[-1].foreign_key_actions_t);
		(yyval.foreign_key_actions_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8051 "bison_parser.cpp"
    break;

  case 357: /* key_actions: SET NULL  */
#line 3001 "bison.y"
                  {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE0;
		
	}
#line 8061 "bison_parser.cpp"
    break;

  case 358: /* key_actions: SET DEFAULT  */
#line 3006 "bison.y"
                     {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE1;
		
	}
#line 8071 "bison_parser.cpp"
    break;

  case 359: /* key_actions: CASCADE  */
#line 3011 "bison.y"
                 {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE2;
		
	}
#line 8081 "bison_parser.cpp"
    break;

  case 360: /* key_actions: RESTRICT  */
#line 3016 "bison.y"
                  {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE3;
		
	}
#line 8091 "bison_parser.cpp"
    break;

  case 361: /* key_actions: NO ACTION  */
#line 3021 "bison.y"
                   {
		(yyval.key_actions_t) = new KeyActions();
		(yyval.key_actions_t)->case_idx_ = CASE4;
		
	}
#line 8101 "bison_parser.cpp"
    break;

  case 362: /* key_actions: comment_literal key_actions  */
#line 3026 "bison.y"
                                      {
		(yyval.key_actions_t) = (yyvsp[0].key_actions_t);
		MERGE_LEFT_COMMENT((yyval.key_actions_t), (yyvsp[-1].comment_literal_t));
	}
#line 8110 "bison_parser.cpp"
    break;

  case 363: /* key_actions: key_actions comment_literal  */
#line 3030 "bison.y"
                                      {
		(yyval.key_actions_t) = (yyvsp[-1].key_actions_t);
		(yyval.key_actions_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8119 "bison_parser.cpp"
    break;

  case 364: /* opt_constraint_attribute_spec: DEFFERRABLE opt_initial_time  */
#line 3038 "bison.y"
                                      {
		(yyval.opt_constraint_attribute_spec_t) = new OptConstraintAttributeSpec();
		(yyval.opt_constraint_attribute_spec_t)->case_idx_ = CASE0;
		(yyval.opt_constraint_attribute_spec_t)->opt_initial_time_ = (yyvsp[0].opt_initial_time_t);
		
	}
#line 8130 "bison_parser.cpp"
    break;

  case 365: /* opt_constraint_attribute_spec: NOT DEFFERRABLE opt_initial_time  */
#line 3044 "bison.y"
                                          {
		(yyval.opt_constraint_attribute_spec_t) = new OptConstraintAttributeSpec();
		(yyval.opt_constraint_attribute_spec_t)->case_idx_ = CASE1;
		(yyval.opt_constraint_attribute_spec_t)->opt_initial_time_ = (yyvsp[0].opt_initial_time_t);
		
	}
#line 8141 "bison_parser.cpp"
    break;

  case 366: /* opt_constraint_attribute_spec: %empty  */
#line 3050 "bison.y"
          {
		(yyval.opt_constraint_attribute_spec_t) = new OptConstraintAttributeSpec();
		(yyval.opt_constraint_attribute_spec_t)->case_idx_ = CASE2;
		
	}
#line 8151 "bison_parser.cpp"
    break;

  case 367: /* opt_constraint_attribute_spec: comment_literal opt_constraint_attribute_spec  */
#line 3055 "bison.y"
                                                        {
		(yyval.opt_constraint_attribute_spec_t) = (yyvsp[0].opt_constraint_attribute_spec_t);
		MERGE_LEFT_COMMENT((yyval.opt_constraint_attribute_spec_t), (yyvsp[-1].comment_literal_t));
	}
#line 8160 "bison_parser.cpp"
    break;

  case 368: /* opt_constraint_attribute_spec: opt_constraint_attribute_spec comment_literal  */
#line 3059 "bison.y"
                                                        {
		(yyval.opt_constraint_attribute_spec_t) = (yyvsp[-1].opt_constraint_attribute_spec_t);
		(yyval.opt_constraint_attribute_spec_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8169 "bison_parser.cpp"
    break;

  case 369: /* opt_initial_time: INITIALLY DEFERRED  */
#line 3066 "bison.y"
                            {
		(yyval.opt_initial_time_t) = new OptInitialTime();
		(yyval.opt_initial_time_t)->case_idx_ = CASE0;
		
	}
#line 8179 "bison_parser.cpp"
    break;

  case 370: /* opt_initial_time: INITIALLY IMMEDIATE  */
#line 3071 "bison.y"
                             {
		(yyval.opt_initial_time_t) = new OptInitialTime();
		(yyval.opt_initial_time_t)->case_idx_ = CASE1;
		
	}
#line 8189 "bison_parser.cpp"
    break;

  case 371: /* opt_initial_time: %empty  */
#line 3076 "bison.y"
          {
		(yyval.opt_initial_time_t) = new OptInitialTime();
		(yyval.opt_initial_time_t)->case_idx_ = CASE2;
		
	}
#line 8199 "bison_parser.cpp"
    break;

  case 372: /* opt_initial_time: comment_literal opt_initial_time  */
#line 3081 "bison.y"
                                           {
		(yyval.opt_initial_time_t) = (yyvsp[0].opt_initial_time_t);
		MERGE_LEFT_COMMENT((yyval.opt_initial_time_t), (yyvsp[-1].comment_literal_t));
	}
#line 8208 "bison_parser.cpp"
    break;

  case 373: /* opt_initial_time: opt_initial_time comment_literal  */
#line 3085 "bison.y"
                                            {
		(yyval.opt_initial_time_t) = (yyvsp[-1].opt_initial_time_t);
		(yyval.opt_initial_time_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8217 "bison_parser.cpp"
    break;

  case 374: /* constraint_name: CONSTRAINT name  */
#line 3092 "bison.y"
                         {
		(yyval.constraint_name_t) = new ConstraintName();
		(yyval.constraint_name_t)->case_idx_ = CASE0;
		(yyval.constraint_name_t)->name_ = (yyvsp[0].name_t);
		
	}
#line 8228 "bison_parser.cpp"
    break;

  case 375: /* constraint_name: comment_literal constraint_name  */
#line 3098 "bison.y"
                                          {
		(yyval.constraint_name_t) = (yyvsp[0].constraint_name_t);
		MERGE_LEFT_COMMENT((yyval.constraint_name_t), (yyvsp[-1].comment_literal_t));
	}
#line 8237 "bison_parser.cpp"
    break;

  case 376: /* constraint_name: constraint_name comment_literal  */
#line 3102 "bison.y"
                                          {
		(yyval.constraint_name_t) = (yyvsp[-1].constraint_name_t);
		(yyval.constraint_name_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8246 "bison_parser.cpp"
    break;

  case 377: /* constraint_name: comment_literal constraint_name  */
#line 3106 "bison.y"
                                          {
		(yyval.constraint_name_t) = (yyvsp[0].constraint_name_t);
		MERGE_LEFT_COMMENT((yyval.constraint_name_t), (yyvsp[-1].comment_literal_t));
	}
#line 8255 "bison_parser.cpp"
    break;

  case 378: /* constraint_name: constraint_name comment_literal  */
#line 3110 "bison.y"
                                           {
		(yyval.constraint_name_t) = (yyvsp[-1].constraint_name_t);
		(yyval.constraint_name_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8264 "bison_parser.cpp"
    break;

  case 379: /* opt_temp: TEMPORARY  */
#line 3118 "bison.y"
                   {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE0;
		
	}
#line 8274 "bison_parser.cpp"
    break;

  case 380: /* opt_temp: %empty  */
#line 3123 "bison.y"
          {
		(yyval.opt_temp_t) = new OptTemp();
		(yyval.opt_temp_t)->case_idx_ = CASE1;
		
	}
#line 8284 "bison_parser.cpp"
    break;

  case 381: /* opt_temp: comment_literal opt_temp  */
#line 3128 "bison.y"
                                   {
		(yyval.opt_temp_t) = (yyvsp[0].opt_temp_t);
		MERGE_LEFT_COMMENT((yyval.opt_temp_t), (yyvsp[-1].comment_literal_t));
	}
#line 8293 "bison_parser.cpp"
    break;

  case 382: /* opt_temp: opt_temp comment_literal  */
#line 3132 "bison.y"
                                   {
		(yyval.opt_temp_t) = (yyvsp[-1].opt_temp_t);
		(yyval.opt_temp_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8302 "bison_parser.cpp"
    break;

  case 383: /* opt_check_option: WITH CHECK OPTION  */
#line 3139 "bison.y"
                           {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE0;
		
	}
#line 8312 "bison_parser.cpp"
    break;

  case 384: /* opt_check_option: WITH CASCADED CHECK OPTION  */
#line 3144 "bison.y"
                                    {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE1;
		
	}
#line 8322 "bison_parser.cpp"
    break;

  case 385: /* opt_check_option: WITH LOCAL CHECK OPTION  */
#line 3149 "bison.y"
                                 {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE2;
		
	}
#line 8332 "bison_parser.cpp"
    break;

  case 386: /* opt_check_option: %empty  */
#line 3154 "bison.y"
          {
		(yyval.opt_check_option_t) = new OptCheckOption();
		(yyval.opt_check_option_t)->case_idx_ = CASE3;
		
	}
#line 8342 "bison_parser.cpp"
    break;

  case 387: /* opt_check_option: comment_literal opt_check_option  */
#line 3159 "bison.y"
                                           {
		(yyval.opt_check_option_t) = (yyvsp[0].opt_check_option_t);
		MERGE_LEFT_COMMENT((yyval.opt_check_option_t), (yyvsp[-1].comment_literal_t));
	}
#line 8351 "bison_parser.cpp"
    break;

  case 388: /* opt_check_option: opt_check_option comment_literal  */
#line 3163 "bison.y"
                                           {
		(yyval.opt_check_option_t) = (yyvsp[-1].opt_check_option_t);
		(yyval.opt_check_option_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8360 "bison_parser.cpp"
    break;

  case 389: /* opt_column_name_list_p: OP_LP column_name_list OP_RP  */
#line 3170 "bison.y"
                                      {
		(yyval.opt_column_name_list_p_t) = new OptColumnNameListP();
		(yyval.opt_column_name_list_p_t)->case_idx_ = CASE0;
		(yyval.opt_column_name_list_p_t)->column_name_list_ = (yyvsp[-1].column_name_list_t);
		
	}
#line 8371 "bison_parser.cpp"
    break;

  case 390: /* opt_column_name_list_p: %empty  */
#line 3176 "bison.y"
          {
		(yyval.opt_column_name_list_p_t) = new OptColumnNameListP();
		(yyval.opt_column_name_list_p_t)->case_idx_ = CASE1;
		
	}
#line 8381 "bison_parser.cpp"
    break;

  case 391: /* opt_column_name_list_p: comment_literal opt_column_name_list_p  */
#line 3181 "bison.y"
                                                 {
		(yyval.opt_column_name_list_p_t) = (yyvsp[0].opt_column_name_list_p_t);
		MERGE_LEFT_COMMENT((yyval.opt_column_name_list_p_t), (yyvsp[-1].comment_literal_t));
	}
#line 8390 "bison_parser.cpp"
    break;

  case 392: /* opt_column_name_list_p: opt_column_name_list_p comment_literal  */
#line 3185 "bison.y"
                                                 {
		(yyval.opt_column_name_list_p_t) = (yyvsp[-1].opt_column_name_list_p_t);
		(yyval.opt_column_name_list_p_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8399 "bison_parser.cpp"
    break;

  case 393: /* set_clause_list: set_clause  */
#line 3192 "bison.y"
                    {
		(yyval.set_clause_list_t) = new SetClauseList();
		(yyval.set_clause_list_t)->case_idx_ = CASE0;
		(yyval.set_clause_list_t)->set_clause_ = (yyvsp[0].set_clause_t);
		
	}
#line 8410 "bison_parser.cpp"
    break;

  case 394: /* set_clause_list: set_clause OP_COMMA set_clause_list  */
#line 3198 "bison.y"
                                             {
		(yyval.set_clause_list_t) = new SetClauseList();
		(yyval.set_clause_list_t)->case_idx_ = CASE1;
		(yyval.set_clause_list_t)->set_clause_ = (yyvsp[-2].set_clause_t);
		(yyval.set_clause_list_t)->set_clause_list_ = (yyvsp[0].set_clause_list_t);
		
	}
#line 8422 "bison_parser.cpp"
    break;

  case 395: /* set_clause: column_name OP_EQUAL expr  */
#line 3209 "bison.y"
                                   {
		(yyval.set_clause_t) = new SetClause();
		(yyval.set_clause_t)->case_idx_ = CASE0;
		(yyval.set_clause_t)->column_name_ = (yyvsp[-2].column_name_t);
		(yyval.set_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 8434 "bison_parser.cpp"
    break;

  case 396: /* set_clause: OP_LP column_name_list OP_RP OP_EQUAL expr  */
#line 3216 "bison.y"
                                                    {
		(yyval.set_clause_t) = new SetClause();
		(yyval.set_clause_t)->case_idx_ = CASE1;
		(yyval.set_clause_t)->column_name_list_ = (yyvsp[-3].column_name_list_t);
		(yyval.set_clause_t)->expr_ = (yyvsp[0].expr_t);
		
	}
#line 8446 "bison_parser.cpp"
    break;

  case 397: /* set_clause: comment_literal set_clause  */
#line 3223 "bison.y"
                                     {
		(yyval.set_clause_t) = (yyvsp[0].set_clause_t);
		MERGE_LEFT_COMMENT((yyval.set_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 8455 "bison_parser.cpp"
    break;

  case 398: /* set_clause: set_clause comment_literal  */
#line 3227 "bison.y"
                                     {
		(yyval.set_clause_t) = (yyvsp[-1].set_clause_t);
		(yyval.set_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8464 "bison_parser.cpp"
    break;

  case 399: /* opt_as_alias: as_alias  */
#line 3234 "bison.y"
                  {
		(yyval.opt_as_alias_t) = new OptAsAlias();
		(yyval.opt_as_alias_t)->case_idx_ = CASE0;
		(yyval.opt_as_alias_t)->as_alias_ = (yyvsp[0].as_alias_t);
		
	}
#line 8475 "bison_parser.cpp"
    break;

  case 400: /* opt_as_alias: %empty  */
#line 3240 "bison.y"
          {
		(yyval.opt_as_alias_t) = new OptAsAlias();
		(yyval.opt_as_alias_t)->case_idx_ = CASE1;
		
	}
#line 8485 "bison_parser.cpp"
    break;

  case 401: /* expr: operand  */
#line 3249 "bison.y"
                 {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE0;
		(yyval.expr_t)->operand_ = (yyvsp[0].operand_t);
		
	}
#line 8496 "bison_parser.cpp"
    break;

  case 402: /* expr: between_expr  */
#line 3255 "bison.y"
                      {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE1;
		(yyval.expr_t)->between_expr_ = (yyvsp[0].between_expr_t);
		
	}
#line 8507 "bison_parser.cpp"
    break;

  case 403: /* expr: exists_expr  */
#line 3261 "bison.y"
                     {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE2;
		(yyval.expr_t)->exists_expr_ = (yyvsp[0].exists_expr_t);
		
	}
#line 8518 "bison_parser.cpp"
    break;

  case 404: /* expr: in_expr  */
#line 3267 "bison.y"
                 {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE3;
		(yyval.expr_t)->in_expr_ = (yyvsp[0].in_expr_t);
		
	}
#line 8529 "bison_parser.cpp"
    break;

  case 405: /* expr: cast_expr  */
#line 3273 "bison.y"
                   {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE4;
		(yyval.expr_t)->cast_expr_ = (yyvsp[0].cast_expr_t);
		
	}
#line 8540 "bison_parser.cpp"
    break;

  case 406: /* expr: logic_expr  */
#line 3279 "bison.y"
                    {
		(yyval.expr_t) = new Expr();
		(yyval.expr_t)->case_idx_ = CASE5;
		(yyval.expr_t)->logic_expr_ = (yyvsp[0].logic_expr_t);
		
	}
#line 8551 "bison_parser.cpp"
    break;

  case 407: /* operand: OP_LP expr_list OP_RP  */
#line 3289 "bison.y"
                               {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE0;
		(yyval.operand_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 8562 "bison_parser.cpp"
    break;

  case 408: /* operand: array_index  */
#line 3295 "bison.y"
                     {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE1;
		(yyval.operand_t)->array_index_ = (yyvsp[0].array_index_t);
		
	}
#line 8573 "bison_parser.cpp"
    break;

  case 409: /* operand: scalar_expr  */
#line 3301 "bison.y"
                     {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE2;
		(yyval.operand_t)->scalar_expr_ = (yyvsp[0].scalar_expr_t);
		
	}
#line 8584 "bison_parser.cpp"
    break;

  case 410: /* operand: unary_expr  */
#line 3307 "bison.y"
                    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE3;
		(yyval.operand_t)->unary_expr_ = (yyvsp[0].unary_expr_t);
		
	}
#line 8595 "bison_parser.cpp"
    break;

  case 411: /* operand: binary_expr  */
#line 3313 "bison.y"
                     {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE4;
		(yyval.operand_t)->binary_expr_ = (yyvsp[0].binary_expr_t);
		
	}
#line 8606 "bison_parser.cpp"
    break;

  case 412: /* operand: case_expr  */
#line 3319 "bison.y"
                   {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE5;
		(yyval.operand_t)->case_expr_ = (yyvsp[0].case_expr_t);
		
	}
#line 8617 "bison_parser.cpp"
    break;

  case 413: /* operand: extract_expr  */
#line 3325 "bison.y"
                      {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE6;
		(yyval.operand_t)->extract_expr_ = (yyvsp[0].extract_expr_t);
		
	}
#line 8628 "bison_parser.cpp"
    break;

  case 414: /* operand: array_expr  */
#line 3331 "bison.y"
                    {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE7;
		(yyval.operand_t)->array_expr_ = (yyvsp[0].array_expr_t);
		
	}
#line 8639 "bison_parser.cpp"
    break;

  case 415: /* operand: function_expr  */
#line 3337 "bison.y"
                       {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE8;
		(yyval.operand_t)->function_expr_ = (yyvsp[0].function_expr_t);
		
	}
#line 8650 "bison_parser.cpp"
    break;

  case 416: /* operand: OP_LP select_no_parens OP_RP  */
#line 3343 "bison.y"
                                      {
		(yyval.operand_t) = new Operand();
		(yyval.operand_t)->case_idx_ = CASE9;
		(yyval.operand_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 8661 "bison_parser.cpp"
    break;

  case 417: /* operand: comment_literal operand  */
#line 3349 "bison.y"
                                  {
		(yyval.operand_t) = (yyvsp[0].operand_t);
		MERGE_LEFT_COMMENT((yyval.operand_t), (yyvsp[-1].comment_literal_t));
	}
#line 8670 "bison_parser.cpp"
    break;

  case 418: /* operand: operand comment_literal  */
#line 3353 "bison.y"
                                  {
		(yyval.operand_t) = (yyvsp[-1].operand_t);
		(yyval.operand_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8679 "bison_parser.cpp"
    break;

  case 419: /* cast_expr: CAST OP_LP expr AS type_name OP_RP  */
#line 3360 "bison.y"
                                            {
		(yyval.cast_expr_t) = new CastExpr();
		(yyval.cast_expr_t)->case_idx_ = CASE0;
		(yyval.cast_expr_t)->expr_ = (yyvsp[-3].expr_t);
		(yyval.cast_expr_t)->type_name_ = (yyvsp[-1].type_name_t);
		
	}
#line 8691 "bison_parser.cpp"
    break;

  case 420: /* cast_expr: comment_literal cast_expr  */
#line 3367 "bison.y"
                                    {
		(yyval.cast_expr_t) = (yyvsp[0].cast_expr_t);
		MERGE_LEFT_COMMENT((yyval.cast_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 8700 "bison_parser.cpp"
    break;

  case 421: /* cast_expr: cast_expr comment_literal  */
#line 3371 "bison.y"
                                    {
		(yyval.cast_expr_t) = (yyvsp[-1].cast_expr_t);
		(yyval.cast_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8709 "bison_parser.cpp"
    break;

  case 422: /* scalar_expr: column_name  */
#line 3378 "bison.y"
                     {
		(yyval.scalar_expr_t) = new ScalarExpr();
		(yyval.scalar_expr_t)->case_idx_ = CASE0;
		(yyval.scalar_expr_t)->column_name_ = (yyvsp[0].column_name_t);
		
	}
#line 8720 "bison_parser.cpp"
    break;

  case 423: /* scalar_expr: literal  */
#line 3384 "bison.y"
                 {
		(yyval.scalar_expr_t) = new ScalarExpr();
		(yyval.scalar_expr_t)->case_idx_ = CASE1;
		(yyval.scalar_expr_t)->literal_ = (yyvsp[0].literal_t);
		
	}
#line 8731 "bison_parser.cpp"
    break;

  case 424: /* unary_expr: OP_SUB operand  */
#line 3393 "bison.y"
                                    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE0;
		(yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
		
	}
#line 8742 "bison_parser.cpp"
    break;

  case 425: /* unary_expr: NOT operand  */
#line 3399 "bison.y"
                              {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE1;
		(yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
		
	}
#line 8753 "bison_parser.cpp"
    break;

  case 426: /* unary_expr: operand ISNULL  */
#line 3405 "bison.y"
                                    {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE2;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-1].operand_t);
		
	}
#line 8764 "bison_parser.cpp"
    break;

  case 427: /* unary_expr: operand IS NULL  */
#line 3411 "bison.y"
                         {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE3;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-2].operand_t);
		
	}
#line 8775 "bison_parser.cpp"
    break;

  case 428: /* unary_expr: operand IS NOT NULL  */
#line 3417 "bison.y"
                             {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE4;
		(yyval.unary_expr_t)->operand_ = (yyvsp[-3].operand_t);
		
	}
#line 8786 "bison_parser.cpp"
    break;

  case 429: /* unary_expr: NULL  */
#line 3423 "bison.y"
              {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE5;
		
	}
#line 8796 "bison_parser.cpp"
    break;

  case 430: /* unary_expr: OP_MUL  */
#line 3428 "bison.y"
                {
		(yyval.unary_expr_t) = new UnaryExpr();
		(yyval.unary_expr_t)->case_idx_ = CASE6;
		
	}
#line 8806 "bison_parser.cpp"
    break;

  case 431: /* unary_expr: comment_literal unary_expr  */
#line 3433 "bison.y"
                                     {
		(yyval.unary_expr_t) = (yyvsp[0].unary_expr_t);
		MERGE_LEFT_COMMENT((yyval.unary_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 8815 "bison_parser.cpp"
    break;

  case 432: /* unary_expr: unary_expr comment_literal  */
#line 3437 "bison.y"
                                     {
		(yyval.unary_expr_t) = (yyvsp[-1].unary_expr_t);
		(yyval.unary_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8824 "bison_parser.cpp"
    break;

  case 433: /* binary_expr: comp_expr  */
#line 3444 "bison.y"
                   {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE0;
		(yyval.binary_expr_t)->comp_expr_ = (yyvsp[0].comp_expr_t);
		
	}
#line 8835 "bison_parser.cpp"
    break;

  case 434: /* binary_expr: operand binary_op operand  */
#line 3450 "bison.y"
                                               {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE1;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.binary_expr_t)->binary_op_ = (yyvsp[-1].binary_op_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 8848 "bison_parser.cpp"
    break;

  case 435: /* binary_expr: operand LIKE operand  */
#line 3458 "bison.y"
                              {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE2;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 8860 "bison_parser.cpp"
    break;

  case 436: /* binary_expr: operand NOT LIKE operand  */
#line 3465 "bison.y"
                                  {
		(yyval.binary_expr_t) = new BinaryExpr();
		(yyval.binary_expr_t)->case_idx_ = CASE3;
		(yyval.binary_expr_t)->operand_1_ = (yyvsp[-3].operand_t);
		(yyval.binary_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 8872 "bison_parser.cpp"
    break;

  case 437: /* logic_expr: expr AND expr  */
#line 3475 "bison.y"
                       {
		(yyval.logic_expr_t) = new LogicExpr();
		(yyval.logic_expr_t)->case_idx_ = CASE0;
		(yyval.logic_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.logic_expr_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 8884 "bison_parser.cpp"
    break;

  case 438: /* logic_expr: expr OR expr  */
#line 3482 "bison.y"
                      {
		(yyval.logic_expr_t) = new LogicExpr();
		(yyval.logic_expr_t)->case_idx_ = CASE1;
		(yyval.logic_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.logic_expr_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 8896 "bison_parser.cpp"
    break;

  case 439: /* in_expr: operand opt_not IN OP_LP select_no_parens OP_RP  */
#line 3492 "bison.y"
                                                         {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE0;
		(yyval.in_expr_t)->operand_ = (yyvsp[-5].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.in_expr_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 8909 "bison_parser.cpp"
    break;

  case 440: /* in_expr: operand opt_not IN OP_LP expr_list OP_RP  */
#line 3500 "bison.y"
                                                  {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE1;
		(yyval.in_expr_t)->operand_ = (yyvsp[-5].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.in_expr_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 8922 "bison_parser.cpp"
    break;

  case 441: /* in_expr: operand opt_not IN table_name  */
#line 3508 "bison.y"
                                       {
		(yyval.in_expr_t) = new InExpr();
		(yyval.in_expr_t)->case_idx_ = CASE2;
		(yyval.in_expr_t)->operand_ = (yyvsp[-3].operand_t);
		(yyval.in_expr_t)->opt_not_ = (yyvsp[-2].opt_not_t);
		(yyval.in_expr_t)->table_name_ = (yyvsp[0].table_name_t);
		
	}
#line 8935 "bison_parser.cpp"
    break;

  case 442: /* in_expr: comment_literal in_expr  */
#line 3516 "bison.y"
                                  {
		(yyval.in_expr_t) = (yyvsp[0].in_expr_t);
		MERGE_LEFT_COMMENT((yyval.in_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 8944 "bison_parser.cpp"
    break;

  case 443: /* in_expr: in_expr comment_literal  */
#line 3520 "bison.y"
                                  {
		(yyval.in_expr_t) = (yyvsp[-1].in_expr_t);
		(yyval.in_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8953 "bison_parser.cpp"
    break;

  case 444: /* case_expr: CASE expr case_list END  */
#line 3527 "bison.y"
                                 {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE0;
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.case_expr_t)->case_list_ = (yyvsp[-1].case_list_t);
		
	}
#line 8965 "bison_parser.cpp"
    break;

  case 445: /* case_expr: CASE case_list END  */
#line 3534 "bison.y"
                            {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE1;
		(yyval.case_expr_t)->case_list_ = (yyvsp[-1].case_list_t);
		
	}
#line 8976 "bison_parser.cpp"
    break;

  case 446: /* case_expr: CASE expr case_list ELSE expr END  */
#line 3540 "bison.y"
                                           {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE2;
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-4].expr_t);
		(yyval.case_expr_t)->case_list_ = (yyvsp[-3].case_list_t);
		(yyval.case_expr_t)->expr_2_ = (yyvsp[-1].expr_t);
		
	}
#line 8989 "bison_parser.cpp"
    break;

  case 447: /* case_expr: CASE case_list ELSE expr END  */
#line 3548 "bison.y"
                                      {
		(yyval.case_expr_t) = new CaseExpr();
		(yyval.case_expr_t)->case_idx_ = CASE3;
		(yyval.case_expr_t)->case_list_ = (yyvsp[-3].case_list_t);
		(yyval.case_expr_t)->expr_1_ = (yyvsp[-1].expr_t);
		
	}
#line 9001 "bison_parser.cpp"
    break;

  case 448: /* case_expr: comment_literal case_expr  */
#line 3555 "bison.y"
                                    {
		(yyval.case_expr_t) = (yyvsp[0].case_expr_t);
		MERGE_LEFT_COMMENT((yyval.case_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 9010 "bison_parser.cpp"
    break;

  case 449: /* case_expr: case_expr comment_literal  */
#line 3559 "bison.y"
                                    {
		(yyval.case_expr_t) = (yyvsp[-1].case_expr_t);
		(yyval.case_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9019 "bison_parser.cpp"
    break;

  case 450: /* between_expr: operand BETWEEN operand AND operand  */
#line 3566 "bison.y"
                                                          {
		(yyval.between_expr_t) = new BetweenExpr();
		(yyval.between_expr_t)->case_idx_ = CASE0;
		(yyval.between_expr_t)->operand_1_ = (yyvsp[-4].operand_t);
		(yyval.between_expr_t)->operand_2_ = (yyvsp[-2].operand_t);
		(yyval.between_expr_t)->operand_3_ = (yyvsp[0].operand_t);
		
	}
#line 9032 "bison_parser.cpp"
    break;

  case 451: /* between_expr: operand NOT BETWEEN operand AND operand  */
#line 3574 "bison.y"
                                                          {
		(yyval.between_expr_t) = new BetweenExpr();
		(yyval.between_expr_t)->case_idx_ = CASE1;
		(yyval.between_expr_t)->operand_1_ = (yyvsp[-5].operand_t);
		(yyval.between_expr_t)->operand_2_ = (yyvsp[-2].operand_t);
		(yyval.between_expr_t)->operand_3_ = (yyvsp[0].operand_t);
		
	}
#line 9045 "bison_parser.cpp"
    break;

  case 452: /* exists_expr: opt_not EXISTS OP_LP select_no_parens OP_RP  */
#line 3585 "bison.y"
                                                     {
		(yyval.exists_expr_t) = new ExistsExpr();
		(yyval.exists_expr_t)->case_idx_ = CASE0;
		(yyval.exists_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
		(yyval.exists_expr_t)->select_no_parens_ = (yyvsp[-1].select_no_parens_t);
		
	}
#line 9057 "bison_parser.cpp"
    break;

  case 453: /* exists_expr: comment_literal exists_expr  */
#line 3592 "bison.y"
                                      {
		(yyval.exists_expr_t) = (yyvsp[0].exists_expr_t);
		MERGE_LEFT_COMMENT((yyval.exists_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 9066 "bison_parser.cpp"
    break;

  case 454: /* exists_expr: exists_expr comment_literal  */
#line 3596 "bison.y"
                                      {
		(yyval.exists_expr_t) = (yyvsp[-1].exists_expr_t);
		(yyval.exists_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9075 "bison_parser.cpp"
    break;

  case 455: /* function_expr: function_name OP_LP OP_RP opt_filter_clause opt_over_clause  */
#line 3603 "bison.y"
                                                                     {
		(yyval.function_expr_t) = new FunctionExpr();
		(yyval.function_expr_t)->case_idx_ = CASE0;
		(yyval.function_expr_t)->function_name_ = (yyvsp[-4].function_name_t);
		(yyval.function_expr_t)->opt_filter_clause_ = (yyvsp[-1].opt_filter_clause_t);
		(yyval.function_expr_t)->opt_over_clause_ = (yyvsp[0].opt_over_clause_t);
		
	}
#line 9088 "bison_parser.cpp"
    break;

  case 456: /* function_expr: function_name OP_LP opt_distinct expr_list OP_RP opt_filter_clause opt_over_clause  */
#line 3611 "bison.y"
                                                                                            {
		(yyval.function_expr_t) = new FunctionExpr();
		(yyval.function_expr_t)->case_idx_ = CASE1;
		(yyval.function_expr_t)->function_name_ = (yyvsp[-6].function_name_t);
		(yyval.function_expr_t)->opt_distinct_ = (yyvsp[-4].opt_distinct_t);
		(yyval.function_expr_t)->expr_list_ = (yyvsp[-3].expr_list_t);
		(yyval.function_expr_t)->opt_filter_clause_ = (yyvsp[-1].opt_filter_clause_t);
		(yyval.function_expr_t)->opt_over_clause_ = (yyvsp[0].opt_over_clause_t);
		
	}
#line 9103 "bison_parser.cpp"
    break;

  case 457: /* opt_distinct: DISTINCT  */
#line 3624 "bison.y"
                  {
		(yyval.opt_distinct_t) = new OptDistinct();
		(yyval.opt_distinct_t)->case_idx_ = CASE0;
		
	}
#line 9113 "bison_parser.cpp"
    break;

  case 458: /* opt_distinct: %empty  */
#line 3629 "bison.y"
          {
		(yyval.opt_distinct_t) = new OptDistinct();
		(yyval.opt_distinct_t)->case_idx_ = CASE1;
		
	}
#line 9123 "bison_parser.cpp"
    break;

  case 459: /* opt_distinct: comment_literal opt_distinct  */
#line 3634 "bison.y"
                                       {
		(yyval.opt_distinct_t) = (yyvsp[0].opt_distinct_t);
		MERGE_LEFT_COMMENT((yyval.opt_distinct_t), (yyvsp[-1].comment_literal_t));
	}
#line 9132 "bison_parser.cpp"
    break;

  case 460: /* opt_distinct: opt_distinct comment_literal  */
#line 3638 "bison.y"
                                       {
		(yyval.opt_distinct_t) = (yyvsp[-1].opt_distinct_t);
		(yyval.opt_distinct_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9141 "bison_parser.cpp"
    break;

  case 461: /* opt_filter_clause: FILTER OP_LP WHERE expr OP_RP  */
#line 3645 "bison.y"
                                       {
		(yyval.opt_filter_clause_t) = new OptFilterClause();
		(yyval.opt_filter_clause_t)->case_idx_ = CASE0;
		(yyval.opt_filter_clause_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 9152 "bison_parser.cpp"
    break;

  case 462: /* opt_filter_clause: %empty  */
#line 3651 "bison.y"
          {
		(yyval.opt_filter_clause_t) = new OptFilterClause();
		(yyval.opt_filter_clause_t)->case_idx_ = CASE1;
		
	}
#line 9162 "bison_parser.cpp"
    break;

  case 463: /* opt_filter_clause: comment_literal opt_filter_clause  */
#line 3656 "bison.y"
                                            {
		(yyval.opt_filter_clause_t) = (yyvsp[0].opt_filter_clause_t);
		MERGE_LEFT_COMMENT((yyval.opt_filter_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 9171 "bison_parser.cpp"
    break;

  case 464: /* opt_filter_clause: opt_filter_clause comment_literal  */
#line 3660 "bison.y"
                                            {
		(yyval.opt_filter_clause_t) = (yyvsp[-1].opt_filter_clause_t);
		(yyval.opt_filter_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9180 "bison_parser.cpp"
    break;

  case 465: /* opt_over_clause: OVER OP_LP window OP_RP  */
#line 3667 "bison.y"
                                 {
		(yyval.opt_over_clause_t) = new OptOverClause();
		(yyval.opt_over_clause_t)->case_idx_ = CASE0;
		(yyval.opt_over_clause_t)->window_ = (yyvsp[-1].window_t);
		
	}
#line 9191 "bison_parser.cpp"
    break;

  case 466: /* opt_over_clause: OVER window_name  */
#line 3673 "bison.y"
                          {
		(yyval.opt_over_clause_t) = new OptOverClause();
		(yyval.opt_over_clause_t)->case_idx_ = CASE1;
		(yyval.opt_over_clause_t)->window_name_ = (yyvsp[0].window_name_t);
		
	}
#line 9202 "bison_parser.cpp"
    break;

  case 467: /* opt_over_clause: %empty  */
#line 3679 "bison.y"
          {
		(yyval.opt_over_clause_t) = new OptOverClause();
		(yyval.opt_over_clause_t)->case_idx_ = CASE2;
		
	}
#line 9212 "bison_parser.cpp"
    break;

  case 468: /* opt_over_clause: comment_literal opt_over_clause  */
#line 3684 "bison.y"
                                          {
		(yyval.opt_over_clause_t) = (yyvsp[0].opt_over_clause_t);
		MERGE_LEFT_COMMENT((yyval.opt_over_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 9221 "bison_parser.cpp"
    break;

  case 469: /* opt_over_clause: opt_over_clause comment_literal  */
#line 3688 "bison.y"
                                          {
		(yyval.opt_over_clause_t) = (yyvsp[-1].opt_over_clause_t);
		(yyval.opt_over_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9230 "bison_parser.cpp"
    break;

  case 470: /* case_list: case_clause  */
#line 3695 "bison.y"
                     {
		(yyval.case_list_t) = new CaseList();
		(yyval.case_list_t)->case_idx_ = CASE0;
		(yyval.case_list_t)->case_clause_ = (yyvsp[0].case_clause_t);
		
	}
#line 9241 "bison_parser.cpp"
    break;

  case 471: /* case_list: case_clause case_list  */
#line 3701 "bison.y"
                               {
		(yyval.case_list_t) = new CaseList();
		(yyval.case_list_t)->case_idx_ = CASE1;
		(yyval.case_list_t)->case_clause_ = (yyvsp[-1].case_clause_t);
		(yyval.case_list_t)->case_list_ = (yyvsp[0].case_list_t);
		
	}
#line 9253 "bison_parser.cpp"
    break;

  case 472: /* case_list: comment_literal case_list  */
#line 3708 "bison.y"
                                    {
		(yyval.case_list_t) = (yyvsp[0].case_list_t);
		MERGE_LEFT_COMMENT((yyval.case_list_t), (yyvsp[-1].comment_literal_t));
	}
#line 9262 "bison_parser.cpp"
    break;

  case 473: /* case_list: case_list comment_literal  */
#line 3712 "bison.y"
                                    {
		(yyval.case_list_t) = (yyvsp[-1].case_list_t);
		(yyval.case_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9271 "bison_parser.cpp"
    break;

  case 474: /* case_clause: WHEN expr THEN expr  */
#line 3719 "bison.y"
                             {
		(yyval.case_clause_t) = new CaseClause();
		(yyval.case_clause_t)->case_idx_ = CASE0;
		(yyval.case_clause_t)->expr_1_ = (yyvsp[-2].expr_t);
		(yyval.case_clause_t)->expr_2_ = (yyvsp[0].expr_t);
		
	}
#line 9283 "bison_parser.cpp"
    break;

  case 475: /* case_clause: comment_literal case_clause  */
#line 3726 "bison.y"
                                      {
		(yyval.case_clause_t) = (yyvsp[0].case_clause_t);
		MERGE_LEFT_COMMENT((yyval.case_clause_t), (yyvsp[-1].comment_literal_t));
	}
#line 9292 "bison_parser.cpp"
    break;

  case 476: /* case_clause: case_clause comment_literal  */
#line 3730 "bison.y"
                                       {
		(yyval.case_clause_t) = (yyvsp[-1].case_clause_t);
		(yyval.case_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9301 "bison_parser.cpp"
    break;

  case 477: /* comp_expr: operand OP_EQUAL operand  */
#line 3737 "bison.y"
                                  {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE0;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 9313 "bison_parser.cpp"
    break;

  case 478: /* comp_expr: operand OP_NOTEQUAL operand  */
#line 3744 "bison.y"
                                     {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE1;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 9325 "bison_parser.cpp"
    break;

  case 479: /* comp_expr: operand OP_GREATERTHAN operand  */
#line 3751 "bison.y"
                                        {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE2;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 9337 "bison_parser.cpp"
    break;

  case 480: /* comp_expr: operand OP_LESSTHAN operand  */
#line 3758 "bison.y"
                                     {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE3;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 9349 "bison_parser.cpp"
    break;

  case 481: /* comp_expr: operand OP_LESSEQ operand  */
#line 3765 "bison.y"
                                   {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE4;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 9361 "bison_parser.cpp"
    break;

  case 482: /* comp_expr: operand OP_GREATEREQ operand  */
#line 3772 "bison.y"
                                      {
		(yyval.comp_expr_t) = new CompExpr();
		(yyval.comp_expr_t)->case_idx_ = CASE5;
		(yyval.comp_expr_t)->operand_1_ = (yyvsp[-2].operand_t);
		(yyval.comp_expr_t)->operand_2_ = (yyvsp[0].operand_t);
		
	}
#line 9373 "bison_parser.cpp"
    break;

  case 483: /* extract_expr: EXTRACT OP_LP datetime_field FROM expr OP_RP  */
#line 3782 "bison.y"
                                                      {
		(yyval.extract_expr_t) = new ExtractExpr();
		(yyval.extract_expr_t)->case_idx_ = CASE0;
		(yyval.extract_expr_t)->datetime_field_ = (yyvsp[-3].datetime_field_t);
		(yyval.extract_expr_t)->expr_ = (yyvsp[-1].expr_t);
		
	}
#line 9385 "bison_parser.cpp"
    break;

  case 484: /* extract_expr: comment_literal extract_expr  */
#line 3789 "bison.y"
                                       {
		(yyval.extract_expr_t) = (yyvsp[0].extract_expr_t);
		MERGE_LEFT_COMMENT((yyval.extract_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 9394 "bison_parser.cpp"
    break;

  case 485: /* extract_expr: extract_expr comment_literal  */
#line 3793 "bison.y"
                                        {
		(yyval.extract_expr_t) = (yyvsp[-1].extract_expr_t);
		(yyval.extract_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9403 "bison_parser.cpp"
    break;

  case 486: /* datetime_field: SECOND  */
#line 3800 "bison.y"
                {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE0;
		
	}
#line 9413 "bison_parser.cpp"
    break;

  case 487: /* datetime_field: MINUTE  */
#line 3805 "bison.y"
                {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE1;
		
	}
#line 9423 "bison_parser.cpp"
    break;

  case 488: /* datetime_field: HOUR  */
#line 3810 "bison.y"
              {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE2;
		
	}
#line 9433 "bison_parser.cpp"
    break;

  case 489: /* datetime_field: DAY  */
#line 3815 "bison.y"
             {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE3;
		
	}
#line 9443 "bison_parser.cpp"
    break;

  case 490: /* datetime_field: MONTH  */
#line 3820 "bison.y"
               {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE4;
		
	}
#line 9453 "bison_parser.cpp"
    break;

  case 491: /* datetime_field: YEAR  */
#line 3825 "bison.y"
              {
		(yyval.datetime_field_t) = new DatetimeField();
		(yyval.datetime_field_t)->case_idx_ = CASE5;
		
	}
#line 9463 "bison_parser.cpp"
    break;

  case 492: /* datetime_field: comment_literal datetime_field  */
#line 3830 "bison.y"
                                         {
		(yyval.datetime_field_t) = (yyvsp[0].datetime_field_t);
		MERGE_LEFT_COMMENT((yyval.datetime_field_t), (yyvsp[-1].comment_literal_t));
	}
#line 9472 "bison_parser.cpp"
    break;

  case 493: /* datetime_field: datetime_field comment_literal  */
#line 3834 "bison.y"
                                          {
		(yyval.datetime_field_t) = (yyvsp[-1].datetime_field_t);
		(yyval.datetime_field_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9481 "bison_parser.cpp"
    break;

  case 494: /* array_expr: ARRAY OP_LBRACKET expr_list OP_RBRACKET  */
#line 3841 "bison.y"
                                                 {
		(yyval.array_expr_t) = new ArrayExpr();
		(yyval.array_expr_t)->case_idx_ = CASE0;
		(yyval.array_expr_t)->expr_list_ = (yyvsp[-1].expr_list_t);
		
	}
#line 9492 "bison_parser.cpp"
    break;

  case 495: /* array_expr: comment_literal array_expr  */
#line 3847 "bison.y"
                                     {
		(yyval.array_expr_t) = (yyvsp[0].array_expr_t);
		MERGE_LEFT_COMMENT((yyval.array_expr_t), (yyvsp[-1].comment_literal_t));
	}
#line 9501 "bison_parser.cpp"
    break;

  case 496: /* array_expr: array_expr comment_literal  */
#line 3851 "bison.y"
                                      {
		(yyval.array_expr_t) = (yyvsp[-1].array_expr_t);
		(yyval.array_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9510 "bison_parser.cpp"
    break;

  case 497: /* array_index: operand OP_LBRACKET int_literal OP_RBRACKET  */
#line 3858 "bison.y"
                                                     {
		(yyval.array_index_t) = new ArrayIndex();
		(yyval.array_index_t)->case_idx_ = CASE0;
		(yyval.array_index_t)->operand_ = (yyvsp[-3].operand_t);
		(yyval.array_index_t)->int_literal_ = (yyvsp[-1].int_literal_t);
		
	}
#line 9522 "bison_parser.cpp"
    break;

  case 498: /* array_index: comment_literal array_index  */
#line 3865 "bison.y"
                                      {
		(yyval.array_index_t) = (yyvsp[0].array_index_t);
		MERGE_LEFT_COMMENT((yyval.array_index_t), (yyvsp[-1].comment_literal_t));
	}
#line 9531 "bison_parser.cpp"
    break;

  case 499: /* array_index: array_index comment_literal  */
#line 3869 "bison.y"
                                       {
		(yyval.array_index_t) = (yyvsp[-1].array_index_t);
		(yyval.array_index_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9540 "bison_parser.cpp"
    break;

  case 500: /* literal: string_literal  */
#line 3876 "bison.y"
                        {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE0;
		(yyval.literal_t)->string_literal_ = (yyvsp[0].string_literal_t);
		
	}
#line 9551 "bison_parser.cpp"
    break;

  case 501: /* literal: bool_literal  */
#line 3882 "bison.y"
                      {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE1;
		(yyval.literal_t)->bool_literal_ = (yyvsp[0].bool_literal_t);
		
	}
#line 9562 "bison_parser.cpp"
    break;

  case 502: /* literal: num_literal  */
#line 3888 "bison.y"
                     {
		(yyval.literal_t) = new Literal();
		(yyval.literal_t)->case_idx_ = CASE2;
		(yyval.literal_t)->num_literal_ = (yyvsp[0].num_literal_t);
		
	}
#line 9573 "bison_parser.cpp"
    break;

  case 503: /* string_literal: STRINGLITERAL  */
#line 3897 "bison.y"
                       {
		(yyval.string_literal_t) = new StringLiteral();
		(yyval.string_literal_t)->string_val_ = (yyvsp[0].sval);
		free((yyvsp[0].sval));
		
	}
#line 9584 "bison_parser.cpp"
    break;

  case 504: /* string_literal: comment_literal string_literal  */
#line 3903 "bison.y"
                                         {
		(yyval.string_literal_t) = (yyvsp[0].string_literal_t);
		MERGE_LEFT_COMMENT((yyval.string_literal_t), (yyvsp[-1].comment_literal_t));
	}
#line 9593 "bison_parser.cpp"
    break;

  case 505: /* string_literal: string_literal comment_literal  */
#line 3907 "bison.y"
                                         {
		(yyval.string_literal_t) = (yyvsp[-1].string_literal_t);
		(yyval.string_literal_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9602 "bison_parser.cpp"
    break;

  case 506: /* comment_literal: COMMENTLITERAL  */
#line 3913 "bison.y"
                               {
			(yyval.comment_literal_t) = new CommentLiteral();
			(yyval.comment_literal_t)->string_vals_.push_back((yyvsp[0].sval)) ;
		}
#line 9611 "bison_parser.cpp"
    break;

  case 507: /* comment_literal: comment_literal COMMENTLITERAL  */
#line 3917 "bison.y"
                                                {
			(yyval.comment_literal_t) = (yyvsp[-1].comment_literal_t);
			(yyval.comment_literal_t)->string_vals_.push_back((yyvsp[0].sval));
		}
#line 9620 "bison_parser.cpp"
    break;

  case 508: /* bool_literal: TRUE  */
#line 3923 "bison.y"
              {
		(yyval.bool_literal_t) = new BoolLiteral();
		(yyval.bool_literal_t)->case_idx_ = CASE0;
		
	}
#line 9630 "bison_parser.cpp"
    break;

  case 509: /* bool_literal: FALSE  */
#line 3928 "bison.y"
               {
		(yyval.bool_literal_t) = new BoolLiteral();
		(yyval.bool_literal_t)->case_idx_ = CASE1;
		
	}
#line 9640 "bison_parser.cpp"
    break;

  case 510: /* bool_literal: comment_literal bool_literal  */
#line 3933 "bison.y"
                                       {
		(yyval.bool_literal_t) = (yyvsp[0].bool_literal_t);
		MERGE_LEFT_COMMENT((yyval.bool_literal_t), (yyvsp[-1].comment_literal_t));
	}
#line 9649 "bison_parser.cpp"
    break;

  case 511: /* bool_literal: bool_literal comment_literal  */
#line 3937 "bison.y"
                                       {
		(yyval.bool_literal_t) = (yyvsp[-1].bool_literal_t);
		(yyval.bool_literal_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9658 "bison_parser.cpp"
    break;

  case 512: /* num_literal: int_literal  */
#line 3944 "bison.y"
                     {
		(yyval.num_literal_t) = new NumLiteral();
		(yyval.num_literal_t)->case_idx_ = CASE0;
		(yyval.num_literal_t)->int_literal_ = (yyvsp[0].int_literal_t);
		
	}
#line 9669 "bison_parser.cpp"
    break;

  case 513: /* num_literal: float_literal  */
#line 3950 "bison.y"
                       {
		(yyval.num_literal_t) = new NumLiteral();
		(yyval.num_literal_t)->case_idx_ = CASE1;
		(yyval.num_literal_t)->float_literal_ = (yyvsp[0].float_literal_t);
		
	}
#line 9680 "bison_parser.cpp"
    break;

  case 514: /* int_literal: INTLITERAL  */
#line 3959 "bison.y"
                    {
		(yyval.int_literal_t) = new IntLiteral();
		(yyval.int_literal_t)->int_val_ = (yyvsp[0].ival);
		
	}
#line 9690 "bison_parser.cpp"
    break;

  case 515: /* int_literal: comment_literal int_literal  */
#line 3964 "bison.y"
                                      {
		(yyval.int_literal_t) = (yyvsp[0].int_literal_t);
		MERGE_LEFT_COMMENT((yyval.int_literal_t), (yyvsp[-1].comment_literal_t));
	}
#line 9699 "bison_parser.cpp"
    break;

  case 516: /* int_literal: int_literal comment_literal  */
#line 3968 "bison.y"
                                      {
		(yyval.int_literal_t) = (yyvsp[-1].int_literal_t);
		(yyval.int_literal_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9708 "bison_parser.cpp"
    break;

  case 517: /* float_literal: FLOATLITERAL  */
#line 3975 "bison.y"
                      {
		(yyval.float_literal_t) = new FloatLiteral();
		(yyval.float_literal_t)->float_val_ = (yyvsp[0].fval);
		
	}
#line 9718 "bison_parser.cpp"
    break;

  case 518: /* float_literal: comment_literal float_literal  */
#line 3980 "bison.y"
                                        {
		(yyval.float_literal_t) = (yyvsp[0].float_literal_t);
		MERGE_LEFT_COMMENT((yyval.float_literal_t), (yyvsp[-1].comment_literal_t));
	}
#line 9727 "bison_parser.cpp"
    break;

  case 519: /* float_literal: float_literal comment_literal  */
#line 3984 "bison.y"
                                        {
		(yyval.float_literal_t) = (yyvsp[-1].float_literal_t);
		(yyval.float_literal_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9736 "bison_parser.cpp"
    break;

  case 520: /* opt_column: COLUMN  */
#line 3992 "bison.y"
                {
		(yyval.opt_column_t) = new OptColumn();
		(yyval.opt_column_t)->case_idx_ = CASE0;
		
	}
#line 9746 "bison_parser.cpp"
    break;

  case 521: /* opt_column: %empty  */
#line 3997 "bison.y"
          {
		(yyval.opt_column_t) = new OptColumn();
		(yyval.opt_column_t)->case_idx_ = CASE1;
		
	}
#line 9756 "bison_parser.cpp"
    break;

  case 522: /* opt_column: comment_literal opt_column  */
#line 4002 "bison.y"
                                     {
		(yyval.opt_column_t) = (yyvsp[0].opt_column_t);
		MERGE_LEFT_COMMENT((yyval.opt_column_t), (yyvsp[-1].comment_literal_t));
	}
#line 9765 "bison_parser.cpp"
    break;

  case 523: /* opt_column: opt_column comment_literal  */
#line 4006 "bison.y"
                                     {
		(yyval.opt_column_t) = (yyvsp[-1].opt_column_t);
		(yyval.opt_column_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9774 "bison_parser.cpp"
    break;

  case 524: /* trigger_body: drop_stmt  */
#line 4013 "bison.y"
                   {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE0;
		(yyval.trigger_body_t)->drop_stmt_ = (yyvsp[0].drop_stmt_t);
		
	}
#line 9785 "bison_parser.cpp"
    break;

  case 525: /* trigger_body: update_stmt  */
#line 4019 "bison.y"
                     {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE1;
		(yyval.trigger_body_t)->update_stmt_ = (yyvsp[0].update_stmt_t);
		
	}
#line 9796 "bison_parser.cpp"
    break;

  case 526: /* trigger_body: insert_stmt  */
#line 4025 "bison.y"
                     {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE2;
		(yyval.trigger_body_t)->insert_stmt_ = (yyvsp[0].insert_stmt_t);
		
	}
#line 9807 "bison_parser.cpp"
    break;

  case 527: /* trigger_body: alter_stmt  */
#line 4031 "bison.y"
                    {
		(yyval.trigger_body_t) = new TriggerBody();
		(yyval.trigger_body_t)->case_idx_ = CASE3;
		(yyval.trigger_body_t)->alter_stmt_ = (yyvsp[0].alter_stmt_t);
		
	}
#line 9818 "bison_parser.cpp"
    break;

  case 528: /* opt_if_not_exist: IF NOT EXISTS  */
#line 4041 "bison.y"
                       {
		(yyval.opt_if_not_exist_t) = new OptIfNotExist();
		(yyval.opt_if_not_exist_t)->case_idx_ = CASE0;
		
	}
#line 9828 "bison_parser.cpp"
    break;

  case 529: /* opt_if_not_exist: %empty  */
#line 4046 "bison.y"
          {
		(yyval.opt_if_not_exist_t) = new OptIfNotExist();
		(yyval.opt_if_not_exist_t)->case_idx_ = CASE1;
		
	}
#line 9838 "bison_parser.cpp"
    break;

  case 530: /* opt_if_not_exist: comment_literal opt_if_not_exist  */
#line 4051 "bison.y"
                                           {
		(yyval.opt_if_not_exist_t) = (yyvsp[0].opt_if_not_exist_t);
		MERGE_LEFT_COMMENT((yyval.opt_if_not_exist_t), (yyvsp[-1].comment_literal_t));
	}
#line 9847 "bison_parser.cpp"
    break;

  case 531: /* opt_if_not_exist: opt_if_not_exist comment_literal  */
#line 4055 "bison.y"
                                           {
		(yyval.opt_if_not_exist_t) = (yyvsp[-1].opt_if_not_exist_t);
		(yyval.opt_if_not_exist_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9856 "bison_parser.cpp"
    break;

  case 532: /* opt_if_exist: IF EXISTS  */
#line 4062 "bison.y"
                   {
		(yyval.opt_if_exist_t) = new OptIfExist();
		(yyval.opt_if_exist_t)->case_idx_ = CASE0;
		
	}
#line 9866 "bison_parser.cpp"
    break;

  case 533: /* opt_if_exist: %empty  */
#line 4067 "bison.y"
          {
		(yyval.opt_if_exist_t) = new OptIfExist();
		(yyval.opt_if_exist_t)->case_idx_ = CASE1;
		
	}
#line 9876 "bison_parser.cpp"
    break;

  case 534: /* opt_if_exist: comment_literal opt_if_exist  */
#line 4072 "bison.y"
                                       {
		(yyval.opt_if_exist_t) = (yyvsp[0].opt_if_exist_t);
		MERGE_LEFT_COMMENT((yyval.opt_if_exist_t), (yyvsp[-1].comment_literal_t));
	}
#line 9885 "bison_parser.cpp"
    break;

  case 535: /* opt_if_exist: opt_if_exist comment_literal  */
#line 4076 "bison.y"
                                       {
		(yyval.opt_if_exist_t) = (yyvsp[-1].opt_if_exist_t);
		(yyval.opt_if_exist_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9894 "bison_parser.cpp"
    break;

  case 536: /* identifier: IDENTIFIER  */
#line 4083 "bison.y"
                      {
		(yyval.identifier_t) = new Identifier();
		(yyval.identifier_t)->string_val_ = (yyvsp[0].sval);
		// fprintf(stderr,"case 0 IDENTIFIER:%s\n",$1);
		free((yyvsp[0].sval));
		
	}
#line 9906 "bison_parser.cpp"
    break;

  case 537: /* identifier: comment_literal identifier  */
#line 4090 "bison.y"
                                     {
		(yyval.identifier_t) = (yyvsp[0].identifier_t);
		MERGE_LEFT_COMMENT((yyval.identifier_t), (yyvsp[-1].comment_literal_t));
	}
#line 9915 "bison_parser.cpp"
    break;

  case 538: /* identifier: identifier comment_literal  */
#line 4094 "bison.y"
                                     {
		(yyval.identifier_t) = (yyvsp[-1].identifier_t);
		(yyval.identifier_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9924 "bison_parser.cpp"
    break;

  case 539: /* as_alias: AS identifier  */
#line 4102 "bison.y"
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
#line 9944 "bison_parser.cpp"
    break;

  case 540: /* as_alias: comment_literal as_alias  */
#line 4117 "bison.y"
                                   {
		(yyval.as_alias_t) = (yyvsp[0].as_alias_t);
		MERGE_LEFT_COMMENT((yyval.as_alias_t), (yyvsp[-1].comment_literal_t));
	}
#line 9953 "bison_parser.cpp"
    break;

  case 541: /* as_alias: as_alias comment_literal  */
#line 4121 "bison.y"
                                   {
		(yyval.as_alias_t) = (yyvsp[-1].as_alias_t);
		(yyval.as_alias_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9962 "bison_parser.cpp"
    break;

  case 542: /* table_name: identifier  */
#line 4128 "bison.y"
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
#line 9982 "bison_parser.cpp"
    break;

  case 543: /* column_name: identifier  */
#line 4147 "bison.y"
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
#line 10000 "bison_parser.cpp"
    break;

  case 544: /* column_name: identifier '.' identifier  */
#line 4160 "bison.y"
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
#line 10028 "bison_parser.cpp"
    break;

  case 545: /* opt_index_keyword: UNIQUE  */
#line 4187 "bison.y"
                {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE0;
		
	}
#line 10038 "bison_parser.cpp"
    break;

  case 546: /* opt_index_keyword: FULLTEXT  */
#line 4192 "bison.y"
                  {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE1;
		
	}
#line 10048 "bison_parser.cpp"
    break;

  case 547: /* opt_index_keyword: SPATIAL  */
#line 4197 "bison.y"
                 {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE2;
		
	}
#line 10058 "bison_parser.cpp"
    break;

  case 548: /* opt_index_keyword: %empty  */
#line 4202 "bison.y"
          {
		(yyval.opt_index_keyword_t) = new OptIndexKeyword();
		(yyval.opt_index_keyword_t)->case_idx_ = CASE3;
		
	}
#line 10068 "bison_parser.cpp"
    break;

  case 549: /* opt_index_keyword: comment_literal opt_index_keyword  */
#line 4207 "bison.y"
                                            {
		(yyval.opt_index_keyword_t) = (yyvsp[0].opt_index_keyword_t);
		MERGE_LEFT_COMMENT((yyval.opt_index_keyword_t), (yyvsp[-1].comment_literal_t));
	}
#line 10077 "bison_parser.cpp"
    break;

  case 550: /* opt_index_keyword: opt_index_keyword comment_literal  */
#line 4211 "bison.y"
                                            {
		(yyval.opt_index_keyword_t) = (yyvsp[-1].opt_index_keyword_t);
		(yyval.opt_index_keyword_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10086 "bison_parser.cpp"
    break;

  case 551: /* view_name: identifier  */
#line 4218 "bison.y"
                    {
		(yyval.view_name_t) = new ViewName();
		(yyval.view_name_t)->case_idx_ = CASE0;
		(yyval.view_name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 10097 "bison_parser.cpp"
    break;

  case 552: /* function_name: identifier  */
#line 4228 "bison.y"
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
#line 10117 "bison_parser.cpp"
    break;

  case 553: /* binary_op: OP_ADD  */
#line 4246 "bison.y"
                {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE0;
		
	}
#line 10127 "bison_parser.cpp"
    break;

  case 554: /* binary_op: OP_SUB  */
#line 4251 "bison.y"
                {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE1;
		
	}
#line 10137 "bison_parser.cpp"
    break;

  case 555: /* binary_op: OP_DIVIDE  */
#line 4256 "bison.y"
                   {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE2;
		
	}
#line 10147 "bison_parser.cpp"
    break;

  case 556: /* binary_op: OP_MOD  */
#line 4261 "bison.y"
                {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE3;
		
	}
#line 10157 "bison_parser.cpp"
    break;

  case 557: /* binary_op: OP_MUL  */
#line 4266 "bison.y"
                {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE4;
		
	}
#line 10167 "bison_parser.cpp"
    break;

  case 558: /* binary_op: OP_XOR  */
#line 4271 "bison.y"
                {
		(yyval.binary_op_t) = new BinaryOp();
		(yyval.binary_op_t)->case_idx_ = CASE5;
		
	}
#line 10177 "bison_parser.cpp"
    break;

  case 559: /* binary_op: comment_literal binary_op  */
#line 4276 "bison.y"
                                    {
		(yyval.binary_op_t) = (yyvsp[0].binary_op_t);
		MERGE_LEFT_COMMENT((yyval.binary_op_t), (yyvsp[-1].comment_literal_t));
	}
#line 10186 "bison_parser.cpp"
    break;

  case 560: /* binary_op: binary_op comment_literal  */
#line 4280 "bison.y"
                                    {
		(yyval.binary_op_t) = (yyvsp[-1].binary_op_t);
		(yyval.binary_op_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10195 "bison_parser.cpp"
    break;

  case 561: /* opt_not: NOT  */
#line 4287 "bison.y"
             {
		(yyval.opt_not_t) = new OptNot();
		(yyval.opt_not_t)->case_idx_ = CASE0;
		
	}
#line 10205 "bison_parser.cpp"
    break;

  case 562: /* opt_not: %empty  */
#line 4292 "bison.y"
          {
		(yyval.opt_not_t) = new OptNot();
		(yyval.opt_not_t)->case_idx_ = CASE1;
		
	}
#line 10215 "bison_parser.cpp"
    break;

  case 563: /* opt_not: comment_literal opt_not  */
#line 4297 "bison.y"
                                  {
		(yyval.opt_not_t) = (yyvsp[0].opt_not_t);
		MERGE_LEFT_COMMENT((yyval.opt_not_t), (yyvsp[-1].comment_literal_t));
	}
#line 10224 "bison_parser.cpp"
    break;

  case 564: /* opt_not: opt_not comment_literal  */
#line 4301 "bison.y"
                                  {
		(yyval.opt_not_t) = (yyvsp[-1].opt_not_t);
		(yyval.opt_not_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10233 "bison_parser.cpp"
    break;

  case 565: /* name: identifier  */
#line 4308 "bison.y"
                    {
		(yyval.name_t) = new Name();
		(yyval.name_t)->case_idx_ = CASE0;
		(yyval.name_t)->identifier_ = (yyvsp[0].identifier_t);
		
	}
#line 10244 "bison_parser.cpp"
    break;

  case 566: /* type_name: numeric_type  */
#line 4317 "bison.y"
                      {
		(yyval.type_name_t) = new TypeName();
		(yyval.type_name_t)->case_idx_ = CASE0;
		(yyval.type_name_t)->numeric_type_ = (yyvsp[0].numeric_type_t);
		
	}
#line 10255 "bison_parser.cpp"
    break;

  case 567: /* type_name: character_type  */
#line 4323 "bison.y"
                        {
		(yyval.type_name_t) = new TypeName();
		(yyval.type_name_t)->case_idx_ = CASE1;
		(yyval.type_name_t)->character_type_ = (yyvsp[0].character_type_t);
		
	}
#line 10266 "bison_parser.cpp"
    break;

  case 568: /* character_type: character_with_length  */
#line 4332 "bison.y"
                               {
		(yyval.character_type_t) = new CharacterType();
		(yyval.character_type_t)->case_idx_ = CASE0;
		(yyval.character_type_t)->character_with_length_ = (yyvsp[0].character_with_length_t);
		
	}
#line 10277 "bison_parser.cpp"
    break;

  case 569: /* character_type: character_without_length  */
#line 4338 "bison.y"
                                  {
		(yyval.character_type_t) = new CharacterType();
		(yyval.character_type_t)->case_idx_ = CASE1;
		(yyval.character_type_t)->character_without_length_ = (yyvsp[0].character_without_length_t);
		
	}
#line 10288 "bison_parser.cpp"
    break;

  case 570: /* character_with_length: character_conflicta OP_LP int_literal OP_RP  */
#line 4347 "bison.y"
                                                     {
		(yyval.character_with_length_t) = new CharacterWithLength();
		(yyval.character_with_length_t)->case_idx_ = CASE0;
		(yyval.character_with_length_t)->character_conflicta_ = (yyvsp[-3].character_conflicta_t);
		(yyval.character_with_length_t)->int_literal_ = (yyvsp[-1].int_literal_t);
		
	}
#line 10300 "bison_parser.cpp"
    break;

  case 571: /* character_with_length: comment_literal character_with_length  */
#line 4354 "bison.y"
                                                {
		(yyval.character_with_length_t) = (yyvsp[0].character_with_length_t);
		MERGE_LEFT_COMMENT((yyval.character_with_length_t), (yyvsp[-1].comment_literal_t));
	}
#line 10309 "bison_parser.cpp"
    break;

  case 572: /* character_with_length: character_with_length comment_literal  */
#line 4358 "bison.y"
                                                {
		(yyval.character_with_length_t) = (yyvsp[-1].character_with_length_t);
		(yyval.character_with_length_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10318 "bison_parser.cpp"
    break;

  case 573: /* character_without_length: character_conflicta  */
#line 4365 "bison.y"
                             {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE0;
		(yyval.character_without_length_t)->character_conflicta_ = (yyvsp[0].character_conflicta_t);
		
	}
#line 10329 "bison_parser.cpp"
    break;

  case 574: /* character_without_length: SET  */
#line 4371 "bison.y"
             {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE1;
		
	}
#line 10339 "bison_parser.cpp"
    break;

  case 575: /* character_without_length: ENUM  */
#line 4376 "bison.y"
              {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE2;
		
	}
#line 10349 "bison_parser.cpp"
    break;

  case 576: /* character_without_length: BINARY  */
#line 4381 "bison.y"
                {
		(yyval.character_without_length_t) = new CharacterWithoutLength();
		(yyval.character_without_length_t)->case_idx_ = CASE3;
		
	}
#line 10359 "bison_parser.cpp"
    break;

  case 577: /* character_without_length: comment_literal character_without_length  */
#line 4386 "bison.y"
                                                   {
		(yyval.character_without_length_t) = (yyvsp[0].character_without_length_t);
		MERGE_LEFT_COMMENT((yyval.character_without_length_t), (yyvsp[-1].comment_literal_t));
	}
#line 10368 "bison_parser.cpp"
    break;

  case 578: /* character_without_length: character_without_length comment_literal  */
#line 4390 "bison.y"
                                                   {
		(yyval.character_without_length_t) = (yyvsp[-1].character_without_length_t);
		(yyval.character_without_length_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10377 "bison_parser.cpp"
    break;

  case 579: /* character_conflicta: CHARACTER  */
#line 4397 "bison.y"
                   {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE0;
		
	}
#line 10387 "bison_parser.cpp"
    break;

  case 580: /* character_conflicta: CHAR  */
#line 4402 "bison.y"
              {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE1;
		
	}
#line 10397 "bison_parser.cpp"
    break;

  case 581: /* character_conflicta: VARCHAR  */
#line 4407 "bison.y"
                 {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE2;
		
	}
#line 10407 "bison_parser.cpp"
    break;

  case 582: /* character_conflicta: TEXT  */
#line 4412 "bison.y"
              {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE3;
		
	}
#line 10417 "bison_parser.cpp"
    break;

  case 583: /* character_conflicta: TINYTEXT  */
#line 4417 "bison.y"
                  {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE4;
		
	}
#line 10427 "bison_parser.cpp"
    break;

  case 584: /* character_conflicta: MEDIUMTEXT  */
#line 4422 "bison.y"
                    {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE5;
		
	}
#line 10437 "bison_parser.cpp"
    break;

  case 585: /* character_conflicta: LONGTEXT  */
#line 4427 "bison.y"
                  {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE6;
		
	}
#line 10447 "bison_parser.cpp"
    break;

  case 586: /* character_conflicta: NATIONAL CHARACTER  */
#line 4432 "bison.y"
                            {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE7;
		
	}
#line 10457 "bison_parser.cpp"
    break;

  case 587: /* character_conflicta: NATIONAL CHAR  */
#line 4437 "bison.y"
                       {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE8;
		
	}
#line 10467 "bison_parser.cpp"
    break;

  case 588: /* character_conflicta: NCHAR  */
#line 4442 "bison.y"
               {
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE9;
		
	}
#line 10477 "bison_parser.cpp"
    break;

  case 589: /* character_conflicta: %empty  */
#line 4447 "bison.y"
                     {
		// fprintf(stderr,"empty type\n");// 这一块没问题
		(yyval.character_conflicta_t) = new CharacterConflicta();
		(yyval.character_conflicta_t)->case_idx_ = CASE10;
		
	}
#line 10488 "bison_parser.cpp"
    break;

  case 590: /* character_conflicta: comment_literal character_conflicta  */
#line 4453 "bison.y"
                                              {
		(yyval.character_conflicta_t) = (yyvsp[0].character_conflicta_t);
		MERGE_LEFT_COMMENT((yyval.character_conflicta_t), (yyvsp[-1].comment_literal_t));
	}
#line 10497 "bison_parser.cpp"
    break;

  case 591: /* character_conflicta: character_conflicta comment_literal  */
#line 4457 "bison.y"
                                              {
		(yyval.character_conflicta_t) = (yyvsp[-1].character_conflicta_t);
		(yyval.character_conflicta_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10506 "bison_parser.cpp"
    break;

  case 592: /* numeric_type: INT  */
#line 4464 "bison.y"
             {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE0;
		
	}
#line 10516 "bison_parser.cpp"
    break;

  case 593: /* numeric_type: INTEGER  */
#line 4469 "bison.y"
                 {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE1;
		
	}
#line 10526 "bison_parser.cpp"
    break;

  case 594: /* numeric_type: SMALLINT  */
#line 4474 "bison.y"
                  {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE2;
		
	}
#line 10536 "bison_parser.cpp"
    break;

  case 595: /* numeric_type: BIGINT  */
#line 4479 "bison.y"
                {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE3;
		
	}
#line 10546 "bison_parser.cpp"
    break;

  case 596: /* numeric_type: REAL  */
#line 4484 "bison.y"
              {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE4;
		
	}
#line 10556 "bison_parser.cpp"
    break;

  case 597: /* numeric_type: FLOAT  */
#line 4489 "bison.y"
               {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE5;
		
	}
#line 10566 "bison_parser.cpp"
    break;

  case 598: /* numeric_type: FIXED  */
#line 4494 "bison.y"
               {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE6;
		
	}
#line 10576 "bison_parser.cpp"
    break;

  case 599: /* numeric_type: DOUBLE  */
#line 4499 "bison.y"
                {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE7;
		
	}
#line 10586 "bison_parser.cpp"
    break;

  case 600: /* numeric_type: DOUBLE PRECISION  */
#line 4504 "bison.y"
                          {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE8;
		
	}
#line 10596 "bison_parser.cpp"
    break;

  case 601: /* numeric_type: DECIMAL  */
#line 4509 "bison.y"
                 {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE9;
		
	}
#line 10606 "bison_parser.cpp"
    break;

  case 602: /* numeric_type: DEC  */
#line 4514 "bison.y"
             {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE10;
		
	}
#line 10616 "bison_parser.cpp"
    break;

  case 603: /* numeric_type: NUMERIC  */
#line 4519 "bison.y"
                 {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE11;
		
	}
#line 10626 "bison_parser.cpp"
    break;

  case 604: /* numeric_type: BOOLEAN  */
#line 4524 "bison.y"
                 {
		(yyval.numeric_type_t) = new NumericType();
		(yyval.numeric_type_t)->case_idx_ = CASE12;
		
	}
#line 10636 "bison_parser.cpp"
    break;

  case 605: /* numeric_type: comment_literal numeric_type  */
#line 4529 "bison.y"
                                       {
		(yyval.numeric_type_t) = (yyvsp[0].numeric_type_t);
		MERGE_LEFT_COMMENT((yyval.numeric_type_t), (yyvsp[-1].comment_literal_t));
	}
#line 10645 "bison_parser.cpp"
    break;

  case 606: /* numeric_type: numeric_type comment_literal  */
#line 4533 "bison.y"
                                       {
		(yyval.numeric_type_t) = (yyvsp[-1].numeric_type_t);
		(yyval.numeric_type_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10654 "bison_parser.cpp"
    break;

  case 607: /* opt_table_constraint_list: table_constraint_list  */
#line 4540 "bison.y"
                               {
		(yyval.opt_table_constraint_list_t) = new OptTableConstraintList();
		(yyval.opt_table_constraint_list_t)->case_idx_ = CASE0;
		(yyval.opt_table_constraint_list_t)->table_constraint_list_ = (yyvsp[0].table_constraint_list_t);
		
	}
#line 10665 "bison_parser.cpp"
    break;

  case 608: /* opt_table_constraint_list: %empty  */
#line 4546 "bison.y"
          {
		(yyval.opt_table_constraint_list_t) = new OptTableConstraintList();
		(yyval.opt_table_constraint_list_t)->case_idx_ = CASE1;
		
	}
#line 10675 "bison_parser.cpp"
    break;

  case 609: /* table_constraint_list: table_constraint  */
#line 4554 "bison.y"
                          {
		(yyval.table_constraint_list_t) = new TableConstraintList();
		(yyval.table_constraint_list_t)->case_idx_ = CASE0;
		(yyval.table_constraint_list_t)->table_constraint_ = (yyvsp[0].table_constraint_t);
		
	}
#line 10686 "bison_parser.cpp"
    break;

  case 610: /* table_constraint_list: table_constraint OP_COMMA table_constraint_list  */
#line 4560 "bison.y"
                                                         {
		(yyval.table_constraint_list_t) = new TableConstraintList();
		(yyval.table_constraint_list_t)->case_idx_ = CASE1;
		(yyval.table_constraint_list_t)->table_constraint_ = (yyvsp[-2].table_constraint_t);
		(yyval.table_constraint_list_t)->table_constraint_list_ = (yyvsp[0].table_constraint_list_t);
		
	}
#line 10698 "bison_parser.cpp"
    break;

  case 611: /* table_constraint: constraint_name PRIMARY KEY OP_LP indexed_column_list OP_RP  */
#line 4571 "bison.y"
                                                                     {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE0;
		(yyval.table_constraint_t)->constraint_name_ = (yyvsp[-5].constraint_name_t);
		(yyval.table_constraint_t)->indexed_column_list_ = (yyvsp[-1].indexed_column_list_t);
		
	}
#line 10710 "bison_parser.cpp"
    break;

  case 612: /* table_constraint: constraint_name UNIQUE OP_LP indexed_column_list OP_RP  */
#line 4578 "bison.y"
                                                                {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE1;
		(yyval.table_constraint_t)->constraint_name_ = (yyvsp[-4].constraint_name_t);
		(yyval.table_constraint_t)->indexed_column_list_ = (yyvsp[-1].indexed_column_list_t);
		
	}
#line 10722 "bison_parser.cpp"
    break;

  case 613: /* table_constraint: constraint_name CHECK OP_LP expr OP_RP opt_enforced  */
#line 4585 "bison.y"
                                                             {
		(yyval.table_constraint_t) = new TableConstraint();
		(yyval.table_constraint_t)->case_idx_ = CASE2;
		(yyval.table_constraint_t)->constraint_name_ = (yyvsp[-5].constraint_name_t);
		(yyval.table_constraint_t)->expr_ = (yyvsp[-2].expr_t);
		(yyval.table_constraint_t)->opt_enforced_ = (yyvsp[0].opt_enforced_t);
		
	}
#line 10735 "bison_parser.cpp"
    break;

  case 614: /* table_constraint: constraint_name FOREIGN KEY OP_LP column_name_list OP_RP reference_clause  */
#line 4593 "bison.y"
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
#line 10764 "bison_parser.cpp"
    break;

  case 615: /* table_constraint: comment_literal table_constraint  */
#line 4617 "bison.y"
                                           {
		(yyval.table_constraint_t) = (yyvsp[0].table_constraint_t);
		MERGE_LEFT_COMMENT((yyval.table_constraint_t), (yyvsp[-1].comment_literal_t));
	}
#line 10773 "bison_parser.cpp"
    break;

  case 616: /* table_constraint: table_constraint comment_literal  */
#line 4621 "bison.y"
                                           {
		(yyval.table_constraint_t) = (yyvsp[-1].table_constraint_t);
		(yyval.table_constraint_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10782 "bison_parser.cpp"
    break;

  case 617: /* opt_enforced: ENFORCED  */
#line 4628 "bison.y"
                  {
		(yyval.opt_enforced_t) = new OptEnforced();
		(yyval.opt_enforced_t)->case_idx_ = CASE0;
		
	}
#line 10792 "bison_parser.cpp"
    break;

  case 618: /* opt_enforced: NOT ENFORCED  */
#line 4633 "bison.y"
                      {
		(yyval.opt_enforced_t) = new OptEnforced();
		(yyval.opt_enforced_t)->case_idx_ = CASE1;
		
	}
#line 10802 "bison_parser.cpp"
    break;

  case 619: /* opt_enforced: %empty  */
#line 4638 "bison.y"
          {
		(yyval.opt_enforced_t) = new OptEnforced();
		(yyval.opt_enforced_t)->case_idx_ = CASE2;
		
	}
#line 10812 "bison_parser.cpp"
    break;

  case 620: /* opt_enforced: comment_literal opt_enforced  */
#line 4643 "bison.y"
                                       {
		(yyval.opt_enforced_t) = (yyvsp[0].opt_enforced_t);
		MERGE_LEFT_COMMENT((yyval.opt_enforced_t), (yyvsp[-1].comment_literal_t));
	}
#line 10821 "bison_parser.cpp"
    break;

  case 621: /* opt_enforced: opt_enforced comment_literal  */
#line 4647 "bison.y"
                                       {
		(yyval.opt_enforced_t) = (yyvsp[-1].opt_enforced_t);
		(yyval.opt_enforced_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10830 "bison_parser.cpp"
    break;


#line 10834 "bison_parser.cpp"

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

#line 4654 "bison.y"

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

void merge2CommentList( std::vector<string>& source, const std::vector<string>& next){
	source.insert(source.begin(), next.begin(), next.end());
}
