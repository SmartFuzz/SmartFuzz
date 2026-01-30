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
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs

/* First part of user prologue.  */
#line 1 "bison_parser.y"

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include <stdio.h>
#include <string.h>

#include "bison_parser.h"
#include "flex_lexer.h"

      int yyerror(YYLTYPE * llocp, Program* result, yyscan_t scanner,
                  const char* msg){
                    ErrorPosition err;
    err.first_line = llocp->first_line;
    err.first_col = llocp->first_column;
    err.last_line = llocp->last_line;
    err.last_col = llocp->last_column;
    result->errors.push_back(err);  // 将错误位置添加到Program结构
	return 0;
}


#line 110 "bison_parser.cpp"

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
  YYSYMBOL_STRING = 3,                     /* STRING  */
  YYSYMBOL_IDENTIFIER = 4,                 /* IDENTIFIER  */
  YYSYMBOL_COMMENTLITERAL = 5,             /* COMMENTLITERAL  */
  YYSYMBOL_FLOATVAL = 6,                   /* FLOATVAL  */
  YYSYMBOL_INTVAL = 7,                     /* INTVAL  */
  YYSYMBOL_DEALLOCATE = 8,                 /* DEALLOCATE  */
  YYSYMBOL_PARAMETERS = 9,                 /* PARAMETERS  */
  YYSYMBOL_INTERSECT = 10,                 /* INTERSECT  */
  YYSYMBOL_TEMPORARY = 11,                 /* TEMPORARY  */
  YYSYMBOL_TIMESTAMP = 12,                 /* TIMESTAMP  */
  YYSYMBOL_DISTINCT = 13,                  /* DISTINCT  */
  YYSYMBOL_NVARCHAR = 14,                  /* NVARCHAR  */
  YYSYMBOL_RESTRICT = 15,                  /* RESTRICT  */
  YYSYMBOL_TRUNCATE = 16,                  /* TRUNCATE  */
  YYSYMBOL_ANALYZE = 17,                   /* ANALYZE  */
  YYSYMBOL_BETWEEN = 18,                   /* BETWEEN  */
  YYSYMBOL_CASCADE = 19,                   /* CASCADE  */
  YYSYMBOL_COLUMNS = 20,                   /* COLUMNS  */
  YYSYMBOL_CONTROL = 21,                   /* CONTROL  */
  YYSYMBOL_DEFAULT = 22,                   /* DEFAULT  */
  YYSYMBOL_EXECUTE = 23,                   /* EXECUTE  */
  YYSYMBOL_EXPLAIN = 24,                   /* EXPLAIN  */
  YYSYMBOL_INTEGER = 25,                   /* INTEGER  */
  YYSYMBOL_NATURAL = 26,                   /* NATURAL  */
  YYSYMBOL_PREPARE = 27,                   /* PREPARE  */
  YYSYMBOL_PRIMARY = 28,                   /* PRIMARY  */
  YYSYMBOL_SCHEMAS = 29,                   /* SCHEMAS  */
  YYSYMBOL_SPATIAL = 30,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 31,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 32,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 33,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 34,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 35,                    /* COLUMN  */
  YYSYMBOL_CREATE = 36,                    /* CREATE  */
  YYSYMBOL_DELETE = 37,                    /* DELETE  */
  YYSYMBOL_DIRECT = 38,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 39,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 40,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 41,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 42,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 43,                   /* EXTRACT  */
  YYSYMBOL_GLOBAL = 44,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 45,                    /* HAVING  */
  YYSYMBOL_IMPORT = 46,                    /* IMPORT  */
  YYSYMBOL_INSERT = 47,                    /* INSERT  */
  YYSYMBOL_ISNULL = 48,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 49,                    /* OFFSET  */
  YYSYMBOL_RENAME = 50,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 51,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 52,                    /* SELECT  */
  YYSYMBOL_SORTED = 53,                    /* SORTED  */
  YYSYMBOL_TABLES = 54,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 55,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 56,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 57,                    /* UPDATE  */
  YYSYMBOL_VALUES = 58,                    /* VALUES  */
  YYSYMBOL_AFTER = 59,                     /* AFTER  */
  YYSYMBOL_ALTER = 60,                     /* ALTER  */
  YYSYMBOL_CROSS = 61,                     /* CROSS  */
  YYSYMBOL_DELTA = 62,                     /* DELTA  */
  YYSYMBOL_FLOAT = 63,                     /* FLOAT  */
  YYSYMBOL_GROUP = 64,                     /* GROUP  */
  YYSYMBOL_INDEX = 65,                     /* INDEX  */
  YYSYMBOL_INNER = 66,                     /* INNER  */
  YYSYMBOL_LIMIT = 67,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 68,                     /* LOCAL  */
  YYSYMBOL_MERGE = 69,                     /* MERGE  */
  YYSYMBOL_MINUS = 70,                     /* MINUS  */
  YYSYMBOL_ORDER = 71,                     /* ORDER  */
  YYSYMBOL_OUTER = 72,                     /* OUTER  */
  YYSYMBOL_RIGHT = 73,                     /* RIGHT  */
  YYSYMBOL_TABLE = 74,                     /* TABLE  */
  YYSYMBOL_UNION = 75,                     /* UNION  */
  YYSYMBOL_USING = 76,                     /* USING  */
  YYSYMBOL_WHERE = 77,                     /* WHERE  */
  YYSYMBOL_CALL = 78,                      /* CALL  */
  YYSYMBOL_CASE = 79,                      /* CASE  */
  YYSYMBOL_CHAR = 80,                      /* CHAR  */
  YYSYMBOL_DATE = 81,                      /* DATE  */
  YYSYMBOL_DESC = 82,                      /* DESC  */
  YYSYMBOL_DROP = 83,                      /* DROP  */
  YYSYMBOL_ELSE = 84,                      /* ELSE  */
  YYSYMBOL_FILE = 85,                      /* FILE  */
  YYSYMBOL_FROM = 86,                      /* FROM  */
  YYSYMBOL_FULL = 87,                      /* FULL  */
  YYSYMBOL_HASH = 88,                      /* HASH  */
  YYSYMBOL_HINT = 89,                      /* HINT  */
  YYSYMBOL_INTO = 90,                      /* INTO  */
  YYSYMBOL_JOIN = 91,                      /* JOIN  */
  YYSYMBOL_LEFT = 92,                      /* LEFT  */
  YYSYMBOL_LIKE = 93,                      /* LIKE  */
  YYSYMBOL_LOAD = 94,                      /* LOAD  */
  YYSYMBOL_LONG = 95,                      /* LONG  */
  YYSYMBOL_NULL = 96,                      /* NULL  */
  YYSYMBOL_PLAN = 97,                      /* PLAN  */
  YYSYMBOL_SHOW = 98,                      /* SHOW  */
  YYSYMBOL_TEXT = 99,                      /* TEXT  */
  YYSYMBOL_THEN = 100,                     /* THEN  */
  YYSYMBOL_TIME = 101,                     /* TIME  */
  YYSYMBOL_VIEW = 102,                     /* VIEW  */
  YYSYMBOL_WHEN = 103,                     /* WHEN  */
  YYSYMBOL_WITH = 104,                     /* WITH  */
  YYSYMBOL_ADD = 105,                      /* ADD  */
  YYSYMBOL_ALL = 106,                      /* ALL  */
  YYSYMBOL_AND = 107,                      /* AND  */
  YYSYMBOL_ASC = 108,                      /* ASC  */
  YYSYMBOL_CSV = 109,                      /* CSV  */
  YYSYMBOL_END = 110,                      /* END  */
  YYSYMBOL_FOR = 111,                      /* FOR  */
  YYSYMBOL_INT = 112,                      /* INT  */
  YYSYMBOL_KEY = 113,                      /* KEY  */
  YYSYMBOL_NOT = 114,                      /* NOT  */
  YYSYMBOL_OFF = 115,                      /* OFF  */
  YYSYMBOL_SET = 116,                      /* SET  */
  YYSYMBOL_TBL = 117,                      /* TBL  */
  YYSYMBOL_TOP = 118,                      /* TOP  */
  YYSYMBOL_AS = 119,                       /* AS  */
  YYSYMBOL_BY = 120,                       /* BY  */
  YYSYMBOL_IF = 121,                       /* IF  */
  YYSYMBOL_IN = 122,                       /* IN  */
  YYSYMBOL_IS = 123,                       /* IS  */
  YYSYMBOL_OF = 124,                       /* OF  */
  YYSYMBOL_ON = 125,                       /* ON  */
  YYSYMBOL_OR = 126,                       /* OR  */
  YYSYMBOL_TO = 127,                       /* TO  */
  YYSYMBOL_ARRAY = 128,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 129,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 130,                    /* ILIKE  */
  YYSYMBOL_SECOND = 131,                   /* SECOND  */
  YYSYMBOL_MINUTE = 132,                   /* MINUTE  */
  YYSYMBOL_HOUR = 133,                     /* HOUR  */
  YYSYMBOL_DAY = 134,                      /* DAY  */
  YYSYMBOL_MONTH = 135,                    /* MONTH  */
  YYSYMBOL_YEAR = 136,                     /* YEAR  */
  YYSYMBOL_TRUE = 137,                     /* TRUE  */
  YYSYMBOL_FALSE = 138,                    /* FALSE  */
  YYSYMBOL_PRAGMA = 139,                   /* PRAGMA  */
  YYSYMBOL_REINDEX = 140,                  /* REINDEX  */
  YYSYMBOL_GENERATED = 141,                /* GENERATED  */
  YYSYMBOL_ALWAYS = 142,                   /* ALWAYS  */
  YYSYMBOL_CHECK = 143,                    /* CHECK  */
  YYSYMBOL_CONFLICT = 144,                 /* CONFLICT  */
  YYSYMBOL_IGNORE = 145,                   /* IGNORE  */
  YYSYMBOL_REPLACE = 146,                  /* REPLACE  */
  YYSYMBOL_ROLLBACK = 147,                 /* ROLLBACK  */
  YYSYMBOL_ABORT = 148,                    /* ABORT  */
  YYSYMBOL_FAIL = 149,                     /* FAIL  */
  YYSYMBOL_AUTOINCR = 150,                 /* AUTOINCR  */
  YYSYMBOL_BEGIN = 151,                    /* BEGIN  */
  YYSYMBOL_TRIGGER = 152,                  /* TRIGGER  */
  YYSYMBOL_TEMP = 153,                     /* TEMP  */
  YYSYMBOL_INSTEAD = 154,                  /* INSTEAD  */
  YYSYMBOL_EACH = 155,                     /* EACH  */
  YYSYMBOL_ROW = 156,                      /* ROW  */
  YYSYMBOL_OVER = 157,                     /* OVER  */
  YYSYMBOL_FILTER = 158,                   /* FILTER  */
  YYSYMBOL_PARTITION = 159,                /* PARTITION  */
  YYSYMBOL_CURRENT = 160,                  /* CURRENT  */
  YYSYMBOL_EXCLUDE = 161,                  /* EXCLUDE  */
  YYSYMBOL_FOLLOWING = 162,                /* FOLLOWING  */
  YYSYMBOL_GROUPS = 163,                   /* GROUPS  */
  YYSYMBOL_NO = 164,                       /* NO  */
  YYSYMBOL_OTHERS = 165,                   /* OTHERS  */
  YYSYMBOL_PRECEDING = 166,                /* PRECEDING  */
  YYSYMBOL_RANGE = 167,                    /* RANGE  */
  YYSYMBOL_ROWS = 168,                     /* ROWS  */
  YYSYMBOL_TIES = 169,                     /* TIES  */
  YYSYMBOL_UNBOUNDED = 170,                /* UNBOUNDED  */
  YYSYMBOL_WINDOW = 171,                   /* WINDOW  */
  YYSYMBOL_ATTACH = 172,                   /* ATTACH  */
  YYSYMBOL_DETACH = 173,                   /* DETACH  */
  YYSYMBOL_DATABASE = 174,                 /* DATABASE  */
  YYSYMBOL_INDEXED = 175,                  /* INDEXED  */
  YYSYMBOL_CAST = 176,                     /* CAST  */
  YYSYMBOL_SAVEPOINT = 177,                /* SAVEPOINT  */
  YYSYMBOL_RELEASE = 178,                  /* RELEASE  */
  YYSYMBOL_VACUUM = 179,                   /* VACUUM  */
  YYSYMBOL_TRANSACTION = 180,              /* TRANSACTION  */
  YYSYMBOL_DEFFERED = 181,                 /* DEFFERED  */
  YYSYMBOL_EXCLUSIVE = 182,                /* EXCLUSIVE  */
  YYSYMBOL_IMEDIATE = 183,                 /* IMEDIATE  */
  YYSYMBOL_COMMIT = 184,                   /* COMMIT  */
  YYSYMBOL_GLOB = 185,                     /* GLOB  */
  YYSYMBOL_MATCH = 186,                    /* MATCH  */
  YYSYMBOL_REGEX = 187,                    /* REGEX  */
  YYSYMBOL_NOTHING = 188,                  /* NOTHING  */
  YYSYMBOL_NULLS = 189,                    /* NULLS  */
  YYSYMBOL_LAST = 190,                     /* LAST  */
  YYSYMBOL_FIRST = 191,                    /* FIRST  */
  YYSYMBOL_DO = 192,                       /* DO  */
  YYSYMBOL_COLLATE = 193,                  /* COLLATE  */
  YYSYMBOL_194_ = 194,                     /* '='  */
  YYSYMBOL_EQUALS = 195,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 196,                /* NOTEQUALS  */
  YYSYMBOL_197_ = 197,                     /* '<'  */
  YYSYMBOL_198_ = 198,                     /* '>'  */
  YYSYMBOL_LESS = 199,                     /* LESS  */
  YYSYMBOL_GREATER = 200,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 201,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 202,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 203,                  /* NOTNULL  */
  YYSYMBOL_204_ = 204,                     /* '+'  */
  YYSYMBOL_205_ = 205,                     /* '-'  */
  YYSYMBOL_206_ = 206,                     /* '*'  */
  YYSYMBOL_207_ = 207,                     /* '/'  */
  YYSYMBOL_208_ = 208,                     /* '%'  */
  YYSYMBOL_209_ = 209,                     /* '^'  */
  YYSYMBOL_UMINUS = 210,                   /* UMINUS  */
  YYSYMBOL_211_ = 211,                     /* '['  */
  YYSYMBOL_212_ = 212,                     /* ']'  */
  YYSYMBOL_213_ = 213,                     /* '('  */
  YYSYMBOL_214_ = 214,                     /* ')'  */
  YYSYMBOL_215_ = 215,                     /* '.'  */
  YYSYMBOL_216_ = 216,                     /* ';'  */
  YYSYMBOL_217_ = 217,                     /* ','  */
  YYSYMBOL_218_ = 218,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 219,                 /* $accept  */
  YYSYMBOL_input = 220,                    /* input  */
  YYSYMBOL_statement_list = 221,           /* statement_list  */
  YYSYMBOL_statement = 222,                /* statement  */
  YYSYMBOL_cmd = 223,                      /* cmd  */
  YYSYMBOL_cmd_release = 224,              /* cmd_release  */
  YYSYMBOL_savepoint_name = 225,           /* savepoint_name  */
  YYSYMBOL_cmd_pragma = 226,               /* cmd_pragma  */
  YYSYMBOL_cmd_reindex = 227,              /* cmd_reindex  */
  YYSYMBOL_cmd_analyze = 228,              /* cmd_analyze  */
  YYSYMBOL_cmd_attach = 229,               /* cmd_attach  */
  YYSYMBOL_cmd_detach = 230,               /* cmd_detach  */
  YYSYMBOL_pragma_key = 231,               /* pragma_key  */
  YYSYMBOL_pragma_value = 232,             /* pragma_value  */
  YYSYMBOL_schema_name = 233,              /* schema_name  */
  YYSYMBOL_pragma_name = 234,              /* pragma_name  */
  YYSYMBOL_preparable_statement = 235,     /* preparable_statement  */
  YYSYMBOL_rollback_statement = 236,       /* rollback_statement  */
  YYSYMBOL_opt_transaction = 237,          /* opt_transaction  */
  YYSYMBOL_opt_to_savepoint = 238,         /* opt_to_savepoint  */
  YYSYMBOL_vacuum_statement = 239,         /* vacuum_statement  */
  YYSYMBOL_opt_schema_name = 240,          /* opt_schema_name  */
  YYSYMBOL_begin_statement = 241,          /* begin_statement  */
  YYSYMBOL_commit_statement = 242,         /* commit_statement  */
  YYSYMBOL_opt_upsert_clause = 243,        /* opt_upsert_clause  */
  YYSYMBOL_upsert_clause = 244,            /* upsert_clause  */
  YYSYMBOL_indexed_column_list = 245,      /* indexed_column_list  */
  YYSYMBOL_indexed_column = 246,           /* indexed_column  */
  YYSYMBOL_opt_collate = 247,              /* opt_collate  */
  YYSYMBOL_assign_list = 248,              /* assign_list  */
  YYSYMBOL_opt_null = 249,                 /* opt_null  */
  YYSYMBOL_assign_clause = 250,            /* assign_clause  */
  YYSYMBOL_column_name_list = 251,         /* column_name_list  */
  YYSYMBOL_collation_name = 252,           /* collation_name  */
  YYSYMBOL_opt_hints = 253,                /* opt_hints  */
  YYSYMBOL_hint_list = 254,                /* hint_list  */
  YYSYMBOL_hint = 255,                     /* hint  */
  YYSYMBOL_prepare_statement = 256,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 257,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 258,        /* execute_statement  */
  YYSYMBOL_import_statement = 259,         /* import_statement  */
  YYSYMBOL_import_file_type = 260,         /* import_file_type  */
  YYSYMBOL_file_path = 261,                /* file_path  */
  YYSYMBOL_show_statement = 262,           /* show_statement  */
  YYSYMBOL_alter_statement = 263,          /* alter_statement  */
  YYSYMBOL_opt_column = 264,               /* opt_column  */
  YYSYMBOL_create_statement = 265,         /* create_statement  */
  YYSYMBOL_opt_unique = 266,               /* opt_unique  */
  YYSYMBOL_index_name = 267,               /* index_name  */
  YYSYMBOL_trigger_declare = 268,          /* trigger_declare  */
  YYSYMBOL_opt_tmp = 269,                  /* opt_tmp  */
  YYSYMBOL_trigger_name = 270,             /* trigger_name  */
  YYSYMBOL_opt_trigger_time = 271,         /* opt_trigger_time  */
  YYSYMBOL_trigger_event = 272,            /* trigger_event  */
  YYSYMBOL_opt_of_column_list = 273,       /* opt_of_column_list  */
  YYSYMBOL_opt_for_each = 274,             /* opt_for_each  */
  YYSYMBOL_opt_when = 275,                 /* opt_when  */
  YYSYMBOL_trigger_cmd_list = 276,         /* trigger_cmd_list  */
  YYSYMBOL_trigger_cmd = 277,              /* trigger_cmd  */
  YYSYMBOL_module_name = 278,              /* module_name  */
  YYSYMBOL_opt_not_exists = 279,           /* opt_not_exists  */
  YYSYMBOL_column_def_commalist = 280,     /* column_def_commalist  */
  YYSYMBOL_column_def = 281,               /* column_def  */
  YYSYMBOL_opt_column_arglist = 282,       /* opt_column_arglist  */
  YYSYMBOL_column_arglist = 283,           /* column_arglist  */
  YYSYMBOL_column_arg = 284,               /* column_arg  */
  YYSYMBOL_opt_on_conflict = 285,          /* opt_on_conflict  */
  YYSYMBOL_resolve_type = 286,             /* resolve_type  */
  YYSYMBOL_opt_autoinc = 287,              /* opt_autoinc  */
  YYSYMBOL_column_type = 288,              /* column_type  */
  YYSYMBOL_drop_statement = 289,           /* drop_statement  */
  YYSYMBOL_opt_exists = 290,               /* opt_exists  */
  YYSYMBOL_delete_statement = 291,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 292,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 293,         /* insert_statement  */
  YYSYMBOL_super_list = 294,               /* super_list  */
  YYSYMBOL_insert_type = 295,              /* insert_type  */
  YYSYMBOL_opt_column_list = 296,          /* opt_column_list  */
  YYSYMBOL_update_statement = 297,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 298,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 299,            /* update_clause  */
  YYSYMBOL_select_statement = 300,         /* select_statement  */
  YYSYMBOL_select_with_paren = 301,        /* select_with_paren  */
  YYSYMBOL_select_paren_or_clause = 302,   /* select_paren_or_clause  */
  YYSYMBOL_select_no_paren = 303,          /* select_no_paren  */
  YYSYMBOL_set_operator = 304,             /* set_operator  */
  YYSYMBOL_set_type = 305,                 /* set_type  */
  YYSYMBOL_opt_all = 306,                  /* opt_all  */
  YYSYMBOL_select_clause = 307,            /* select_clause  */
  YYSYMBOL_window_clause = 308,            /* window_clause  */
  YYSYMBOL_windowdefn_list = 309,          /* windowdefn_list  */
  YYSYMBOL_windowdefn = 310,               /* windowdefn  */
  YYSYMBOL_window = 311,                   /* window  */
  YYSYMBOL_opt_base_window_name = 312,     /* opt_base_window_name  */
  YYSYMBOL_opt_frame = 313,                /* opt_frame  */
  YYSYMBOL_range_or_rows = 314,            /* range_or_rows  */
  YYSYMBOL_frame_bound_s = 315,            /* frame_bound_s  */
  YYSYMBOL_frame_bound_e = 316,            /* frame_bound_e  */
  YYSYMBOL_frame_bound = 317,              /* frame_bound  */
  YYSYMBOL_opt_frame_exclude = 318,        /* opt_frame_exclude  */
  YYSYMBOL_frame_exclude = 319,            /* frame_exclude  */
  YYSYMBOL_opt_distinct = 320,             /* opt_distinct  */
  YYSYMBOL_select_list = 321,              /* select_list  */
  YYSYMBOL_opt_from_clause = 322,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 323,              /* from_clause  */
  YYSYMBOL_opt_where = 324,                /* opt_where  */
  YYSYMBOL_opt_group = 325,                /* opt_group  */
  YYSYMBOL_opt_having = 326,               /* opt_having  */
  YYSYMBOL_opt_order = 327,                /* opt_order  */
  YYSYMBOL_order_list = 328,               /* order_list  */
  YYSYMBOL_order_desc = 329,               /* order_desc  */
  YYSYMBOL_opt_order_type = 330,           /* opt_order_type  */
  YYSYMBOL_opt_top = 331,                  /* opt_top  */
  YYSYMBOL_opt_limit = 332,                /* opt_limit  */
  YYSYMBOL_expr_list = 333,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 334,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 335,             /* literal_list  */
  YYSYMBOL_expr_alias = 336,               /* expr_alias  */
  YYSYMBOL_expr = 337,                     /* expr  */
  YYSYMBOL_operand = 338,                  /* operand  */
  YYSYMBOL_cast_expr = 339,                /* cast_expr  */
  YYSYMBOL_scalar_expr = 340,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 341,               /* unary_expr  */
  YYSYMBOL_binary_expr = 342,              /* binary_expr  */
  YYSYMBOL_logic_expr = 343,               /* logic_expr  */
  YYSYMBOL_in_expr = 344,                  /* in_expr  */
  YYSYMBOL_case_expr = 345,                /* case_expr  */
  YYSYMBOL_case_list = 346,                /* case_list  */
  YYSYMBOL_exists_expr = 347,              /* exists_expr  */
  YYSYMBOL_comp_expr = 348,                /* comp_expr  */
  YYSYMBOL_function_expr = 349,            /* function_expr  */
  YYSYMBOL_opt_over_clause = 350,          /* opt_over_clause  */
  YYSYMBOL_opt_filter_clause = 351,        /* opt_filter_clause  */
  YYSYMBOL_extract_expr = 352,             /* extract_expr  */
  YYSYMBOL_datetime_field = 353,           /* datetime_field  */
  YYSYMBOL_array_expr = 354,               /* array_expr  */
  YYSYMBOL_array_index = 355,              /* array_index  */
  YYSYMBOL_between_expr = 356,             /* between_expr  */
  YYSYMBOL_column_name = 357,              /* column_name  */
  YYSYMBOL_literal = 358,                  /* literal  */
  YYSYMBOL_string_literal = 359,           /* string_literal  */
  YYSYMBOL_bool_literal = 360,             /* bool_literal  */
  YYSYMBOL_num_literal = 361,              /* num_literal  */
  YYSYMBOL_int_literal = 362,              /* int_literal  */
  YYSYMBOL_null_literal = 363,             /* null_literal  */
  YYSYMBOL_comment_literal = 364,          /* comment_literal  */
  YYSYMBOL_param_expr = 365,               /* param_expr  */
  YYSYMBOL_table_ref = 366,                /* table_ref  */
  YYSYMBOL_table_prefix = 367,             /* table_prefix  */
  YYSYMBOL_join_op = 368,                  /* join_op  */
  YYSYMBOL_opt_index = 369,                /* opt_index  */
  YYSYMBOL_opt_on = 370,                   /* opt_on  */
  YYSYMBOL_opt_using = 371,                /* opt_using  */
  YYSYMBOL_table_ref_name_no_alias = 372,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 373,               /* table_name  */
  YYSYMBOL_alias = 374,                    /* alias  */
  YYSYMBOL_opt_alias = 375,                /* opt_alias  */
  YYSYMBOL_opt_with_clause = 376,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 377,              /* with_clause  */
  YYSYMBOL_with_description_list = 378,    /* with_description_list  */
  YYSYMBOL_with_description = 379,         /* with_description  */
  YYSYMBOL_join_kw = 380,                  /* join_kw  */
  YYSYMBOL_opt_semicolon = 381,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 382           /* ident_commalist  */
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
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

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
#define YYFINAL  156
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3205

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  219
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  164
/* YYNRULES -- Number of rules.  */
#define YYNRULES  641
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1143

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
       2,     2,     2,     2,     2,     2,     2,   208,     2,     2,
     213,   214,   206,   204,   217,   205,   215,   207,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   216,
     197,   194,   198,   218,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   211,     2,   212,   209,     2,     2,     2,     2,     2,
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
     185,   186,   187,   188,   189,   190,   191,   192,   193,   195,
     196,   199,   200,   201,   202,   203,   210
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   577,   577,   583,   587,   592,   598,   605,   611,   616,
     622,   623,   624,   625,   626,   627,   628,   629,   630,   631,
     633,   638,   643,   647,   653,   659,   664,   670,   676,   680,
     686,   690,   696,   700,   706,   710,   716,   720,   726,   732,
     738,   742,   748,   753,   758,   762,   767,   772,   780,   785,
     790,   796,   801,   806,   811,   815,   821,   827,   833,   834,
     835,   836,   837,   838,   839,   840,   841,   842,   845,   850,
     854,   861,   866,   871,   875,   882,   887,   892,   896,   900,
     907,   913,   918,   922,   929,   934,   940,   945,   950,   955,
     960,   964,   971,   976,   981,   985,   991,   996,  1001,  1005,
    1011,  1017,  1026,  1030,  1036,  1040,  1045,  1052,  1057,  1062,
    1066,  1072,  1076,  1081,  1085,  1089,  1093,  1097,  1104,  1110,
    1114,  1119,  1129,  1134,  1138,  1142,  1148,  1152,  1157,  1163,
    1170,  1174,  1183,  1189,  1193,  1200,  1205,  1209,  1216,  1222,
    1229,  1233,  1243,  1249,  1253,  1259,  1263,  1267,  1273,  1284,
    1288,  1294,  1300,  1304,  1315,  1321,  1329,  1336,  1340,  1346,
    1351,  1356,  1360,  1372,  1380,  1388,  1396,  1412,  1427,  1435,
    1445,  1451,  1455,  1461,  1465,  1469,  1473,  1479,  1485,  1498,
    1502,  1506,  1510,  1516,  1522,  1526,  1530,  1534,  1538,  1542,
    1548,  1552,  1556,  1561,  1565,  1571,  1576,  1580,  1584,  1591,
    1595,  1599,  1603,  1610,  1615,  1619,  1623,  1629,  1633,  1637,
    1641,  1647,  1651,  1655,  1659,  1664,  1670,  1674,  1678,  1682,
    1688,  1692,  1696,  1700,  1706,  1714,  1719,  1723,  1727,  1733,
    1737,  1742,  1747,  1752,  1759,  1764,  1769,  1774,  1779,  1783,
    1789,  1794,  1798,  1802,  1809,  1813,  1817,  1821,  1825,  1829,
    1833,  1839,  1843,  1847,  1851,  1857,  1861,  1865,  1869,  1873,
    1877,  1881,  1885,  1889,  1893,  1897,  1909,  1917,  1925,  1931,
    1939,  1945,  1949,  1955,  1959,  1963,  1967,  1978,  1985,  1989,
    1995,  2001,  2005,  2015,  2032,  2050,  2054,  2058,  2062,  2068,
    2073,  2078,  2083,  2087,  2093,  2098,  2102,  2106,  2119,  2126,
    2130,  2136,  2140,  2145,  2151,  2155,  2166,  2172,  2178,  2190,
    2195,  2201,  2206,  2212,  2219,  2228,  2232,  2238,  2244,  2248,
    2252,  2256,  2260,  2266,  2270,  2274,  2278,  2284,  2296,  2308,
    2313,  2319,  2323,  2327,  2333,  2337,  2342,  2348,  2352,  2358,
    2366,  2374,  2380,  2384,  2388,  2394,  2401,  2409,  2413,  2417,
    2423,  2427,  2431,  2435,  2439,  2445,  2450,  2454,  2458,  2464,
    2469,  2473,  2477,  2483,  2488,  2493,  2497,  2501,  2507,  2512,
    2516,  2520,  2526,  2530,  2534,  2538,  2542,  2546,  2552,  2556,
    2560,  2564,  2570,  2575,  2580,  2585,  2589,  2593,  2599,  2604,
    2608,  2612,  2618,  2624,  2628,  2632,  2638,  2643,  2647,  2651,
    2657,  2662,  2666,  2670,  2676,  2680,  2684,  2688,  2694,  2701,
    2705,  2709,  2713,  2717,  2723,  2728,  2732,  2736,  2742,  2747,
    2752,  2758,  2762,  2767,  2768,  2772,  2781,  2785,  2789,  2793,
    2799,  2804,  2808,  2812,  2818,  2822,  2826,  2830,  2836,  2842,
    2843,  2844,  2845,  2846,  2847,  2849,  2854,  2859,  2864,  2869,
    2874,  2879,  2884,  2889,  2894,  2899,  2903,  2909,  2914,  2918,
    2924,  2929,  2935,  2941,  2947,  2953,  2959,  2965,  2969,  2975,
    2980,  2987,  2994,  3001,  3008,  3015,  3022,  3029,  3036,  3043,
    3050,  3057,  3064,  3072,  3078,  3085,  3091,  3097,  3103,  3109,
    3113,  3121,  3127,  3134,  3139,  3145,  3149,  3155,  3159,  3163,
    3167,  3173,  3178,  3183,  3187,  3193,  3199,  3205,  3211,  3217,
    3223,  3229,  3237,  3245,  3255,  3259,  3265,  3270,  3276,  3280,
    3284,  3290,  3295,  3299,  3303,  3309,  3315,  3319,  3325,  3329,
    3333,  3337,  3341,  3345,  3349,  3353,  3359,  3363,  3367,  3373,
    3378,  3382,  3387,  3394,  3400,  3408,  3412,  3418,  3422,  3427,
    3428,  3429,  3430,  3431,  3433,  3438,  3442,  3448,  3452,  3456,
    3460,  3466,  3471,  3476,  3480,  3486,  3490,  3494,  3500,  3501,
    3505,  3512,  3518,  3524,  3525,  3529,  3539,  3550,  3561,  3570,
    3580,  3586,  3590,  3594,  3599,  3603,  3607,  3612,  3619,  3628,
    3632,  3638,  3643,  3647,  3651,  3655,  3661,  3666,  3670,  3674,
    3680,  3685,  3689,  3693,  3699,  3704,  3711,  3719,  3723,  3729,
    3735,  3739,  3745,  3750,  3759,  3764,  3769,  3774,  3778,  3782,
    3786,  3792,  3803,  3807,  3811,  3815,  3819,  3823,  3827,  3831,
    3835,  3839,  3844,  3848,  3864,  3868,  3872,  3876,  3882,  3887,
    3892,  3896
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
  "\"end of file\"", "error", "\"invalid token\"", "STRING", "IDENTIFIER",
  "COMMENTLITERAL", "FLOATVAL", "INTVAL", "DEALLOCATE", "PARAMETERS",
  "INTERSECT", "TEMPORARY", "TIMESTAMP", "DISTINCT", "NVARCHAR",
  "RESTRICT", "TRUNCATE", "ANALYZE", "BETWEEN", "CASCADE", "COLUMNS",
  "CONTROL", "DEFAULT", "EXECUTE", "EXPLAIN", "INTEGER", "NATURAL",
  "PREPARE", "PRIMARY", "SCHEMAS", "SPATIAL", "VARCHAR", "VIRTUAL",
  "DESCRIBE", "BEFORE", "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE",
  "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT", "GLOBAL", "HAVING", "IMPORT",
  "INSERT", "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED",
  "TABLES", "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER",
  "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL",
  "MERGE", "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING",
  "WHERE", "CALL", "CASE", "CHAR", "DATE", "DESC", "DROP", "ELSE", "FILE",
  "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD",
  "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN",
  "WITH", "ADD", "ALL", "AND", "ASC", "CSV", "END", "FOR", "INT", "KEY",
  "NOT", "OFF", "SET", "TBL", "TOP", "AS", "BY", "IF", "IN", "IS", "OF",
  "ON", "OR", "TO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR",
  "DAY", "MONTH", "YEAR", "TRUE", "FALSE", "PRAGMA", "REINDEX",
  "GENERATED", "ALWAYS", "CHECK", "CONFLICT", "IGNORE", "REPLACE",
  "ROLLBACK", "ABORT", "FAIL", "AUTOINCR", "BEGIN", "TRIGGER", "TEMP",
  "INSTEAD", "EACH", "ROW", "OVER", "FILTER", "PARTITION", "CURRENT",
  "EXCLUDE", "FOLLOWING", "GROUPS", "NO", "OTHERS", "PRECEDING", "RANGE",
  "ROWS", "TIES", "UNBOUNDED", "WINDOW", "ATTACH", "DETACH", "DATABASE",
  "INDEXED", "CAST", "SAVEPOINT", "RELEASE", "VACUUM", "TRANSACTION",
  "DEFFERED", "EXCLUSIVE", "IMEDIATE", "COMMIT", "GLOB", "MATCH", "REGEX",
  "NOTHING", "NULLS", "LAST", "FIRST", "DO", "COLLATE", "'='", "EQUALS",
  "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ",
  "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['",
  "']'", "'('", "')'", "'.'", "';'", "','", "'?'", "$accept", "input",
  "statement_list", "statement", "cmd", "cmd_release", "savepoint_name",
  "cmd_pragma", "cmd_reindex", "cmd_analyze", "cmd_attach", "cmd_detach",
  "pragma_key", "pragma_value", "schema_name", "pragma_name",
  "preparable_statement", "rollback_statement", "opt_transaction",
  "opt_to_savepoint", "vacuum_statement", "opt_schema_name",
  "begin_statement", "commit_statement", "opt_upsert_clause",
  "upsert_clause", "indexed_column_list", "indexed_column", "opt_collate",
  "assign_list", "opt_null", "assign_clause", "column_name_list",
  "collation_name", "opt_hints", "hint_list", "hint", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "import_file_type", "file_path", "show_statement", "alter_statement",
  "opt_column", "create_statement", "opt_unique", "index_name",
  "trigger_declare", "opt_tmp", "trigger_name", "opt_trigger_time",
  "trigger_event", "opt_of_column_list", "opt_for_each", "opt_when",
  "trigger_cmd_list", "trigger_cmd", "module_name", "opt_not_exists",
  "column_def_commalist", "column_def", "opt_column_arglist",
  "column_arglist", "column_arg", "opt_on_conflict", "resolve_type",
  "opt_autoinc", "column_type", "drop_statement", "opt_exists",
  "delete_statement", "truncate_statement", "insert_statement",
  "super_list", "insert_type", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_with_paren", "select_paren_or_clause", "select_no_paren",
  "set_operator", "set_type", "opt_all", "select_clause", "window_clause",
  "windowdefn_list", "windowdefn", "window", "opt_base_window_name",
  "opt_frame", "range_or_rows", "frame_bound_s", "frame_bound_e",
  "frame_bound", "opt_frame_exclude", "frame_exclude", "opt_distinct",
  "select_list", "opt_from_clause", "from_clause", "opt_where",
  "opt_group", "opt_having", "opt_order", "order_list", "order_desc",
  "opt_order_type", "opt_top", "opt_limit", "expr_list",
  "opt_literal_list", "literal_list", "expr_alias", "expr", "operand",
  "cast_expr", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "opt_over_clause", "opt_filter_clause", "extract_expr",
  "datetime_field", "array_expr", "array_index", "between_expr",
  "column_name", "literal", "string_literal", "bool_literal",
  "num_literal", "int_literal", "null_literal", "comment_literal",
  "param_expr", "table_ref", "table_prefix", "join_op", "opt_index",
  "opt_on", "opt_using", "table_ref_name_no_alias", "table_name", "alias",
  "opt_alias", "opt_with_clause", "with_clause", "with_description_list",
  "with_description", "join_kw", "opt_semicolon", "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-714)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-635)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2949,  -714,    84,   123,   123,   419,   481,   123,  1419,    66,
     349,   -11,   123,   523,  1455,  1536,   892,    -3,   677,   123,
    -714,    -3,   685,  2194,   473,   284,   717,    -3,   758,    68,
    -714,  -714,   865,   865,   865,   865,   865,   865,  1107,   865,
     865,   865,   865,  1107,   865,   865,   865,   865,   865,   865,
     865,   865,  -714,   885,   865,  -714,  3021,   615,  -714,   759,
     669,  1467,   865,   865,   852,   826,   865,  1037,  -714,   441,
     441,  -714,    91,   989,   693,   730,   123,   991,  1193,  1033,
     865,   123,   695,   695,   695,   123,  -714,  1036,  1688,   146,
    -714,  -714,   865,   415,   986,  1333,  1094,  -714,   865,   694,
      -3,    -3,    -3,   865,  -714,  1537,  -714,  -714,  1102,  1120,
    2221,  -714,  2553,  1040,  -714,  -714,  2334,  1140,  2559,  -714,
    2300,  -714,  1550,  2589,   865,  -714,   865,  -714,  -714,   865,
     865,   865,  -714,   865,   865,   865,   865,  -714,   865,  -714,
     865,   865,   865,   865,   865,  2526,   865,  -714,   717,  -714,
    -714,  1316,  -714,  -714,  1304,   865,  -714,  2951,    74,   865,
    1416,  1416,  1416,  1416,  1416,  1416,  1368,   865,  1247,  1416,
    1416,  1416,  1416,   865,  1247,  1416,  1416,  1416,  1416,  1416,
    1416,  1416,  1416,   123,  1416,  1416,  -714,  -714,   865,   865,
     865,   865,   865,   865,   865,   865,   865,   865,  1107,   865,
     865,   865,   865,   865,   865,   865,   865,   885,   865,   956,
     615,  1590,   865,  1603,  1138,  -714,  1473,   865,  1416,  1181,
    1758,   441,  1381,   123,   902,   123,   441,  1416,  1257,   441,
    1416,   865,   865,  1253,  -714,  1213,  1082,  -714,  -714,  -714,
    -714,  -714,   865,  1225,  1698,  1468,  1462,   123,   914,   123,
    1730,   865,  1328,   146,  1547,  1416,  1416,   865,  1776,  1776,
    1561,   537,   865,   774,   865,   865,   865,    54,   456,  1384,
    1624,  2334,   925,  1180,  2379,  1402,  2559,  2709,  2641,  2334,
    1579,  2334,  1202,   101,  1043,  2398,  2334,   717,  2334,  2559,
    -714,  2559,    28,  1407,    23,  2559,  2559,  2559,  2559,  2559,
    2559,  2559,  2559,  2559,  2559,  2559,  2559,  2559,  2559,  2559,
    2559,  2559,  2559,  1769,  1416,  1416,  1416,  1416,  1416,  1416,
    1416,  1416,  1416,  1416,  1416,  1416,  1416,  1416,  1416,  1416,
    2620,   865,   865,   865,   865,   865,   865,   865,   865,   865,
     865,   865,   865,   865,   865,   865,   865,  1416,  -714,  -714,
    1788,  -714,  -714,   865,  1416,  -714,  1427,  1416,   865,    81,
    1769,   112,  1059,  1375,   211,  -714,  -714,  -714,   615,    59,
    1696,  1416,  1526,   615,  1604,  1674,   865,  1603,  -714,   225,
     148,  -714,  1210,  -714,   865,  1796,   123,  1617,  1467,   533,
     865,    81,  1818,  1280,  1480,   865,  -714,   865,  -714,  1493,
    1829,  2334,   865,  1435,  1788,  1416,   865,  1416,   865,  1489,
      10,   865,  1836,   965,  1353,  -714,  1467,   865,   865,   865,
     986,  1492,  -714,  1416,  -714,  -714,  -714,  -714,  -714,  -714,
     865,   865,   865,  1782,   362,  -714,  -714,  1316,  -714,  1416,
     865,   774,  -714,   543,  2334,  1642,  -714,  -714,   431,  -714,
    -714,  -714,  -714,  -714,  -714,    63,  1633,  1437,  1351,  1177,
    2334,  2334,  -714,  1416,  1262,  1384,  1618,  2709,   102,  -714,
     979,  2526,   717,  1677,  -714,  -714,  -714,  -714,  1616,  2741,
    2680,  2559,  1517,  2300,  -714,  1647,   416,  2680,  2680,  2680,
    2680,  2680,  2680,  2680,  1520,  1520,  1520,  1520,  1202,  1202,
     788,   788,   788,   400,   250,  1801,  -714,   865,  1806,  1839,
    1842,  1564,   142,   865,  2334,  1642,   865,  -714,  -714,  -714,
     849,   865,  1138,  -714,   865,  1117,   865,  2334,   849,  2334,
    2413,   865,  1613,   865,  1674,  -714,  1416,  1181,  1416,   865,
     148,  1416,   865,  1340,  -714,  1629,  1650,  1850,  1416,   843,
    -714,  1626,  -714,  1557,  1338,  -714,  1257,   865,   865,  -714,
     802,  1516,  1416,   865,  1435,  1704,  2334,  1698,   865,  1416,
     865,  -714,   123,    86,  1586,  1850,  1814,  1416,   865,   865,
     865,  -714,  -714,  1587,   554,   672,    20,  2526,   865,  -714,
    2334,  1416,   865,  2334,  2334,  -714,  1606,  1479,   545,  -714,
    2334,  1416,  1816,   983,   865,  -714,   166,  2589,   865,   865,
     865,  -714,  1785,  2559,  2680,  2300,   548,   109,  2398,  -714,
    -714,   865,   865,  1615,   958,   865,  1852,  -714,  1856,   111,
     213,    47,  1138,   865,   142,  1122,   166,  1416,  1604,  1263,
    1416,   865,  1416,   865,  1117,  1416,   236,  -714,  1393,  2526,
    1604,  1516,  1777,  1441,  1416,   865,  1613,  1416,  -714,  1210,
    1826,  1753,  -714,  1785,   134,  -714,  1862,  1650,  1416,   123,
    -714,   865,   865,   865,  1338,  -714,  -714,  1726,  1663,  1075,
     123,  1516,   865,   865,  1637,   882,   447,   865,  -714,  1416,
    -714,  1781,   557,   865,   635,   865,   543,  1416,  1198,  1516,
    1725,  -714,  2334,  -714,  -714,  -714,   865,  1416,  -714,  1649,
    -714,  -714,  1651,  -714,  -714,  -714,   566,  1790,  2709,   577,
     164,  -714,  -714,  1181,  -714,  1839,  1416,   865,   256,  -714,
    1870,  1416,  1181,   155,   241,  1737,  -714,   865,   585,   865,
    1253,   865,  1364,   865,  2334,  1416,  -714,  -714,   479,  1214,
     236,   865,  2334,  2334,   865,   865,   865,   865,  -714,  1670,
    1788,  1556,  -714,  1883,  1416,   319,  -714,   317,  -714,  -714,
    -714,   747,   791,  1770,   865,   865,    86,   865,   447,  2334,
    -714,  1864,  1416,   865,   635,  1416,   554,  -714,  -714,  1516,
    1884,  1893,  -714,  1416,   865,  -714,  -714,   210,  1210,   865,
    -714,   249,  1683,  -714,   585,   366,  1404,  1416,   865,   585,
    1898,  1371,   471,  1264,  1416,   865,  -714,  1686,   865,   513,
     865,  1516,  1516,  1850,  -714,  1791,   924,   924,  1822,  1699,
    1772,  1706,   865,  1556,   865,  1571,  -714,  1842,  1842,   865,
    1068,   123,  1416,   865,  1770,  1416,   865,  1206,  -714,  1707,
      26,  1874,   865,  1708,  1709,  -714,   148,  -714,  1181,  1416,
     634,  2334,  1371,   471,  -714,  -714,  -714,  -714,  1848,  1853,
    -714,  1854,  -714,  1444,   865,  1373,  1384,  1467,   518,  1804,
     452,  1296,  -714,  -714,  1416,   865,   513,  1416,   255,  1374,
    1783,   865,   946,   865,   924,  2334,  1810,  2334,  1416,   865,
    1571,  1416,   865,   865,  1571,   382,   256,  1416,   865,    50,
    -714,  -714,  1812,   692,  1263,   865,  -714,  -714,   444,  1819,
    -714,  1389,  -714,   596,  -714,  -714,  -714,   865,  1373,  1416,
    1129,  -714,  1416,   586,  1138,  1361,  2334,   983,   540,  2334,
    1889,   865,   541,   865,  1296,  -714,   924,  1193,  1416,   865,
     865,  1293,  1717,  1299,   865,  1253,  1784,  1376,    53,  2334,
    -714,  -714,  -714,   865,  1735,   785,  1416,  -714,    86,  1253,
    2334,  1932,  1374,   281,  1847,  -714,  1054,  1054,   512,  1767,
    1823,   561,   974,   100,  1825,  1728,   865,  1894,  1416,   865,
     541,  1416,   619,   946,   865,  -714,  2334,  -714,   865,  1794,
    2334,   865,  1386,   865,    53,    99,  1416,  1960,  1799,  1786,
      19,   865,  1582,  1971,   865,  1735,   785,   179,  -714,   -85,
     865,    89,  -714,  -714,  -714,   865,  1214,   865,  -714,   974,
     974,  1054,  -714,    86,   865,  2334,  1001,  1450,  2334,   865,
     177,  1734,  1889,  1416,   865,  -714,   865,   699,  1352,  -714,
    1516,  1416,   865,  1386,  1416,   692,   181,    55,  1971,  -714,
    -714,  1090,   865,   404,  1416,  -714,  -714,   865,   865,    86,
     865,  2334,    86,   707,  1416,  1001,  1450,  1450,   974,   865,
    1416,  1516,   865,  1743,  1498,   865,  1516,  1416,   865,   103,
    1864,   865,  1416,   865,   699,  -714,   865,  2107,  1416,  -714,
    1802,  1792,  -714,   865,  1199,  1416,   865,   404,  -714,  1516,
     865,  1843,  -714,   865,   865,  1450,  1416,  1842,  1498,   865,
    1416,  1746,  1800,    19,   865,  2151,  -714,  -714,  1416,   865,
      86,   865,   530,  -714,  -714,   865,   404,   865,   865,   179,
    -714,  1416,   865
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     615,   571,     0,     0,    34,     0,     0,     0,   174,     0,
       0,   289,     0,     0,     0,     0,     0,    72,     0,    30,
     290,    72,    72,     0,     0,     0,    85,    72,     0,   635,
       3,     8,    15,    10,    11,    12,    13,    14,   123,    16,
      17,    18,    19,   123,    66,    59,     7,    67,    60,    65,
      62,    63,    61,     0,    64,    58,   615,     0,   614,     0,
     605,     0,   280,    35,   138,     0,   151,     0,   173,   217,
     217,   179,     0,     0,     0,   174,     0,     0,     0,     0,
     604,     0,   274,   274,   274,     0,   149,     0,     0,   616,
     617,    71,    93,    72,    57,    25,     0,    46,    31,    77,
      72,    72,    72,    86,   554,   543,   561,   565,     0,     0,
       0,   568,     0,     0,   557,   558,     0,     0,     0,   545,
       0,   573,     0,   439,   444,   447,   448,   449,   441,   443,
     450,   442,   469,   451,   452,   453,   446,   440,   460,   461,
     549,   550,   551,   562,   552,     0,   553,    56,     0,    42,
      24,     0,    21,    84,    81,    92,     1,   615,   635,     2,
      23,    29,    33,    37,    41,    45,     0,     6,   123,    70,
      83,    91,    95,     5,   123,   141,   144,   153,   158,   172,
     272,   279,   282,     0,   293,   300,   571,     9,    15,    10,
      11,    12,    13,    14,    16,    17,    18,    19,   123,    66,
      59,     7,    67,    60,    65,    62,    63,     0,    64,   415,
       0,   306,   307,   401,     0,   268,     0,   607,   608,   431,
       0,   217,     0,     0,   217,     0,   217,   176,   615,   217,
     182,   175,   181,   389,   145,     0,     0,   244,   245,   246,
     247,   248,   291,     0,     0,     0,     0,     0,   274,     0,
       0,   150,     0,   619,     0,   620,    74,    73,     0,     0,
       0,     0,    68,    74,    87,    89,    88,   379,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   463,     0,     0,
       0,     0,   462,     0,     0,     0,     0,     0,     0,     0,
     464,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   456,   459,   468,   490,   496,   504,
     515,   527,   538,   541,   548,   556,   560,   564,   567,   570,
     455,   458,   448,   489,   450,   503,   451,   452,   453,   446,
     460,   549,   550,   551,   562,   552,   553,   575,    43,    20,
       0,     4,   634,   636,   637,   572,     0,   125,   124,   295,
       0,   379,   415,     0,     0,   319,   320,   318,     0,   324,
       0,   316,     0,     0,   423,   330,   315,   329,   606,     0,
     430,   434,   431,   135,   132,     0,     0,     0,     0,     0,
     218,   295,     0,   615,     0,   214,   213,   212,   211,   615,
       0,     0,   277,   389,     0,   147,   146,   250,   249,     0,
     389,   301,     0,   160,   160,   273,     0,   266,   275,   267,
     183,     0,   270,   276,   621,   618,    50,    53,    52,    51,
      26,    49,    48,     0,     0,    57,    47,     0,    75,    79,
      78,    77,   378,   522,     0,   379,   544,   546,     0,   528,
     529,   530,   531,   532,   533,     0,     0,     0,     0,     0,
       0,     0,   493,   500,   499,     0,     0,   455,     0,   426,
     613,     0,     0,     0,   454,   445,   483,    38,   484,     0,
     476,     0,     0,     0,   465,     0,   479,   478,   480,   481,
     482,   505,   506,   507,   508,   509,   510,   511,   471,   470,
     473,   472,   474,   475,     0,     0,    80,   148,     0,     0,
       0,     0,   295,   414,     0,   379,   416,   310,   309,   311,
     401,   312,     0,   323,   317,   322,   321,     0,   401,     0,
       0,   313,   403,   402,   401,   139,   433,     0,   437,   432,
     430,   137,   136,     0,   216,     0,   615,     0,   219,     0,
     177,     0,   170,     0,   210,   207,   209,   214,   212,   183,
     187,   388,   391,   390,   389,     0,     0,     0,   298,   305,
     304,   159,     0,     0,   160,     0,     0,    55,    54,    49,
      48,    27,    76,     0,   518,   522,     0,     0,   380,   501,
       0,   535,   534,     0,     0,   491,     0,     0,     0,   536,
       0,   429,     0,     0,   612,   438,   428,   439,   444,   443,
     442,    39,   263,     0,   477,     0,     0,     0,     0,   466,
     539,   566,   555,   128,     0,   126,     0,   638,     0,     0,
       0,    97,   297,   296,   295,   384,   382,   417,   423,   401,
     330,   329,   326,   325,   324,   322,   400,   404,   411,     0,
     423,   419,   421,   418,   425,   424,   423,   403,   435,     0,
       0,     0,   165,   263,     0,   220,     0,   615,   297,     0,
     208,   278,   292,   299,     0,   184,   185,     0,     0,   187,
       0,   303,   302,   154,   543,     0,     0,   161,   156,   162,
     269,     0,     0,   512,   518,   523,   522,   381,     0,   497,
       0,   494,     0,   502,   427,   609,   610,   611,   256,     0,
     259,   258,     0,   257,   262,   255,     0,   263,   542,     0,
       0,   487,   485,     0,   122,     0,   131,   130,   640,   294,
       0,   641,     0,    97,     0,     0,   284,    96,   316,   581,
     389,   383,     0,   308,     0,   407,   410,   409,   115,   411,
     406,   314,     0,     0,   559,   563,   569,   574,   215,   168,
       0,   226,   164,     0,   223,   222,   166,     0,   186,   190,
     191,   196,     0,     0,   188,   142,     0,   547,     0,     0,
     517,   342,   520,   519,   518,   524,   518,   525,   492,   498,
       0,     0,   457,   265,   264,   488,   486,     0,     0,   127,
     639,     0,     0,   283,   288,   287,     0,   103,   102,     0,
     581,   385,     0,   393,   387,   386,   405,     0,   408,   115,
     412,   422,   420,     0,   163,     0,   241,   241,     0,     0,
       0,     0,   224,   225,   230,   226,   221,     0,     0,   192,
     196,     0,   194,   193,     0,   189,   155,     0,   341,     0,
     401,   342,   513,     0,     0,   129,   436,   285,     0,   288,
       0,     0,     0,     0,   631,   630,   622,   628,   626,   629,
     585,   624,   584,     0,   580,     0,   581,   583,   613,     0,
     327,   391,   114,   113,   117,   116,   115,   413,     0,   411,
       0,   234,   241,   231,   241,     0,     0,     0,   228,   229,
       0,   239,   227,   230,   226,     0,   195,   198,   197,   200,
     521,   516,     0,   347,   344,   343,   260,   261,     0,     0,
      98,     0,   104,   108,   625,   627,   623,   589,     0,   590,
       0,   586,   633,     0,   581,     0,     0,   608,   593,     0,
       0,   328,   395,   394,   393,   169,   241,     0,   243,   242,
     232,     0,     0,     0,   238,   389,     0,   204,   200,     0,
     352,   350,   351,   340,     0,   347,   344,   286,     0,   389,
       0,     0,   411,   108,     0,   587,   613,   613,     0,     0,
       0,   593,   597,   397,     0,   331,   334,     0,   333,   332,
       0,   395,   252,   241,   240,   236,     0,   237,   167,     0,
       0,   178,   202,   201,   200,   401,   349,     0,     0,     0,
     369,   355,     0,   354,   348,     0,   347,   389,   111,     0,
     119,     0,   105,   121,   107,   106,   110,   109,   588,   597,
     597,   613,   592,     0,   594,     0,   595,   601,     0,   392,
     397,     0,     0,   338,   337,   251,   233,   243,     0,   199,
     203,   206,   205,   204,   202,   347,   401,     0,     0,   365,
     356,     0,   345,   358,   367,   364,   363,   357,   355,     0,
      99,     0,     0,     0,   110,   597,   601,   601,   597,   591,
     595,   596,   598,     0,   599,   576,   396,   399,   398,   397,
     342,   335,   254,   253,   252,   235,   339,     0,   358,   374,
       0,     0,   375,   368,     0,   371,   370,   369,   112,   118,
     120,     0,   100,   578,   579,   601,   599,     0,   601,   602,
     603,     0,     0,   369,   359,     0,   373,   372,   377,   376,
       0,   577,     0,   336,   360,   346,   362,   361,   359,   389,
     600,   362,   101
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -714,  -714,  -714,  1109,  -714,  1905,   -80,  1912,  1913,  1914,
    1915,  1924,  -714,  -254,   294,  1721,  -714,  1926,  1815,  1885,
    1929,  -714,  1930,  1931,  1256,   193,  -714,  1020,  1018,   862,
    1245,   926,  -714,  -714,   757,  -714,   720,  1940,  1612,  1943,
    1945,  1771,  -394,  1949,  1950,   243,  1952,  1935,  -714,  -714,
    1936,    29,  1336,  1334,  1176,  1108,  1062,  1621,  -380,  -714,
    1058,  -114,  -174,  1261,  -714,   -31,   612,  -242,  1031,   836,
    1968,   624,   271,  1969,  1045,  1292,    39,  -237,   293,  -714,
    -392,     9,   390,  1656,   711,  1820,  -347,  1665,   292,  1152,
    -714,   161,   945,  1186,   -84,   346,   675,   913,   418,    73,
     937,   327,  -714,  -714,  1300,     5,  1230,  1061,  -199,  1396,
    1303,  -535,  1687,  -363,   866,  1666,  -376,  1452,   875,   936,
     637,  -714,   873,  -714,  -714,  1023,   915,   297,  1038,  -714,
     975,   -33,   347,   996,  1597,  1015,  1017,  -714,   579,   584,
     921,   734,  1014,   896,   879,     0,   893,  -713,  -332,  1182,
    1076,   552,   483,  -714,  1411,  -585,  -189,  -714,  -714,  1970,
    1805,  1187,  1904,  -598
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    28,    29,    30,    31,    32,   152,    33,    34,    35,
      36,    37,    95,   430,    96,    97,    38,    39,    92,   440,
      40,   154,    41,    42,   736,   808,   921,   922,   972,  1017,
     885,  1018,  1019,  1024,   173,   624,   625,    43,   384,    44,
      45,   235,   506,    46,    47,   573,    48,    72,   551,    73,
      74,   422,   678,   843,   839,  1003,  1052,   393,   394,   759,
     223,   664,   665,   902,   833,   903,   949,   242,  1093,   716,
      49,   247,   395,    51,   396,   733,    53,   633,   397,   410,
     411,   398,   519,   520,   376,   373,   369,   643,   213,   989,
     985,   986,   849,   850,  1014,   964,  1010,  1123,  1011,  1106,
    1103,   588,   635,   740,   741,   563,   943,  1088,   533,   646,
     647,   820,   361,   655,   606,   379,   380,   469,   470,   123,
     124,   125,   126,   127,   128,   129,   130,   464,   131,   132,
     133,   783,   584,   134,   455,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   862,   812,   874,
     982,  1082,  1119,    79,   217,   604,   605,    57,    58,    89,
      90,   875,   159,   629
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,   408,     1,    61,    61,   434,   540,    61,    75,    55,
     565,   531,    61,   553,   374,     1,    88,    93,   706,    61,
     570,    93,    93,   526,     1,     1,   811,    93,   526,   158,
     728,     1,   160,   161,   162,   163,   164,   165,   168,   169,
     170,   171,   172,   174,   175,   176,   177,   178,   179,   180,
     181,   182,     1,   184,   185,     1,    56,   214,   186,     1,
       1,    61,   218,   218,     1,    55,   218,   442,     1,   224,
     224,   349,   227,     1,   230,    75,    61,   236,   243,   186,
     218,    61,   248,   248,   248,    61,     1,   401,    88,   255,
     684,     1,   256,    93,     1,   207,     1,   372,   218,   263,
      93,    93,    93,   256,     1,     1,     1,     1,   186,  1071,
     274,    59,   278,   748,     1,    78,     1,     1,   278,   484,
     285,   481,   511,   314,   315,   442,   316,    60,     1,   317,
     318,   319,  1072,   320,   321,   322,   323,   485,   324,     1,
     325,   326,   327,   328,   329,  1038,   347,   186,  1038,   590,
     482,     1,    76,     1,   549,   256,   226,    56,   158,   354,
       1,   956,  1097,   935,   956,   523,    55,   357,   168,     1,
     372,     1,   735,   357,   168,   682,   553,    91,   374,   578,
    1061,   438,   186,    61,     1,   912,   186,   526,   160,   161,
     162,   163,   164,   165,   169,   170,   171,   172,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   184,   185,   362,
     214,   370,   371,   375,   214,     1,     1,   218,     1,   382,
     385,   224,  1038,   388,   224,   388,   224,   567,   399,   224,
       1,   227,   230,   403,   696,   405,   236,   600,   402,   905,
     906,     1,   407,   243,   412,   218,   186,   416,   248,   416,
     423,   218,   372,   255,     1,     1,   401,   256,   433,   433,
       1,     1,   439,   441,   256,   256,   256,   445,   443,   214,
     456,    50,   459,   463,   274,   743,   278,   314,   278,   471,
     735,  1073,   314,   371,   157,   285,   186,   751,   150,   278,
     352,   278,   119,    54,   510,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   505,   599,   474,   600,   600,   149,   600,
     153,   638,     1,   722,     1,   729,   600,   205,   730,   650,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   347,   797,   762,   208,
     508,   763,   706,   354,   946,   510,   801,   582,   357,   512,
     505,   515,   362,   254,   371,   537,   824,     1,   522,   525,
     370,     1,   802,   522,   532,   534,   371,   375,   796,   536,
     538,   600,   382,   600,   541,   385,   388,     1,    61,   218,
     548,   512,   548,   554,  -429,   181,  1069,   185,  -429,   399,
     548,   688,   562,   564,   508,     1,   405,   273,   407,   186,
     564,   569,   412,   574,   574,   568,    61,   218,   423,   218,
     186,     1,   856,    64,   855,   518,   732,   537,    50,   560,
     577,   325,   327,   433,   577,    77,     1,  1025,   207,   535,
     439,   441,   348,   585,   587,   445,     1,   211,   371,     1,
      54,   684,   186,   744,   732,   591,   456,     1,   463,   459,
     446,   151,   620,   857,   463,   214,   537,   314,   601,   945,
     603,   471,   763,   730,   971,    60,     1,   147,   863,   314,
     314,   278,   918,   618,     1,    65,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   328,   505,   377,   325,   508,   626,
     628,   632,   634,   328,   587,   445,   637,     1,   186,  1132,
     639,   640,   522,     1,   642,   644,   645,   649,   639,   295,
     837,   654,   656,   657,   534,     1,   763,   659,     1,   536,
     538,   150,   541,   218,   421,     1,   186,   666,     1,   668,
       1,   693,   765,     1,   674,   662,   554,   181,   185,     1,
     679,   780,   222,   562,   564,  1061,   186,   412,   562,   458,
     569,     1,    61,   686,   574,   689,   581,   377,   577,   325,
     327,   477,     1,   802,   694,   585,   601,   471,   697,   836,
     186,     1,   591,   672,   444,    91,   955,    81,   371,   730,
     363,     1,   863,   603,   707,   690,   601,   314,   315,   317,
     319,   313,   717,   278,   314,   618,   371,   601,   618,   545,
       1,   328,   325,   940,     1,   726,   626,   313,   628,   731,
     734,   738,   214,   668,   634,   742,   601,   602,   532,   639,
     186,   640,   424,   642,   644,   589,   745,   148,   749,   649,
     532,   913,   546,   119,   979,   654,   656,   575,   967,   659,
     521,   537,   447,   717,   764,   521,   666,   209,   817,    61,
     557,   181,   184,   185,   674,   979,   766,   186,   773,   679,
      61,    94,   569,   218,   876,   324,   778,   689,   514,   938,
       1,   919,   558,   782,   784,   785,   585,     1,     1,     1,
       1,   583,   817,   286,   186,   994,   707,   249,   250,   888,
     735,   692,   940,   672,   437,   980,   793,   717,   314,   371,
     601,   147,   288,   798,   340,   626,  1031,   726,   731,   600,
     834,   936,   798,   804,   734,   186,   980,   807,   809,   810,
     564,   814,   742,   654,  1140,   813,   547,   730,   819,   749,
     745,   654,     1,   852,   326,   327,   329,   347,   156,   703,
     508,   835,   721,   215,  1111,   764,   611,   218,   212,  1045,
     781,   840,   842,   844,   845,   218,   778,   324,   778,   186,
     792,   851,   331,   782,   784,    68,   694,  1029,  1030,   971,
     186,   795,   692,     1,   793,   167,     1,   538,   798,   726,
     976,   538,   899,   381,   809,   859,  1055,     1,   807,   809,
     810,   873,   877,   881,   641,   814,   246,   687,   884,   886,
     887,   261,   920,   666,   737,   671,   892,   892,   210,   963,
     583,   283,   898,   900,   901,   904,   675,   628,   628,   907,
     840,    61,  1078,   842,   844,   229,   324,   673,     1,  1045,
     914,   851,   782,   340,     1,   960,   538,   340,   798,   961,
     962,   676,   873,   877,   340,    91,   100,   101,   102,   954,
       1,   838,   418,   873,   929,   932,   934,    61,   937,   342,
     942,   944,  -180,    71,   216,   884,   886,     1,   764,   749,
       1,   948,   892,   948,   892,  1112,    87,     1,   122,   901,
     900,   261,   898,   901,   904,   731,   731,   186,   907,   958,
     377,   331,   220,   965,   639,   966,   841,   295,   538,   186,
     372,   364,   331,   973,   377,   358,   737,   929,   932,     1,
       1,   358,   695,   371,   934,   873,   471,   603,   981,   471,
     987,   988,   990,   991,   944,   671,   993,   243,   960,   948,
     948,   186,   961,   962,   901,   564,   677,  1002,  1004,   471,
     998,     1,   667,  1006,  1013,  1016,   381,   673,   778,   564,
       1,  1096,  1026,   973,  1021,   183,   603,   603,   601,     1,
     448,   981,  1036,  1040,     1,   272,  1043,   987,   186,   988,
     990,   280,  1047,   892,   407,   284,     1,   312,   562,   313,
     571,  1051,  1053,  1054,  1004,  1056,   186,  1058,   342,   776,
    1063,  1064,   342,  1058,  1006,  1013,  1016,   564,   332,   342,
     324,   562,  1070,   222,   345,   887,   749,  1074,   271,  1075,
    1075,   603,   286,   778,  1080,   246,  1075,  1084,   346,  1087,
    1089,   344,   987,   786,  1043,    52,  1092,  1094,   277,   890,
     340,   288,  1051,  1053,   282,   965,   639,  1098,  1058,     1,
     334,  1104,  1105,  1107,   186,   219,   341,  1098,  1064,   778,
     562,   890,   778,   186,   360,  1075,  1084,  1084,  1075,   324,
     186,   330,  1116,  1062,  1118,  1120,   286,   186,  1087,  1089,
     851,  1043,   572,  1092,  1094,     1,  1006,  1125,   602,  1035,
     234,    52,   602,  1128,  1104,   288,  1105,  1107,   608,   675,
     324,   221,     1,  1120,  1120,  1084,   342,   628,  1118,  1120,
     336,   658,   186,  1136,  1064,  1125,  1035,     1,   225,  1128,
     778,  1120,   731,   974,   676,  1105,  1107,  1141,  1064,   564,
     228,   337,   562,   186,  1142,   468,   457,   332,  1044,   244,
     286,   332,   685,   345,  1099,   252,   473,   345,   332,   343,
     338,   476,   339,   478,   345,   187,   340,   346,   333,   288,
     344,   346,   724,   602,   344,   725,   598,   360,   346,   431,
     431,   344,   186,   335,   104,     1,     1,   106,   107,   334,
     209,   234,   838,   334,   616,   341,  1135,   340,     1,   341,
     334,   -56,    52,  1091,   186,   342,   341,     1,   739,   504,
     330,   166,   277,   104,   467,   186,   106,   107,     1,   186,
     975,   330,   631,   523,   608,   479,   377,   480,   340,   677,
     186,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   336,
    1100,   279,   186,   336,  1101,   608,   513,   475,     1,  1102,
     336,   345,     1,  1099,   460,   777,   351,     1,   186,     1,
     337,   507,   432,   432,   337,   346,   561,   111,   344,   386,
     271,   337,   390,   461,   392,     1,   608,   400,   343,   338,
     462,   339,   343,   338,     9,   339,   746,   333,   404,   343,
     338,   186,   339,   341,    11,   286,   111,   381,   333,   260,
     586,  1015,   335,   286,    12,   269,   381,     9,   114,   115,
     150,   342,   747,   335,   288,   507,   719,    11,   879,   344,
     401,   295,   288,   270,   372,   596,   597,    12,   237,   238,
     239,   240,   241,   186,   332,     1,   727,   114,   115,   617,
     345,   166,   342,   281,   579,   846,     1,   777,     1,  1100,
     879,    16,  1015,  1101,   346,   461,     1,   344,  1102,   186,
     237,   238,   239,   240,   241,     9,     1,   930,     1,     1,
     636,     1,   381,   342,    16,    11,   334,   864,   571,     1,
     552,   186,   341,   754,   350,    12,   343,   864,     1,   121,
     286,   621,   648,    20,   651,   653,   286,   607,   309,   310,
     311,   312,   787,   313,    62,    63,   660,   614,    66,   288,
     910,   355,   865,    80,     1,   288,    20,   866,   121,   622,
      98,  1068,   865,   867,   868,   594,   209,   866,   891,   893,
     186,   681,   381,   867,   868,   799,   336,   580,   869,   186,
     739,    67,   870,   871,   461,     1,   746,   356,   869,   286,
     332,   595,   870,   871,   931,   698,   345,   337,   699,   700,
     864,    60,   186,     1,    68,   746,  1068,   378,   288,  1000,
     346,   720,   747,   344,    20,   343,   338,   233,   339,  1000,
     753,   332,   245,    69,   609,   387,   251,   345,   186,   761,
     286,   747,   334,   186,   415,   865,   950,   995,   341,   610,
     866,   346,   401,   997,   344,  1124,   867,   868,   413,   288,
    1085,    70,   332,   607,   648,     1,  1083,   258,   345,    82,
       9,   869,   342,   334,  1037,   870,   871,   593,   756,   341,
      11,   210,   346,  1138,   286,   344,   259,  1020,   286,   718,
      12,    87,   757,   794,   607,   344,    85,    83,   992,  1113,
    1114,     1,   336,   288,   334,   435,  1095,   288,   290,     1,
     341,  -180,    71,   414,  1083,   977,   186,   789,   872,   702,
     622,  1076,  1077,   337,   825,   607,   286,   933,   872,   517,
      86,   186,   340,   336,   359,     1,   860,    16,  1131,   825,
     365,   343,   338,   969,   339,   288,   970,    84,     1,     1,
     609,   826,  1079,   365,   337,   465,   209,   861,   186,   648,
     483,   571,   630,   286,   336,   610,   826,   821,   822,     1,
    1115,   366,   343,   338,   389,   339,   391,   340,   186,    20,
     509,   609,   288,   294,   366,   337,   527,   186,  1020,   295,
     608,  1110,   827,   529,   847,   442,   610,   286,   417,   544,
     419,   872,   529,   343,   338,   367,   339,   827,     1,   287,
     828,   530,   609,   755,   372,   829,   288,   345,   367,   186,
     530,   507,  1057,   566,   365,   828,   286,   610,  1067,   286,
     829,   346,    87,   186,   344,   608,   555,   830,   472,   831,
     769,   186,   409,     1,   340,   288,   365,   576,   288,  1020,
     770,   481,   830,   286,   831,   366,   701,  -635,  -635,   341,
     771,  -635,  -635,   286,   307,   308,   309,   310,   311,   312,
     615,   313,   288,  1067,   420,     1,   923,   366,   104,   105,
       1,   106,   107,   619,  1065,   372,   661,   342,  1066,   367,
     267,   669,   268,  1007,    16,   449,   450,   451,   452,   453,
     454,   383,   608,     1,   449,   450,   451,   452,   453,   454,
     951,   367,   953,   670,     1,   186,   107,   108,   109,   104,
     426,     1,   106,   107,   286,   104,   426,   186,   106,   107,
       1,   104,   342,     1,   680,   186,   612,   543,   427,   383,
     691,   186,   978,   288,   427,   983,   186,   769,   107,   104,
     708,   186,   343,   428,   110,   708,   709,   770,   559,   428,
     705,   709,   550,     1,   710,  1005,   752,   771,   723,   710,
     758,   111,   286,   559,     1,   788,    99,   103,   760,  1012,
     409,   186,   155,   623,     1,   923,   627,     1,   711,   112,
     768,   288,   268,   711,   663,     1,   623,   186,   779,   342,
     627,   186,   790,   113,   791,   712,   663,   186,   848,     1,
     712,  1048,   114,   115,   800,  1050,   882,   883,   848,   186,
     713,   806,  1012,   823,   714,   713,   332,   663,  1012,   714,
    1012,   853,   345,   984,     1,  1008,   858,   715,   984,   186,
     854,   429,   715,   186,   889,  1009,   346,   429,   257,   344,
    1081,   117,   895,  1086,   896,   264,   265,   266,   894,   897,
     924,   911,   916,   917,   939,   925,   926,   947,   334,   952,
     996,   332,   959,  1012,   341,   968,  1023,   345,  1028,   999,
     118,   119,  1032,  1033,  1041,  1042,  1109,  1090,   120,   607,
    1049,   346,  1060,   121,   344,  1059,  1117,  1127,  1126,  1130,
    1133,   188,  1134,   104,   105,     1,   106,   107,   189,   190,
     191,   192,  1012,   334,   104,   105,   186,   106,   107,   341,
     193,   436,   194,   683,   262,   195,   196,   197,   336,   803,
    1022,  1027,  1139,   818,   607,  1108,   198,   542,   332,   199,
    1012,   200,   108,   109,   345,   201,   202,   406,   203,   337,
     231,   232,   772,   108,   109,   774,   908,   957,   346,  1001,
     556,   344,   832,  1046,   204,   206,   805,   343,   338,   528,
     339,   368,   941,   336,   524,  1121,   609,   915,  1137,   110,
     334,  1129,   815,   880,  1039,   750,   341,   816,   539,   516,
     110,   610,   704,   592,   337,   927,   111,  1034,   253,   425,
     928,   607,   353,     0,     0,     0,     0,   111,     0,     0,
       0,     0,   343,   338,   112,   339,     0,     0,     0,     0,
     767,   609,     0,     0,     0,   112,     0,     0,   113,     0,
       0,   775,     0,     0,     0,     0,   610,   114,   115,   113,
     336,     0,     0,     0,     0,     0,     0,     0,   114,   115,
     104,   105,     1,   106,   107,     0,     0,     0,     0,     0,
    1008,   337,     0,     0,     0,     0,     0,     0,     0,     0,
    1009,  1008,     0,     0,     0,     0,   117,     0,     0,   343,
     338,  1009,   339,     0,     0,     0,     0,   117,   609,   108,
     109,     0,     0,     0,   104,   105,   186,   106,   107,     0,
       0,     0,     0,   610,     0,   118,   119,     0,     0,     0,
       0,     0,     0,   120,     0,     0,   118,   119,   121,     0,
       0,     0,     0,     0,   120,     0,   110,     0,     0,   121,
       0,     0,     0,   108,   109,     0,     0,   104,   105,     1,
     106,   107,     0,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,   878,   104,   105,     1,   106,   107,     0,
     110,     0,     0,     0,     0,   113,   108,   109,     0,     0,
       0,     0,     0,     0,   114,   115,     0,   111,     0,     0,
       0,     0,   909,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,   109,   112,     0,  1008,     0,     0,
       0,     0,     0,   110,   878,     0,     0,  1122,     0,   113,
       0,     0,     0,   117,     0,     0,     0,     0,   114,   115,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,     0,     0,   104,   105,     1,   106,   107,   112,     0,
       0,  1008,   118,   119,     0,     0,     0,   111,     0,     0,
     120,  1122,   113,     0,   271,   121,     0,   117,     0,     0,
       0,   114,   115,     0,     0,   112,     0,   104,   105,     1,
     106,   107,   108,   109,     0,     0,     0,     0,     0,   113,
       0,     0,   209,     0,     0,     0,   118,   119,   114,   115,
       0,     0,     0,     0,   120,     0,     0,     0,   116,   121,
     117,     0,     0,     0,     0,     0,   108,   109,     0,   110,
       0,     0,   104,   105,   186,   106,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,   117,     0,   118,
     119,   104,   105,   186,   106,   107,     0,   120,     0,     0,
       0,     0,   121,   110,   112,     0,   104,   105,     1,   106,
     107,   108,   109,     0,     0,     0,   118,   119,   113,     0,
     111,     0,     0,     0,   120,     0,     0,   114,   115,   121,
     108,   109,     0,     0,     0,     0,     0,     0,   112,     0,
     209,     0,     0,     0,     0,   108,   109,     0,   110,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,   114,   115,     0,     0,   111,   117,   110,     0,     0,
       0,     0,   271,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,   112,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   113,     0,   111,
     117,     0,   112,   120,     0,     0,   114,   115,   121,   652,
       0,     0,     0,     0,     0,     0,   113,   112,     0,   104,
     105,   186,   106,   107,     0,   114,   115,     0,     0,   118,
     119,   113,     0,     0,     0,     0,     0,   120,     0,     0,
     114,   115,   121,     0,     0,   117,   104,   105,     1,   106,
     107,     0,   104,   105,     1,   106,   107,     0,   108,   109,
       0,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,   119,     0,     0,     0,   117,
       0,     0,   120,     0,     1,   275,   109,   121,     0,     0,
       0,     0,   109,   118,   119,   110,     0,   289,     0,     0,
       0,   120,     0,     0,     0,     0,   121,     0,   118,   119,
       0,     0,   111,     0,     0,     1,   120,     0,     0,     0,
       0,   121,   110,     0,     0,     0,     0,   290,   110,     0,
     112,     0,     0,     0,   104,   105,   186,   106,   107,   111,
       0,     0,     0,     0,   113,   111,     0,     0,     0,     0,
       0,     0,     0,   114,   115,     0,     0,   276,   290,     0,
       0,     0,     0,   276,     0,     0,     0,     0,     0,     0,
       0,   113,   291,     0,   109,     1,     0,   113,     0,     0,
     114,   115,     0,     0,     0,     0,   114,   115,     0,     0,
       0,     0,   117,   292,     0,     0,     0,     0,     0,     0,
       0,   293,   294,   291,     1,     0,     0,     0,   295,   296,
     110,     0,     0,     0,     0,     0,     0,     0,   290,     0,
       0,   118,   119,     0,   292,     0,     0,   111,     0,   120,
       0,     0,   293,   294,   121,     0,     1,     0,     0,   295,
     296,     0,     0,     0,     0,   276,     0,   290,   118,   119,
       0,     0,     0,     0,   118,   119,   120,     0,     0,   113,
       0,   121,   120,  -635,   297,   298,   299,   121,   114,   115,
       0,     0,     0,   300,   301,   302,   303,   304,     0,   290,
     305,   306,     0,   307,   308,   309,   310,   311,   312,     0,
     313,     0,   291,   294,     0,   297,   298,   299,     0,   295,
    -635,     0,     0,     0,   300,   301,   302,   303,   304,     0,
       0,   305,   306,   466,   307,   308,   309,   310,   311,   312,
       0,   313,   294,     0,   291,     0,     0,     0,   295,   296,
       0,     0,     0,     0,     0,     0,   118,   119,   613,     0,
       0,     0,     0,     0,   120,   466,     0,     0,     0,   121,
       0,     0,     0,     0,   294,  -635,  -635,  -635,     0,     0,
     295,   296,     0,     0,  -635,  -635,  -635,   303,   304,     0,
       0,   305,   306,     0,   307,   308,   309,   310,   311,   312,
       0,   313,     0,     0,   297,   298,   299,     0,     0,     0,
       0,     0,     0,   300,   301,   302,   303,   304,     0,     0,
     305,   306,     0,   307,   308,   309,   310,   311,   312,     0,
     313,     0,     0,     0,     0,     0,   297,   298,   299,     0,
       0,     0,     0,     0,     0,   300,   301,   302,   303,   304,
       0,     0,   305,   306,     0,   307,   308,   309,   310,   311,
     312,  -634,   313,     0,     1,     0,     1,     2,     0,     2,
       0,     0,     0,     0,     0,     3,     4,     3,     4,     0,
       0,     0,     5,     0,     5,     0,     6,     0,     6,     0,
       0,     0,     7,     0,     7,     8,     9,     8,     9,     0,
       0,     0,     0,     0,     0,    10,    11,    10,    11,     0,
       0,     0,     0,     0,     0,     0,    12,     0,    12,    13,
       0,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   186,     0,     0,     2,
       0,     0,    14,     0,    14,     0,     0,     3,     4,     0,
       0,     0,     0,     0,     5,     0,     0,    15,     6,    15,
       0,     0,     0,    16,     7,    16,     0,     8,     9,    17,
       0,    17,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
       0,    13,     0,     0,     0,     0,     0,     0,    18,    19,
      18,    19,     0,     0,     0,    20,    21,    20,    21,     0,
      22,     0,    22,     0,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,    23,    24,    23,    24,    16,     0,    25,    26,    25,
      26,    17,     0,    27,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,    19,     0,     0,     0,     0,     0,    20,    21,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
       0,   243,     5,     3,     4,   259,   382,     7,     8,     0,
     404,   374,    12,   393,   213,     5,    16,    17,   603,    19,
     412,    21,    22,   370,     5,     5,   739,    27,   375,    29,
     628,     5,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     5,    53,    54,     5,    56,    57,     5,     5,
       5,    61,    62,    63,     5,    56,    66,    13,     5,    69,
      70,   151,    72,     5,    74,    75,    76,    77,    78,     5,
      80,    81,    82,    83,    84,    85,     5,    77,    88,    89,
       4,     5,    92,    93,     5,    56,     5,    71,    98,    99,
     100,   101,   102,   103,     5,     5,     5,     5,     5,   194,
     110,    27,   112,   648,     5,   126,     5,     5,   118,    96,
     120,    93,   359,   123,   124,    13,   126,     4,     5,   129,
     130,   131,   217,   133,   134,   135,   136,   114,   138,     5,
     140,   141,   142,   143,   144,    45,   146,     5,    45,    86,
     122,     5,    86,     5,   391,   155,    65,   157,   158,   159,
       5,   111,   107,   876,   111,   106,   157,   167,   168,     5,
      71,     5,   125,   173,   174,   567,   556,   180,   377,   433,
     161,   261,     5,   183,     5,   159,     5,   534,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,     5,     5,   217,     5,   219,
     220,   221,    45,   223,   224,   225,   226,   217,   228,   229,
       5,   231,   232,   233,   214,   235,   236,   217,   233,   837,
     838,     5,   242,   243,   244,   245,     5,   247,   248,   249,
     250,   251,    71,   253,     5,     5,    77,   257,   258,   259,
       5,     5,   262,   263,   264,   265,   266,   267,   214,   269,
     270,     0,   272,   273,   274,   638,   276,   277,   278,   279,
     125,   192,   282,   283,   216,   285,     5,   650,     4,   289,
     216,   291,   206,     0,   213,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   212,   214,   217,   217,    24,   217,
      26,   520,     5,   214,     5,   214,   217,    56,   217,   528,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   723,   214,    56,
     350,   217,   937,   353,   889,   213,   732,   437,   358,   359,
     360,   361,   362,   217,   364,   217,   760,     5,   368,   369,
     370,     5,   217,   373,   374,   375,   376,   377,   214,   379,
     380,   217,   382,   217,   384,   385,   386,     5,   388,   389,
     390,   391,   392,   393,   217,   395,   217,   397,   217,   399,
     400,   575,   402,   403,   404,     5,   406,   110,   408,     5,
     410,   411,   412,   413,   414,   410,   416,   417,   418,   419,
       5,     5,   798,     4,   214,   214,   213,   217,   157,   400,
     430,   431,   432,   433,   434,    86,     5,   972,   399,   214,
     440,   441,   148,   443,   444,   445,     5,    57,   448,     5,
     157,     4,     5,   217,   213,   455,   456,     5,   458,   459,
       4,   177,   212,   214,   464,   465,   217,   467,   468,   214,
     470,   471,   217,   217,   193,     4,     5,     4,   810,   479,
     480,   481,   858,   483,     5,     4,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   214,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,     5,     5,  1117,
     520,   521,   522,     5,   524,   525,   526,   527,   528,   129,
     213,   531,   532,   533,   534,     5,   217,   537,     5,   539,
     540,     4,   542,   543,   250,     5,     5,   547,     5,   549,
       5,   584,   666,     5,   554,   546,   556,   557,   558,     5,
     560,     4,   121,   563,   564,   161,     5,   567,   568,   272,
     570,     5,   572,   573,   574,   575,   214,   285,   578,   579,
     580,   287,     5,   217,   584,   585,   586,   587,   588,   763,
       5,     5,   592,   554,   267,   180,   214,    74,   598,   217,
     210,     5,   934,   603,   604,   576,   606,   607,   608,   609,
     610,   211,   612,   613,   614,   615,   616,   617,   618,    86,
       5,   621,   622,   171,     5,   625,   626,   211,   628,   629,
     630,   631,   632,   633,   634,   635,   636,   119,   638,   639,
       5,   641,   252,   643,   644,   214,   646,   174,   648,   649,
     650,   850,   119,   206,   114,   655,   656,   414,   214,   659,
     368,   217,   206,   663,   664,   373,   666,    52,   189,   669,
     399,   671,   672,   673,   674,   114,   667,     5,   678,   679,
     680,     4,   682,   683,   213,   685,   686,   687,   361,   878,
       5,    57,   399,   693,   694,   695,   696,     5,     5,     5,
       5,   158,   189,   107,     5,   947,   706,    83,    84,   823,
     125,   157,   171,   674,   177,   175,   716,   717,   718,   719,
     720,     4,   126,   723,   145,   725,   214,   727,   728,   217,
     761,   213,   732,   733,   734,     5,   175,   737,   738,   739,
     740,   741,   742,   743,   214,   740,   213,   217,   748,   749,
     750,   751,     5,   786,   754,   755,   756,   757,     0,   214,
     760,   761,   214,     4,    57,   765,   472,   767,    57,   150,
     213,   771,   772,   773,   774,   775,   776,   777,   778,     5,
     214,   781,   145,   783,   784,    55,   786,   976,   977,   193,
       5,   214,   157,     5,   794,    38,     5,   797,   798,   799,
     214,   801,   833,   219,   804,   805,  1005,     5,   808,   809,
     810,   811,   812,   813,   522,   815,   121,   574,   818,   819,
     820,   127,   188,   823,   631,   554,   826,   827,   213,   913,
     158,   120,   832,   833,   834,   835,    34,   837,   838,   839,
     840,   841,  1031,   843,   844,   152,   846,   554,     5,   150,
     850,   851,   852,   274,     5,   163,   856,   278,   858,   167,
     168,    59,   862,   863,   285,   180,   181,   182,   183,   900,
       5,   124,   248,   873,   874,   875,   876,   877,   878,   145,
     880,   881,   152,   153,   215,   885,   886,     5,   888,   889,
       5,   891,   892,   893,   894,   188,     4,     5,    23,   899,
     900,   127,   902,   903,   904,   905,   906,     5,   908,   909,
     618,   274,    86,   913,   914,   915,   125,   129,   918,     5,
      71,   210,   285,   923,   632,   168,   733,   927,   928,     5,
       5,   174,   585,   933,   934,   935,   936,   937,   938,   939,
     940,   941,   942,   943,   944,   674,   946,   947,   163,   949,
     950,     5,   167,   168,   954,   955,   154,   957,   958,   959,
     955,     5,   119,   963,   964,   965,   382,   674,   968,   969,
       5,  1055,   972,   973,   969,    90,   976,   977,   978,     5,
     269,   981,   982,   983,     5,   110,   986,   987,     5,   989,
     990,   116,   992,   993,   994,   120,     5,   209,   998,   211,
      35,  1001,  1002,  1003,  1004,  1005,     5,  1007,   274,   127,
    1010,  1011,   278,  1013,  1014,  1015,  1016,  1017,   145,   285,
    1020,  1021,  1017,   121,   145,  1025,  1026,  1027,   103,  1029,
    1030,  1031,   107,  1033,  1034,   121,  1036,  1037,   145,  1039,
    1040,   145,  1042,   696,  1044,     0,  1046,  1047,   112,   125,
     471,   126,  1052,  1053,   118,  1055,  1056,  1057,  1058,     5,
     145,  1061,  1062,  1063,     5,   213,   145,  1067,  1068,  1069,
    1070,   125,  1072,     5,   118,  1075,  1076,  1077,  1078,  1079,
       5,   145,  1082,  1010,  1084,  1085,   107,     5,  1088,  1089,
    1090,  1091,   127,  1093,  1094,     5,  1096,  1097,   119,   125,
     109,    56,   119,  1103,  1104,   126,  1106,  1107,   471,    34,
    1110,    74,     5,  1113,  1114,  1115,   382,  1117,  1118,  1119,
     145,   537,     5,  1123,  1124,  1125,   125,     5,    70,  1129,
    1130,  1131,  1132,     4,    59,  1135,  1136,  1137,  1138,  1139,
     151,   145,  1142,     5,  1139,   279,   271,   274,   987,   116,
     107,   278,   573,   274,    64,   119,   281,   278,   285,   145,
     145,   286,   145,   288,   285,    56,   587,   274,   145,   126,
     274,   278,   214,   119,   278,   217,   465,   118,   285,   258,
     259,   285,     5,   145,     3,     5,     5,     6,     7,   274,
      52,   109,   124,   278,   483,   274,  1123,   618,     5,   278,
     285,   215,   157,  1042,     5,   471,   285,     5,    86,   313,
     274,   104,   276,     3,   278,     5,     6,     7,     5,     5,
      91,   285,   511,   106,   587,   289,   934,   291,   649,   154,
       5,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   274,
     160,   211,     5,   278,   164,   618,   360,   214,     5,   169,
     285,   382,     5,    64,    84,   686,   157,     5,     5,     5,
     274,   350,   258,   259,   278,   382,   401,    96,   382,   221,
     103,   285,   224,   103,   226,     5,   649,   229,   274,   274,
     110,   274,   278,   278,    37,   278,    82,   274,    85,   285,
     285,     5,   285,   382,    47,   107,    96,   723,   285,   215,
     444,   965,   274,   107,    57,   213,   732,    37,   137,   138,
       4,   587,   108,   285,   126,   404,   615,    47,    64,   433,
      77,   129,   126,   213,    71,   460,   461,    57,   145,   146,
     147,   148,   149,     5,   471,     5,   626,   137,   138,   483,
     471,   104,   618,   213,   433,   776,     5,   778,     5,   160,
      64,   104,  1016,   164,   471,   103,     5,   471,   169,     5,
     145,   146,   147,   148,   149,    37,     5,     4,     5,     5,
     514,     5,   798,   649,   104,    47,   471,    26,    35,     5,
     110,     5,   471,   659,    90,    57,   382,    26,     5,   218,
     107,   505,   527,   146,   529,   530,   107,   471,   206,   207,
     208,   209,   214,   211,     3,     4,    76,   481,     7,   126,
     214,     5,    61,    12,     5,   126,   146,    66,   218,   508,
      19,  1013,    61,    72,    73,    84,    52,    66,   826,   827,
       5,   566,   858,    72,    73,   725,   471,   433,    87,     5,
      86,    32,    91,    92,   103,     5,    82,    89,    87,   107,
     587,   110,    91,    92,    91,   590,   587,   471,   593,   594,
      26,     4,     5,     5,    55,    82,  1058,     4,   126,   103,
     587,   615,   108,   587,   146,   471,   471,    76,   471,   103,
      49,   618,    81,    74,   471,   114,    85,   618,     5,   663,
     107,   108,   587,     5,    42,    61,   894,   214,   587,   471,
      66,   618,    77,   214,   618,  1097,    72,    73,    50,   126,
    1037,   102,   649,   587,   649,     5,    76,   194,   649,    74,
      37,    87,   798,   618,   982,    91,    92,   100,   659,   618,
      47,   213,   649,  1125,   107,   649,   213,   968,   107,   613,
      57,     4,   659,   717,   618,   659,    20,   102,   946,  1076,
    1077,     5,   587,   126,   649,     4,   214,   126,    48,     5,
     649,   152,   153,   105,    76,   214,     5,   702,   217,   100,
     659,  1029,  1030,   587,    28,   649,   107,   876,   217,   214,
      54,     5,  1013,   618,   183,     5,   192,   104,  1115,    28,
      10,   587,   587,   214,   587,   126,   217,   152,     5,     5,
     587,    55,  1033,    10,   618,   213,    52,   213,     5,   744,
     213,    35,    58,   107,   649,   587,    55,   752,   753,     5,
    1078,    41,   618,   618,   223,   618,   225,  1058,     5,   146,
     213,   618,   126,   123,    41,   649,   120,     5,  1069,   129,
    1013,  1072,    96,    49,   779,    13,   618,   107,   247,    42,
     249,   217,    49,   649,   649,    75,   649,    96,     5,   119,
     114,    67,   649,   659,    71,   119,   126,   798,    75,     5,
      67,   760,  1007,   194,    10,   114,   107,   649,  1013,   107,
     119,   798,     4,     5,   798,  1058,   216,   141,   119,   143,
      37,     5,     4,     5,  1125,   126,    10,   215,   126,  1130,
      47,    93,   141,   107,   143,    41,   110,   197,   198,   798,
      57,   201,   202,   107,   204,   205,   206,   207,   208,   209,
     213,   211,   126,  1058,     4,     5,   861,    41,     3,     4,
       5,     6,     7,    96,   162,    71,   117,  1013,   166,    75,
     213,   125,   215,    18,   104,   131,   132,   133,   134,   135,
     136,     3,  1125,     5,   131,   132,   133,   134,   135,   136,
     895,    75,   897,   216,     5,     5,     7,    42,    43,     3,
       4,     5,     6,     7,   107,     3,     4,     5,     6,     7,
       5,     3,  1058,     5,    90,     5,   119,   386,    22,     3,
     213,     5,   936,   126,    22,   939,     5,    37,     7,     3,
      25,     5,   798,    37,    79,    25,    31,    47,     4,    37,
       4,    31,     4,     5,    39,   959,    49,    57,   213,    39,
       4,    96,   107,     4,     5,   110,    21,    22,    85,   964,
       4,     5,    27,     4,     5,   970,     4,     5,    63,   114,
     124,   126,   215,    63,     4,     5,     4,     5,    77,  1125,
       4,     5,   213,   128,   213,    80,     4,     5,     4,     5,
      80,   996,   137,   138,     4,  1000,   190,   191,     4,     5,
      95,   144,  1007,   213,    99,    95,  1013,     4,  1013,    99,
    1015,     7,  1013,     4,     5,   160,   213,   112,     4,     5,
       7,   125,   112,     5,   113,   170,  1013,   125,    93,  1013,
    1035,   176,   213,  1038,   142,   100,   101,   102,    96,   213,
      72,   214,   214,   214,   120,    72,    72,   144,  1013,   119,
     213,  1058,   120,  1058,  1013,   116,     4,  1058,    91,   155,
     205,   206,   175,   120,   119,   217,  1071,   213,   213,  1013,
     156,  1058,   166,   218,  1058,   156,   213,   165,   156,   116,
     214,    56,   162,     3,     4,     5,     6,     7,    56,    56,
      56,    56,  1097,  1058,     3,     4,     5,     6,     7,  1058,
      56,   260,    56,   572,    99,    56,    56,    56,  1013,   733,
     970,   973,  1130,   748,  1058,  1069,    56,   385,  1125,    56,
    1125,    56,    42,    43,  1125,    56,    56,   236,    56,  1013,
      75,    75,   678,    42,    43,   679,   840,   909,  1125,   957,
     399,  1125,   761,   992,    56,    56,   734,  1013,  1013,   373,
    1013,   211,   880,  1058,   369,  1090,  1013,   851,  1125,    79,
    1125,  1104,   742,   813,   983,   649,  1125,   744,   382,   362,
      79,  1013,   600,   456,  1058,   873,    96,   981,    88,   254,
     873,  1125,   158,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,  1058,  1058,   114,  1058,    -1,    -1,    -1,    -1,
     669,  1058,    -1,    -1,    -1,   114,    -1,    -1,   128,    -1,
      -1,   680,    -1,    -1,    -1,    -1,  1058,   137,   138,   128,
    1125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
     160,  1125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,   160,    -1,    -1,    -1,    -1,   176,    -1,    -1,  1125,
    1125,   170,  1125,    -1,    -1,    -1,    -1,   176,  1125,    42,
      43,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,  1125,    -1,   205,   206,    -1,    -1,    -1,
      -1,    -1,    -1,   213,    -1,    -1,   205,   206,   218,    -1,
      -1,    -1,    -1,    -1,   213,    -1,    79,    -1,    -1,   218,
      -1,    -1,    -1,    42,    43,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,   812,     3,     4,     5,     6,     7,    -1,
      79,    -1,    -1,    -1,    -1,   128,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,   137,   138,    -1,    96,    -1,    -1,
      -1,    -1,   841,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,   114,    -1,   160,    -1,    -1,
      -1,    -1,    -1,    79,   863,    -1,    -1,   170,    -1,   128,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,   137,   138,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,     3,     4,     5,     6,     7,   114,    -1,
      -1,   160,   205,   206,    -1,    -1,    -1,    96,    -1,    -1,
     213,   170,   128,    -1,   103,   218,    -1,   176,    -1,    -1,
      -1,   137,   138,    -1,    -1,   114,    -1,     3,     4,     5,
       6,     7,    42,    43,    -1,    -1,    -1,    -1,    -1,   128,
      -1,    -1,    52,    -1,    -1,    -1,   205,   206,   137,   138,
      -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,   174,   218,
     176,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    79,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,   176,    -1,   205,
     206,     3,     4,     5,     6,     7,    -1,   213,    -1,    -1,
      -1,    -1,   218,    79,   114,    -1,     3,     4,     5,     6,
       7,    42,    43,    -1,    -1,    -1,   205,   206,   128,    -1,
      96,    -1,    -1,    -1,   213,    -1,    -1,   137,   138,   218,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      52,    -1,    -1,    -1,    -1,    42,    43,    -1,    79,    -1,
      -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,   138,    -1,    -1,    96,   176,    79,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,   114,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,   206,   128,    -1,    96,
     176,    -1,   114,   213,    -1,    -1,   137,   138,   218,   106,
      -1,    -1,    -1,    -1,    -1,    -1,   128,   114,    -1,     3,
       4,     5,     6,     7,    -1,   137,   138,    -1,    -1,   205,
     206,   128,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,
     137,   138,   218,    -1,    -1,   176,     3,     4,     5,     6,
       7,    -1,     3,     4,     5,     6,     7,    -1,    42,    43,
      -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   205,   206,    -1,    -1,    -1,   176,
      -1,    -1,   213,    -1,     5,    42,    43,   218,    -1,    -1,
      -1,    -1,    43,   205,   206,    79,    -1,    18,    -1,    -1,
      -1,   213,    -1,    -1,    -1,    -1,   218,    -1,   205,   206,
      -1,    -1,    96,    -1,    -1,     5,   213,    -1,    -1,    -1,
      -1,   218,    79,    -1,    -1,    -1,    -1,    48,    79,    -1,
     114,    -1,    -1,    -1,     3,     4,     5,     6,     7,    96,
      -1,    -1,    -1,    -1,   128,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,   138,    -1,    -1,   114,    48,    -1,
      -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   128,    93,    -1,    43,     5,    -1,   128,    -1,    -1,
     137,   138,    -1,    -1,    -1,    -1,   137,   138,    -1,    -1,
      -1,    -1,   176,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,    93,     5,    -1,    -1,    -1,   129,   130,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,   205,   206,    -1,   114,    -1,    -1,    96,    -1,   213,
      -1,    -1,   122,   123,   218,    -1,     5,    -1,    -1,   129,
     130,    -1,    -1,    -1,    -1,   114,    -1,    48,   205,   206,
      -1,    -1,    -1,    -1,   205,   206,   213,    -1,    -1,   128,
      -1,   218,   213,    93,   185,   186,   187,   218,   137,   138,
      -1,    -1,    -1,   194,   195,   196,   197,   198,    -1,    48,
     201,   202,    -1,   204,   205,   206,   207,   208,   209,    -1,
     211,    -1,    93,   123,    -1,   185,   186,   187,    -1,   129,
     130,    -1,    -1,    -1,   194,   195,   196,   197,   198,    -1,
      -1,   201,   202,   114,   204,   205,   206,   207,   208,   209,
      -1,   211,   123,    -1,    93,    -1,    -1,    -1,   129,   130,
      -1,    -1,    -1,    -1,    -1,    -1,   205,   206,   107,    -1,
      -1,    -1,    -1,    -1,   213,   114,    -1,    -1,    -1,   218,
      -1,    -1,    -1,    -1,   123,   185,   186,   187,    -1,    -1,
     129,   130,    -1,    -1,   194,   195,   196,   197,   198,    -1,
      -1,   201,   202,    -1,   204,   205,   206,   207,   208,   209,
      -1,   211,    -1,    -1,   185,   186,   187,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,   196,   197,   198,    -1,    -1,
     201,   202,    -1,   204,   205,   206,   207,   208,   209,    -1,
     211,    -1,    -1,    -1,    -1,    -1,   185,   186,   187,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,   196,   197,   198,
      -1,    -1,   201,   202,    -1,   204,   205,   206,   207,   208,
     209,     0,   211,    -1,     5,    -1,     5,     8,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    16,    17,    16,    17,    -1,
      -1,    -1,    23,    -1,    23,    -1,    27,    -1,    27,    -1,
      -1,    -1,    33,    -1,    33,    36,    37,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    57,    60,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,     8,
      -1,    -1,    83,    -1,    83,    -1,    -1,    16,    17,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    98,    27,    98,
      -1,    -1,    -1,   104,    33,   104,    -1,    36,    37,   110,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     139,   140,    -1,    -1,    -1,   146,   147,   146,   147,    -1,
     151,    -1,   151,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,   172,   173,   172,   173,   104,    -1,   178,   179,   178,
     179,   110,    -1,   184,    -1,   184,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,    -1,    -1,    -1,    -1,   146,   147,    -1,
      -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,   178,
     179,    -1,    -1,    -1,    -1,   184
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     5,     8,    16,    17,    23,    27,    33,    36,    37,
      46,    47,    57,    60,    83,    98,   104,   110,   139,   140,
     146,   147,   151,   172,   173,   178,   179,   184,   220,   221,
     222,   223,   224,   226,   227,   228,   229,   230,   235,   236,
     239,   241,   242,   256,   258,   259,   262,   263,   265,   289,
     291,   292,   293,   295,   297,   300,   364,   376,   377,    27,
       4,   364,   373,   373,     4,     4,   373,    32,    55,    74,
     102,   153,   266,   268,   269,   364,    86,    86,   126,   372,
     373,    74,    74,   102,   152,    20,    54,     4,   364,   378,
     379,   180,   237,   364,     4,   231,   233,   234,   373,   237,
     181,   182,   183,   237,     3,     4,     6,     7,    42,    43,
      79,    96,   114,   128,   137,   138,   174,   176,   205,   206,
     213,   218,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   347,   348,   349,   352,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,     4,   174,   233,
       4,   177,   225,   233,   240,   237,     0,   216,   364,   381,
     364,   364,   364,   364,   364,   364,   104,   253,   364,   364,
     364,   364,   364,   253,   364,   364,   364,   364,   364,   364,
     364,   364,   364,    90,   364,   364,     5,   222,   224,   226,
     227,   228,   229,   230,   236,   239,   241,   242,   256,   258,
     259,   262,   263,   265,   289,   291,   292,   295,   297,    52,
     213,   301,   303,   307,   364,     4,   215,   373,   364,   213,
      86,    74,   121,   279,   364,   279,    65,   364,   151,   152,
     364,   266,   269,   373,   109,   260,   364,   145,   146,   147,
     148,   149,   286,   364,   116,   373,   121,   290,   364,   290,
     290,   373,   119,   378,   217,   364,   364,   237,   194,   213,
     215,   127,   238,   364,   237,   237,   237,   213,   215,   213,
     213,   103,   337,   346,   364,    42,   114,   338,   364,   211,
     337,   213,   338,   303,   337,   364,   107,   119,   126,    18,
      48,    93,   114,   122,   123,   129,   130,   185,   186,   187,
     194,   195,   196,   197,   198,   201,   202,   204,   205,   206,
     207,   208,   209,   211,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     338,   339,   341,   344,   345,   347,   349,   352,   354,   355,
     357,   359,   360,   361,   362,   363,   365,   364,   233,   225,
      90,   222,   216,   381,   364,     5,    89,   364,   253,   373,
     118,   331,   364,   301,   303,    10,    41,    75,   304,   305,
     364,   364,    71,   304,   327,   364,   303,   307,     4,   334,
     335,   358,   364,     3,   257,   364,   279,   114,   364,   373,
     279,   373,   279,   276,   277,   291,   293,   297,   300,   364,
     279,    77,   324,   364,    85,   364,   260,   364,   286,     4,
     298,   299,   364,    50,   105,    42,   364,   373,   290,   373,
       4,   233,   270,   364,   301,   379,     4,    22,    37,   125,
     232,   359,   361,   364,   232,     4,   234,   177,   225,   364,
     238,   364,    13,   214,   320,   364,     4,   206,   303,   131,
     132,   133,   134,   135,   136,   353,   364,   337,   346,   364,
      84,   103,   110,   364,   346,   213,   114,   338,   333,   336,
     337,   364,   119,   337,   214,   214,   337,   233,   337,   338,
     338,    93,   122,   213,    96,   114,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   362,   364,   261,   359,   364,   213,
     213,   296,   364,   362,   320,   364,   331,   214,   214,   301,
     302,   307,   364,   106,   306,   364,   305,   120,   302,    49,
      67,   332,   364,   327,   364,   214,   364,   217,   364,   334,
     335,   364,   257,   373,    42,    86,   119,   213,   364,   296,
       4,   267,   110,   277,   364,   216,   276,   291,   297,     4,
     270,   337,   364,   324,   364,   261,   194,   217,   324,   364,
     299,    35,   127,   264,   364,   264,   215,   364,   232,   359,
     361,   214,   225,   158,   351,   364,   333,   364,   320,   214,
      86,   364,   353,   100,    84,   110,   337,   337,   303,   212,
     217,   364,   119,   364,   374,   375,   333,   338,   339,   344,
     347,   233,   119,   107,   338,   213,   303,   333,   364,    96,
     212,   362,   359,     4,   254,   255,   364,     4,   364,   382,
      58,   303,   364,   296,   364,   321,   333,   364,   327,   364,
     364,   307,   364,   306,   364,   364,   328,   329,   337,   364,
     327,   337,   106,   337,   364,   332,   364,   364,   358,   364,
      76,   117,   300,     4,   280,   281,   364,   119,   364,   125,
     216,   291,   295,   297,   364,    34,    59,   154,   271,   364,
      90,   337,   299,   373,     4,   357,   364,   264,   281,   364,
     270,   213,   157,   350,   364,   351,   214,   364,   337,   337,
     337,   110,   100,   214,   336,     4,   374,   364,    25,    31,
      39,    63,    80,    95,    99,   112,   288,   364,   338,   303,
     333,   214,   214,   213,   214,   217,   364,   255,   382,   214,
     217,   364,   213,   294,   364,   125,   243,   244,   364,    86,
     322,   323,   364,   332,   217,   364,    82,   108,   330,   364,
     328,   332,    49,    49,   360,   361,   363,   365,     4,   278,
      85,   288,   214,   217,   364,   280,   300,   373,   124,    37,
      47,    57,   272,   364,   271,   373,   127,   357,   364,    77,
       4,   213,   364,   350,   364,   364,   351,   214,   110,   337,
     213,   213,   214,   364,   288,   214,   214,   335,   364,   255,
       4,   335,   217,   243,   364,   294,   144,   364,   244,   364,
     364,   366,   367,   324,   364,   323,   329,   189,   249,   364,
     330,   337,   337,   213,   261,    28,    55,    96,   114,   119,
     141,   143,   282,   283,   284,   364,   281,   213,   124,   273,
     364,   125,   364,   272,   364,   364,   357,   337,     4,   311,
     312,   364,   350,     7,     7,   214,   335,   214,   213,   364,
     192,   213,   366,   367,    26,    61,    66,    72,    73,    87,
      91,    92,   217,   364,   368,   380,   213,   364,   373,    64,
     325,   364,   190,   191,   364,   249,   364,   364,   280,   113,
     125,   285,   364,   285,    96,   213,   142,   213,   364,   284,
     364,   364,   282,   284,   364,   382,   382,   364,   273,   373,
     214,   214,   159,   327,   364,   312,   214,   214,   335,    57,
     188,   245,   246,   337,    72,    72,    72,   368,   380,   364,
       4,    91,   364,   303,   364,   366,   213,   364,   375,   120,
     171,   308,   364,   325,   364,   214,   330,   144,   364,   285,
     285,   337,   119,   337,   284,   214,   111,   274,   364,   120,
     163,   167,   168,   313,   314,   364,   364,   214,   116,   214,
     217,   193,   247,   364,     4,    91,   214,   214,   333,   114,
     175,   364,   369,   333,     4,   309,   310,   364,   364,   308,
     364,   364,   285,   364,   286,   214,   213,   214,   324,   155,
     103,   275,   364,   274,   364,   333,   364,    18,   160,   170,
     315,   317,   337,   364,   313,   314,   364,   248,   250,   251,
     357,   324,   246,     4,   252,   330,   364,   247,    91,   375,
     375,   214,   175,   120,   369,   125,   364,   370,    45,   326,
     364,   119,   217,   364,   310,   150,   287,   364,   337,   156,
     337,   364,   275,   364,   364,   327,   364,   315,   364,   156,
     166,   161,   318,   364,   364,   162,   166,   315,   317,   217,
     324,   194,   217,   192,   364,   364,   370,   370,   375,   357,
     364,   337,   370,    76,   364,   371,   337,   364,   326,   364,
     213,   310,   364,   287,   364,   214,   313,   107,   364,    64,
     160,   164,   169,   319,   364,   364,   318,   364,   250,   337,
     357,    57,   188,   371,   371,   370,   364,   213,   364,   371,
     364,   311,   170,   316,   317,   364,   156,   165,   364,   319,
     116,   371,   382,   214,   162,   318,   364,   316,   317,   248,
     214,   364,   324
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   219,   220,   221,   221,   222,   222,   222,   222,   222,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     224,   224,   224,   224,   225,   226,   226,   226,   226,   226,
     227,   227,   227,   227,   228,   228,   228,   228,   229,   229,
     229,   229,   230,   230,   230,   230,   231,   231,   232,   232,
     232,   232,   232,   232,   232,   232,   233,   234,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   236,   236,
     236,   237,   237,   237,   237,   238,   238,   238,   238,   238,
     239,   239,   239,   239,   240,   240,   241,   241,   241,   241,
     241,   241,   242,   242,   242,   242,   243,   243,   244,   244,
     244,   244,   244,   244,   245,   245,   246,   247,   247,   247,
     247,   248,   248,   249,   249,   249,   249,   249,   250,   251,
     251,   252,   253,   253,   253,   253,   254,   254,   255,   255,
     255,   255,   256,   256,   256,   257,   257,   257,   258,   258,
     258,   258,   259,   259,   259,   260,   260,   260,   261,   262,
     262,   262,   262,   262,   263,   263,   263,   263,   263,   264,
     264,   264,   264,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   266,   266,   266,   266,   267,   268,   269,
     269,   269,   269,   270,   271,   271,   271,   271,   271,   271,
     272,   272,   272,   272,   272,   273,   273,   273,   273,   274,
     274,   274,   274,   275,   275,   275,   275,   276,   276,   276,
     276,   277,   277,   277,   277,   278,   279,   279,   279,   279,
     280,   280,   280,   280,   281,   282,   282,   282,   282,   283,
     283,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     285,   285,   285,   285,   286,   286,   286,   286,   286,   286,
     286,   287,   287,   287,   287,   288,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   289,   289,   289,   289,
     289,   289,   289,   290,   290,   290,   290,   291,   291,   291,
     292,   292,   292,   293,   293,   294,   294,   294,   294,   295,
     295,   295,   295,   295,   296,   296,   296,   296,   297,   297,
     297,   298,   298,   299,   299,   299,   300,   300,   300,   301,
     301,   302,   302,   303,   303,   303,   303,   304,   305,   305,
     305,   305,   305,   306,   306,   306,   306,   307,   307,   307,
     307,   308,   308,   308,   309,   309,   310,   310,   310,   311,
     311,   312,   312,   312,   312,   313,   313,   313,   313,   313,
     314,   314,   314,   314,   314,   315,   315,   315,   315,   316,
     316,   316,   316,   317,   317,   317,   317,   317,   318,   318,
     318,   318,   319,   319,   319,   319,   319,   319,   320,   320,
     320,   320,   321,   322,   322,   323,   323,   323,   324,   324,
     324,   324,   325,   325,   325,   325,   326,   326,   326,   326,
     327,   327,   327,   327,   328,   328,   328,   328,   329,   330,
     330,   330,   330,   330,   331,   331,   331,   331,   332,   332,
     332,   332,   332,   332,   332,   332,   333,   333,   333,   333,
     334,   334,   334,   334,   335,   335,   335,   335,   336,   337,
     337,   337,   337,   337,   337,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   339,   339,   339,
     340,   340,   341,   341,   341,   341,   341,   341,   341,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   343,   343,   344,   344,   344,   344,   344,
     344,   345,   345,   345,   345,   345,   345,   346,   346,   346,
     346,   347,   347,   347,   347,   348,   348,   348,   348,   348,
     348,   348,   349,   349,   349,   349,   350,   350,   350,   350,
     350,   351,   351,   351,   351,   352,   352,   352,   353,   353,
     353,   353,   353,   353,   353,   353,   354,   354,   354,   355,
     355,   355,   356,   357,   357,   357,   357,   357,   357,   358,
     358,   358,   358,   358,   359,   359,   359,   360,   360,   360,
     360,   361,   361,   361,   361,   362,   362,   362,   363,   363,
     363,   364,   364,   365,   365,   365,   366,   366,   366,   366,
     367,   367,   367,   367,   368,   368,   368,   368,   368,   368,
     368,   369,   369,   369,   369,   369,   370,   370,   370,   370,
     371,   371,   371,   371,   372,   373,   373,   373,   373,   374,
     374,   374,   375,   375,   376,   376,   377,   378,   378,   378,
     378,   379,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   381,   381,   381,   381,   382,   382,
     382,   382
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     2,     2,     1,     2,     4,     5,     2,     2,
       1,     2,     2,     2,     1,     2,     2,     2,     4,     5,
       2,     2,     2,     3,     2,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       2,     1,     0,     2,     2,     2,     3,     0,     2,     2,
       4,     2,     2,     2,     1,     0,     2,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     1,     0,     4,     7,
       8,    11,     2,     2,     1,     3,     3,     2,     0,     2,
       2,     1,     3,     2,     2,     0,     2,     2,     3,     1,
       3,     1,     5,     0,     2,     2,     1,     3,     1,     4,
       2,     2,     4,     2,     2,     1,     2,     2,     2,     5,
       2,     2,     7,     2,     2,     1,     2,     2,     1,     2,
       3,     2,     2,     2,     6,     8,     6,     2,     2,     1,
       0,     2,     2,     8,     7,     6,     7,    11,     7,    10,
       5,     2,     2,     1,     0,     2,     2,     1,    10,     1,
       0,     2,     2,     1,     1,     1,     2,     0,     2,     2,
       1,     1,     2,     2,     2,     2,     0,     2,     2,     3,
       0,     2,     2,     2,     0,     2,     2,     2,     3,     2,
       2,     1,     1,     1,     1,     1,     3,     0,     2,     2,
       1,     3,     2,     2,     3,     1,     0,     2,     2,     2,
       1,     2,     3,     5,     2,     6,     4,     4,     2,     2,
       3,     0,     2,     2,     1,     1,     1,     1,     1,     2,
       2,     1,     0,     2,     2,     1,     1,     1,     1,     1,
       4,     4,     1,     0,     2,     2,     4,     4,     3,     6,
       4,     2,     2,     2,     0,     2,     2,     4,     2,     2,
       2,     2,     2,     7,     6,     3,     5,     2,     2,     1,
       1,     3,     2,     2,     3,     0,     2,     2,     5,     2,
       2,     1,     3,     3,     2,     2,     2,     2,     6,     3,
       3,     1,     1,     3,     5,     2,     2,     2,     1,     1,
       1,     2,     2,     1,     0,     2,     2,     7,     8,     2,
       2,     2,     2,     2,     1,     3,     5,     2,     2,     6,
       3,     1,     0,     2,     2,     3,     6,     0,     2,     2,
       1,     1,     1,     2,     2,     1,     2,     2,     2,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       2,     2,     2,     2,     1,     1,     2,     2,     1,     0,
       2,     2,     1,     1,     0,     2,     2,     2,     2,     0,
       2,     2,     4,     0,     2,     2,     2,     0,     2,     2,
       3,     0,     2,     2,     1,     3,     2,     2,     3,     1,
       1,     0,     2,     2,     2,     0,     2,     2,     2,     2,
       4,     2,     4,     0,     2,     2,     1,     3,     2,     2,
       1,     0,     2,     2,     1,     3,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     6,     2,     2,
       1,     1,     2,     2,     2,     3,     4,     2,     2,     1,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     3,
       3,     3,     3,     3,     3,     5,     6,     5,     6,     2,
       2,     4,     6,     3,     5,     2,     2,     4,     5,     2,
       2,     4,     5,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     5,     7,     2,     2,     4,     2,     0,     2,
       2,     5,     0,     2,     2,     6,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     4,     2,     2,     4,
       2,     2,     5,     1,     3,     1,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     2,
       2,     1,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     1,     2,     2,     6,     8,     7,     7,
       2,     0,     2,     2,     1,     1,     2,     3,     4,     2,
       2,     3,     2,     0,     2,     2,     2,     0,     2,     2,
       4,     0,     2,     2,     1,     1,     3,     2,     2,     2,
       2,     2,     1,     0,     1,     0,     2,     1,     3,     2,
       2,     3,     1,     2,     1,     2,     1,     2,     1,     1,
       1,     1,     2,     2,     1,     0,     2,     2,     1,     3,
       2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = SQL_HSQL_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == SQL_HSQL_EMPTY)                                        \
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
   Use SQL_HSQL_error or SQL_HSQL_UNDEF. */
#define YYERRCODE SQL_HSQL_UNDEF

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
#if HSQL_DEBUG

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

#  elif defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

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
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Program * result, yyscan_t scanner)
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Program * result, yyscan_t scanner)
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
                 int yyrule, Program * result, yyscan_t scanner)
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
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Program * result, yyscan_t scanner)
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
    case YYSYMBOL_STRING: /* STRING  */
#line 502 "bison_parser.y"
                                                                    {
  free((((*yyvaluep).sval)));
}
#line 2864 "bison_parser.cpp"
        break;

    case YYSYMBOL_IDENTIFIER: /* IDENTIFIER  */
#line 502 "bison_parser.y"
                                                                    {
  free((((*yyvaluep).sval)));
}
#line 2872 "bison_parser.cpp"
        break;

    case YYSYMBOL_COMMENTLITERAL: /* COMMENTLITERAL  */
#line 502 "bison_parser.y"
                                                                    {
  free((((*yyvaluep).sval)));
}
#line 2880 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 502 "bison_parser.y"
           {}
#line 2886 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 502 "bison_parser.y"
           {}
#line 2892 "bison_parser.cpp"
        break;

    case YYSYMBOL_input: /* input  */
#line 502 "bison_parser.y"
           {}
#line 2898 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).statement_list_t) != NULL) ((*yyvaluep).statement_list_t)->deep_delete();
}
#line 2906 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).statement_t) != NULL) ((*yyvaluep).statement_t)->deep_delete();
}
#line 2914 "bison_parser.cpp"
        break;

    case YYSYMBOL_cmd: /* cmd  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).cmd_t) != NULL) ((*yyvaluep).cmd_t)->deep_delete();
}
#line 2922 "bison_parser.cpp"
        break;

    case YYSYMBOL_cmd_release: /* cmd_release  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).cmd_release_t) != NULL) ((*yyvaluep).cmd_release_t)->deep_delete();
}
#line 2930 "bison_parser.cpp"
        break;

    case YYSYMBOL_savepoint_name: /* savepoint_name  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).savepoint_name_t) != NULL) ((*yyvaluep).savepoint_name_t)->deep_delete();
}
#line 2938 "bison_parser.cpp"
        break;

    case YYSYMBOL_cmd_pragma: /* cmd_pragma  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).cmd_pragma_t) != NULL) ((*yyvaluep).cmd_pragma_t)->deep_delete();
}
#line 2946 "bison_parser.cpp"
        break;

    case YYSYMBOL_cmd_reindex: /* cmd_reindex  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).cmd_reindex_t) != NULL) ((*yyvaluep).cmd_reindex_t)->deep_delete();
}
#line 2954 "bison_parser.cpp"
        break;

    case YYSYMBOL_cmd_analyze: /* cmd_analyze  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).cmd_analyze_t) != NULL) ((*yyvaluep).cmd_analyze_t)->deep_delete();
}
#line 2962 "bison_parser.cpp"
        break;

    case YYSYMBOL_cmd_attach: /* cmd_attach  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).cmd_attach_t) != NULL) ((*yyvaluep).cmd_attach_t)->deep_delete();
}
#line 2970 "bison_parser.cpp"
        break;

    case YYSYMBOL_cmd_detach: /* cmd_detach  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).cmd_detach_t) != NULL) ((*yyvaluep).cmd_detach_t)->deep_delete();
}
#line 2978 "bison_parser.cpp"
        break;

    case YYSYMBOL_pragma_key: /* pragma_key  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).pragma_key_t) != NULL) ((*yyvaluep).pragma_key_t)->deep_delete();
}
#line 2986 "bison_parser.cpp"
        break;

    case YYSYMBOL_pragma_value: /* pragma_value  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).pragma_value_t) != NULL) ((*yyvaluep).pragma_value_t)->deep_delete();
}
#line 2994 "bison_parser.cpp"
        break;

    case YYSYMBOL_schema_name: /* schema_name  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).schema_name_t) != NULL) ((*yyvaluep).schema_name_t)->deep_delete();
}
#line 3002 "bison_parser.cpp"
        break;

    case YYSYMBOL_pragma_name: /* pragma_name  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).pragma_name_t) != NULL) ((*yyvaluep).pragma_name_t)->deep_delete();
}
#line 3010 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).preparable_statement_t) != NULL) ((*yyvaluep).preparable_statement_t)->deep_delete();
}
#line 3018 "bison_parser.cpp"
        break;

    case YYSYMBOL_rollback_statement: /* rollback_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).rollback_statement_t) != NULL) ((*yyvaluep).rollback_statement_t)->deep_delete();
}
#line 3026 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_transaction: /* opt_transaction  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_transaction_t) != NULL) ((*yyvaluep).opt_transaction_t)->deep_delete();
}
#line 3034 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_to_savepoint: /* opt_to_savepoint  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_to_savepoint_t) != NULL) ((*yyvaluep).opt_to_savepoint_t)->deep_delete();
}
#line 3042 "bison_parser.cpp"
        break;

    case YYSYMBOL_vacuum_statement: /* vacuum_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).vacuum_statement_t) != NULL) ((*yyvaluep).vacuum_statement_t)->deep_delete();
}
#line 3050 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_schema_name: /* opt_schema_name  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_schema_name_t) != NULL) ((*yyvaluep).opt_schema_name_t)->deep_delete();
}
#line 3058 "bison_parser.cpp"
        break;

    case YYSYMBOL_begin_statement: /* begin_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).begin_statement_t) != NULL) ((*yyvaluep).begin_statement_t)->deep_delete();
}
#line 3066 "bison_parser.cpp"
        break;

    case YYSYMBOL_commit_statement: /* commit_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).commit_statement_t) != NULL) ((*yyvaluep).commit_statement_t)->deep_delete();
}
#line 3074 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_upsert_clause: /* opt_upsert_clause  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_upsert_clause_t) != NULL) ((*yyvaluep).opt_upsert_clause_t)->deep_delete();
}
#line 3082 "bison_parser.cpp"
        break;

    case YYSYMBOL_upsert_clause: /* upsert_clause  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).upsert_clause_t) != NULL) ((*yyvaluep).upsert_clause_t)->deep_delete();
}
#line 3090 "bison_parser.cpp"
        break;

    case YYSYMBOL_indexed_column_list: /* indexed_column_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).indexed_column_list_t) != NULL) ((*yyvaluep).indexed_column_list_t)->deep_delete();
}
#line 3098 "bison_parser.cpp"
        break;

    case YYSYMBOL_indexed_column: /* indexed_column  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).indexed_column_t) != NULL) ((*yyvaluep).indexed_column_t)->deep_delete();
}
#line 3106 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_collate: /* opt_collate  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_collate_t) != NULL) ((*yyvaluep).opt_collate_t)->deep_delete();
}
#line 3114 "bison_parser.cpp"
        break;

    case YYSYMBOL_assign_list: /* assign_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).assign_list_t) != NULL) ((*yyvaluep).assign_list_t)->deep_delete();
}
#line 3122 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_null: /* opt_null  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_null_t) != NULL) ((*yyvaluep).opt_null_t)->deep_delete();
}
#line 3130 "bison_parser.cpp"
        break;

    case YYSYMBOL_assign_clause: /* assign_clause  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).assign_clause_t) != NULL) ((*yyvaluep).assign_clause_t)->deep_delete();
}
#line 3138 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name_list: /* column_name_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).column_name_list_t) != NULL) ((*yyvaluep).column_name_list_t)->deep_delete();
}
#line 3146 "bison_parser.cpp"
        break;

    case YYSYMBOL_collation_name: /* collation_name  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).collation_name_t) != NULL) ((*yyvaluep).collation_name_t)->deep_delete();
}
#line 3154 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).optional_hints_t) != NULL) ((*yyvaluep).optional_hints_t)->deep_delete();
}
#line 3162 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).hint_list_t) != NULL) ((*yyvaluep).hint_list_t)->deep_delete();
}
#line 3170 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).hint_t) != NULL) ((*yyvaluep).hint_t)->deep_delete();
}
#line 3178 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).prepare_statement_t) != NULL) ((*yyvaluep).prepare_statement_t)->deep_delete();
}
#line 3186 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).prepare_target_query_t) != NULL) ((*yyvaluep).prepare_target_query_t)->deep_delete();
}
#line 3194 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).execute_statement_t) != NULL) ((*yyvaluep).execute_statement_t)->deep_delete();
}
#line 3202 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).import_statement_t) != NULL) ((*yyvaluep).import_statement_t)->deep_delete();
}
#line 3210 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_file_type: /* import_file_type  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).import_file_type_t) != NULL) ((*yyvaluep).import_file_type_t)->deep_delete();
}
#line 3218 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).file_path_t) != NULL) ((*yyvaluep).file_path_t)->deep_delete();
}
#line 3226 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).show_statement_t) != NULL) ((*yyvaluep).show_statement_t)->deep_delete();
}
#line 3234 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).alter_statement_t) != NULL) ((*yyvaluep).alter_statement_t)->deep_delete();
}
#line 3242 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column: /* opt_column  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_column_t) != NULL) ((*yyvaluep).opt_column_t)->deep_delete();
}
#line 3250 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).create_statement_t) != NULL) ((*yyvaluep).create_statement_t)->deep_delete();
}
#line 3258 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_unique: /* opt_unique  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_unique_t) != NULL) ((*yyvaluep).opt_unique_t)->deep_delete();
}
#line 3266 "bison_parser.cpp"
        break;

    case YYSYMBOL_index_name: /* index_name  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).index_name_t) != NULL) ((*yyvaluep).index_name_t)->deep_delete();
}
#line 3274 "bison_parser.cpp"
        break;

    case YYSYMBOL_trigger_declare: /* trigger_declare  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).trigger_declare_t) != NULL) ((*yyvaluep).trigger_declare_t)->deep_delete();
}
#line 3282 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_tmp: /* opt_tmp  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_tmp_t) != NULL) ((*yyvaluep).opt_tmp_t)->deep_delete();
}
#line 3290 "bison_parser.cpp"
        break;

    case YYSYMBOL_trigger_name: /* trigger_name  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).trigger_name_t) != NULL) ((*yyvaluep).trigger_name_t)->deep_delete();
}
#line 3298 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_trigger_time: /* opt_trigger_time  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_trigger_time_t) != NULL) ((*yyvaluep).opt_trigger_time_t)->deep_delete();
}
#line 3306 "bison_parser.cpp"
        break;

    case YYSYMBOL_trigger_event: /* trigger_event  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).trigger_event_t) != NULL) ((*yyvaluep).trigger_event_t)->deep_delete();
}
#line 3314 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_of_column_list: /* opt_of_column_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_of_column_list_t) != NULL) ((*yyvaluep).opt_of_column_list_t)->deep_delete();
}
#line 3322 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_for_each: /* opt_for_each  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_for_each_t) != NULL) ((*yyvaluep).opt_for_each_t)->deep_delete();
}
#line 3330 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_when: /* opt_when  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_when_t) != NULL) ((*yyvaluep).opt_when_t)->deep_delete();
}
#line 3338 "bison_parser.cpp"
        break;

    case YYSYMBOL_trigger_cmd_list: /* trigger_cmd_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).trigger_cmd_list_t) != NULL) ((*yyvaluep).trigger_cmd_list_t)->deep_delete();
}
#line 3346 "bison_parser.cpp"
        break;

    case YYSYMBOL_trigger_cmd: /* trigger_cmd  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).trigger_cmd_t) != NULL) ((*yyvaluep).trigger_cmd_t)->deep_delete();
}
#line 3354 "bison_parser.cpp"
        break;

    case YYSYMBOL_module_name: /* module_name  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).module_name_t) != NULL) ((*yyvaluep).module_name_t)->deep_delete();
}
#line 3362 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_not_exists_t) != NULL) ((*yyvaluep).opt_not_exists_t)->deep_delete();
}
#line 3370 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def_commalist: /* column_def_commalist  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).column_def_comma_list_t) != NULL) ((*yyvaluep).column_def_comma_list_t)->deep_delete();
}
#line 3378 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).column_def_t) != NULL) ((*yyvaluep).column_def_t)->deep_delete();
}
#line 3386 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_arglist: /* opt_column_arglist  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_column_arglist_t) != NULL) ((*yyvaluep).opt_column_arglist_t)->deep_delete();
}
#line 3394 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_arglist: /* column_arglist  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).column_arglist_t) != NULL) ((*yyvaluep).column_arglist_t)->deep_delete();
}
#line 3402 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_arg: /* column_arg  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).column_arg_t) != NULL) ((*yyvaluep).column_arg_t)->deep_delete();
}
#line 3410 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_on_conflict: /* opt_on_conflict  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_on_conflict_t) != NULL) ((*yyvaluep).opt_on_conflict_t)->deep_delete();
}
#line 3418 "bison_parser.cpp"
        break;

    case YYSYMBOL_resolve_type: /* resolve_type  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).resolve_type_t) != NULL) ((*yyvaluep).resolve_type_t)->deep_delete();
}
#line 3426 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_autoinc: /* opt_autoinc  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_autoinc_t) != NULL) ((*yyvaluep).opt_autoinc_t)->deep_delete();
}
#line 3434 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).column_type_t) != NULL) ((*yyvaluep).column_type_t)->deep_delete();
}
#line 3442 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).drop_statement_t) != NULL) ((*yyvaluep).drop_statement_t)->deep_delete();
}
#line 3450 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_exists_t) != NULL) ((*yyvaluep).opt_exists_t)->deep_delete();
}
#line 3458 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).delete_statement_t) != NULL) ((*yyvaluep).delete_statement_t)->deep_delete();
}
#line 3466 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).delete_statement_t) != NULL) ((*yyvaluep).delete_statement_t)->deep_delete();
}
#line 3474 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).insert_statement_t) != NULL) ((*yyvaluep).insert_statement_t)->deep_delete();
}
#line 3482 "bison_parser.cpp"
        break;

    case YYSYMBOL_super_list: /* super_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).super_list_t) != NULL) ((*yyvaluep).super_list_t)->deep_delete();
}
#line 3490 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_type: /* insert_type  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).insert_type_t) != NULL) ((*yyvaluep).insert_type_t)->deep_delete();
}
#line 3498 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_column_list_t) != NULL) ((*yyvaluep).opt_column_list_t)->deep_delete();
}
#line 3506 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).update_statement_t) != NULL) ((*yyvaluep).update_statement_t)->deep_delete();
}
#line 3514 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).update_clause_commalist_t) != NULL) ((*yyvaluep).update_clause_commalist_t)->deep_delete();
}
#line 3522 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).update_clause_t) != NULL) ((*yyvaluep).update_clause_t)->deep_delete();
}
#line 3530 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).select_statement_t) != NULL) ((*yyvaluep).select_statement_t)->deep_delete();
}
#line 3538 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).select_with_paren_t) != NULL) ((*yyvaluep).select_with_paren_t)->deep_delete();
}
#line 3546 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_paren_or_clause: /* select_paren_or_clause  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).select_paren_or_clause_t) != NULL) ((*yyvaluep).select_paren_or_clause_t)->deep_delete();
}
#line 3554 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).select_no_paren_t) != NULL) ((*yyvaluep).select_no_paren_t)->deep_delete();
}
#line 3562 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).set_operator_t) != NULL) ((*yyvaluep).set_operator_t)->deep_delete();
}
#line 3570 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).set_type_t) != NULL) ((*yyvaluep).set_type_t)->deep_delete();
}
#line 3578 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_all_t) != NULL) ((*yyvaluep).opt_all_t)->deep_delete();
}
#line 3586 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).select_clause_t) != NULL) ((*yyvaluep).select_clause_t)->deep_delete();
}
#line 3594 "bison_parser.cpp"
        break;

    case YYSYMBOL_window_clause: /* window_clause  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).window_clause_t) != NULL) ((*yyvaluep).window_clause_t)->deep_delete();
}
#line 3602 "bison_parser.cpp"
        break;

    case YYSYMBOL_windowdefn_list: /* windowdefn_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).window_defn_list_t) != NULL) ((*yyvaluep).window_defn_list_t)->deep_delete();
}
#line 3610 "bison_parser.cpp"
        break;

    case YYSYMBOL_windowdefn: /* windowdefn  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).window_defn_t) != NULL) ((*yyvaluep).window_defn_t)->deep_delete();
}
#line 3618 "bison_parser.cpp"
        break;

    case YYSYMBOL_window: /* window  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).window_t) != NULL) ((*yyvaluep).window_t)->deep_delete();
}
#line 3626 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_base_window_name: /* opt_base_window_name  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_base_window_name_t) != NULL) ((*yyvaluep).opt_base_window_name_t)->deep_delete();
}
#line 3634 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame: /* opt_frame  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_frame_t) != NULL) ((*yyvaluep).opt_frame_t)->deep_delete();
}
#line 3642 "bison_parser.cpp"
        break;

    case YYSYMBOL_range_or_rows: /* range_or_rows  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).range_or_rows_t) != NULL) ((*yyvaluep).range_or_rows_t)->deep_delete();
}
#line 3650 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound_s: /* frame_bound_s  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).frame_bound_s_t) != NULL) ((*yyvaluep).frame_bound_s_t)->deep_delete();
}
#line 3658 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound_e: /* frame_bound_e  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).frame_bound_e_t) != NULL) ((*yyvaluep).frame_bound_e_t)->deep_delete();
}
#line 3666 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_bound: /* frame_bound  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).frame_bound_t) != NULL) ((*yyvaluep).frame_bound_t)->deep_delete();
}
#line 3674 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_frame_exclude: /* opt_frame_exclude  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_frame_exclude_t) != NULL) ((*yyvaluep).opt_frame_exclude_t)->deep_delete();
}
#line 3682 "bison_parser.cpp"
        break;

    case YYSYMBOL_frame_exclude: /* frame_exclude  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).frame_exclude_t) != NULL) ((*yyvaluep).frame_exclude_t)->deep_delete();
}
#line 3690 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_distinct_t) != NULL) ((*yyvaluep).opt_distinct_t)->deep_delete();
}
#line 3698 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).select_list_t) != NULL) ((*yyvaluep).select_list_t)->deep_delete();
}
#line 3706 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_from_clause_t) != NULL) ((*yyvaluep).opt_from_clause_t)->deep_delete();
}
#line 3714 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).from_clause_t) != NULL) ((*yyvaluep).from_clause_t)->deep_delete();
}
#line 3722 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_where_t) != NULL) ((*yyvaluep).opt_where_t)->deep_delete();
}
#line 3730 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_group_t) != NULL) ((*yyvaluep).opt_group_t)->deep_delete();
}
#line 3738 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_having_t) != NULL) ((*yyvaluep).opt_having_t)->deep_delete();
}
#line 3746 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_order_t) != NULL) ((*yyvaluep).opt_order_t)->deep_delete();
}
#line 3754 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).order_list_t) != NULL) ((*yyvaluep).order_list_t)->deep_delete();
}
#line 3762 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).order_desc_t) != NULL) ((*yyvaluep).order_desc_t)->deep_delete();
}
#line 3770 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_order_type_t) != NULL) ((*yyvaluep).opt_order_type_t)->deep_delete();
}
#line 3778 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_top_t) != NULL) ((*yyvaluep).opt_top_t)->deep_delete();
}
#line 3786 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_limit_t) != NULL) ((*yyvaluep).opt_limit_t)->deep_delete();
}
#line 3794 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).expr_list_t) != NULL) ((*yyvaluep).expr_list_t)->deep_delete();
}
#line 3802 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_literal_list_t) != NULL) ((*yyvaluep).opt_literal_list_t)->deep_delete();
}
#line 3810 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).literal_list_t) != NULL) ((*yyvaluep).literal_list_t)->deep_delete();
}
#line 3818 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).expr_alias_t) != NULL) ((*yyvaluep).expr_alias_t)->deep_delete();
}
#line 3826 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).expr_t) != NULL) ((*yyvaluep).expr_t)->deep_delete();
}
#line 3834 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).operand_t) != NULL) ((*yyvaluep).operand_t)->deep_delete();
}
#line 3842 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).cast_expr_t) != NULL) ((*yyvaluep).cast_expr_t)->deep_delete();
}
#line 3850 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).scalar_expr_t) != NULL) ((*yyvaluep).scalar_expr_t)->deep_delete();
}
#line 3858 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).unary_expr_t) != NULL) ((*yyvaluep).unary_expr_t)->deep_delete();
}
#line 3866 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).binary_expr_t) != NULL) ((*yyvaluep).binary_expr_t)->deep_delete();
}
#line 3874 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).logic_expr_t) != NULL) ((*yyvaluep).logic_expr_t)->deep_delete();
}
#line 3882 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).in_expr_t) != NULL) ((*yyvaluep).in_expr_t)->deep_delete();
}
#line 3890 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).case_expr_t) != NULL) ((*yyvaluep).case_expr_t)->deep_delete();
}
#line 3898 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).case_list_t) != NULL) ((*yyvaluep).case_list_t)->deep_delete();
}
#line 3906 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).exists_expr_t) != NULL) ((*yyvaluep).exists_expr_t)->deep_delete();
}
#line 3914 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).comp_expr_t) != NULL) ((*yyvaluep).comp_expr_t)->deep_delete();
}
#line 3922 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).function_expr_t) != NULL) ((*yyvaluep).function_expr_t)->deep_delete();
}
#line 3930 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_over_clause: /* opt_over_clause  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_over_clause_t) != NULL) ((*yyvaluep).opt_over_clause_t)->deep_delete();
}
#line 3938 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_filter_clause: /* opt_filter_clause  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_filter_clause_t) != NULL) ((*yyvaluep).opt_filter_clause_t)->deep_delete();
}
#line 3946 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).extract_expr_t) != NULL) ((*yyvaluep).extract_expr_t)->deep_delete();
}
#line 3954 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).datetime_field_t) != NULL) ((*yyvaluep).datetime_field_t)->deep_delete();
}
#line 3962 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).array_expr_t) != NULL) ((*yyvaluep).array_expr_t)->deep_delete();
}
#line 3970 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).array_index_t) != NULL) ((*yyvaluep).array_index_t)->deep_delete();
}
#line 3978 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).between_expr_t) != NULL) ((*yyvaluep).between_expr_t)->deep_delete();
}
#line 3986 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).column_name_t) != NULL) ((*yyvaluep).column_name_t)->deep_delete();
}
#line 3994 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).literal_t) != NULL) ((*yyvaluep).literal_t)->deep_delete();
}
#line 4002 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).string_literal_t) != NULL) ((*yyvaluep).string_literal_t)->deep_delete();
}
#line 4010 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).bool_literal_t) != NULL) ((*yyvaluep).bool_literal_t)->deep_delete();
}
#line 4018 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).num_literal_t) != NULL) ((*yyvaluep).num_literal_t)->deep_delete();
}
#line 4026 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).int_literal_t) != NULL) ((*yyvaluep).int_literal_t)->deep_delete();
}
#line 4034 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).null_literal_t) != NULL) ((*yyvaluep).null_literal_t)->deep_delete();
}
#line 4042 "bison_parser.cpp"
        break;

    case YYSYMBOL_comment_literal: /* comment_literal  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).comment_literal_t) != NULL) ((*yyvaluep).comment_literal_t)->deep_delete();
}
#line 4050 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).param_expr_t) != NULL) ((*yyvaluep).param_expr_t)->deep_delete();
}
#line 4058 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).table_ref_t) != NULL) ((*yyvaluep).table_ref_t)->deep_delete();
}
#line 4066 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_prefix: /* table_prefix  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).table_prefix_t) != NULL) ((*yyvaluep).table_prefix_t)->deep_delete();
}
#line 4074 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_op: /* join_op  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).join_op_t) != NULL) ((*yyvaluep).join_op_t)->deep_delete();
}
#line 4082 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index: /* opt_index  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_index_t) != NULL) ((*yyvaluep).opt_index_t)->deep_delete();
}
#line 4090 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_on: /* opt_on  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_on_t) != NULL) ((*yyvaluep).opt_on_t)->deep_delete();
}
#line 4098 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_using: /* opt_using  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_using_t) != NULL) ((*yyvaluep).opt_using_t)->deep_delete();
}
#line 4106 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).table_ref_name_no_alias_t) != NULL) ((*yyvaluep).table_ref_name_no_alias_t)->deep_delete();
}
#line 4114 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).table_name_t) != NULL) ((*yyvaluep).table_name_t)->deep_delete();
}
#line 4122 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).alias_t) != NULL) ((*yyvaluep).alias_t)->deep_delete();
}
#line 4130 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_alias_t) != NULL) ((*yyvaluep).opt_alias_t)->deep_delete();
}
#line 4138 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_with_clause_t) != NULL) ((*yyvaluep).opt_with_clause_t)->deep_delete();
}
#line 4146 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).with_clause_t) != NULL) ((*yyvaluep).with_clause_t)->deep_delete();
}
#line 4154 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).with_description_list_t) != NULL) ((*yyvaluep).with_description_list_t)->deep_delete();
}
#line 4162 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).with_description_t) != NULL) ((*yyvaluep).with_description_t)->deep_delete();
}
#line 4170 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_kw: /* join_kw  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).join_kw_t) != NULL) ((*yyvaluep).join_kw_t)->deep_delete();
}
#line 4178 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_semicolon: /* opt_semicolon  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).opt_semicolon_t) != NULL) ((*yyvaluep).opt_semicolon_t)->deep_delete();
}
#line 4186 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 546 "bison_parser.y"
                {
  if (((*yyvaluep).ident_commalist_t) != NULL) ((*yyvaluep).ident_commalist_t)->deep_delete();
}
#line 4194 "bison_parser.cpp"
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
yyparse (Program * result, yyscan_t scanner)
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
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
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

  yychar = SQL_HSQL_EMPTY; /* Cause a token to be read.  */


/* User initialization code.  */
#line 74 "bison_parser.y"
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 4302 "bison_parser.cpp"

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
  if (yychar == SQL_HSQL_EMPTY)
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
  else if (yychar == SQL_HSQL_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = SQL_HSQL_UNDEF;
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
  yychar = SQL_HSQL_EMPTY;
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
  case 2: /* input: statement_list opt_semicolon  */
#line 577 "bison_parser.y"
                                         {
  (yyval.program_t) = NULL;
  result->statement_list_ = (yyvsp[-1].statement_list_t);
  result->opt_semicolon_ = (yyvsp[0].opt_semicolon_t);
}
#line 4519 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 583 "bison_parser.y"
                           {
  (yyval.statement_list_t) = new StatementList();
  (yyval.statement_list_t)->v_statement_list_.push_back((yyvsp[0].statement_t));
}
#line 4528 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 587 "bison_parser.y"
                               {
  (yyvsp[-2].statement_list_t)->v_statement_list_.push_back((yyvsp[0].statement_t));
  (yyval.statement_list_t) = (yyvsp[-2].statement_list_t);
}
#line 4537 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 592 "bison_parser.y"
                                        {
  (yyval.statement_t) = new Statement();
  (yyval.statement_t)->sub_type_ = CASE1;
  (yyval.statement_t)->prepare_statement_ = (yyvsp[-1].prepare_statement_t);
  (yyval.statement_t)->optional_hints_ = (yyvsp[0].optional_hints_t);
}
#line 4548 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 598 "bison_parser.y"
                                 {
  (yyval.statement_t) = new Statement();
  (yyval.statement_t)->sub_type_ = CASE0;
  (yyval.statement_t)->preparable_statement_ = (yyvsp[-1].preparable_statement_t);
  (yyval.statement_t)->optional_hints_ = (yyvsp[0].optional_hints_t);
}
#line 4559 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 605 "bison_parser.y"
                 {
  (yyval.statement_t) = new Statement();
  (yyval.statement_t)->sub_type_ = CASE2;
  (yyval.statement_t)->show_statement_ = (yyvsp[0].show_statement_t);
}
#line 4569 "bison_parser.cpp"
    break;

  case 8: /* statement: cmd  */
#line 611 "bison_parser.y"
      {
  (yyval.statement_t) = new Statement();
  (yyval.statement_t)->sub_type_ = CASE3;
  (yyval.statement_t)->cmd_ = (yyvsp[0].cmd_t);
}
#line 4579 "bison_parser.cpp"
    break;

  case 9: /* statement: comment_literal statement  */
#line 616 "bison_parser.y"
                            {
 	(yyval.statement_t) = (yyvsp[0].statement_t);
  (yyval.statement_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 4588 "bison_parser.cpp"
    break;

  case 10: /* cmd: cmd_pragma  */
#line 622 "bison_parser.y"
                 { (yyval.cmd_t) = (yyvsp[0].cmd_pragma_t); }
#line 4594 "bison_parser.cpp"
    break;

  case 11: /* cmd: cmd_reindex  */
#line 623 "bison_parser.y"
              { (yyval.cmd_t) = (yyvsp[0].cmd_reindex_t); }
#line 4600 "bison_parser.cpp"
    break;

  case 12: /* cmd: cmd_analyze  */
#line 624 "bison_parser.y"
              { (yyval.cmd_t) = (yyvsp[0].cmd_analyze_t); }
#line 4606 "bison_parser.cpp"
    break;

  case 13: /* cmd: cmd_attach  */
#line 625 "bison_parser.y"
             { (yyval.cmd_t) = (yyvsp[0].cmd_attach_t); }
#line 4612 "bison_parser.cpp"
    break;

  case 14: /* cmd: cmd_detach  */
#line 626 "bison_parser.y"
             { (yyval.cmd_t) = (yyvsp[0].cmd_detach_t); }
#line 4618 "bison_parser.cpp"
    break;

  case 15: /* cmd: cmd_release  */
#line 627 "bison_parser.y"
              { (yyval.cmd_t) = (yyvsp[0].cmd_release_t); }
#line 4624 "bison_parser.cpp"
    break;

  case 16: /* cmd: rollback_statement  */
#line 628 "bison_parser.y"
                     { (yyval.cmd_t) = (yyvsp[0].rollback_statement_t); }
#line 4630 "bison_parser.cpp"
    break;

  case 17: /* cmd: vacuum_statement  */
#line 629 "bison_parser.y"
                   { (yyval.cmd_t) = (yyvsp[0].vacuum_statement_t); }
#line 4636 "bison_parser.cpp"
    break;

  case 18: /* cmd: begin_statement  */
#line 630 "bison_parser.y"
                  { (yyval.cmd_t) = (yyvsp[0].begin_statement_t); }
#line 4642 "bison_parser.cpp"
    break;

  case 19: /* cmd: commit_statement  */
#line 631 "bison_parser.y"
                   { (yyval.cmd_t) = (yyvsp[0].commit_statement_t); }
#line 4648 "bison_parser.cpp"
    break;

  case 20: /* cmd_release: RELEASE SAVEPOINT savepoint_name  */
#line 633 "bison_parser.y"
                                               {
  (yyval.cmd_release_t) = new CmdRelease();
  (yyval.cmd_release_t)->sub_type_ = CASE0;
  (yyval.cmd_release_t)->savepoint_name_ = (yyvsp[0].savepoint_name_t);
}
#line 4658 "bison_parser.cpp"
    break;

  case 21: /* cmd_release: RELEASE savepoint_name  */
#line 638 "bison_parser.y"
                         {
  (yyval.cmd_release_t) = new CmdRelease();
  (yyval.cmd_release_t)->sub_type_ = CASE1;
  (yyval.cmd_release_t)->savepoint_name_ = (yyvsp[0].savepoint_name_t);
}
#line 4668 "bison_parser.cpp"
    break;

  case 22: /* cmd_release: comment_literal cmd_release  */
#line 643 "bison_parser.y"
                              {
		(yyval.cmd_release_t) = (yyvsp[0].cmd_release_t);
		(yyval.cmd_release_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 4677 "bison_parser.cpp"
    break;

  case 23: /* cmd_release: cmd_release comment_literal  */
#line 647 "bison_parser.y"
                              {
  (yyval.cmd_release_t) = (yyvsp[-1].cmd_release_t);
  (yyval.cmd_release_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 4686 "bison_parser.cpp"
    break;

  case 24: /* savepoint_name: IDENTIFIER  */
#line 653 "bison_parser.y"
                            {
  (yyval.savepoint_name_t) = new SavepointName();
  (yyval.savepoint_name_t)->id_ = new Identifier((yyvsp[0].sval), id_savepoint_name);
  free((yyvsp[0].sval));
}
#line 4696 "bison_parser.cpp"
    break;

  case 25: /* cmd_pragma: PRAGMA pragma_key  */
#line 659 "bison_parser.y"
                               {
  (yyval.cmd_pragma_t) = new CmdPragma();
  (yyval.cmd_pragma_t)->sub_type_ = CASE0;
  (yyval.cmd_pragma_t)->pragma_key_ = (yyvsp[0].pragma_key_t);
}
#line 4706 "bison_parser.cpp"
    break;

  case 26: /* cmd_pragma: PRAGMA pragma_key '=' pragma_value  */
#line 664 "bison_parser.y"
                                     {
  (yyval.cmd_pragma_t) = new CmdPragma();
  (yyval.cmd_pragma_t)->sub_type_ = CASE1;
  (yyval.cmd_pragma_t)->pragma_key_ = (yyvsp[-2].pragma_key_t);
  (yyval.cmd_pragma_t)->pragma_value_ = (yyvsp[0].pragma_value_t);
}
#line 4717 "bison_parser.cpp"
    break;

  case 27: /* cmd_pragma: PRAGMA pragma_key '(' pragma_value ')'  */
#line 670 "bison_parser.y"
                                         {
  (yyval.cmd_pragma_t) = new CmdPragma();
  (yyval.cmd_pragma_t)->sub_type_ = CASE2;
  (yyval.cmd_pragma_t)->pragma_key_ = (yyvsp[-3].pragma_key_t);
  (yyval.cmd_pragma_t)->pragma_value_ = (yyvsp[-1].pragma_value_t);
}
#line 4728 "bison_parser.cpp"
    break;

  case 28: /* cmd_pragma: comment_literal cmd_pragma  */
#line 676 "bison_parser.y"
                             {
		(yyval.cmd_pragma_t) = (yyvsp[0].cmd_pragma_t);
		(yyval.cmd_pragma_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 4737 "bison_parser.cpp"
    break;

  case 29: /* cmd_pragma: cmd_pragma comment_literal  */
#line 680 "bison_parser.y"
                             {
  (yyval.cmd_pragma_t) = (yyvsp[-1].cmd_pragma_t);
  (yyval.cmd_pragma_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 4746 "bison_parser.cpp"
    break;

  case 30: /* cmd_reindex: REINDEX  */
#line 686 "bison_parser.y"
                      {
  (yyval.cmd_reindex_t) = new CmdReindex();
  (yyval.cmd_reindex_t)->sub_type_ = CASE0;
}
#line 4755 "bison_parser.cpp"
    break;

  case 31: /* cmd_reindex: REINDEX table_name  */
#line 690 "bison_parser.y"
                     {
  (yyval.cmd_reindex_t) = new CmdReindex();
  (yyval.cmd_reindex_t)->sub_type_ = CASE1;
  (yyval.cmd_reindex_t)->table_name_ = (yyvsp[0].table_name_t);
  (yyval.cmd_reindex_t)->table_name_->table_name_->id_type_ = id_top_table_name;
}
#line 4766 "bison_parser.cpp"
    break;

  case 32: /* cmd_reindex: comment_literal cmd_reindex  */
#line 696 "bison_parser.y"
                              {
		(yyval.cmd_reindex_t) = (yyvsp[0].cmd_reindex_t);
		(yyval.cmd_reindex_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 4775 "bison_parser.cpp"
    break;

  case 33: /* cmd_reindex: cmd_reindex comment_literal  */
#line 700 "bison_parser.y"
                              {
  (yyval.cmd_reindex_t) = (yyvsp[-1].cmd_reindex_t);
  (yyval.cmd_reindex_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 4784 "bison_parser.cpp"
    break;

  case 34: /* cmd_analyze: ANALYZE  */
#line 706 "bison_parser.y"
                      {
  (yyval.cmd_analyze_t) = new CmdAnalyze();
  (yyval.cmd_analyze_t)->sub_type_ = CASE0;
}
#line 4793 "bison_parser.cpp"
    break;

  case 35: /* cmd_analyze: ANALYZE table_name  */
#line 710 "bison_parser.y"
                     {
  (yyval.cmd_analyze_t) = new CmdAnalyze();
  (yyval.cmd_analyze_t)->sub_type_ = CASE1;
  (yyval.cmd_analyze_t)->table_name_ = (yyvsp[0].table_name_t);
  (yyval.cmd_analyze_t)->table_name_->table_name_->id_type_ = id_top_table_name;
}
#line 4804 "bison_parser.cpp"
    break;

  case 36: /* cmd_analyze: comment_literal cmd_analyze  */
#line 716 "bison_parser.y"
                              {
		(yyval.cmd_analyze_t) = (yyvsp[0].cmd_analyze_t);
		(yyval.cmd_analyze_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 4813 "bison_parser.cpp"
    break;

  case 37: /* cmd_analyze: cmd_analyze comment_literal  */
#line 720 "bison_parser.y"
                              {
  (yyval.cmd_analyze_t) = (yyvsp[-1].cmd_analyze_t);
  (yyval.cmd_analyze_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 4822 "bison_parser.cpp"
    break;

  case 38: /* cmd_attach: ATTACH expr AS schema_name  */
#line 726 "bison_parser.y"
                                        {
  (yyval.cmd_attach_t) = new CmdAttach();
  (yyval.cmd_attach_t)->sub_type_ = CASE0;
  (yyval.cmd_attach_t)->expr_ = (yyvsp[-2].expr_t);
  (yyval.cmd_attach_t)->schema_name_ = (yyvsp[0].schema_name_t);
}
#line 4833 "bison_parser.cpp"
    break;

  case 39: /* cmd_attach: ATTACH DATABASE expr AS schema_name  */
#line 732 "bison_parser.y"
                                      {
  (yyval.cmd_attach_t) = new CmdAttach();
  (yyval.cmd_attach_t)->sub_type_ = CASE1;
  (yyval.cmd_attach_t)->expr_ = (yyvsp[-2].expr_t);
  (yyval.cmd_attach_t)->schema_name_ = (yyvsp[0].schema_name_t);
}
#line 4844 "bison_parser.cpp"
    break;

  case 40: /* cmd_attach: comment_literal cmd_attach  */
#line 738 "bison_parser.y"
                             {
		(yyval.cmd_attach_t) = (yyvsp[0].cmd_attach_t);
		(yyval.cmd_attach_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 4853 "bison_parser.cpp"
    break;

  case 41: /* cmd_attach: cmd_attach comment_literal  */
#line 742 "bison_parser.y"
                             {
  (yyval.cmd_attach_t) = (yyvsp[-1].cmd_attach_t);
  (yyval.cmd_attach_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 4862 "bison_parser.cpp"
    break;

  case 42: /* cmd_detach: DETACH schema_name  */
#line 748 "bison_parser.y"
                                {
  (yyval.cmd_detach_t) = new CmdDetach();
  (yyval.cmd_detach_t)->sub_type_ = CASE0;
  (yyval.cmd_detach_t)->schema_name_ = (yyvsp[0].schema_name_t);
}
#line 4872 "bison_parser.cpp"
    break;

  case 43: /* cmd_detach: DETACH DATABASE schema_name  */
#line 753 "bison_parser.y"
                              {
  (yyval.cmd_detach_t) = new CmdDetach();
  (yyval.cmd_detach_t)->sub_type_ = CASE1;
  (yyval.cmd_detach_t)->schema_name_ = (yyvsp[0].schema_name_t);
}
#line 4882 "bison_parser.cpp"
    break;

  case 44: /* cmd_detach: comment_literal cmd_detach  */
#line 758 "bison_parser.y"
                             {
		(yyval.cmd_detach_t) = (yyvsp[0].cmd_detach_t);
		(yyval.cmd_detach_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 4891 "bison_parser.cpp"
    break;

  case 45: /* cmd_detach: cmd_detach comment_literal  */
#line 762 "bison_parser.y"
                             {
  (yyval.cmd_detach_t) = (yyvsp[-1].cmd_detach_t);
  (yyval.cmd_detach_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 4900 "bison_parser.cpp"
    break;

  case 46: /* pragma_key: pragma_name  */
#line 767 "bison_parser.y"
                         {
  (yyval.pragma_key_t) = new PragmaKey();
  (yyval.pragma_key_t)->sub_type_ = CASE0;
  (yyval.pragma_key_t)->pragma_name_ = (yyvsp[0].pragma_name_t);
}
#line 4910 "bison_parser.cpp"
    break;

  case 47: /* pragma_key: schema_name '.' pragma_name  */
#line 772 "bison_parser.y"
                              {
  (yyval.pragma_key_t) = new PragmaKey();
  (yyval.pragma_key_t)->sub_type_ = CASE1;
  (yyval.pragma_key_t)->schema_name_ = (yyvsp[-2].schema_name_t);
  (yyval.pragma_key_t)->pragma_name_ = (yyvsp[0].pragma_name_t);
}
#line 4921 "bison_parser.cpp"
    break;

  case 48: /* pragma_value: num_literal  */
#line 780 "bison_parser.y"
                           {
  (yyval.pragma_value_t) = new PragmaValue();
  (yyval.pragma_value_t)->sub_type_ = CASE0;
  (yyval.pragma_value_t)->num_literal_ = (yyvsp[0].num_literal_t);
}
#line 4931 "bison_parser.cpp"
    break;

  case 49: /* pragma_value: string_literal  */
#line 785 "bison_parser.y"
                 {
  (yyval.pragma_value_t) = new PragmaValue();
  (yyval.pragma_value_t)->sub_type_ = CASE1;
  (yyval.pragma_value_t)->string_literal_ = (yyvsp[0].string_literal_t);
}
#line 4941 "bison_parser.cpp"
    break;

  case 50: /* pragma_value: IDENTIFIER  */
#line 790 "bison_parser.y"
             {
  (yyval.pragma_value_t) = new PragmaValue();
  (yyval.pragma_value_t)->sub_type_ = CASE2;
  (yyval.pragma_value_t)->id_ = new Identifier((yyvsp[0].sval), id_pragma_value);
  free((yyvsp[0].sval));
}
#line 4952 "bison_parser.cpp"
    break;

  case 51: /* pragma_value: ON  */
#line 796 "bison_parser.y"
     {
  (yyval.pragma_value_t) = new PragmaValue();
  (yyval.pragma_value_t)->sub_type_ = CASE2;
  (yyval.pragma_value_t)->id_ = new Identifier("ON", id_pragma_value);
}
#line 4962 "bison_parser.cpp"
    break;

  case 52: /* pragma_value: DELETE  */
#line 801 "bison_parser.y"
         {
  (yyval.pragma_value_t) = new PragmaValue();
  (yyval.pragma_value_t)->sub_type_ = CASE2;
  (yyval.pragma_value_t)->id_ = new Identifier("DELETE", id_pragma_value);
}
#line 4972 "bison_parser.cpp"
    break;

  case 53: /* pragma_value: DEFAULT  */
#line 806 "bison_parser.y"
          {
  (yyval.pragma_value_t) = new PragmaValue();
  (yyval.pragma_value_t)->sub_type_ = CASE2;
  (yyval.pragma_value_t)->id_ = new Identifier("DEFAULT", id_pragma_value);
}
#line 4982 "bison_parser.cpp"
    break;

  case 54: /* pragma_value: comment_literal pragma_value  */
#line 811 "bison_parser.y"
                               {
		(yyval.pragma_value_t) = (yyvsp[0].pragma_value_t);
		(yyval.pragma_value_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 4991 "bison_parser.cpp"
    break;

  case 55: /* pragma_value: pragma_value comment_literal  */
#line 815 "bison_parser.y"
                               {
  (yyval.pragma_value_t) = (yyvsp[-1].pragma_value_t);
  (yyval.pragma_value_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5000 "bison_parser.cpp"
    break;

  case 56: /* schema_name: IDENTIFIER  */
#line 821 "bison_parser.y"
                         {
  (yyval.schema_name_t) = new SchemaName();
  (yyval.schema_name_t)->id_ = new Identifier((yyvsp[0].sval), id_schema_name);
  free((yyvsp[0].sval));
}
#line 5010 "bison_parser.cpp"
    break;

  case 57: /* pragma_name: IDENTIFIER  */
#line 827 "bison_parser.y"
                         {
  (yyval.pragma_name_t) = new PragmaName();
  (yyval.pragma_name_t)->id_ = new Identifier((yyvsp[0].sval), id_pragma_name);
  free((yyvsp[0].sval));
}
#line 5020 "bison_parser.cpp"
    break;

  case 58: /* preparable_statement: select_statement  */
#line 833 "bison_parser.y"
                                        { (yyval.preparable_statement_t) = (yyvsp[0].select_statement_t); }
#line 5026 "bison_parser.cpp"
    break;

  case 59: /* preparable_statement: import_statement  */
#line 834 "bison_parser.y"
                   { (yyval.preparable_statement_t) = (yyvsp[0].import_statement_t); }
#line 5032 "bison_parser.cpp"
    break;

  case 60: /* preparable_statement: create_statement  */
#line 835 "bison_parser.y"
                   { (yyval.preparable_statement_t) = (yyvsp[0].create_statement_t); }
#line 5038 "bison_parser.cpp"
    break;

  case 61: /* preparable_statement: insert_statement  */
#line 836 "bison_parser.y"
                   { (yyval.preparable_statement_t) = (yyvsp[0].insert_statement_t); }
#line 5044 "bison_parser.cpp"
    break;

  case 62: /* preparable_statement: delete_statement  */
#line 837 "bison_parser.y"
                   { (yyval.preparable_statement_t) = (yyvsp[0].delete_statement_t); }
#line 5050 "bison_parser.cpp"
    break;

  case 63: /* preparable_statement: truncate_statement  */
#line 838 "bison_parser.y"
                     { (yyval.preparable_statement_t) = (yyvsp[0].delete_statement_t); }
#line 5056 "bison_parser.cpp"
    break;

  case 64: /* preparable_statement: update_statement  */
#line 839 "bison_parser.y"
                   { (yyval.preparable_statement_t) = (yyvsp[0].update_statement_t); }
#line 5062 "bison_parser.cpp"
    break;

  case 65: /* preparable_statement: drop_statement  */
#line 840 "bison_parser.y"
                 { (yyval.preparable_statement_t) = (yyvsp[0].drop_statement_t); }
#line 5068 "bison_parser.cpp"
    break;

  case 66: /* preparable_statement: execute_statement  */
#line 841 "bison_parser.y"
                    { (yyval.preparable_statement_t) = (yyvsp[0].execute_statement_t); }
#line 5074 "bison_parser.cpp"
    break;

  case 67: /* preparable_statement: alter_statement  */
#line 842 "bison_parser.y"
                  { (yyval.preparable_statement_t) = (yyvsp[0].alter_statement_t); }
#line 5080 "bison_parser.cpp"
    break;

  case 68: /* rollback_statement: ROLLBACK opt_transaction opt_to_savepoint  */
#line 845 "bison_parser.y"
                                                                {
  (yyval.rollback_statement_t) = new RollbackStatement();
  (yyval.rollback_statement_t)->opt_transaction_ = (yyvsp[-1].opt_transaction_t);
  (yyval.rollback_statement_t)->opt_to_savepoint_ = (yyvsp[0].opt_to_savepoint_t);
}
#line 5090 "bison_parser.cpp"
    break;

  case 69: /* rollback_statement: comment_literal rollback_statement  */
#line 850 "bison_parser.y"
                                     {
		(yyval.rollback_statement_t) = (yyvsp[0].rollback_statement_t);
		(yyval.rollback_statement_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5099 "bison_parser.cpp"
    break;

  case 70: /* rollback_statement: rollback_statement comment_literal  */
#line 854 "bison_parser.y"
                                     {
  (yyval.rollback_statement_t) = (yyvsp[-1].rollback_statement_t);
  (yyval.rollback_statement_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5108 "bison_parser.cpp"
    break;

  case 71: /* opt_transaction: TRANSACTION  */
#line 861 "bison_parser.y"
                               {
  (yyval.opt_transaction_t) = new OptTransaction();
  (yyval.opt_transaction_t)->sub_type_ = CASE0;
  (yyval.opt_transaction_t)->str_val_ = string("TRANSACTION");
}
#line 5118 "bison_parser.cpp"
    break;

  case 72: /* opt_transaction: %empty  */
#line 866 "bison_parser.y"
              {
  (yyval.opt_transaction_t) = new OptTransaction();
  (yyval.opt_transaction_t)->sub_type_ = CASE1;
  (yyval.opt_transaction_t)->str_val_ = string("");
}
#line 5128 "bison_parser.cpp"
    break;

  case 73: /* opt_transaction: comment_literal opt_transaction  */
#line 871 "bison_parser.y"
                                  {
		(yyval.opt_transaction_t) = (yyvsp[0].opt_transaction_t);
		(yyval.opt_transaction_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5137 "bison_parser.cpp"
    break;

  case 74: /* opt_transaction: opt_transaction comment_literal  */
#line 875 "bison_parser.y"
                                  {
  (yyval.opt_transaction_t) = (yyvsp[-1].opt_transaction_t);
  (yyval.opt_transaction_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5146 "bison_parser.cpp"
    break;

  case 75: /* opt_to_savepoint: TO savepoint_name  */
#line 882 "bison_parser.y"
                                      {
  (yyval.opt_to_savepoint_t) = new OptToSavepoint();
  (yyval.opt_to_savepoint_t)->sub_type_ = CASE0;
  (yyval.opt_to_savepoint_t)->savepoint_name_ = (yyvsp[0].savepoint_name_t);
}
#line 5156 "bison_parser.cpp"
    break;

  case 76: /* opt_to_savepoint: TO SAVEPOINT savepoint_name  */
#line 887 "bison_parser.y"
                              {
  (yyval.opt_to_savepoint_t) = new OptToSavepoint();
  (yyval.opt_to_savepoint_t)->sub_type_ = CASE1;
  (yyval.opt_to_savepoint_t)->savepoint_name_ = (yyvsp[0].savepoint_name_t);
}
#line 5166 "bison_parser.cpp"
    break;

  case 77: /* opt_to_savepoint: %empty  */
#line 892 "bison_parser.y"
              {
  (yyval.opt_to_savepoint_t) = new OptToSavepoint();
  (yyval.opt_to_savepoint_t)->sub_type_ = CASE2;
}
#line 5175 "bison_parser.cpp"
    break;

  case 78: /* opt_to_savepoint: comment_literal opt_to_savepoint  */
#line 896 "bison_parser.y"
                                   {
		(yyval.opt_to_savepoint_t) = (yyvsp[0].opt_to_savepoint_t);
		(yyval.opt_to_savepoint_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5184 "bison_parser.cpp"
    break;

  case 79: /* opt_to_savepoint: opt_to_savepoint comment_literal  */
#line 900 "bison_parser.y"
                                   {
  (yyval.opt_to_savepoint_t) = (yyvsp[-1].opt_to_savepoint_t);
  (yyval.opt_to_savepoint_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5193 "bison_parser.cpp"
    break;

  case 80: /* vacuum_statement: VACUUM opt_schema_name INTO file_path  */
#line 907 "bison_parser.y"
                                                          {
  (yyval.vacuum_statement_t) = new VacuumStatement();
  (yyval.vacuum_statement_t)->sub_type_ = CASE0;
  (yyval.vacuum_statement_t)->opt_schema_name_ = (yyvsp[-2].opt_schema_name_t);
  (yyval.vacuum_statement_t)->file_path_ = (yyvsp[0].file_path_t);
}
#line 5204 "bison_parser.cpp"
    break;

  case 81: /* vacuum_statement: VACUUM opt_schema_name  */
#line 913 "bison_parser.y"
                         {
  (yyval.vacuum_statement_t) = new VacuumStatement();
  (yyval.vacuum_statement_t)->sub_type_ = CASE1;
  (yyval.vacuum_statement_t)->opt_schema_name_ = (yyvsp[0].opt_schema_name_t);
}
#line 5214 "bison_parser.cpp"
    break;

  case 82: /* vacuum_statement: comment_literal vacuum_statement  */
#line 918 "bison_parser.y"
                                   {
		(yyval.vacuum_statement_t) = (yyvsp[0].vacuum_statement_t);
		(yyval.vacuum_statement_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5223 "bison_parser.cpp"
    break;

  case 83: /* vacuum_statement: vacuum_statement comment_literal  */
#line 922 "bison_parser.y"
                                   {
  (yyval.vacuum_statement_t) = (yyvsp[-1].vacuum_statement_t);
  (yyval.vacuum_statement_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5232 "bison_parser.cpp"
    break;

  case 84: /* opt_schema_name: schema_name  */
#line 929 "bison_parser.y"
                               {
  (yyval.opt_schema_name_t) = new OptSchemaName();
  (yyval.opt_schema_name_t)->sub_type_ = CASE0;
  (yyval.opt_schema_name_t)->schema_name_ = (yyvsp[0].schema_name_t);
}
#line 5242 "bison_parser.cpp"
    break;

  case 85: /* opt_schema_name: %empty  */
#line 934 "bison_parser.y"
            {
  (yyval.opt_schema_name_t) = new OptSchemaName();
  (yyval.opt_schema_name_t)->sub_type_ = CASE1;
}
#line 5251 "bison_parser.cpp"
    break;

  case 86: /* begin_statement: BEGIN opt_transaction  */
#line 940 "bison_parser.y"
                                         {
  (yyval.begin_statement_t) = new BeginStatement();
  (yyval.begin_statement_t)->sub_type_ = CASE0;
  (yyval.begin_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
}
#line 5261 "bison_parser.cpp"
    break;

  case 87: /* begin_statement: BEGIN DEFFERED opt_transaction  */
#line 945 "bison_parser.y"
                                 {
  (yyval.begin_statement_t) = new BeginStatement();
  (yyval.begin_statement_t)->sub_type_ = CASE1;
  (yyval.begin_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
}
#line 5271 "bison_parser.cpp"
    break;

  case 88: /* begin_statement: BEGIN IMEDIATE opt_transaction  */
#line 950 "bison_parser.y"
                                 {
  (yyval.begin_statement_t) = new BeginStatement();
  (yyval.begin_statement_t)->sub_type_ = CASE2;
  (yyval.begin_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
}
#line 5281 "bison_parser.cpp"
    break;

  case 89: /* begin_statement: BEGIN EXCLUSIVE opt_transaction  */
#line 955 "bison_parser.y"
                                  {
  (yyval.begin_statement_t) = new BeginStatement();
  (yyval.begin_statement_t)->sub_type_ = CASE3;
  (yyval.begin_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
}
#line 5291 "bison_parser.cpp"
    break;

  case 90: /* begin_statement: comment_literal begin_statement  */
#line 960 "bison_parser.y"
                                  {
		(yyval.begin_statement_t) = (yyvsp[0].begin_statement_t);
		(yyval.begin_statement_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5300 "bison_parser.cpp"
    break;

  case 91: /* begin_statement: begin_statement comment_literal  */
#line 964 "bison_parser.y"
                                  {
  (yyval.begin_statement_t) = (yyvsp[-1].begin_statement_t);
  (yyval.begin_statement_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5309 "bison_parser.cpp"
    break;

  case 92: /* commit_statement: COMMIT opt_transaction  */
#line 971 "bison_parser.y"
                                           {
  (yyval.commit_statement_t) = new CommitStatement();
  (yyval.commit_statement_t)->sub_type_ = CASE0;
  (yyval.commit_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
}
#line 5319 "bison_parser.cpp"
    break;

  case 93: /* commit_statement: END opt_transaction  */
#line 976 "bison_parser.y"
                      {
  (yyval.commit_statement_t) = new CommitStatement();
  (yyval.commit_statement_t)->sub_type_ = CASE1;
  (yyval.commit_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
}
#line 5329 "bison_parser.cpp"
    break;

  case 94: /* commit_statement: comment_literal commit_statement  */
#line 981 "bison_parser.y"
                                   {
		(yyval.commit_statement_t) = (yyvsp[0].commit_statement_t);
		(yyval.commit_statement_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5338 "bison_parser.cpp"
    break;

  case 95: /* commit_statement: commit_statement comment_literal  */
#line 985 "bison_parser.y"
                                   {
  (yyval.commit_statement_t) = (yyvsp[-1].commit_statement_t);
  (yyval.commit_statement_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5347 "bison_parser.cpp"
    break;

  case 96: /* opt_upsert_clause: upsert_clause  */
#line 991 "bison_parser.y"
                                  {
  (yyval.opt_upsert_clause_t) = new OptUpsertClause();
  (yyval.opt_upsert_clause_t)->sub_type_ = CASE0;
  (yyval.opt_upsert_clause_t)->upsert_clause_ = (yyvsp[0].upsert_clause_t);
}
#line 5357 "bison_parser.cpp"
    break;

  case 97: /* opt_upsert_clause: %empty  */
#line 996 "bison_parser.y"
              {
  (yyval.opt_upsert_clause_t) = new OptUpsertClause();
  (yyval.opt_upsert_clause_t)->sub_type_ = CASE1;
}
#line 5366 "bison_parser.cpp"
    break;

  case 98: /* upsert_clause: ON CONFLICT DO NOTHING  */
#line 1001 "bison_parser.y"
                                       {
  (yyval.upsert_clause_t) = new UpsertClause();
  (yyval.upsert_clause_t)->sub_type_ = CASE0;
}
#line 5375 "bison_parser.cpp"
    break;

  case 99: /* upsert_clause: ON CONFLICT DO UPDATE SET assign_list opt_where  */
#line 1005 "bison_parser.y"
                                                  {
  (yyval.upsert_clause_t) = new UpsertClause();
  (yyval.upsert_clause_t)->sub_type_ = CASE1;
  (yyval.upsert_clause_t)->assign_list_ = (yyvsp[-1].assign_list_t);
  (yyval.upsert_clause_t)->opt_where1_ = (yyvsp[0].opt_where_t);
}
#line 5386 "bison_parser.cpp"
    break;

  case 100: /* upsert_clause: ON CONFLICT '(' indexed_column_list ')' opt_where DO NOTHING  */
#line 1011 "bison_parser.y"
                                                               {
  (yyval.upsert_clause_t) = new UpsertClause();
  (yyval.upsert_clause_t)->sub_type_ = CASE2;
  (yyval.upsert_clause_t)->indexed_column_list_ = (yyvsp[-4].indexed_column_list_t);
  (yyval.upsert_clause_t)->opt_where1_ = (yyvsp[-2].opt_where_t);
}
#line 5397 "bison_parser.cpp"
    break;

  case 101: /* upsert_clause: ON CONFLICT '(' indexed_column_list ')' opt_where DO UPDATE SET assign_list opt_where  */
#line 1018 "bison_parser.y"
                  {
  (yyval.upsert_clause_t) = new UpsertClause();
  (yyval.upsert_clause_t)->sub_type_ = CASE3;
  (yyval.upsert_clause_t)->indexed_column_list_ = (yyvsp[-7].indexed_column_list_t);
  (yyval.upsert_clause_t)->opt_where1_ = (yyvsp[-5].opt_where_t);
  (yyval.upsert_clause_t)->assign_list_ = (yyvsp[-1].assign_list_t);
  (yyval.upsert_clause_t)->opt_where2_ = (yyvsp[0].opt_where_t);
}
#line 5410 "bison_parser.cpp"
    break;

  case 102: /* upsert_clause: comment_literal upsert_clause  */
#line 1026 "bison_parser.y"
                                {
		(yyval.upsert_clause_t) = (yyvsp[0].upsert_clause_t);
		(yyval.upsert_clause_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5419 "bison_parser.cpp"
    break;

  case 103: /* upsert_clause: upsert_clause comment_literal  */
#line 1030 "bison_parser.y"
                                {
  (yyval.upsert_clause_t) = (yyvsp[-1].upsert_clause_t);
  (yyval.upsert_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5428 "bison_parser.cpp"
    break;

  case 104: /* indexed_column_list: indexed_column  */
#line 1036 "bison_parser.y"
                                     {
  (yyval.indexed_column_list_t) = new IndexedColumnList();
  (yyval.indexed_column_list_t)->v_indexed_column_list_.push_back((yyvsp[0].indexed_column_t));
}
#line 5437 "bison_parser.cpp"
    break;

  case 105: /* indexed_column_list: indexed_column_list ',' indexed_column  */
#line 1040 "bison_parser.y"
                                         {
  (yyvsp[-2].indexed_column_list_t)->v_indexed_column_list_.push_back((yyvsp[0].indexed_column_t));
  (yyval.indexed_column_list_t) = (yyvsp[-2].indexed_column_list_t);
}
#line 5446 "bison_parser.cpp"
    break;

  case 106: /* indexed_column: expr opt_collate opt_order_type  */
#line 1045 "bison_parser.y"
                                                 {
  (yyval.indexed_column_t) = new IndexedColumn();
  (yyval.indexed_column_t)->expr_ = (yyvsp[-2].expr_t);
  (yyval.indexed_column_t)->opt_collate_ = (yyvsp[-1].opt_collate_t);
  (yyval.indexed_column_t)->opt_order_type_ = (yyvsp[0].opt_order_type_t);
}
#line 5457 "bison_parser.cpp"
    break;

  case 107: /* opt_collate: COLLATE collation_name  */
#line 1052 "bison_parser.y"
                                     {
  (yyval.opt_collate_t) = new OptCollate();
  (yyval.opt_collate_t)->sub_type_ = CASE0;
  (yyval.opt_collate_t)->collation_name_ = (yyvsp[0].collation_name_t);
}
#line 5467 "bison_parser.cpp"
    break;

  case 108: /* opt_collate: %empty  */
#line 1057 "bison_parser.y"
              {
  (yyval.opt_collate_t) = new OptCollate();
  (yyval.opt_collate_t)->sub_type_ = CASE1;
  (yyval.opt_collate_t)->str_val_ = string("");
}
#line 5477 "bison_parser.cpp"
    break;

  case 109: /* opt_collate: comment_literal opt_collate  */
#line 1062 "bison_parser.y"
                              {
		(yyval.opt_collate_t) = (yyvsp[0].opt_collate_t);
		(yyval.opt_collate_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5486 "bison_parser.cpp"
    break;

  case 110: /* opt_collate: opt_collate comment_literal  */
#line 1066 "bison_parser.y"
                              {
  (yyval.opt_collate_t) = (yyvsp[-1].opt_collate_t);
  (yyval.opt_collate_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5495 "bison_parser.cpp"
    break;

  case 111: /* assign_list: assign_clause  */
#line 1072 "bison_parser.y"
                            {
  (yyval.assign_list_t) = new AssignList();
  (yyval.assign_list_t)->v_assign_list_.push_back((yyvsp[0].assign_clause_t));
}
#line 5504 "bison_parser.cpp"
    break;

  case 112: /* assign_list: assign_list ',' assign_clause  */
#line 1076 "bison_parser.y"
                                {
  (yyvsp[-2].assign_list_t)->v_assign_list_.push_back((yyvsp[0].assign_clause_t));
  (yyval.assign_list_t) = (yyvsp[-2].assign_list_t);
}
#line 5513 "bison_parser.cpp"
    break;

  case 113: /* opt_null: NULLS FIRST  */
#line 1081 "bison_parser.y"
                       {
  (yyval.opt_null_t) = new OptNull();
  (yyval.opt_null_t)->str_val_ = string("NULLS FIRST");
}
#line 5522 "bison_parser.cpp"
    break;

  case 114: /* opt_null: NULLS LAST  */
#line 1085 "bison_parser.y"
             {
  (yyval.opt_null_t) = new OptNull();
  (yyval.opt_null_t)->str_val_ = string("NULLS LAST");
}
#line 5531 "bison_parser.cpp"
    break;

  case 115: /* opt_null: %empty  */
#line 1089 "bison_parser.y"
  {
  (yyval.opt_null_t) = new OptNull();
  (yyval.opt_null_t)->str_val_ = string("");
}
#line 5540 "bison_parser.cpp"
    break;

  case 116: /* opt_null: comment_literal opt_null  */
#line 1093 "bison_parser.y"
                           {
		(yyval.opt_null_t) = (yyvsp[0].opt_null_t);
		(yyval.opt_null_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5549 "bison_parser.cpp"
    break;

  case 117: /* opt_null: opt_null comment_literal  */
#line 1097 "bison_parser.y"
                            {
  (yyval.opt_null_t) = (yyvsp[-1].opt_null_t);
  (yyval.opt_null_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5558 "bison_parser.cpp"
    break;

  case 118: /* assign_clause: column_name_list '=' expr  */
#line 1104 "bison_parser.y"
                                          {
  (yyval.assign_clause_t) = new AssignClause();
  (yyval.assign_clause_t)->column_name_list_ = (yyvsp[-2].column_name_list_t);
  (yyval.assign_clause_t)->expr_ = (yyvsp[0].expr_t);
}
#line 5568 "bison_parser.cpp"
    break;

  case 119: /* column_name_list: column_name  */
#line 1110 "bison_parser.y"
                               {
  (yyval.column_name_list_t) = new ColumnNameList();
  (yyval.column_name_list_t)->v_column_name_list_.push_back((yyvsp[0].column_name_t));
}
#line 5577 "bison_parser.cpp"
    break;

  case 120: /* column_name_list: column_name_list ',' column_name  */
#line 1114 "bison_parser.y"
                                   {
  (yyvsp[-2].column_name_list_t)->v_column_name_list_.push_back((yyvsp[0].column_name_t));
  (yyval.column_name_list_t) = (yyvsp[-2].column_name_list_t);
}
#line 5586 "bison_parser.cpp"
    break;

  case 121: /* collation_name: IDENTIFIER  */
#line 1119 "bison_parser.y"
                            {
  (yyval.collation_name_t) = new CollationName();
  (yyval.collation_name_t)->id_ = new Identifier((yyvsp[0].sval), id_collation_name);
  free((yyvsp[0].sval));
}
#line 5596 "bison_parser.cpp"
    break;

  case 122: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 1129 "bison_parser.y"
                                        {
  (yyval.optional_hints_t) = new OptionalHints();
  (yyval.optional_hints_t)->sub_type_ = CASE0;
  (yyval.optional_hints_t)->hint_list_ = (yyvsp[-1].hint_list_t);
}
#line 5606 "bison_parser.cpp"
    break;

  case 123: /* opt_hints: %empty  */
#line 1134 "bison_parser.y"
              {
  (yyval.optional_hints_t) = new OptionalHints();
  (yyval.optional_hints_t)->sub_type_ = CASE1;
}
#line 5615 "bison_parser.cpp"
    break;

  case 124: /* opt_hints: comment_literal opt_hints  */
#line 1138 "bison_parser.y"
                            {
		(yyval.optional_hints_t) = (yyvsp[0].optional_hints_t);
		(yyval.optional_hints_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5624 "bison_parser.cpp"
    break;

  case 125: /* opt_hints: opt_hints comment_literal  */
#line 1142 "bison_parser.y"
                            {
  (yyval.optional_hints_t) = (yyvsp[-1].optional_hints_t);
  (yyval.optional_hints_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5633 "bison_parser.cpp"
    break;

  case 126: /* hint_list: hint  */
#line 1148 "bison_parser.y"
                 {
  (yyval.hint_list_t) = new HintList();
  (yyval.hint_list_t)->v_hint_list_.push_back((yyvsp[0].hint_t));
}
#line 5642 "bison_parser.cpp"
    break;

  case 127: /* hint_list: hint_list ',' hint  */
#line 1152 "bison_parser.y"
                     {
  (yyvsp[-2].hint_list_t)->v_hint_list_.push_back((yyvsp[0].hint_t));
  (yyval.hint_list_t) = (yyvsp[-2].hint_list_t);
}
#line 5651 "bison_parser.cpp"
    break;

  case 128: /* hint: IDENTIFIER  */
#line 1157 "bison_parser.y"
                  {
  (yyval.hint_t) = new Hint();
  (yyval.hint_t)->sub_type_ = CASE1;
  (yyval.hint_t)->id_ = new Identifier((yyvsp[0].sval));
  free((yyvsp[0].sval));
}
#line 5662 "bison_parser.cpp"
    break;

  case 129: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 1163 "bison_parser.y"
                                  {
  (yyval.hint_t) = new Hint();
  (yyval.hint_t)->sub_type_ = CASE0;
  (yyval.hint_t)->id_ = new Identifier((yyvsp[-3].sval));
  (yyval.hint_t)->literal_list_ = (yyvsp[-1].literal_list_t);
  free((yyvsp[-3].sval));
}
#line 5674 "bison_parser.cpp"
    break;

  case 130: /* hint: comment_literal hint  */
#line 1170 "bison_parser.y"
                       {
		(yyval.hint_t) = (yyvsp[0].hint_t);
		(yyval.hint_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5683 "bison_parser.cpp"
    break;

  case 131: /* hint: hint comment_literal  */
#line 1174 "bison_parser.y"
                       {
  (yyval.hint_t) = (yyvsp[-1].hint_t);
  (yyval.hint_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5692 "bison_parser.cpp"
    break;

  case 132: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 1183 "bison_parser.y"
                                                                 {
  (yyval.prepare_statement_t) = new PrepareStatement();
  (yyval.prepare_statement_t)->id_ = new Identifier((yyvsp[-2].sval));
  (yyval.prepare_statement_t)->prep_target_que_ = (yyvsp[0].prepare_target_query_t);
  free((yyvsp[-2].sval));
}
#line 5703 "bison_parser.cpp"
    break;

  case 133: /* prepare_statement: comment_literal prepare_statement  */
#line 1189 "bison_parser.y"
                                    {
		(yyval.prepare_statement_t) = (yyvsp[0].prepare_statement_t);
		(yyval.prepare_statement_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5712 "bison_parser.cpp"
    break;

  case 134: /* prepare_statement: prepare_statement comment_literal  */
#line 1193 "bison_parser.y"
                                    {
  (yyval.prepare_statement_t) = (yyvsp[-1].prepare_statement_t);
  (yyval.prepare_statement_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5721 "bison_parser.cpp"
    break;

  case 135: /* prepare_target_query: STRING  */
#line 1200 "bison_parser.y"
                              {
  (yyval.prepare_target_query_t) = new PrepareTargetQuery();
  (yyval.prepare_target_query_t)->prep_target_que_ = "'" + string((yyvsp[0].sval)) + "'";
  free((yyvsp[0].sval));
}
#line 5731 "bison_parser.cpp"
    break;

  case 136: /* prepare_target_query: comment_literal prepare_target_query  */
#line 1205 "bison_parser.y"
                                       {
		(yyval.prepare_target_query_t) = (yyvsp[0].prepare_target_query_t);
		(yyval.prepare_target_query_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5740 "bison_parser.cpp"
    break;

  case 137: /* prepare_target_query: prepare_target_query comment_literal  */
#line 1209 "bison_parser.y"
                                       {
  (yyval.prepare_target_query_t) = (yyvsp[-1].prepare_target_query_t);
  (yyval.prepare_target_query_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5749 "bison_parser.cpp"
    break;

  case 138: /* execute_statement: EXECUTE IDENTIFIER  */
#line 1216 "bison_parser.y"
                                       {
  (yyval.execute_statement_t) = new ExecuteStatement();
  (yyval.execute_statement_t)->sub_type_ = CASE0;
  (yyval.execute_statement_t)->id_ = new Identifier((yyvsp[0].sval));
  free((yyvsp[0].sval));
}
#line 5760 "bison_parser.cpp"
    break;

  case 139: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 1222 "bison_parser.y"
                                              {
  (yyval.execute_statement_t) = new ExecuteStatement();
  (yyval.execute_statement_t)->sub_type_ = CASE1;
  (yyval.execute_statement_t)->id_ = new Identifier((yyvsp[-3].sval));
  (yyval.execute_statement_t)->opt_literal_list_ = (yyvsp[-1].opt_literal_list_t);
  free((yyvsp[-3].sval));
}
#line 5772 "bison_parser.cpp"
    break;

  case 140: /* execute_statement: comment_literal execute_statement  */
#line 1229 "bison_parser.y"
                                    {
		(yyval.execute_statement_t) = (yyvsp[0].execute_statement_t);
		(yyval.execute_statement_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5781 "bison_parser.cpp"
    break;

  case 141: /* execute_statement: execute_statement comment_literal  */
#line 1233 "bison_parser.y"
                                    {
  (yyval.execute_statement_t) = (yyvsp[-1].execute_statement_t);
  (yyval.execute_statement_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5790 "bison_parser.cpp"
    break;

  case 142: /* import_statement: IMPORT FROM import_file_type FILE file_path INTO table_name  */
#line 1243 "bison_parser.y"
                                                                               {
  (yyval.import_statement_t) = new ImportStatement();
  (yyval.import_statement_t)->import_file_type_ = (yyvsp[-4].import_file_type_t);
  (yyval.import_statement_t)->file_path_ = (yyvsp[-2].file_path_t);
  (yyval.import_statement_t)->table_name_ = (yyvsp[0].table_name_t);
}
#line 5801 "bison_parser.cpp"
    break;

  case 143: /* import_statement: comment_literal import_statement  */
#line 1249 "bison_parser.y"
                                   {
		(yyval.import_statement_t) = (yyvsp[0].import_statement_t);
		(yyval.import_statement_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5810 "bison_parser.cpp"
    break;

  case 144: /* import_statement: import_statement comment_literal  */
#line 1253 "bison_parser.y"
                                   {
  (yyval.import_statement_t) = (yyvsp[-1].import_statement_t);
  (yyval.import_statement_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5819 "bison_parser.cpp"
    break;

  case 145: /* import_file_type: CSV  */
#line 1259 "bison_parser.y"
                       {
  (yyval.import_file_type_t) = new ImportFileType();
  (yyval.import_file_type_t)->str_val_ = "CSV";
}
#line 5828 "bison_parser.cpp"
    break;

  case 146: /* import_file_type: comment_literal import_file_type  */
#line 1263 "bison_parser.y"
                                   {
		(yyval.import_file_type_t) = (yyvsp[0].import_file_type_t);
		(yyval.import_file_type_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5837 "bison_parser.cpp"
    break;

  case 147: /* import_file_type: import_file_type comment_literal  */
#line 1267 "bison_parser.y"
                                   {
  (yyval.import_file_type_t) = (yyvsp[-1].import_file_type_t);
  (yyval.import_file_type_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5846 "bison_parser.cpp"
    break;

  case 148: /* file_path: string_literal  */
#line 1273 "bison_parser.y"
                           {
  (yyval.file_path_t) = new FilePath();
  (yyval.file_path_t)->str_val_ = (yyvsp[0].string_literal_t)->str_val_;
  delete ((yyvsp[0].string_literal_t));
}
#line 5856 "bison_parser.cpp"
    break;

  case 149: /* show_statement: SHOW TABLES  */
#line 1284 "bison_parser.y"
                             {
  (yyval.show_statement_t) = new ShowStatement();
  (yyval.show_statement_t)->sub_type_ = CASE0;
}
#line 5865 "bison_parser.cpp"
    break;

  case 150: /* show_statement: SHOW COLUMNS table_name  */
#line 1288 "bison_parser.y"
                          {
  (yyval.show_statement_t) = new ShowStatement();
  (yyval.show_statement_t)->sub_type_ = CASE1;
  (yyval.show_statement_t)->table_name_ = (yyvsp[0].table_name_t);
  (yyval.show_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
}
#line 5876 "bison_parser.cpp"
    break;

  case 151: /* show_statement: DESCRIBE table_name  */
#line 1294 "bison_parser.y"
                      {
  (yyval.show_statement_t) = new ShowStatement();
  (yyval.show_statement_t)->sub_type_ = CASE2;
  (yyval.show_statement_t)->table_name_ = (yyvsp[0].table_name_t);
  (yyval.show_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
}
#line 5887 "bison_parser.cpp"
    break;

  case 152: /* show_statement: comment_literal show_statement  */
#line 1300 "bison_parser.y"
                                 {
		(yyval.show_statement_t) = (yyvsp[0].show_statement_t);
		(yyval.show_statement_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5896 "bison_parser.cpp"
    break;

  case 153: /* show_statement: show_statement comment_literal  */
#line 1304 "bison_parser.y"
                                 {
  (yyval.show_statement_t) = (yyvsp[-1].show_statement_t);
  (yyval.show_statement_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5905 "bison_parser.cpp"
    break;

  case 154: /* alter_statement: ALTER TABLE table_name RENAME TO table_name  */
#line 1315 "bison_parser.y"
                                                              {
  (yyval.alter_statement_t) = new AlterStatement();
  (yyval.alter_statement_t)->sub_type_ = CASE0;
  (yyval.alter_statement_t)->table_name1_ = (yyvsp[-3].table_name_t);
  (yyval.alter_statement_t)->table_name2_ = (yyvsp[0].table_name_t);
}
#line 5916 "bison_parser.cpp"
    break;

  case 155: /* alter_statement: ALTER TABLE table_name RENAME opt_column column_name TO column_name  */
#line 1321 "bison_parser.y"
                                                                      {
  (yyval.alter_statement_t) = new AlterStatement();
  (yyval.alter_statement_t)->sub_type_ = CASE1;
  (yyval.alter_statement_t)->table_name1_ = (yyvsp[-5].table_name_t);
  (yyval.alter_statement_t)->opt_column_ = (yyvsp[-3].opt_column_t);
  (yyval.alter_statement_t)->column_name1_ = (yyvsp[-2].column_name_t);
  (yyval.alter_statement_t)->column_name2_ = (yyvsp[0].column_name_t);
}
#line 5929 "bison_parser.cpp"
    break;

  case 156: /* alter_statement: ALTER TABLE table_name ADD opt_column column_def  */
#line 1329 "bison_parser.y"
                                                   {
  (yyval.alter_statement_t) = new AlterStatement();
  (yyval.alter_statement_t)->sub_type_ = CASE2;
  (yyval.alter_statement_t)->table_name1_ = (yyvsp[-3].table_name_t);
  (yyval.alter_statement_t)->opt_column_ = (yyvsp[-1].opt_column_t);
  (yyval.alter_statement_t)->column_def_ = (yyvsp[0].column_def_t);
}
#line 5941 "bison_parser.cpp"
    break;

  case 157: /* alter_statement: comment_literal alter_statement  */
#line 1336 "bison_parser.y"
                                  {
		(yyval.alter_statement_t) = (yyvsp[0].alter_statement_t);
		(yyval.alter_statement_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5950 "bison_parser.cpp"
    break;

  case 158: /* alter_statement: alter_statement comment_literal  */
#line 1340 "bison_parser.y"
                                  {
  (yyval.alter_statement_t) = (yyvsp[-1].alter_statement_t);
  (yyval.alter_statement_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5959 "bison_parser.cpp"
    break;

  case 159: /* opt_column: COLUMN  */
#line 1346 "bison_parser.y"
                    {
  (yyval.opt_column_t) = new OptColumn();
  (yyval.opt_column_t)->sub_type_ = CASE0;
  (yyval.opt_column_t)->str_val_ = string("COLUMN");
}
#line 5969 "bison_parser.cpp"
    break;

  case 160: /* opt_column: %empty  */
#line 1351 "bison_parser.y"
              {
  (yyval.opt_column_t) = new OptColumn();
  (yyval.opt_column_t)->sub_type_ = CASE1;
  (yyval.opt_column_t)->str_val_ = string("");
}
#line 5979 "bison_parser.cpp"
    break;

  case 161: /* opt_column: comment_literal opt_column  */
#line 1356 "bison_parser.y"
                             {
		(yyval.opt_column_t) = (yyvsp[0].opt_column_t);
		(yyval.opt_column_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 5988 "bison_parser.cpp"
    break;

  case 162: /* opt_column: opt_column comment_literal  */
#line 1360 "bison_parser.y"
                             {
  (yyval.opt_column_t) = (yyvsp[-1].opt_column_t);
  (yyval.opt_column_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 5997 "bison_parser.cpp"
    break;

  case 163: /* create_statement: CREATE TABLE opt_not_exists table_name FROM TBL FILE file_path  */
#line 1372 "bison_parser.y"
                                                                     {
  (yyval.create_statement_t) = new CreateStatement();
  (yyval.create_statement_t)->sub_type_ = CASE0;
  (yyval.create_statement_t)->opt_not_exists_ = (yyvsp[-5].opt_not_exists_t);
  (yyval.create_statement_t)->table_name_ = (yyvsp[-4].table_name_t);
  (yyval.create_statement_t)->file_path_ = (yyvsp[0].file_path_t);
  (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_create_table_name;
}
#line 6010 "bison_parser.cpp"
    break;

  case 164: /* create_statement: CREATE TABLE opt_not_exists table_name '(' column_def_commalist ')'  */
#line 1380 "bison_parser.y"
                                                                      {
  (yyval.create_statement_t) = new CreateStatement();
  (yyval.create_statement_t)->sub_type_ = CASE1;
  (yyval.create_statement_t)->opt_not_exists_ = (yyvsp[-4].opt_not_exists_t);
  (yyval.create_statement_t)->table_name_ = (yyvsp[-3].table_name_t);
  (yyval.create_statement_t)->column_def_comma_list_ = (yyvsp[-1].column_def_comma_list_t);
  (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_create_table_name;
}
#line 6023 "bison_parser.cpp"
    break;

  case 165: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 1388 "bison_parser.y"
                                                             {
  (yyval.create_statement_t) = new CreateStatement();
  (yyval.create_statement_t)->sub_type_ = CASE2;
  (yyval.create_statement_t)->opt_not_exists_ = (yyvsp[-3].opt_not_exists_t);
  (yyval.create_statement_t)->table_name_ = (yyvsp[-2].table_name_t);
  (yyval.create_statement_t)->select_statement_ = (yyvsp[0].select_statement_t);
  (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_create_table_name;
}
#line 6036 "bison_parser.cpp"
    break;

  case 166: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 1396 "bison_parser.y"
                                                                            {
  (yyval.create_statement_t) = new CreateStatement();
  (yyval.create_statement_t)->sub_type_ = CASE3;
  (yyval.create_statement_t)->opt_not_exists_ = (yyvsp[-4].opt_not_exists_t);
  (yyval.create_statement_t)->table_name_ = (yyvsp[-3].table_name_t);
  (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_create_table_name;
  (yyval.create_statement_t)->opt_column_list_ = (yyvsp[-2].opt_column_list_t);
  if ((yyval.create_statement_t)->opt_column_list_->sub_type_ == CASE0)
    for (auto& i :
         (yyval.create_statement_t)->opt_column_list_->ident_comma_list_->v_iden_comma_list_) {
      i->id_type_ = id_create_column_name;
    }
  (yyval.create_statement_t)->select_statement_ = (yyvsp[0].select_statement_t);
  (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_create_table_name;
}
#line 6056 "bison_parser.cpp"
    break;

  case 167: /* create_statement: CREATE opt_unique INDEX opt_not_exists index_name ON table_name '(' ident_commalist ')' opt_where  */
#line 1413 "bison_parser.y"
                                                     {
  (yyval.create_statement_t) = new CreateStatement();
  (yyval.create_statement_t)->sub_type_ = CASE4;
  (yyval.create_statement_t)->opt_unique_ = (yyvsp[-9].opt_unique_t);
  (yyval.create_statement_t)->opt_not_exists_ = (yyvsp[-7].opt_not_exists_t);
  (yyval.create_statement_t)->index_name_ = (yyvsp[-6].index_name_t);
  (yyval.create_statement_t)->table_name_ = (yyvsp[-4].table_name_t);
  (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
  (yyval.create_statement_t)->ident_commalist_ = (yyvsp[-2].ident_commalist_t);
  for (auto& i : (yyval.create_statement_t)->ident_commalist_->v_iden_comma_list_) {
    i->id_type_ = id_column_name;
  }
  (yyval.create_statement_t)->opt_where_ = (yyvsp[0].opt_where_t);
}
#line 6075 "bison_parser.cpp"
    break;

  case 168: /* create_statement: CREATE VIRTUAL TABLE opt_not_exists table_name USING module_name  */
#line 1427 "bison_parser.y"
                                                                   {
  (yyval.create_statement_t) = new CreateStatement();
  (yyval.create_statement_t)->sub_type_ = CASE5;
  (yyval.create_statement_t)->opt_not_exists_ = (yyvsp[-3].opt_not_exists_t);
  (yyval.create_statement_t)->table_name_ = (yyvsp[-2].table_name_t);
  (yyval.create_statement_t)->module_name_ = (yyvsp[0].module_name_t);
  (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_create_table_name;
}
#line 6088 "bison_parser.cpp"
    break;

  case 169: /* create_statement: CREATE VIRTUAL TABLE opt_not_exists table_name USING module_name '(' column_def_commalist ')'  */
#line 1436 "bison_parser.y"
                                                 {
  (yyval.create_statement_t) = new CreateStatement();
  (yyval.create_statement_t)->sub_type_ = CASE6;
  (yyval.create_statement_t)->opt_not_exists_ = (yyvsp[-6].opt_not_exists_t);
  (yyval.create_statement_t)->table_name_ = (yyvsp[-5].table_name_t);
  (yyval.create_statement_t)->module_name_ = (yyvsp[-3].module_name_t);
  (yyval.create_statement_t)->table_name_->table_name_->id_type_ = id_create_table_name;
  (yyval.create_statement_t)->column_def_comma_list_ = (yyvsp[-1].column_def_comma_list_t);
}
#line 6102 "bison_parser.cpp"
    break;

  case 170: /* create_statement: CREATE trigger_declare BEGIN trigger_cmd_list END  */
#line 1445 "bison_parser.y"
                                                    {
  (yyval.create_statement_t) = new CreateStatement();
  (yyval.create_statement_t)->sub_type_ = CASE7;
  (yyval.create_statement_t)->trigger_declare_ = (yyvsp[-3].trigger_declare_t);
  (yyval.create_statement_t)->trigger_cmd_list_ = (yyvsp[-1].trigger_cmd_list_t);
}
#line 6113 "bison_parser.cpp"
    break;

  case 171: /* create_statement: comment_literal create_statement  */
#line 1451 "bison_parser.y"
                                   {
		(yyval.create_statement_t) = (yyvsp[0].create_statement_t);
		(yyval.create_statement_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6122 "bison_parser.cpp"
    break;

  case 172: /* create_statement: create_statement comment_literal  */
#line 1455 "bison_parser.y"
                                   {
  (yyval.create_statement_t) = (yyvsp[-1].create_statement_t);
  (yyval.create_statement_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6131 "bison_parser.cpp"
    break;

  case 173: /* opt_unique: UNIQUE  */
#line 1461 "bison_parser.y"
                    {
  (yyval.opt_unique_t) = new OptUnique();
  (yyval.opt_unique_t)->str_val_ = string("UNIQUE");
}
#line 6140 "bison_parser.cpp"
    break;

  case 174: /* opt_unique: %empty  */
#line 1465 "bison_parser.y"
              {
  (yyval.opt_unique_t) = new OptUnique();
  (yyval.opt_unique_t)->str_val_ = string("");
}
#line 6149 "bison_parser.cpp"
    break;

  case 175: /* opt_unique: comment_literal opt_unique  */
#line 1469 "bison_parser.y"
                             {
		(yyval.opt_unique_t) = (yyvsp[0].opt_unique_t);
		(yyval.opt_unique_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6158 "bison_parser.cpp"
    break;

  case 176: /* opt_unique: opt_unique comment_literal  */
#line 1473 "bison_parser.y"
                             {
  (yyval.opt_unique_t) = (yyvsp[-1].opt_unique_t);
  (yyval.opt_unique_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6167 "bison_parser.cpp"
    break;

  case 177: /* index_name: IDENTIFIER  */
#line 1479 "bison_parser.y"
                        {
  (yyval.index_name_t) = new IndexName();
  (yyval.index_name_t)->id_ = new Identifier((yyvsp[0].sval), id_index_name);
  free((yyvsp[0].sval));
}
#line 6177 "bison_parser.cpp"
    break;

  case 178: /* trigger_declare: opt_tmp TRIGGER opt_not_exists trigger_name opt_trigger_time trigger_event ON table_name opt_for_each opt_when  */
#line 1486 "bison_parser.y"
                                                                        {
  (yyval.trigger_declare_t) = new TriggerDeclare();
  (yyval.trigger_declare_t)->opt_tmp_ = (yyvsp[-9].opt_tmp_t);
  (yyval.trigger_declare_t)->opt_not_exists_ = (yyvsp[-7].opt_not_exists_t);
  (yyval.trigger_declare_t)->trigger_name_ = (yyvsp[-6].trigger_name_t);
  (yyval.trigger_declare_t)->opt_trigger_time_ = (yyvsp[-5].opt_trigger_time_t);
  (yyval.trigger_declare_t)->trigger_event_ = (yyvsp[-4].trigger_event_t);
  (yyval.trigger_declare_t)->table_name_ = (yyvsp[-2].table_name_t);
  (yyval.trigger_declare_t)->opt_for_each_ = (yyvsp[-1].opt_for_each_t);
  (yyval.trigger_declare_t)->opt_when_ = (yyvsp[0].opt_when_t);
}
#line 6193 "bison_parser.cpp"
    break;

  case 179: /* opt_tmp: TEMP  */
#line 1498 "bison_parser.y"
               {
  (yyval.opt_tmp_t) = new OptTmp();
  (yyval.opt_tmp_t)->str_val_ = string("TEMP");
}
#line 6202 "bison_parser.cpp"
    break;

  case 180: /* opt_tmp: %empty  */
#line 1502 "bison_parser.y"
              {
  (yyval.opt_tmp_t) = new OptTmp();
  (yyval.opt_tmp_t)->str_val_ = string("");
}
#line 6211 "bison_parser.cpp"
    break;

  case 181: /* opt_tmp: comment_literal opt_tmp  */
#line 1506 "bison_parser.y"
                          {
		(yyval.opt_tmp_t) = (yyvsp[0].opt_tmp_t);
		(yyval.opt_tmp_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6220 "bison_parser.cpp"
    break;

  case 182: /* opt_tmp: opt_tmp comment_literal  */
#line 1510 "bison_parser.y"
                          {
  (yyval.opt_tmp_t) = (yyvsp[-1].opt_tmp_t);
  (yyval.opt_tmp_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6229 "bison_parser.cpp"
    break;

  case 183: /* trigger_name: IDENTIFIER  */
#line 1516 "bison_parser.y"
                          {
  (yyval.trigger_name_t) = new TriggerName();
  (yyval.trigger_name_t)->id_ = new Identifier((yyvsp[0].sval), id_trigger_name);
  free((yyvsp[0].sval));
}
#line 6239 "bison_parser.cpp"
    break;

  case 184: /* opt_trigger_time: BEFORE  */
#line 1522 "bison_parser.y"
                          {
  (yyval.opt_trigger_time_t) = new OptTriggerTime();
  (yyval.opt_trigger_time_t)->str_val_ = string("BEFORE");
}
#line 6248 "bison_parser.cpp"
    break;

  case 185: /* opt_trigger_time: AFTER  */
#line 1526 "bison_parser.y"
        {
  (yyval.opt_trigger_time_t) = new OptTriggerTime();
  (yyval.opt_trigger_time_t)->str_val_ = string("AFTER");
}
#line 6257 "bison_parser.cpp"
    break;

  case 186: /* opt_trigger_time: INSTEAD OF  */
#line 1530 "bison_parser.y"
             {
  (yyval.opt_trigger_time_t) = new OptTriggerTime();
  (yyval.opt_trigger_time_t)->str_val_ = string("INSTEAD OF");
}
#line 6266 "bison_parser.cpp"
    break;

  case 187: /* opt_trigger_time: %empty  */
#line 1534 "bison_parser.y"
              {
  (yyval.opt_trigger_time_t) = new OptTriggerTime();
  (yyval.opt_trigger_time_t)->str_val_ = string("");
}
#line 6275 "bison_parser.cpp"
    break;

  case 188: /* opt_trigger_time: comment_literal opt_trigger_time  */
#line 1538 "bison_parser.y"
                                   {
		(yyval.opt_trigger_time_t) = (yyvsp[0].opt_trigger_time_t);
		(yyval.opt_trigger_time_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6284 "bison_parser.cpp"
    break;

  case 189: /* opt_trigger_time: opt_trigger_time comment_literal  */
#line 1542 "bison_parser.y"
                                   {
  (yyval.opt_trigger_time_t) = (yyvsp[-1].opt_trigger_time_t);
  (yyval.opt_trigger_time_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6293 "bison_parser.cpp"
    break;

  case 190: /* trigger_event: DELETE  */
#line 1548 "bison_parser.y"
                       {
  (yyval.trigger_event_t) = new TriggerEvent();
  (yyval.trigger_event_t)->sub_type_ = CASE0;
}
#line 6302 "bison_parser.cpp"
    break;

  case 191: /* trigger_event: INSERT  */
#line 1552 "bison_parser.y"
         {
  (yyval.trigger_event_t) = new TriggerEvent();
  (yyval.trigger_event_t)->sub_type_ = CASE1;
}
#line 6311 "bison_parser.cpp"
    break;

  case 192: /* trigger_event: UPDATE opt_of_column_list  */
#line 1556 "bison_parser.y"
                            {
  (yyval.trigger_event_t) = new TriggerEvent();
  (yyval.trigger_event_t)->sub_type_ = CASE2;
  (yyval.trigger_event_t)->opt_of_column_list_ = (yyvsp[0].opt_of_column_list_t);
}
#line 6321 "bison_parser.cpp"
    break;

  case 193: /* trigger_event: comment_literal trigger_event  */
#line 1561 "bison_parser.y"
                                {
		(yyval.trigger_event_t) = (yyvsp[0].trigger_event_t);
		(yyval.trigger_event_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6330 "bison_parser.cpp"
    break;

  case 194: /* trigger_event: trigger_event comment_literal  */
#line 1565 "bison_parser.y"
                                {
  (yyval.trigger_event_t) = (yyvsp[-1].trigger_event_t);
  (yyval.trigger_event_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6339 "bison_parser.cpp"
    break;

  case 195: /* opt_of_column_list: OF ident_commalist  */
#line 1571 "bison_parser.y"
                                        {
  (yyval.opt_of_column_list_t) = new OptOfColumnList();
  (yyval.opt_of_column_list_t)->sub_type_ = CASE0;
  (yyval.opt_of_column_list_t)->ident_commalist_ = (yyvsp[0].ident_commalist_t);
}
#line 6349 "bison_parser.cpp"
    break;

  case 196: /* opt_of_column_list: %empty  */
#line 1576 "bison_parser.y"
              {
  (yyval.opt_of_column_list_t) = new OptOfColumnList();
  (yyval.opt_of_column_list_t)->sub_type_ = CASE1;
}
#line 6358 "bison_parser.cpp"
    break;

  case 197: /* opt_of_column_list: comment_literal opt_of_column_list  */
#line 1580 "bison_parser.y"
                                     {
		(yyval.opt_of_column_list_t) = (yyvsp[0].opt_of_column_list_t);
		(yyval.opt_of_column_list_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6367 "bison_parser.cpp"
    break;

  case 198: /* opt_of_column_list: opt_of_column_list comment_literal  */
#line 1584 "bison_parser.y"
                                     {
  (yyval.opt_of_column_list_t) = (yyvsp[-1].opt_of_column_list_t);
  (yyval.opt_of_column_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6376 "bison_parser.cpp"
    break;

  case 199: /* opt_for_each: FOR EACH ROW  */
#line 1591 "bison_parser.y"
                            {
  (yyval.opt_for_each_t) = new OptForEach();
  (yyval.opt_for_each_t)->str_val_ = string("FOR EACH ROW");
}
#line 6385 "bison_parser.cpp"
    break;

  case 200: /* opt_for_each: %empty  */
#line 1595 "bison_parser.y"
              {
  (yyval.opt_for_each_t) = new OptForEach();
  (yyval.opt_for_each_t)->str_val_ = string("");
}
#line 6394 "bison_parser.cpp"
    break;

  case 201: /* opt_for_each: comment_literal opt_for_each  */
#line 1599 "bison_parser.y"
                               {
		(yyval.opt_for_each_t) = (yyvsp[0].opt_for_each_t);
		(yyval.opt_for_each_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6403 "bison_parser.cpp"
    break;

  case 202: /* opt_for_each: opt_for_each comment_literal  */
#line 1603 "bison_parser.y"
                               {
  (yyval.opt_for_each_t) = (yyvsp[-1].opt_for_each_t);
  (yyval.opt_for_each_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6412 "bison_parser.cpp"
    break;

  case 203: /* opt_when: WHEN expr  */
#line 1610 "bison_parser.y"
                     {
  (yyval.opt_when_t) = new OptWhen();
  (yyval.opt_when_t)->sub_type_ = CASE0;
  (yyval.opt_when_t)->expr_ = (yyvsp[0].expr_t);
}
#line 6422 "bison_parser.cpp"
    break;

  case 204: /* opt_when: %empty  */
#line 1615 "bison_parser.y"
              {
  (yyval.opt_when_t) = new OptWhen();
  (yyval.opt_when_t)->sub_type_ = CASE1;
}
#line 6431 "bison_parser.cpp"
    break;

  case 205: /* opt_when: comment_literal opt_when  */
#line 1619 "bison_parser.y"
                           {
		(yyval.opt_when_t) = (yyvsp[0].opt_when_t);
		(yyval.opt_when_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6440 "bison_parser.cpp"
    break;

  case 206: /* opt_when: opt_when comment_literal  */
#line 1623 "bison_parser.y"
                           {
  (yyval.opt_when_t) = (yyvsp[-1].opt_when_t);
  (yyval.opt_when_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6449 "bison_parser.cpp"
    break;

  case 207: /* trigger_cmd_list: trigger_cmd ';'  */
#line 1629 "bison_parser.y"
                                   {
  (yyval.trigger_cmd_list_t) = new TriggerCmdList();
  (yyval.trigger_cmd_list_t)->v_trigger_cmd_list_.push_back((yyvsp[-1].trigger_cmd_t));
}
#line 6458 "bison_parser.cpp"
    break;

  case 208: /* trigger_cmd_list: trigger_cmd_list trigger_cmd ';'  */
#line 1633 "bison_parser.y"
                                   {
  (yyvsp[-2].trigger_cmd_list_t)->v_trigger_cmd_list_.push_back((yyvsp[-1].trigger_cmd_t));
  (yyval.trigger_cmd_list_t) = (yyvsp[-2].trigger_cmd_list_t);
}
#line 6467 "bison_parser.cpp"
    break;

  case 209: /* trigger_cmd_list: comment_literal trigger_cmd_list  */
#line 1637 "bison_parser.y"
                                   {
		(yyval.trigger_cmd_list_t) = (yyvsp[0].trigger_cmd_list_t);
		(yyval.trigger_cmd_list_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6476 "bison_parser.cpp"
    break;

  case 210: /* trigger_cmd_list: trigger_cmd_list comment_literal  */
#line 1641 "bison_parser.y"
                                   {
  (yyval.trigger_cmd_list_t) = (yyvsp[-1].trigger_cmd_list_t);
  (yyval.trigger_cmd_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6485 "bison_parser.cpp"
    break;

  case 211: /* trigger_cmd: select_statement  */
#line 1647 "bison_parser.y"
                               {
  (yyval.trigger_cmd_t) = new TriggerCmd();
  (yyval.trigger_cmd_t)->stmt_ = (yyvsp[0].select_statement_t);
}
#line 6494 "bison_parser.cpp"
    break;

  case 212: /* trigger_cmd: update_statement  */
#line 1651 "bison_parser.y"
                   {
  (yyval.trigger_cmd_t) = new TriggerCmd();
  (yyval.trigger_cmd_t)->stmt_ = (yyvsp[0].update_statement_t);
}
#line 6503 "bison_parser.cpp"
    break;

  case 213: /* trigger_cmd: insert_statement  */
#line 1655 "bison_parser.y"
                   {
  (yyval.trigger_cmd_t) = new TriggerCmd();
  (yyval.trigger_cmd_t)->stmt_ = (yyvsp[0].insert_statement_t);
}
#line 6512 "bison_parser.cpp"
    break;

  case 214: /* trigger_cmd: delete_statement  */
#line 1659 "bison_parser.y"
                   {
  (yyval.trigger_cmd_t) = new TriggerCmd();
  (yyval.trigger_cmd_t)->stmt_ = (yyvsp[0].delete_statement_t);
}
#line 6521 "bison_parser.cpp"
    break;

  case 215: /* module_name: IDENTIFIER  */
#line 1664 "bison_parser.y"
                         {
  (yyval.module_name_t) = new ModuleName();
  (yyval.module_name_t)->id_ = new Identifier((yyvsp[0].sval));
  free((yyvsp[0].sval));
}
#line 6531 "bison_parser.cpp"
    break;

  case 216: /* opt_not_exists: IF NOT EXISTS  */
#line 1670 "bison_parser.y"
                               {
  (yyval.opt_not_exists_t) = new OptNotExists();
  (yyval.opt_not_exists_t)->sub_type_ = CASE0;
}
#line 6540 "bison_parser.cpp"
    break;

  case 217: /* opt_not_exists: %empty  */
#line 1674 "bison_parser.y"
              {
  (yyval.opt_not_exists_t) = new OptNotExists();
  (yyval.opt_not_exists_t)->sub_type_ = CASE1;
}
#line 6549 "bison_parser.cpp"
    break;

  case 218: /* opt_not_exists: comment_literal opt_not_exists  */
#line 1678 "bison_parser.y"
                                 {
		(yyval.opt_not_exists_t) = (yyvsp[0].opt_not_exists_t);
		(yyval.opt_not_exists_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6558 "bison_parser.cpp"
    break;

  case 219: /* opt_not_exists: opt_not_exists comment_literal  */
#line 1682 "bison_parser.y"
                                 {
  (yyval.opt_not_exists_t) = (yyvsp[-1].opt_not_exists_t);
  (yyval.opt_not_exists_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6567 "bison_parser.cpp"
    break;

  case 220: /* column_def_commalist: column_def  */
#line 1688 "bison_parser.y"
                                  {
  (yyval.column_def_comma_list_t) = new ColumnDefCommaList();
  (yyval.column_def_comma_list_t)->v_column_def_comma_list_.push_back((yyvsp[0].column_def_t));
}
#line 6576 "bison_parser.cpp"
    break;

  case 221: /* column_def_commalist: column_def_commalist ',' column_def  */
#line 1692 "bison_parser.y"
                                      {
  (yyvsp[-2].column_def_comma_list_t)->v_column_def_comma_list_.push_back((yyvsp[0].column_def_t));
  (yyval.column_def_comma_list_t) = (yyvsp[-2].column_def_comma_list_t);
}
#line 6585 "bison_parser.cpp"
    break;

  case 222: /* column_def_commalist: comment_literal column_def_commalist  */
#line 1696 "bison_parser.y"
                                       {
		(yyval.column_def_comma_list_t) = (yyvsp[0].column_def_comma_list_t);
		(yyval.column_def_comma_list_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6594 "bison_parser.cpp"
    break;

  case 223: /* column_def_commalist: column_def_commalist comment_literal  */
#line 1700 "bison_parser.y"
                                       {
  (yyval.column_def_comma_list_t) = (yyvsp[-1].column_def_comma_list_t);
  (yyval.column_def_comma_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6603 "bison_parser.cpp"
    break;

  case 224: /* column_def: IDENTIFIER column_type opt_column_arglist  */
#line 1706 "bison_parser.y"
                                                       {
  (yyval.column_def_t) = new ColumnDef();
  (yyval.column_def_t)->id_ = new Identifier((yyvsp[-2].sval), id_create_column_name);
  (yyval.column_def_t)->column_type_ = (yyvsp[-1].column_type_t);
  (yyval.column_def_t)->opt_column_arglist_ = (yyvsp[0].opt_column_arglist_t);
  free((yyvsp[-2].sval));
}
#line 6615 "bison_parser.cpp"
    break;

  case 225: /* opt_column_arglist: column_arglist  */
#line 1714 "bison_parser.y"
                                    {
  (yyval.opt_column_arglist_t) = new OptColumnArglist();
  (yyval.opt_column_arglist_t)->sub_type_ = CASE0;
  (yyval.opt_column_arglist_t)->column_arglist_ = (yyvsp[0].column_arglist_t);
}
#line 6625 "bison_parser.cpp"
    break;

  case 226: /* opt_column_arglist: %empty  */
#line 1719 "bison_parser.y"
              {
  (yyval.opt_column_arglist_t) = new OptColumnArglist();
  (yyval.opt_column_arglist_t)->sub_type_ = CASE1;
}
#line 6634 "bison_parser.cpp"
    break;

  case 227: /* opt_column_arglist: comment_literal opt_column_arglist  */
#line 1723 "bison_parser.y"
                                     {
		(yyval.opt_column_arglist_t) = (yyvsp[0].opt_column_arglist_t);
		(yyval.opt_column_arglist_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6643 "bison_parser.cpp"
    break;

  case 228: /* opt_column_arglist: opt_column_arglist comment_literal  */
#line 1727 "bison_parser.y"
                                     {
  (yyval.opt_column_arglist_t) = (yyvsp[-1].opt_column_arglist_t);
  (yyval.opt_column_arglist_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6652 "bison_parser.cpp"
    break;

  case 229: /* column_arglist: column_arglist column_arg  */
#line 1733 "bison_parser.y"
                                           {
  (yyvsp[-1].column_arglist_t)->v_column_arg_.push_back((yyvsp[0].column_arg_t));
  (yyval.column_arglist_t) = (yyvsp[-1].column_arglist_t);
}
#line 6661 "bison_parser.cpp"
    break;

  case 230: /* column_arglist: column_arg  */
#line 1737 "bison_parser.y"
             {
  (yyval.column_arglist_t) = new ColumnArglist();
  (yyval.column_arglist_t)->v_column_arg_.push_back((yyvsp[0].column_arg_t));
}
#line 6670 "bison_parser.cpp"
    break;

  case 231: /* column_arg: NULL opt_on_conflict  */
#line 1742 "bison_parser.y"
                                  {
  (yyval.column_arg_t) = new ColumnArg();
  (yyval.column_arg_t)->sub_type_ = CASE0;
  (yyval.column_arg_t)->opt_on_conflict_ = (yyvsp[0].opt_on_conflict_t);
}
#line 6680 "bison_parser.cpp"
    break;

  case 232: /* column_arg: NOT NULL opt_on_conflict  */
#line 1747 "bison_parser.y"
                           {
  (yyval.column_arg_t) = new ColumnArg();
  (yyval.column_arg_t)->sub_type_ = CASE1;
  (yyval.column_arg_t)->opt_on_conflict_ = (yyvsp[0].opt_on_conflict_t);
}
#line 6690 "bison_parser.cpp"
    break;

  case 233: /* column_arg: PRIMARY KEY opt_order_type opt_on_conflict opt_autoinc  */
#line 1752 "bison_parser.y"
                                                         {
  (yyval.column_arg_t) = new ColumnArg();
  (yyval.column_arg_t)->sub_type_ = CASE2;
  (yyval.column_arg_t)->opt_order_type_ = (yyvsp[-2].opt_order_type_t);
  (yyval.column_arg_t)->opt_on_conflict_ = (yyvsp[-1].opt_on_conflict_t);
  (yyval.column_arg_t)->opt_autoinc_ = (yyvsp[0].opt_autoinc_t);
}
#line 6702 "bison_parser.cpp"
    break;

  case 234: /* column_arg: UNIQUE opt_on_conflict  */
#line 1759 "bison_parser.y"
                         {
  (yyval.column_arg_t) = new ColumnArg();
  (yyval.column_arg_t)->sub_type_ = CASE3;
  (yyval.column_arg_t)->opt_on_conflict_ = (yyvsp[0].opt_on_conflict_t);
}
#line 6712 "bison_parser.cpp"
    break;

  case 235: /* column_arg: GENERATED ALWAYS AS '(' expr ')'  */
#line 1764 "bison_parser.y"
                                   {
  (yyval.column_arg_t) = new ColumnArg();
  (yyval.column_arg_t)->sub_type_ = CASE4;
  (yyval.column_arg_t)->expr_ = (yyvsp[-1].expr_t);
}
#line 6722 "bison_parser.cpp"
    break;

  case 236: /* column_arg: AS '(' expr ')'  */
#line 1769 "bison_parser.y"
                  {
  (yyval.column_arg_t) = new ColumnArg();
  (yyval.column_arg_t)->sub_type_ = CASE5;
  (yyval.column_arg_t)->expr_ = (yyvsp[-1].expr_t);
}
#line 6732 "bison_parser.cpp"
    break;

  case 237: /* column_arg: CHECK '(' expr ')'  */
#line 1774 "bison_parser.y"
                     {
  (yyval.column_arg_t) = new ColumnArg();
  (yyval.column_arg_t)->sub_type_ = CASE6;
  (yyval.column_arg_t)->expr_ = (yyvsp[-1].expr_t);
}
#line 6742 "bison_parser.cpp"
    break;

  case 238: /* column_arg: comment_literal column_arg  */
#line 1779 "bison_parser.y"
                             {
		(yyval.column_arg_t) = (yyvsp[0].column_arg_t);
		(yyval.column_arg_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6751 "bison_parser.cpp"
    break;

  case 239: /* column_arg: column_arg comment_literal  */
#line 1783 "bison_parser.y"
                             {
  (yyval.column_arg_t) = (yyvsp[-1].column_arg_t);
  (yyval.column_arg_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6760 "bison_parser.cpp"
    break;

  case 240: /* opt_on_conflict: ON CONFLICT resolve_type  */
#line 1789 "bison_parser.y"
                                           {
  (yyval.opt_on_conflict_t) = new OptOnConflict();
  (yyval.opt_on_conflict_t)->sub_type_ = CASE0;
  (yyval.opt_on_conflict_t)->resolve_type_ = (yyvsp[0].resolve_type_t);
}
#line 6770 "bison_parser.cpp"
    break;

  case 241: /* opt_on_conflict: %empty  */
#line 1794 "bison_parser.y"
              {
  (yyval.opt_on_conflict_t) = new OptOnConflict();
  (yyval.opt_on_conflict_t)->sub_type_ = CASE1;
}
#line 6779 "bison_parser.cpp"
    break;

  case 242: /* opt_on_conflict: comment_literal opt_on_conflict  */
#line 1798 "bison_parser.y"
                                  {
		(yyval.opt_on_conflict_t) = (yyvsp[0].opt_on_conflict_t);
		(yyval.opt_on_conflict_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6788 "bison_parser.cpp"
    break;

  case 243: /* opt_on_conflict: opt_on_conflict comment_literal  */
#line 1802 "bison_parser.y"
                                  {
  (yyval.opt_on_conflict_t) = (yyvsp[-1].opt_on_conflict_t);
  (yyval.opt_on_conflict_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6797 "bison_parser.cpp"
    break;

  case 244: /* resolve_type: IGNORE  */
#line 1809 "bison_parser.y"
                      {
  (yyval.resolve_type_t) = new ResolveType();
  (yyval.resolve_type_t)->str_val_ = string("IGNORE");
}
#line 6806 "bison_parser.cpp"
    break;

  case 245: /* resolve_type: REPLACE  */
#line 1813 "bison_parser.y"
          {
  (yyval.resolve_type_t) = new ResolveType();
  (yyval.resolve_type_t)->str_val_ = string("REPLACE");
}
#line 6815 "bison_parser.cpp"
    break;

  case 246: /* resolve_type: ROLLBACK  */
#line 1817 "bison_parser.y"
           {
  (yyval.resolve_type_t) = new ResolveType();
  (yyval.resolve_type_t)->str_val_ = string("ROLLBACK");
}
#line 6824 "bison_parser.cpp"
    break;

  case 247: /* resolve_type: ABORT  */
#line 1821 "bison_parser.y"
        {
  (yyval.resolve_type_t) = new ResolveType();
  (yyval.resolve_type_t)->str_val_ = string("ABORT");
}
#line 6833 "bison_parser.cpp"
    break;

  case 248: /* resolve_type: FAIL  */
#line 1825 "bison_parser.y"
       {
  (yyval.resolve_type_t) = new ResolveType();
  (yyval.resolve_type_t)->str_val_ = string("FAIL");
}
#line 6842 "bison_parser.cpp"
    break;

  case 249: /* resolve_type: comment_literal resolve_type  */
#line 1829 "bison_parser.y"
                               {
		(yyval.resolve_type_t) = (yyvsp[0].resolve_type_t);
		(yyval.resolve_type_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6851 "bison_parser.cpp"
    break;

  case 250: /* resolve_type: resolve_type comment_literal  */
#line 1833 "bison_parser.y"
                               {
  (yyval.resolve_type_t) = (yyvsp[-1].resolve_type_t);
  (yyval.resolve_type_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6860 "bison_parser.cpp"
    break;

  case 251: /* opt_autoinc: AUTOINCR  */
#line 1839 "bison_parser.y"
                       {
  (yyval.opt_autoinc_t) = new OptAutoinc();
  (yyval.opt_autoinc_t)->str_val_ = string("AUTOINCR");
}
#line 6869 "bison_parser.cpp"
    break;

  case 252: /* opt_autoinc: %empty  */
#line 1843 "bison_parser.y"
              {
  (yyval.opt_autoinc_t) = new OptAutoinc();
  (yyval.opt_autoinc_t)->str_val_ = string("");
}
#line 6878 "bison_parser.cpp"
    break;

  case 253: /* opt_autoinc: comment_literal opt_autoinc  */
#line 1847 "bison_parser.y"
                              {
		(yyval.opt_autoinc_t) = (yyvsp[0].opt_autoinc_t);
		(yyval.opt_autoinc_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6887 "bison_parser.cpp"
    break;

  case 254: /* opt_autoinc: opt_autoinc comment_literal  */
#line 1851 "bison_parser.y"
                              {
  (yyval.opt_autoinc_t) = (yyvsp[-1].opt_autoinc_t);
  (yyval.opt_autoinc_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6896 "bison_parser.cpp"
    break;

  case 255: /* column_type: INT  */
#line 1857 "bison_parser.y"
                  {
  (yyval.column_type_t) = new ColumnType();
  (yyval.column_type_t)->str_val_ = string("INT");
}
#line 6905 "bison_parser.cpp"
    break;

  case 256: /* column_type: INTEGER  */
#line 1861 "bison_parser.y"
          {
  (yyval.column_type_t) = new ColumnType();
  (yyval.column_type_t)->str_val_ = string("INTEGER");
}
#line 6914 "bison_parser.cpp"
    break;

  case 257: /* column_type: LONG  */
#line 1865 "bison_parser.y"
       {
  (yyval.column_type_t) = new ColumnType();
  (yyval.column_type_t)->str_val_ = string("LONG");
}
#line 6923 "bison_parser.cpp"
    break;

  case 258: /* column_type: FLOAT  */
#line 1869 "bison_parser.y"
        {
  (yyval.column_type_t) = new ColumnType();
  (yyval.column_type_t)->str_val_ = string("FLOAT");
}
#line 6932 "bison_parser.cpp"
    break;

  case 259: /* column_type: DOUBLE  */
#line 1873 "bison_parser.y"
         {
  (yyval.column_type_t) = new ColumnType();
  (yyval.column_type_t)->str_val_ = string("DOUBLE");
}
#line 6941 "bison_parser.cpp"
    break;

  case 260: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 1877 "bison_parser.y"
                         {
  (yyval.column_type_t) = new ColumnType();
  (yyval.column_type_t)->str_val_ = string("VARCHAR(") + to_string((yyvsp[-1].ival)) + ")";
}
#line 6950 "bison_parser.cpp"
    break;

  case 261: /* column_type: CHAR '(' INTVAL ')'  */
#line 1881 "bison_parser.y"
                      {
  (yyval.column_type_t) = new ColumnType();
  (yyval.column_type_t)->str_val_ = string("CHAR(") + to_string((yyvsp[-1].ival)) + ")";
}
#line 6959 "bison_parser.cpp"
    break;

  case 262: /* column_type: TEXT  */
#line 1885 "bison_parser.y"
       {
  (yyval.column_type_t) = new ColumnType();
  (yyval.column_type_t)->str_val_ = string("TEXT");
}
#line 6968 "bison_parser.cpp"
    break;

  case 263: /* column_type: %empty  */
#line 1889 "bison_parser.y"
             {
  (yyval.column_type_t) = new ColumnType();
  (yyval.column_type_t)->str_val_ = string("");
}
#line 6977 "bison_parser.cpp"
    break;

  case 264: /* column_type: comment_literal column_type  */
#line 1893 "bison_parser.y"
                              {
		(yyval.column_type_t) = (yyvsp[0].column_type_t);
		(yyval.column_type_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 6986 "bison_parser.cpp"
    break;

  case 265: /* column_type: column_type comment_literal  */
#line 1897 "bison_parser.y"
                              {
  (yyval.column_type_t) = (yyvsp[-1].column_type_t);
  (yyval.column_type_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 6995 "bison_parser.cpp"
    break;

  case 266: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 1909 "bison_parser.y"
                                                  {
  (yyval.drop_statement_t) = new DropStatement();
  (yyval.drop_statement_t)->sub_type_ = CASE0;
  (yyval.drop_statement_t)->opt_exists_ = (yyvsp[-1].opt_exists_t);
  (yyval.drop_statement_t)->table_name_ = (yyvsp[0].table_name_t);
  (yyval.drop_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
  (yyval.drop_statement_t)->id_ = NULL;
}
#line 7008 "bison_parser.cpp"
    break;

  case 267: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 1917 "bison_parser.y"
                                  {
  (yyval.drop_statement_t) = new DropStatement();
  (yyval.drop_statement_t)->sub_type_ = CASE1;
  (yyval.drop_statement_t)->opt_exists_ = (yyvsp[-1].opt_exists_t);
  (yyval.drop_statement_t)->table_name_ = (yyvsp[0].table_name_t);
  (yyval.drop_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
  (yyval.drop_statement_t)->id_ = NULL;
}
#line 7021 "bison_parser.cpp"
    break;

  case 268: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 1925 "bison_parser.y"
                                {
  (yyval.drop_statement_t) = new DropStatement();
  (yyval.drop_statement_t)->sub_type_ = CASE2;
  (yyval.drop_statement_t)->id_ = new Identifier((yyvsp[0].sval));
  free((yyvsp[0].sval));
}
#line 7032 "bison_parser.cpp"
    break;

  case 269: /* drop_statement: DROP TRIGGER opt_exists schema_name '.' trigger_name  */
#line 1931 "bison_parser.y"
                                                       {
  (yyval.drop_statement_t) = new DropStatement();
  (yyval.drop_statement_t)->sub_type_ = CASE3;
  (yyval.drop_statement_t)->opt_exists_ = (yyvsp[-3].opt_exists_t);
  (yyval.drop_statement_t)->schema_name_ = (yyvsp[-2].schema_name_t);
  (yyval.drop_statement_t)->trigger_name_ = (yyvsp[0].trigger_name_t);
}
#line 7044 "bison_parser.cpp"
    break;

  case 270: /* drop_statement: DROP TRIGGER opt_exists trigger_name  */
#line 1939 "bison_parser.y"
                                       {
  (yyval.drop_statement_t) = new DropStatement();
  (yyval.drop_statement_t)->sub_type_ = CASE4;
  (yyval.drop_statement_t)->opt_exists_ = (yyvsp[-1].opt_exists_t);
  (yyval.drop_statement_t)->trigger_name_ = (yyvsp[0].trigger_name_t);
}
#line 7055 "bison_parser.cpp"
    break;

  case 271: /* drop_statement: comment_literal drop_statement  */
#line 1945 "bison_parser.y"
                                 {
		(yyval.drop_statement_t) = (yyvsp[0].drop_statement_t);
		(yyval.drop_statement_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7064 "bison_parser.cpp"
    break;

  case 272: /* drop_statement: drop_statement comment_literal  */
#line 1949 "bison_parser.y"
                                 {
  (yyval.drop_statement_t) = (yyvsp[-1].drop_statement_t);
  (yyval.drop_statement_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7073 "bison_parser.cpp"
    break;

  case 273: /* opt_exists: IF EXISTS  */
#line 1955 "bison_parser.y"
                       {
  (yyval.opt_exists_t) = new OptExists();
  (yyval.opt_exists_t)->str_val_ = string("IF EXISTS");
}
#line 7082 "bison_parser.cpp"
    break;

  case 274: /* opt_exists: %empty  */
#line 1959 "bison_parser.y"
              {
  (yyval.opt_exists_t) = new OptExists();
  (yyval.opt_exists_t)->str_val_ = string("");
}
#line 7091 "bison_parser.cpp"
    break;

  case 275: /* opt_exists: comment_literal opt_exists  */
#line 1963 "bison_parser.y"
                             {
		(yyval.opt_exists_t) = (yyvsp[0].opt_exists_t);
		(yyval.opt_exists_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7100 "bison_parser.cpp"
    break;

  case 276: /* opt_exists: opt_exists comment_literal  */
#line 1967 "bison_parser.y"
                             {
  (yyval.opt_exists_t) = (yyvsp[-1].opt_exists_t);
  (yyval.opt_exists_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7109 "bison_parser.cpp"
    break;

  case 277: /* delete_statement: DELETE FROM table_name opt_where  */
#line 1978 "bison_parser.y"
                                                    {
  (yyval.delete_statement_t) = new DeleteStatement();
  (yyval.delete_statement_t)->sub_type_ = CASE0;
  (yyval.delete_statement_t)->table_name_ = (yyvsp[-1].table_name_t);
  (yyval.delete_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
  (yyval.delete_statement_t)->opt_where_ = (yyvsp[0].opt_where_t);
}
#line 7121 "bison_parser.cpp"
    break;

  case 278: /* delete_statement: comment_literal delete_statement  */
#line 1985 "bison_parser.y"
                                   {
		(yyval.delete_statement_t) = (yyvsp[0].delete_statement_t);
		(yyval.delete_statement_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7130 "bison_parser.cpp"
    break;

  case 279: /* delete_statement: delete_statement comment_literal  */
#line 1989 "bison_parser.y"
                                   {
  (yyval.delete_statement_t) = (yyvsp[-1].delete_statement_t);
  (yyval.delete_statement_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7139 "bison_parser.cpp"
    break;

  case 280: /* truncate_statement: TRUNCATE table_name  */
#line 1995 "bison_parser.y"
                                         {
  (yyval.delete_statement_t) = new DeleteStatement();
  (yyval.delete_statement_t)->sub_type_ = CASE1;
  (yyval.delete_statement_t)->table_name_ = (yyvsp[0].table_name_t);
  (yyval.delete_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
}
#line 7150 "bison_parser.cpp"
    break;

  case 281: /* truncate_statement: comment_literal truncate_statement  */
#line 2001 "bison_parser.y"
                                     {
		(yyval.delete_statement_t) = (yyvsp[0].delete_statement_t);
		(yyval.delete_statement_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7159 "bison_parser.cpp"
    break;

  case 282: /* truncate_statement: truncate_statement comment_literal  */
#line 2005 "bison_parser.y"
                                     {
  (yyval.delete_statement_t) = (yyvsp[-1].delete_statement_t);
  (yyval.delete_statement_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7168 "bison_parser.cpp"
    break;

  case 283: /* insert_statement: insert_type INTO table_name opt_column_list VALUES super_list opt_upsert_clause  */
#line 2016 "bison_parser.y"
                                         {
  (yyval.insert_statement_t) = new InsertStatement();
  (yyval.insert_statement_t)->sub_type_ = CASE0;
  (yyval.insert_statement_t)->insert_type_ = (yyvsp[-6].insert_type_t);
  (yyval.insert_statement_t)->table_name_ = (yyvsp[-4].table_name_t);
  (yyval.insert_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
  (yyval.insert_statement_t)->opt_column_list_ = (yyvsp[-3].opt_column_list_t);
  (yyval.insert_statement_t)->super_list_ = (yyvsp[-1].super_list_t);
  (yyval.insert_statement_t)->opt_upsert_clause_ = (yyvsp[0].opt_upsert_clause_t);
  if ((yyval.insert_statement_t)->opt_column_list_->sub_type_ == CASE0) {
    for (auto& cname :
         (yyval.insert_statement_t)->opt_column_list_->ident_comma_list_->v_iden_comma_list_) {
      cname->id_type_ = id_column_name;
    }
  }
}
#line 7189 "bison_parser.cpp"
    break;

  case 284: /* insert_statement: insert_type INTO table_name opt_column_list select_no_paren opt_upsert_clause  */
#line 2033 "bison_parser.y"
                          {
  (yyval.insert_statement_t) = new InsertStatement();
  (yyval.insert_statement_t)->sub_type_ = CASE1;
  (yyval.insert_statement_t)->insert_type_ = (yyvsp[-5].insert_type_t);
  (yyval.insert_statement_t)->table_name_ = (yyvsp[-3].table_name_t);
  (yyval.insert_statement_t)->table_name_->table_name_->id_type_ = id_top_table_name;
  (yyval.insert_statement_t)->opt_column_list_ = (yyvsp[-2].opt_column_list_t);
  (yyval.insert_statement_t)->select_no_paren_ = (yyvsp[-1].select_no_paren_t);
  (yyval.insert_statement_t)->opt_upsert_clause_ = (yyvsp[0].opt_upsert_clause_t);
  if ((yyval.insert_statement_t)->opt_column_list_->sub_type_ == CASE0) {
    for (auto& cname :
         (yyval.insert_statement_t)->opt_column_list_->ident_comma_list_->v_iden_comma_list_) {
      cname->id_type_ = id_column_name;
    }
  }
}
#line 7210 "bison_parser.cpp"
    break;

  case 285: /* super_list: '(' literal_list ')'  */
#line 2050 "bison_parser.y"
                                  {
  (yyval.super_list_t) = new SuperList();
  (yyval.super_list_t)->v_super_list_.push_back((yyvsp[-1].literal_list_t));
}
#line 7219 "bison_parser.cpp"
    break;

  case 286: /* super_list: super_list ',' '(' literal_list ')'  */
#line 2054 "bison_parser.y"
                                      {
  (yyvsp[-4].super_list_t)->v_super_list_.push_back((yyvsp[-1].literal_list_t));
  (yyval.super_list_t) = (yyvsp[-4].super_list_t);
}
#line 7228 "bison_parser.cpp"
    break;

  case 287: /* super_list: comment_literal super_list  */
#line 2058 "bison_parser.y"
                             {
		(yyval.super_list_t) = (yyvsp[0].super_list_t);
		(yyval.super_list_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7237 "bison_parser.cpp"
    break;

  case 288: /* super_list: super_list comment_literal  */
#line 2062 "bison_parser.y"
                             {
  (yyval.super_list_t) = (yyvsp[-1].super_list_t);
  (yyval.super_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7246 "bison_parser.cpp"
    break;

  case 289: /* insert_type: INSERT  */
#line 2068 "bison_parser.y"
                     {
  (yyval.insert_type_t) = new InsertType();
  (yyval.insert_type_t)->sub_type_ = CASE0;
  (yyval.insert_type_t)->str_val_ = string("INSERT");
}
#line 7256 "bison_parser.cpp"
    break;

  case 290: /* insert_type: REPLACE  */
#line 2073 "bison_parser.y"
          {
  (yyval.insert_type_t) = new InsertType();
  (yyval.insert_type_t)->sub_type_ = CASE1;
  (yyval.insert_type_t)->str_val_ = string("REPLACE");
}
#line 7266 "bison_parser.cpp"
    break;

  case 291: /* insert_type: INSERT OR resolve_type  */
#line 2078 "bison_parser.y"
                         {
  (yyval.insert_type_t) = new InsertType();
  (yyval.insert_type_t)->sub_type_ = CASE2;
  (yyval.insert_type_t)->resolve_type_ = (yyvsp[0].resolve_type_t);
}
#line 7276 "bison_parser.cpp"
    break;

  case 292: /* insert_type: comment_literal insert_type  */
#line 2083 "bison_parser.y"
                              {
		(yyval.insert_type_t) = (yyvsp[0].insert_type_t);
		(yyval.insert_type_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7285 "bison_parser.cpp"
    break;

  case 293: /* insert_type: insert_type comment_literal  */
#line 2087 "bison_parser.y"
                              {
  (yyval.insert_type_t) = (yyvsp[-1].insert_type_t);
  (yyval.insert_type_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7294 "bison_parser.cpp"
    break;

  case 294: /* opt_column_list: '(' ident_commalist ')'  */
#line 2093 "bison_parser.y"
                                          {
  (yyval.opt_column_list_t) = new OptColumnList();
  (yyval.opt_column_list_t)->sub_type_ = CASE0;
  (yyval.opt_column_list_t)->ident_comma_list_ = (yyvsp[-1].ident_commalist_t);
}
#line 7304 "bison_parser.cpp"
    break;

  case 295: /* opt_column_list: %empty  */
#line 2098 "bison_parser.y"
              {
  (yyval.opt_column_list_t) = new OptColumnList();
  (yyval.opt_column_list_t)->sub_type_ = CASE1;
}
#line 7313 "bison_parser.cpp"
    break;

  case 296: /* opt_column_list: comment_literal opt_column_list  */
#line 2102 "bison_parser.y"
                                  {
		(yyval.opt_column_list_t) = (yyvsp[0].opt_column_list_t);
		(yyval.opt_column_list_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7322 "bison_parser.cpp"
    break;

  case 297: /* opt_column_list: opt_column_list comment_literal  */
#line 2106 "bison_parser.y"
                                  {
  (yyval.opt_column_list_t) = (yyvsp[-1].opt_column_list_t);
  (yyval.opt_column_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7331 "bison_parser.cpp"
    break;

  case 298: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 2119 "bison_parser.y"
                                                                           {
  (yyval.update_statement_t) = new UpdateStatement();
  (yyval.update_statement_t)->table_ref_name_no_alias_ =
      (yyvsp[-3].table_ref_name_no_alias_t);  // had set id_top_table_name in table_ref_name_no_alias
  (yyval.update_statement_t)->update_clause_comma_list_ = (yyvsp[-1].update_clause_commalist_t);
  (yyval.update_statement_t)->opt_where_ = (yyvsp[0].opt_where_t);
}
#line 7343 "bison_parser.cpp"
    break;

  case 299: /* update_statement: comment_literal update_statement  */
#line 2126 "bison_parser.y"
                                   {
		(yyval.update_statement_t) = (yyvsp[0].update_statement_t);
		(yyval.update_statement_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7352 "bison_parser.cpp"
    break;

  case 300: /* update_statement: update_statement comment_literal  */
#line 2130 "bison_parser.y"
                                   {
  (yyval.update_statement_t) = (yyvsp[-1].update_statement_t);
  (yyval.update_statement_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7361 "bison_parser.cpp"
    break;

  case 301: /* update_clause_commalist: update_clause  */
#line 2136 "bison_parser.y"
                                        {
  (yyval.update_clause_commalist_t) = new UpdateClauseCommalist();
  (yyval.update_clause_commalist_t)->v_update_clause_list_.push_back((yyvsp[0].update_clause_t));
}
#line 7370 "bison_parser.cpp"
    break;

  case 302: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 2140 "bison_parser.y"
                                            {
  (yyvsp[-2].update_clause_commalist_t)->v_update_clause_list_.push_back((yyvsp[0].update_clause_t));
  (yyval.update_clause_commalist_t) = (yyvsp[-2].update_clause_commalist_t);
}
#line 7379 "bison_parser.cpp"
    break;

  case 303: /* update_clause: IDENTIFIER '=' expr  */
#line 2145 "bison_parser.y"
                                    {
  (yyval.update_clause_t) = new UpdateClause();
  (yyval.update_clause_t)->id_ = new Identifier((yyvsp[-2].sval), id_column_name);
  (yyval.update_clause_t)->expr_ = (yyvsp[0].expr_t);
  free((yyvsp[-2].sval));
}
#line 7390 "bison_parser.cpp"
    break;

  case 304: /* update_clause: comment_literal update_clause  */
#line 2151 "bison_parser.y"
                                {
		(yyval.update_clause_t) = (yyvsp[0].update_clause_t);
		(yyval.update_clause_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7399 "bison_parser.cpp"
    break;

  case 305: /* update_clause: update_clause comment_literal  */
#line 2155 "bison_parser.y"
                                {
  (yyval.update_clause_t) = (yyvsp[-1].update_clause_t);
  (yyval.update_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7408 "bison_parser.cpp"
    break;

  case 306: /* select_statement: opt_with_clause select_with_paren  */
#line 2166 "bison_parser.y"
                                                     {
  (yyval.select_statement_t) = new SelectStatement();
  (yyval.select_statement_t)->sub_type_ = CASE0;
  (yyval.select_statement_t)->opt_with_clause_ = (yyvsp[-1].opt_with_clause_t);
  (yyval.select_statement_t)->select_with_paren_ = (yyvsp[0].select_with_paren_t);
}
#line 7419 "bison_parser.cpp"
    break;

  case 307: /* select_statement: opt_with_clause select_no_paren  */
#line 2172 "bison_parser.y"
                                  {
  (yyval.select_statement_t) = new SelectStatement();
  (yyval.select_statement_t)->sub_type_ = CASE1;
  (yyval.select_statement_t)->opt_with_clause_ = (yyvsp[-1].opt_with_clause_t);
  (yyval.select_statement_t)->select_no_paren_ = (yyvsp[0].select_no_paren_t);
}
#line 7430 "bison_parser.cpp"
    break;

  case 308: /* select_statement: opt_with_clause select_with_paren set_operator select_paren_or_clause opt_order opt_limit  */
#line 2179 "bison_parser.y"
                            {
  (yyval.select_statement_t) = new SelectStatement();
  (yyval.select_statement_t)->sub_type_ = CASE2;
  (yyval.select_statement_t)->opt_with_clause_ = (yyvsp[-5].opt_with_clause_t);
  (yyval.select_statement_t)->select_with_paren_ = (yyvsp[-4].select_with_paren_t);
  (yyval.select_statement_t)->set_operator_ = (yyvsp[-3].set_operator_t);
  (yyval.select_statement_t)->select_paren_or_clause_ = (yyvsp[-2].select_paren_or_clause_t);
  (yyval.select_statement_t)->opt_order_ = (yyvsp[-1].opt_order_t);
  (yyval.select_statement_t)->opt_limit_ = (yyvsp[0].opt_limit_t);
}
#line 7445 "bison_parser.cpp"
    break;

  case 309: /* select_with_paren: '(' select_no_paren ')'  */
#line 2190 "bison_parser.y"
                                            {
  (yyval.select_with_paren_t) = new SelectWithParen();
  (yyval.select_with_paren_t)->sub_type_ = CASE0;
  (yyval.select_with_paren_t)->select_no_paren_ = (yyvsp[-1].select_no_paren_t);
}
#line 7455 "bison_parser.cpp"
    break;

  case 310: /* select_with_paren: '(' select_with_paren ')'  */
#line 2195 "bison_parser.y"
                            {
  (yyval.select_with_paren_t) = new SelectWithParen();
  (yyval.select_with_paren_t)->sub_type_ = CASE1;
  (yyval.select_with_paren_t)->select_with_paren_ = (yyvsp[-1].select_with_paren_t);
}
#line 7465 "bison_parser.cpp"
    break;

  case 311: /* select_paren_or_clause: select_with_paren  */
#line 2201 "bison_parser.y"
                                           {
  (yyval.select_paren_or_clause_t) = new SelectParenOrClause();
  (yyval.select_paren_or_clause_t)->sub_type_ = CASE0;
  (yyval.select_paren_or_clause_t)->select_with_paren_ = (yyvsp[0].select_with_paren_t);
}
#line 7475 "bison_parser.cpp"
    break;

  case 312: /* select_paren_or_clause: select_clause  */
#line 2206 "bison_parser.y"
                {
  (yyval.select_paren_or_clause_t) = new SelectParenOrClause();
  (yyval.select_paren_or_clause_t)->sub_type_ = CASE1;
  (yyval.select_paren_or_clause_t)->select_clause_ = (yyvsp[0].select_clause_t);
}
#line 7485 "bison_parser.cpp"
    break;

  case 313: /* select_no_paren: select_clause opt_order opt_limit  */
#line 2212 "bison_parser.y"
                                                    {
  (yyval.select_no_paren_t) = new SelectNoParen();
  (yyval.select_no_paren_t)->sub_type_ = CASE0;
  (yyval.select_no_paren_t)->select_clause_ = (yyvsp[-2].select_clause_t);
  (yyval.select_no_paren_t)->opt_order_ = (yyvsp[-1].opt_order_t);
  (yyval.select_no_paren_t)->opt_limit_ = (yyvsp[0].opt_limit_t);
}
#line 7497 "bison_parser.cpp"
    break;

  case 314: /* select_no_paren: select_clause set_operator select_paren_or_clause opt_order opt_limit  */
#line 2219 "bison_parser.y"
                                                                        {
  (yyval.select_no_paren_t) = new SelectNoParen();
  (yyval.select_no_paren_t)->sub_type_ = CASE1;
  (yyval.select_no_paren_t)->select_clause_ = (yyvsp[-4].select_clause_t);
  (yyval.select_no_paren_t)->set_operator_ = (yyvsp[-3].set_operator_t);
  (yyval.select_no_paren_t)->select_paren_or_clause_ = (yyvsp[-2].select_paren_or_clause_t);
  (yyval.select_no_paren_t)->opt_order_ = (yyvsp[-1].opt_order_t);
  (yyval.select_no_paren_t)->opt_limit_ = (yyvsp[0].opt_limit_t);
}
#line 7511 "bison_parser.cpp"
    break;

  case 315: /* select_no_paren: comment_literal select_no_paren  */
#line 2228 "bison_parser.y"
                                  {
		(yyval.select_no_paren_t) = (yyvsp[0].select_no_paren_t);
		(yyval.select_no_paren_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7520 "bison_parser.cpp"
    break;

  case 316: /* select_no_paren: select_no_paren comment_literal  */
#line 2232 "bison_parser.y"
                                  {
  (yyval.select_no_paren_t) = (yyvsp[-1].select_no_paren_t);
  (yyval.select_no_paren_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7529 "bison_parser.cpp"
    break;

  case 317: /* set_operator: set_type opt_all  */
#line 2238 "bison_parser.y"
                                {
  (yyval.set_operator_t) = new SetOperator();
  (yyval.set_operator_t)->set_type_ = (yyvsp[-1].set_type_t);
  (yyval.set_operator_t)->opt_all_ = (yyvsp[0].opt_all_t);
}
#line 7539 "bison_parser.cpp"
    break;

  case 318: /* set_type: UNION  */
#line 2244 "bison_parser.y"
                 {
  (yyval.set_type_t) = new SetType();
  (yyval.set_type_t)->str_val_ = string("UNION");
}
#line 7548 "bison_parser.cpp"
    break;

  case 319: /* set_type: INTERSECT  */
#line 2248 "bison_parser.y"
            {
  (yyval.set_type_t) = new SetType();
  (yyval.set_type_t)->str_val_ = string("INTERSECT");
}
#line 7557 "bison_parser.cpp"
    break;

  case 320: /* set_type: EXCEPT  */
#line 2252 "bison_parser.y"
         {
  (yyval.set_type_t) = new SetType();
  (yyval.set_type_t)->str_val_ = string("EXCEPT");
}
#line 7566 "bison_parser.cpp"
    break;

  case 321: /* set_type: comment_literal set_type  */
#line 2256 "bison_parser.y"
                           {
		(yyval.set_type_t) = (yyvsp[0].set_type_t);
		(yyval.set_type_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7575 "bison_parser.cpp"
    break;

  case 322: /* set_type: set_type comment_literal  */
#line 2260 "bison_parser.y"
                           {
  (yyval.set_type_t) = (yyvsp[-1].set_type_t);
  (yyval.set_type_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7584 "bison_parser.cpp"
    break;

  case 323: /* opt_all: ALL  */
#line 2266 "bison_parser.y"
              {
  (yyval.opt_all_t) = new OptAll();
  (yyval.opt_all_t)->str_val_ = string("ALL");
}
#line 7593 "bison_parser.cpp"
    break;

  case 324: /* opt_all: %empty  */
#line 2270 "bison_parser.y"
              {
  (yyval.opt_all_t) = new OptAll();
  (yyval.opt_all_t)->str_val_ = string("");
}
#line 7602 "bison_parser.cpp"
    break;

  case 325: /* opt_all: comment_literal opt_all  */
#line 2274 "bison_parser.y"
                          {
		(yyval.opt_all_t) = (yyvsp[0].opt_all_t);
		(yyval.opt_all_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7611 "bison_parser.cpp"
    break;

  case 326: /* opt_all: opt_all comment_literal  */
#line 2278 "bison_parser.y"
                          {
  (yyval.opt_all_t) = (yyvsp[-1].opt_all_t);
  (yyval.opt_all_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7620 "bison_parser.cpp"
    break;

  case 327: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 2285 "bison_parser.y"
                                        {
  (yyval.select_clause_t) = new SelectClause();
  (yyval.select_clause_t)->sub_type_ = CASE0;
  (yyval.select_clause_t)->opt_top_ = (yyvsp[-5].opt_top_t);
  (yyval.select_clause_t)->opt_distinct_ = (yyvsp[-4].opt_distinct_t);
  (yyval.select_clause_t)->select_list_ = (yyvsp[-3].select_list_t);
  (yyval.select_clause_t)->opt_from_clause_ = (yyvsp[-2].opt_from_clause_t);
  (yyval.select_clause_t)->opt_where_ = (yyvsp[-1].opt_where_t);
  (yyval.select_clause_t)->opt_group_ = (yyvsp[0].opt_group_t);
}
#line 7635 "bison_parser.cpp"
    break;

  case 328: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group window_clause  */
#line 2297 "bison_parser.y"
                      {
  (yyval.select_clause_t) = new SelectClause();
  (yyval.select_clause_t)->sub_type_ = CASE1;
  (yyval.select_clause_t)->opt_top_ = (yyvsp[-6].opt_top_t);
  (yyval.select_clause_t)->opt_distinct_ = (yyvsp[-5].opt_distinct_t);
  (yyval.select_clause_t)->select_list_ = (yyvsp[-4].select_list_t);
  (yyval.select_clause_t)->opt_from_clause_ = (yyvsp[-3].opt_from_clause_t);
  (yyval.select_clause_t)->opt_where_ = (yyvsp[-2].opt_where_t);
  (yyval.select_clause_t)->opt_group_ = (yyvsp[-1].opt_group_t);
  (yyval.select_clause_t)->window_clause_ = (yyvsp[0].window_clause_t);
}
#line 7651 "bison_parser.cpp"
    break;

  case 329: /* select_clause: comment_literal select_clause  */
#line 2308 "bison_parser.y"
                                {
    // fprintf(stdout,"reach first comment");
		(yyval.select_clause_t) = (yyvsp[0].select_clause_t);
		(yyval.select_clause_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7661 "bison_parser.cpp"
    break;

  case 330: /* select_clause: select_clause comment_literal  */
#line 2313 "bison_parser.y"
                                {
  (yyval.select_clause_t) = (yyvsp[-1].select_clause_t);
  (yyval.select_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7670 "bison_parser.cpp"
    break;

  case 331: /* window_clause: WINDOW windowdefn_list  */
#line 2319 "bison_parser.y"
                                       {
  (yyval.window_clause_t) = new WindowClause();
  (yyval.window_clause_t)->windowdefn_list_ = (yyvsp[0].window_defn_list_t);
}
#line 7679 "bison_parser.cpp"
    break;

  case 332: /* window_clause: comment_literal window_clause  */
#line 2323 "bison_parser.y"
                                {
		(yyval.window_clause_t) = (yyvsp[0].window_clause_t);
		(yyval.window_clause_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7688 "bison_parser.cpp"
    break;

  case 333: /* window_clause: window_clause comment_literal  */
#line 2327 "bison_parser.y"
                                {
  (yyval.window_clause_t) = (yyvsp[-1].window_clause_t);
  (yyval.window_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7697 "bison_parser.cpp"
    break;

  case 334: /* windowdefn_list: windowdefn  */
#line 2333 "bison_parser.y"
                             {
  (yyval.window_defn_list_t) = new WindowDefnList();
  (yyval.window_defn_list_t)->v_windowdefn_list_.push_back((yyvsp[0].window_defn_t));
}
#line 7706 "bison_parser.cpp"
    break;

  case 335: /* windowdefn_list: windowdefn_list ',' windowdefn  */
#line 2337 "bison_parser.y"
                                 {
  (yyvsp[-2].window_defn_list_t)->v_windowdefn_list_.push_back((yyvsp[0].window_defn_t));
  (yyval.window_defn_list_t) = (yyvsp[-2].window_defn_list_t);
}
#line 7715 "bison_parser.cpp"
    break;

  case 336: /* windowdefn: IDENTIFIER AS '(' window ')'  */
#line 2342 "bison_parser.y"
                                          {
  (yyval.window_defn_t) = new WindowDefn();
  (yyval.window_defn_t)->id_ = new Identifier((yyvsp[-4].sval));
  (yyval.window_defn_t)->window_ = (yyvsp[-1].window_t);
  free((yyvsp[-4].sval));
}
#line 7726 "bison_parser.cpp"
    break;

  case 337: /* windowdefn: comment_literal windowdefn  */
#line 2348 "bison_parser.y"
                             {
		(yyval.window_defn_t) = (yyvsp[0].window_defn_t);
		(yyval.window_defn_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7735 "bison_parser.cpp"
    break;

  case 338: /* windowdefn: windowdefn comment_literal  */
#line 2352 "bison_parser.y"
                             {
  (yyval.window_defn_t) = (yyvsp[-1].window_defn_t);
  (yyval.window_defn_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7744 "bison_parser.cpp"
    break;

  case 339: /* window: opt_base_window_name PARTITION BY expr_list opt_order opt_frame  */
#line 2358 "bison_parser.y"
                                                                         {
  (yyval.window_t) = new Window();
  (yyval.window_t)->sub_type_ = CASE0;
  (yyval.window_t)->opt_base_window_name_ = (yyvsp[-5].opt_base_window_name_t);
  (yyval.window_t)->expr_list_ = (yyvsp[-2].expr_list_t);
  (yyval.window_t)->opt_order_ = (yyvsp[-1].opt_order_t);
  (yyval.window_t)->opt_frame_ = (yyvsp[0].opt_frame_t);
}
#line 7757 "bison_parser.cpp"
    break;

  case 340: /* window: opt_base_window_name opt_order opt_frame  */
#line 2366 "bison_parser.y"
                                           {
  (yyval.window_t) = new Window();
  (yyval.window_t)->sub_type_ = CASE1;
  (yyval.window_t)->opt_base_window_name_ = (yyvsp[-2].opt_base_window_name_t);
  (yyval.window_t)->opt_order_ = (yyvsp[-1].opt_order_t);
  (yyval.window_t)->opt_frame_ = (yyvsp[0].opt_frame_t);
}
#line 7769 "bison_parser.cpp"
    break;

  case 341: /* opt_base_window_name: IDENTIFIER  */
#line 2374 "bison_parser.y"
                                  {
  (yyval.opt_base_window_name_t) = new OptBaseWindowName();
  (yyval.opt_base_window_name_t)->sub_type_ = CASE0;
  (yyval.opt_base_window_name_t)->id_ = new Identifier((yyvsp[0].sval));
  free((yyvsp[0].sval));
}
#line 7780 "bison_parser.cpp"
    break;

  case 342: /* opt_base_window_name: %empty  */
#line 2380 "bison_parser.y"
              {
  (yyval.opt_base_window_name_t) = new OptBaseWindowName();
  (yyval.opt_base_window_name_t)->sub_type_ = CASE1;
}
#line 7789 "bison_parser.cpp"
    break;

  case 343: /* opt_base_window_name: comment_literal opt_base_window_name  */
#line 2384 "bison_parser.y"
                                       {
		(yyval.opt_base_window_name_t) = (yyvsp[0].opt_base_window_name_t);
		(yyval.opt_base_window_name_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7798 "bison_parser.cpp"
    break;

  case 344: /* opt_base_window_name: opt_base_window_name comment_literal  */
#line 2388 "bison_parser.y"
                                       {
  (yyval.opt_base_window_name_t) = (yyvsp[-1].opt_base_window_name_t);
  (yyval.opt_base_window_name_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7807 "bison_parser.cpp"
    break;

  case 345: /* opt_frame: range_or_rows frame_bound_s opt_frame_exclude  */
#line 2394 "bison_parser.y"
                                                          {
  (yyval.opt_frame_t) = new OptFrame();
  (yyval.opt_frame_t)->sub_type_ = CASE0;
  (yyval.opt_frame_t)->range_or_rows_ = (yyvsp[-2].range_or_rows_t);
  (yyval.opt_frame_t)->frame_bound_s_ = (yyvsp[-1].frame_bound_s_t);
  (yyval.opt_frame_t)->opt_frame_exclude_ = (yyvsp[0].opt_frame_exclude_t);
}
#line 7819 "bison_parser.cpp"
    break;

  case 346: /* opt_frame: range_or_rows BETWEEN frame_bound_s AND frame_bound_e opt_frame_exclude  */
#line 2401 "bison_parser.y"
                                                                          {
  (yyval.opt_frame_t) = new OptFrame();
  (yyval.opt_frame_t)->sub_type_ = CASE1;
  (yyval.opt_frame_t)->range_or_rows_ = (yyvsp[-5].range_or_rows_t);
  (yyval.opt_frame_t)->frame_bound_s_ = (yyvsp[-3].frame_bound_s_t);
  (yyval.opt_frame_t)->frame_bound_e_ = (yyvsp[-1].frame_bound_e_t);
  (yyval.opt_frame_t)->opt_frame_exclude_ = (yyvsp[0].opt_frame_exclude_t);
}
#line 7832 "bison_parser.cpp"
    break;

  case 347: /* opt_frame: %empty  */
#line 2409 "bison_parser.y"
              {
  (yyval.opt_frame_t) = new OptFrame();
  (yyval.opt_frame_t)->sub_type_ = CASE2;
}
#line 7841 "bison_parser.cpp"
    break;

  case 348: /* opt_frame: comment_literal opt_frame  */
#line 2413 "bison_parser.y"
                            {
		(yyval.opt_frame_t) = (yyvsp[0].opt_frame_t);
		(yyval.opt_frame_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7850 "bison_parser.cpp"
    break;

  case 349: /* opt_frame: opt_frame comment_literal  */
#line 2417 "bison_parser.y"
                            {
  (yyval.opt_frame_t) = (yyvsp[-1].opt_frame_t);
  (yyval.opt_frame_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7859 "bison_parser.cpp"
    break;

  case 350: /* range_or_rows: RANGE  */
#line 2423 "bison_parser.y"
                      {
  (yyval.range_or_rows_t) = new RangeOrRows();
  (yyval.range_or_rows_t)->str_val_ = string("RANGE");
}
#line 7868 "bison_parser.cpp"
    break;

  case 351: /* range_or_rows: ROWS  */
#line 2427 "bison_parser.y"
       {
  (yyval.range_or_rows_t) = new RangeOrRows();
  (yyval.range_or_rows_t)->str_val_ = string("ROWS");
}
#line 7877 "bison_parser.cpp"
    break;

  case 352: /* range_or_rows: GROUPS  */
#line 2431 "bison_parser.y"
         {
  (yyval.range_or_rows_t) = new RangeOrRows();
  (yyval.range_or_rows_t)->str_val_ = string("GROUPS");
}
#line 7886 "bison_parser.cpp"
    break;

  case 353: /* range_or_rows: comment_literal range_or_rows  */
#line 2435 "bison_parser.y"
                                {
		(yyval.range_or_rows_t) = (yyvsp[0].range_or_rows_t);
		(yyval.range_or_rows_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7895 "bison_parser.cpp"
    break;

  case 354: /* range_or_rows: range_or_rows comment_literal  */
#line 2439 "bison_parser.y"
                                {
  (yyval.range_or_rows_t) = (yyvsp[-1].range_or_rows_t);
  (yyval.range_or_rows_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7904 "bison_parser.cpp"
    break;

  case 355: /* frame_bound_s: frame_bound  */
#line 2445 "bison_parser.y"
                            {
  (yyval.frame_bound_s_t) = new FrameBoundS();
  (yyval.frame_bound_s_t)->sub_type_ = CASE0;
  (yyval.frame_bound_s_t)->frame_bound_ = (yyvsp[0].frame_bound_t);
}
#line 7914 "bison_parser.cpp"
    break;

  case 356: /* frame_bound_s: UNBOUNDED PRECEDING  */
#line 2450 "bison_parser.y"
                      {
  (yyval.frame_bound_s_t) = new FrameBoundS();
  (yyval.frame_bound_s_t)->sub_type_ = CASE1;
}
#line 7923 "bison_parser.cpp"
    break;

  case 357: /* frame_bound_s: comment_literal frame_bound_s  */
#line 2454 "bison_parser.y"
                                {
		(yyval.frame_bound_s_t) = (yyvsp[0].frame_bound_s_t);
		(yyval.frame_bound_s_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7932 "bison_parser.cpp"
    break;

  case 358: /* frame_bound_s: frame_bound_s comment_literal  */
#line 2458 "bison_parser.y"
                                {
  (yyval.frame_bound_s_t) = (yyvsp[-1].frame_bound_s_t);
  (yyval.frame_bound_s_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7941 "bison_parser.cpp"
    break;

  case 359: /* frame_bound_e: frame_bound  */
#line 2464 "bison_parser.y"
                            {
  (yyval.frame_bound_e_t) = new FrameBoundE();
  (yyval.frame_bound_e_t)->sub_type_ = CASE0;
  (yyval.frame_bound_e_t)->frame_bound_ = (yyvsp[0].frame_bound_t);
}
#line 7951 "bison_parser.cpp"
    break;

  case 360: /* frame_bound_e: UNBOUNDED FOLLOWING  */
#line 2469 "bison_parser.y"
                      {
  (yyval.frame_bound_e_t) = new FrameBoundE();
  (yyval.frame_bound_e_t)->sub_type_ = CASE1;
}
#line 7960 "bison_parser.cpp"
    break;

  case 361: /* frame_bound_e: comment_literal frame_bound_e  */
#line 2473 "bison_parser.y"
                                {
		(yyval.frame_bound_e_t) = (yyvsp[0].frame_bound_e_t);
		(yyval.frame_bound_e_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 7969 "bison_parser.cpp"
    break;

  case 362: /* frame_bound_e: frame_bound_e comment_literal  */
#line 2477 "bison_parser.y"
                                {
  (yyval.frame_bound_e_t) = (yyvsp[-1].frame_bound_e_t);
  (yyval.frame_bound_e_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 7978 "bison_parser.cpp"
    break;

  case 363: /* frame_bound: expr PRECEDING  */
#line 2483 "bison_parser.y"
                             {
  (yyval.frame_bound_t) = new FrameBound();
  (yyval.frame_bound_t)->sub_type_ = CASE0;
  (yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);
}
#line 7988 "bison_parser.cpp"
    break;

  case 364: /* frame_bound: expr FOLLOWING  */
#line 2488 "bison_parser.y"
                 {
  (yyval.frame_bound_t) = new FrameBound();
  (yyval.frame_bound_t)->sub_type_ = CASE1;
  (yyval.frame_bound_t)->expr_ = (yyvsp[-1].expr_t);
}
#line 7998 "bison_parser.cpp"
    break;

  case 365: /* frame_bound: CURRENT ROW  */
#line 2493 "bison_parser.y"
              {
  (yyval.frame_bound_t) = new FrameBound();
  (yyval.frame_bound_t)->sub_type_ = CASE2;
}
#line 8007 "bison_parser.cpp"
    break;

  case 366: /* frame_bound: comment_literal frame_bound  */
#line 2497 "bison_parser.y"
                              {
		(yyval.frame_bound_t) = (yyvsp[0].frame_bound_t);
		(yyval.frame_bound_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 8016 "bison_parser.cpp"
    break;

  case 367: /* frame_bound: frame_bound comment_literal  */
#line 2501 "bison_parser.y"
                              {
  (yyval.frame_bound_t) = (yyvsp[-1].frame_bound_t);
  (yyval.frame_bound_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 8025 "bison_parser.cpp"
    break;

  case 368: /* opt_frame_exclude: EXCLUDE frame_exclude  */
#line 2507 "bison_parser.y"
                                          {
  (yyval.opt_frame_exclude_t) = new OptFrameExclude();
  (yyval.opt_frame_exclude_t)->sub_type_ = CASE0;
  (yyval.opt_frame_exclude_t)->frame_exclude_ = (yyvsp[0].frame_exclude_t);
}
#line 8035 "bison_parser.cpp"
    break;

  case 369: /* opt_frame_exclude: %empty  */
#line 2512 "bison_parser.y"
              {
  (yyval.opt_frame_exclude_t) = new OptFrameExclude();
  (yyval.opt_frame_exclude_t)->sub_type_ = CASE1;
}
#line 8044 "bison_parser.cpp"
    break;

  case 370: /* opt_frame_exclude: comment_literal opt_frame_exclude  */
#line 2516 "bison_parser.y"
                                    {
		(yyval.opt_frame_exclude_t) = (yyvsp[0].opt_frame_exclude_t);
		(yyval.opt_frame_exclude_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 8053 "bison_parser.cpp"
    break;

  case 371: /* opt_frame_exclude: opt_frame_exclude comment_literal  */
#line 2520 "bison_parser.y"
                                    {
  (yyval.opt_frame_exclude_t) = (yyvsp[-1].opt_frame_exclude_t);
  (yyval.opt_frame_exclude_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 8062 "bison_parser.cpp"
    break;

  case 372: /* frame_exclude: NO OTHERS  */
#line 2526 "bison_parser.y"
                          {
  (yyval.frame_exclude_t) = new FrameExclude();
  (yyval.frame_exclude_t)->str_val_ = string("NO OTHERS");
}
#line 8071 "bison_parser.cpp"
    break;

  case 373: /* frame_exclude: CURRENT ROW  */
#line 2530 "bison_parser.y"
              {
  (yyval.frame_exclude_t) = new FrameExclude();
  (yyval.frame_exclude_t)->str_val_ = string("CURRENT ROW");
}
#line 8080 "bison_parser.cpp"
    break;

  case 374: /* frame_exclude: GROUP  */
#line 2534 "bison_parser.y"
        {
  (yyval.frame_exclude_t) = new FrameExclude();
  (yyval.frame_exclude_t)->str_val_ = string("GROUP");
}
#line 8089 "bison_parser.cpp"
    break;

  case 375: /* frame_exclude: TIES  */
#line 2538 "bison_parser.y"
       {
  (yyval.frame_exclude_t) = new FrameExclude();
  (yyval.frame_exclude_t)->str_val_ = string("TIES");
}
#line 8098 "bison_parser.cpp"
    break;

  case 376: /* frame_exclude: comment_literal frame_exclude  */
#line 2542 "bison_parser.y"
                                {
		(yyval.frame_exclude_t) = (yyvsp[0].frame_exclude_t);
		(yyval.frame_exclude_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 8107 "bison_parser.cpp"
    break;

  case 377: /* frame_exclude: frame_exclude comment_literal  */
#line 2546 "bison_parser.y"
                                {
  (yyval.frame_exclude_t) = (yyvsp[-1].frame_exclude_t);
  (yyval.frame_exclude_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 8116 "bison_parser.cpp"
    break;

  case 378: /* opt_distinct: DISTINCT  */
#line 2552 "bison_parser.y"
                        {
  (yyval.opt_distinct_t) = new OptDistinct();
  (yyval.opt_distinct_t)->str_val_ = string("DISTINCT");
}
#line 8125 "bison_parser.cpp"
    break;

  case 379: /* opt_distinct: %empty  */
#line 2556 "bison_parser.y"
              {
  (yyval.opt_distinct_t) = new OptDistinct();
  (yyval.opt_distinct_t)->str_val_ = string("");
}
#line 8134 "bison_parser.cpp"
    break;

  case 380: /* opt_distinct: comment_literal opt_distinct  */
#line 2560 "bison_parser.y"
                               {
		(yyval.opt_distinct_t) = (yyvsp[0].opt_distinct_t);
		(yyval.opt_distinct_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 8143 "bison_parser.cpp"
    break;

  case 381: /* opt_distinct: opt_distinct comment_literal  */
#line 2564 "bison_parser.y"
                              {
  (yyval.opt_distinct_t) = (yyvsp[-1].opt_distinct_t);
  (yyval.opt_distinct_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 8152 "bison_parser.cpp"
    break;

  case 382: /* select_list: expr_list  */
#line 2570 "bison_parser.y"
                        {
  (yyval.select_list_t) = new SelectList();
  (yyval.select_list_t)->expr_list_ = (yyvsp[0].expr_list_t);
}
#line 8161 "bison_parser.cpp"
    break;

  case 383: /* opt_from_clause: from_clause  */
#line 2575 "bison_parser.y"
                              {
  (yyval.opt_from_clause_t) = new OptFromClause();
  (yyval.opt_from_clause_t)->sub_type_ = CASE0;
  (yyval.opt_from_clause_t)->from_clause_ = (yyvsp[0].from_clause_t);
}
#line 8171 "bison_parser.cpp"
    break;

  case 384: /* opt_from_clause: %empty  */
#line 2580 "bison_parser.y"
              {
  (yyval.opt_from_clause_t) = new OptFromClause();
  (yyval.opt_from_clause_t)->sub_type_ = CASE1;
}
#line 8180 "bison_parser.cpp"
    break;

  case 385: /* from_clause: FROM table_ref  */
#line 2585 "bison_parser.y"
                             {
  (yyval.from_clause_t) = new FromClause();
  (yyval.from_clause_t)->table_ref_ = (yyvsp[0].table_ref_t);
}
#line 8189 "bison_parser.cpp"
    break;

  case 386: /* from_clause: comment_literal from_clause  */
#line 2589 "bison_parser.y"
                              {
		(yyval.from_clause_t) = (yyvsp[0].from_clause_t);
		(yyval.from_clause_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 8198 "bison_parser.cpp"
    break;

  case 387: /* from_clause: from_clause comment_literal  */
#line 2593 "bison_parser.y"
                              {
  (yyval.from_clause_t) = (yyvsp[-1].from_clause_t);
  (yyval.from_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 8207 "bison_parser.cpp"
    break;

  case 388: /* opt_where: WHERE expr  */
#line 2599 "bison_parser.y"
                       {
  (yyval.opt_where_t) = new OptWhere();
  (yyval.opt_where_t)->sub_type_ = CASE0;
  (yyval.opt_where_t)->expr_ = (yyvsp[0].expr_t);
}
#line 8217 "bison_parser.cpp"
    break;

  case 389: /* opt_where: %empty  */
#line 2604 "bison_parser.y"
              {
  (yyval.opt_where_t) = new OptWhere();
  (yyval.opt_where_t)->sub_type_ = CASE1;
}
#line 8226 "bison_parser.cpp"
    break;

  case 390: /* opt_where: comment_literal opt_where  */
#line 2608 "bison_parser.y"
                            {
		(yyval.opt_where_t) = (yyvsp[0].opt_where_t);
		(yyval.opt_where_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 8235 "bison_parser.cpp"
    break;

  case 391: /* opt_where: opt_where comment_literal  */
#line 2612 "bison_parser.y"
                            {
  (yyval.opt_where_t) = (yyvsp[-1].opt_where_t);
  (yyval.opt_where_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 8244 "bison_parser.cpp"
    break;

  case 392: /* opt_group: GROUP BY expr_list opt_having  */
#line 2618 "bison_parser.y"
                                          {
  (yyval.opt_group_t) = new OptGroup();
  (yyval.opt_group_t)->sub_type_ = CASE0;
  (yyval.opt_group_t)->expr_list_ = (yyvsp[-1].expr_list_t);
  (yyval.opt_group_t)->opt_having_ = (yyvsp[0].opt_having_t);
}
#line 8255 "bison_parser.cpp"
    break;

  case 393: /* opt_group: %empty  */
#line 2624 "bison_parser.y"
              {
  (yyval.opt_group_t) = new OptGroup();
  (yyval.opt_group_t)->sub_type_ = CASE1;
}
#line 8264 "bison_parser.cpp"
    break;

  case 394: /* opt_group: comment_literal opt_group  */
#line 2628 "bison_parser.y"
                            {
		(yyval.opt_group_t) = (yyvsp[0].opt_group_t);
		(yyval.opt_group_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 8273 "bison_parser.cpp"
    break;

  case 395: /* opt_group: opt_group comment_literal  */
#line 2632 "bison_parser.y"
                                    {
		(yyval.opt_group_t) = (yyvsp[-1].opt_group_t);
		(yyval.opt_group_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8282 "bison_parser.cpp"
    break;

  case 396: /* opt_having: HAVING expr  */
#line 2638 "bison_parser.y"
                         {
  (yyval.opt_having_t) = new OptHaving();
  (yyval.opt_having_t)->sub_type_ = CASE0;
  (yyval.opt_having_t)->expr_ = (yyvsp[0].expr_t);
}
#line 8292 "bison_parser.cpp"
    break;

  case 397: /* opt_having: %empty  */
#line 2643 "bison_parser.y"
              {
  (yyval.opt_having_t) = new OptHaving();
  (yyval.opt_having_t)->sub_type_ = CASE1;
}
#line 8301 "bison_parser.cpp"
    break;

  case 398: /* opt_having: comment_literal opt_having  */
#line 2647 "bison_parser.y"
                             {
		(yyval.opt_having_t) = (yyvsp[0].opt_having_t);
		(yyval.opt_having_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 8310 "bison_parser.cpp"
    break;

  case 399: /* opt_having: opt_having comment_literal  */
#line 2651 "bison_parser.y"
                             {
  (yyval.opt_having_t) = (yyvsp[-1].opt_having_t);
  (yyval.opt_having_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 8319 "bison_parser.cpp"
    break;

  case 400: /* opt_order: ORDER BY order_list  */
#line 2657 "bison_parser.y"
                                {
  (yyval.opt_order_t) = new OptOrder();
  (yyval.opt_order_t)->sub_type_ = CASE0;
  (yyval.opt_order_t)->order_list_ = (yyvsp[0].order_list_t);
}
#line 8329 "bison_parser.cpp"
    break;

  case 401: /* opt_order: %empty  */
#line 2662 "bison_parser.y"
              {
  (yyval.opt_order_t) = new OptOrder();
  (yyval.opt_order_t)->sub_type_ = CASE1;
}
#line 8338 "bison_parser.cpp"
    break;

  case 402: /* opt_order: comment_literal opt_order  */
#line 2666 "bison_parser.y"
                            {
		(yyval.opt_order_t) = (yyvsp[0].opt_order_t);
		(yyval.opt_order_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 8347 "bison_parser.cpp"
    break;

  case 403: /* opt_order: opt_order comment_literal  */
#line 2670 "bison_parser.y"
                            {
  (yyval.opt_order_t) = (yyvsp[-1].opt_order_t);
  (yyval.opt_order_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 8356 "bison_parser.cpp"
    break;

  case 404: /* order_list: order_desc  */
#line 2676 "bison_parser.y"
                        {
  (yyval.order_list_t) = new OrderList();
  (yyval.order_list_t)->v_order_desc_.push_back((yyvsp[0].order_desc_t));
}
#line 8365 "bison_parser.cpp"
    break;

  case 405: /* order_list: order_list ',' order_desc  */
#line 2680 "bison_parser.y"
                            {
  (yyvsp[-2].order_list_t)->v_order_desc_.push_back((yyvsp[0].order_desc_t));
  (yyval.order_list_t) = (yyvsp[-2].order_list_t);
}
#line 8374 "bison_parser.cpp"
    break;

  case 406: /* order_list: comment_literal order_list  */
#line 2684 "bison_parser.y"
                             {
		(yyval.order_list_t) = (yyvsp[0].order_list_t);
		(yyval.order_list_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 8383 "bison_parser.cpp"
    break;

  case 407: /* order_list: order_list comment_literal  */
#line 2688 "bison_parser.y"
                                     {
		(yyval.order_list_t) = (yyvsp[-1].order_list_t);
		(yyval.order_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8392 "bison_parser.cpp"
    break;

  case 408: /* order_desc: expr opt_order_type opt_null  */
#line 2694 "bison_parser.y"
                                          {
  (yyval.order_desc_t) = new OrderDesc();
  (yyval.order_desc_t)->expr_ = (yyvsp[-2].expr_t);
  (yyval.order_desc_t)->opt_order_type_ = (yyvsp[-1].opt_order_type_t);
  (yyval.order_desc_t)->opt_null_ = (yyvsp[0].opt_null_t);
}
#line 8403 "bison_parser.cpp"
    break;

  case 409: /* opt_order_type: ASC  */
#line 2701 "bison_parser.y"
                     {
  (yyval.opt_order_type_t) = new OptOrderType();
  (yyval.opt_order_type_t)->str_val_ = string("ASC");
}
#line 8412 "bison_parser.cpp"
    break;

  case 410: /* opt_order_type: DESC  */
#line 2705 "bison_parser.y"
       {
  (yyval.opt_order_type_t) = new OptOrderType();
  (yyval.opt_order_type_t)->str_val_ = string("DESC");
}
#line 8421 "bison_parser.cpp"
    break;

  case 411: /* opt_order_type: %empty  */
#line 2709 "bison_parser.y"
              {
  (yyval.opt_order_type_t) = new OptOrderType();
  (yyval.opt_order_type_t)->str_val_ = string("");
}
#line 8430 "bison_parser.cpp"
    break;

  case 412: /* opt_order_type: comment_literal opt_order_type  */
#line 2713 "bison_parser.y"
                                 {
		(yyval.opt_order_type_t) = (yyvsp[0].opt_order_type_t);
		(yyval.opt_order_type_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 8439 "bison_parser.cpp"
    break;

  case 413: /* opt_order_type: opt_order_type comment_literal  */
#line 2717 "bison_parser.y"
                                         {
		(yyval.opt_order_type_t) = (yyvsp[-1].opt_order_type_t);
		(yyval.opt_order_type_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8448 "bison_parser.cpp"
    break;

  case 414: /* opt_top: TOP int_literal  */
#line 2723 "bison_parser.y"
                          {
  (yyval.opt_top_t) = new OptTop();
  (yyval.opt_top_t)->sub_type_ = CASE0;
  (yyval.opt_top_t)->int_literal_ = (yyvsp[0].int_literal_t);
}
#line 8458 "bison_parser.cpp"
    break;

  case 415: /* opt_top: %empty  */
#line 2728 "bison_parser.y"
              {
  (yyval.opt_top_t) = new OptTop();
  (yyval.opt_top_t)->sub_type_ = CASE1;
}
#line 8467 "bison_parser.cpp"
    break;

  case 416: /* opt_top: comment_literal opt_top  */
#line 2732 "bison_parser.y"
                          {
		(yyval.opt_top_t) = (yyvsp[0].opt_top_t);
		(yyval.opt_top_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 8476 "bison_parser.cpp"
    break;

  case 417: /* opt_top: opt_top comment_literal  */
#line 2736 "bison_parser.y"
                          {
  (yyval.opt_top_t) = (yyvsp[-1].opt_top_t);
  (yyval.opt_top_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 8485 "bison_parser.cpp"
    break;

  case 418: /* opt_limit: LIMIT expr  */
#line 2742 "bison_parser.y"
                       {
  (yyval.opt_limit_t) = new OptLimit();
  (yyval.opt_limit_t)->sub_type_ = CASE0;
  (yyval.opt_limit_t)->expr1_ = (yyvsp[0].expr_t);
}
#line 8495 "bison_parser.cpp"
    break;

  case 419: /* opt_limit: OFFSET expr  */
#line 2747 "bison_parser.y"
              {
  (yyval.opt_limit_t) = new OptLimit();
  (yyval.opt_limit_t)->sub_type_ = CASE1;
  (yyval.opt_limit_t)->expr1_ = (yyvsp[0].expr_t);
}
#line 8505 "bison_parser.cpp"
    break;

  case 420: /* opt_limit: LIMIT expr OFFSET expr  */
#line 2752 "bison_parser.y"
                         {
  (yyval.opt_limit_t) = new OptLimit();
  (yyval.opt_limit_t)->sub_type_ = CASE2;
  (yyval.opt_limit_t)->expr1_ = (yyvsp[-2].expr_t);
  (yyval.opt_limit_t)->expr2_ = (yyvsp[0].expr_t);
}
#line 8516 "bison_parser.cpp"
    break;

  case 421: /* opt_limit: LIMIT ALL  */
#line 2758 "bison_parser.y"
            {
  (yyval.opt_limit_t) = new OptLimit();
  (yyval.opt_limit_t)->sub_type_ = CASE3;
}
#line 8525 "bison_parser.cpp"
    break;

  case 422: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 2762 "bison_parser.y"
                        {
  (yyval.opt_limit_t) = new OptLimit();
  (yyval.opt_limit_t)->sub_type_ = CASE4;
  (yyval.opt_limit_t)->expr1_ = (yyvsp[0].expr_t);
}
#line 8535 "bison_parser.cpp"
    break;

  case 423: /* opt_limit: %empty  */
#line 2767 "bison_parser.y"
              { (yyval.opt_limit_t) = nullptr; }
#line 8541 "bison_parser.cpp"
    break;

  case 424: /* opt_limit: comment_literal opt_limit  */
#line 2768 "bison_parser.y"
                            {
		(yyval.opt_limit_t) = (yyvsp[0].opt_limit_t);
		(yyval.opt_limit_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 8550 "bison_parser.cpp"
    break;

  case 425: /* opt_limit: opt_limit comment_literal  */
#line 2772 "bison_parser.y"
                            {
  (yyval.opt_limit_t) = (yyvsp[-1].opt_limit_t);
  (yyval.opt_limit_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 8559 "bison_parser.cpp"
    break;

  case 426: /* expr_list: expr_alias  */
#line 2781 "bison_parser.y"
                       {
  (yyval.expr_list_t) = new ExprList();
  (yyval.expr_list_t)->v_expr_list_.push_back((yyvsp[0].expr_alias_t));
}
#line 8568 "bison_parser.cpp"
    break;

  case 427: /* expr_list: expr_list ',' expr_alias  */
#line 2785 "bison_parser.y"
                           {
  (yyvsp[-2].expr_list_t)->v_expr_list_.push_back((yyvsp[0].expr_alias_t));
  (yyval.expr_list_t) = (yyvsp[-2].expr_list_t);
}
#line 8577 "bison_parser.cpp"
    break;

  case 428: /* expr_list: comment_literal expr_list  */
#line 2789 "bison_parser.y"
                            {
		(yyval.expr_list_t) = (yyvsp[0].expr_list_t);
		(yyval.expr_list_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 8586 "bison_parser.cpp"
    break;

  case 429: /* expr_list: expr_list comment_literal  */
#line 2793 "bison_parser.y"
                                    {
		(yyval.expr_list_t) = (yyvsp[-1].expr_list_t);
		(yyval.expr_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8595 "bison_parser.cpp"
    break;

  case 430: /* opt_literal_list: literal_list  */
#line 2799 "bison_parser.y"
                                {
  (yyval.opt_literal_list_t) = new OptLiteralList();
  (yyval.opt_literal_list_t)->sub_type_ = CASE0;
  (yyval.opt_literal_list_t)->literal_list_ = (yyvsp[0].literal_list_t);
}
#line 8605 "bison_parser.cpp"
    break;

  case 431: /* opt_literal_list: %empty  */
#line 2804 "bison_parser.y"
              {
  (yyval.opt_literal_list_t) = new OptLiteralList();
  (yyval.opt_literal_list_t)->sub_type_ = CASE1;
}
#line 8614 "bison_parser.cpp"
    break;

  case 432: /* opt_literal_list: comment_literal opt_literal_list  */
#line 2808 "bison_parser.y"
                                   {
		(yyval.opt_literal_list_t) = (yyvsp[0].opt_literal_list_t);
		(yyval.opt_literal_list_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 8623 "bison_parser.cpp"
    break;

  case 433: /* opt_literal_list: opt_literal_list comment_literal  */
#line 2812 "bison_parser.y"
                                           {
		(yyval.opt_literal_list_t) = (yyvsp[-1].opt_literal_list_t);
		(yyval.opt_literal_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8632 "bison_parser.cpp"
    break;

  case 434: /* literal_list: literal  */
#line 2818 "bison_parser.y"
                       {
  (yyval.literal_list_t) = new LiteralList();
  (yyval.literal_list_t)->v_literal_list_.push_back((yyvsp[0].literal_t));
}
#line 8641 "bison_parser.cpp"
    break;

  case 435: /* literal_list: literal_list ',' literal  */
#line 2822 "bison_parser.y"
                           {
  (yyvsp[-2].literal_list_t)->v_literal_list_.push_back((yyvsp[0].literal_t));
  (yyval.literal_list_t) = (yyvsp[-2].literal_list_t);
}
#line 8650 "bison_parser.cpp"
    break;

  case 436: /* literal_list: comment_literal literal_list  */
#line 2826 "bison_parser.y"
                               {
		(yyval.literal_list_t) = (yyvsp[0].literal_list_t);
		(yyval.literal_list_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 8659 "bison_parser.cpp"
    break;

  case 437: /* literal_list: literal_list comment_literal  */
#line 2830 "bison_parser.y"
                                       {
		(yyval.literal_list_t) = (yyvsp[-1].literal_list_t);
		(yyval.literal_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 8668 "bison_parser.cpp"
    break;

  case 438: /* expr_alias: expr opt_alias  */
#line 2836 "bison_parser.y"
                            {
  (yyval.expr_alias_t) = new ExprAlias();
  (yyval.expr_alias_t)->expr_ = (yyvsp[-1].expr_t);
  (yyval.expr_alias_t)->opt_alias_ = (yyvsp[0].opt_alias_t);
}
#line 8678 "bison_parser.cpp"
    break;

  case 439: /* expr: operand  */
#line 2842 "bison_parser.y"
               { (yyval.expr_t) = (yyvsp[0].operand_t); }
#line 8684 "bison_parser.cpp"
    break;

  case 440: /* expr: between_expr  */
#line 2843 "bison_parser.y"
               { (yyval.expr_t) = (yyvsp[0].between_expr_t); }
#line 8690 "bison_parser.cpp"
    break;

  case 441: /* expr: logic_expr  */
#line 2844 "bison_parser.y"
             { (yyval.expr_t) = (yyvsp[0].logic_expr_t); }
#line 8696 "bison_parser.cpp"
    break;

  case 442: /* expr: exists_expr  */
#line 2845 "bison_parser.y"
              { (yyval.expr_t) = (yyvsp[0].exists_expr_t); }
#line 8702 "bison_parser.cpp"
    break;

  case 443: /* expr: in_expr  */
#line 2846 "bison_parser.y"
          { (yyval.expr_t) = (yyvsp[0].in_expr_t); }
#line 8708 "bison_parser.cpp"
    break;

  case 444: /* expr: cast_expr  */
#line 2847 "bison_parser.y"
            { (yyval.expr_t) = (yyvsp[0].cast_expr_t); }
#line 8714 "bison_parser.cpp"
    break;

  case 445: /* operand: '(' expr ')'  */
#line 2849 "bison_parser.y"
                       {
  (yyval.operand_t) = new Operand();
  (yyval.operand_t)->sub_type_ = CASE0;
  (yyval.operand_t)->expr_ = (yyvsp[-1].expr_t);
}
#line 8724 "bison_parser.cpp"
    break;

  case 446: /* operand: array_index  */
#line 2854 "bison_parser.y"
              {
  (yyval.operand_t) = new Operand();
  (yyval.operand_t)->sub_type_ = CASE1;
  (yyval.operand_t)->expr_ = (yyvsp[0].array_index_t);
}
#line 8734 "bison_parser.cpp"
    break;

  case 447: /* operand: scalar_expr  */
#line 2859 "bison_parser.y"
              {
  (yyval.operand_t) = new Operand();
  (yyval.operand_t)->sub_type_ = CASE1;
  (yyval.operand_t)->expr_ = (yyvsp[0].scalar_expr_t);
}
#line 8744 "bison_parser.cpp"
    break;

  case 448: /* operand: unary_expr  */
#line 2864 "bison_parser.y"
             {
  (yyval.operand_t) = new Operand();
  (yyval.operand_t)->sub_type_ = CASE1;
  (yyval.operand_t)->expr_ = (yyvsp[0].unary_expr_t);
}
#line 8754 "bison_parser.cpp"
    break;

  case 449: /* operand: binary_expr  */
#line 2869 "bison_parser.y"
              {
  (yyval.operand_t) = new Operand();
  (yyval.operand_t)->sub_type_ = CASE1;
  (yyval.operand_t)->expr_ = (yyvsp[0].binary_expr_t);
}
#line 8764 "bison_parser.cpp"
    break;

  case 450: /* operand: case_expr  */
#line 2874 "bison_parser.y"
            {
  (yyval.operand_t) = new Operand();
  (yyval.operand_t)->sub_type_ = CASE1;
  (yyval.operand_t)->expr_ = (yyvsp[0].case_expr_t);
}
#line 8774 "bison_parser.cpp"
    break;

  case 451: /* operand: function_expr  */
#line 2879 "bison_parser.y"
                {
  (yyval.operand_t) = new Operand();
  (yyval.operand_t)->sub_type_ = CASE1;
  (yyval.operand_t)->expr_ = (yyvsp[0].function_expr_t);
}
#line 8784 "bison_parser.cpp"
    break;

  case 452: /* operand: extract_expr  */
#line 2884 "bison_parser.y"
               {
  (yyval.operand_t) = new Operand();
  (yyval.operand_t)->sub_type_ = CASE1;
  (yyval.operand_t)->expr_ = (yyvsp[0].extract_expr_t);
}
#line 8794 "bison_parser.cpp"
    break;

  case 453: /* operand: array_expr  */
#line 2889 "bison_parser.y"
             {
  (yyval.operand_t) = new Operand();
  (yyval.operand_t)->sub_type_ = CASE1;
  (yyval.operand_t)->expr_ = (yyvsp[0].array_expr_t);
}
#line 8804 "bison_parser.cpp"
    break;

  case 454: /* operand: '(' select_no_paren ')'  */
#line 2894 "bison_parser.y"
                          {
  (yyval.operand_t) = new Operand();
  (yyval.operand_t)->sub_type_ = CASE2;
  (yyval.operand_t)->select_no_paren_ = (yyvsp[-1].select_no_paren_t);
}
#line 8814 "bison_parser.cpp"
    break;

  case 455: /* operand: comment_literal operand  */
#line 2899 "bison_parser.y"
                          {
		(yyval.operand_t) = (yyvsp[0].operand_t);
		(yyval.operand_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 8823 "bison_parser.cpp"
    break;

  case 456: /* operand: operand comment_literal  */
#line 2903 "bison_parser.y"
                          {
  (yyval.operand_t) = (yyvsp[-1].operand_t);
  (yyval.operand_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 8832 "bison_parser.cpp"
    break;

  case 457: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 2909 "bison_parser.y"
                                             {
  (yyval.cast_expr_t) = new CastExpr();
  (yyval.cast_expr_t)->expr_ = (yyvsp[-3].expr_t);
  (yyval.cast_expr_t)->column_type_ = (yyvsp[-1].column_type_t);
}
#line 8842 "bison_parser.cpp"
    break;

  case 458: /* cast_expr: comment_literal cast_expr  */
#line 2914 "bison_parser.y"
                            {
		(yyval.cast_expr_t) = (yyvsp[0].cast_expr_t);
		(yyval.cast_expr_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 8851 "bison_parser.cpp"
    break;

  case 459: /* cast_expr: cast_expr comment_literal  */
#line 2918 "bison_parser.y"
                            {
  (yyval.cast_expr_t) = (yyvsp[-1].cast_expr_t);
  (yyval.cast_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 8860 "bison_parser.cpp"
    break;

  case 460: /* scalar_expr: column_name  */
#line 2924 "bison_parser.y"
                          {
  (yyval.scalar_expr_t) = new ScalarExpr();
  (yyval.scalar_expr_t)->sub_type_ = CASE0;
  (yyval.scalar_expr_t)->column_name_ = (yyvsp[0].column_name_t);
}
#line 8870 "bison_parser.cpp"
    break;

  case 461: /* scalar_expr: literal  */
#line 2929 "bison_parser.y"
          {
  (yyval.scalar_expr_t) = new ScalarExpr();
  (yyval.scalar_expr_t)->sub_type_ = CASE1;
  (yyval.scalar_expr_t)->literal_ = (yyvsp[0].literal_t);
}
#line 8880 "bison_parser.cpp"
    break;

  case 462: /* unary_expr: '-' operand  */
#line 2935 "bison_parser.y"
                         {
  (yyval.unary_expr_t) = new UnaryExpr();
  (yyval.unary_expr_t)->sub_type_ = CASE0;
  (yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
  (yyval.unary_expr_t)->operator_ = string("-");
}
#line 8891 "bison_parser.cpp"
    break;

  case 463: /* unary_expr: NOT operand  */
#line 2941 "bison_parser.y"
              {
  (yyval.unary_expr_t) = new UnaryExpr();
  (yyval.unary_expr_t)->sub_type_ = CASE1;
  (yyval.unary_expr_t)->operand_ = (yyvsp[0].operand_t);
  (yyval.unary_expr_t)->operator_ = string("NOT");
}
#line 8902 "bison_parser.cpp"
    break;

  case 464: /* unary_expr: operand ISNULL  */
#line 2947 "bison_parser.y"
                 {
  (yyval.unary_expr_t) = new UnaryExpr();
  (yyval.unary_expr_t)->sub_type_ = CASE2;
  (yyval.unary_expr_t)->operand_ = (yyvsp[-1].operand_t);
  (yyval.unary_expr_t)->operator_ = string("ISNULL");
}
#line 8913 "bison_parser.cpp"
    break;

  case 465: /* unary_expr: operand IS NULL  */
#line 2953 "bison_parser.y"
                  {
  (yyval.unary_expr_t) = new UnaryExpr();
  (yyval.unary_expr_t)->sub_type_ = CASE3;
  (yyval.unary_expr_t)->operand_ = (yyvsp[-2].operand_t);
  (yyval.unary_expr_t)->operator_ = string("IS NULL");
}
#line 8924 "bison_parser.cpp"
    break;

  case 466: /* unary_expr: operand IS NOT NULL  */
#line 2959 "bison_parser.y"
                      {
  (yyval.unary_expr_t) = new UnaryExpr();
  (yyval.unary_expr_t)->sub_type_ = CASE4;
  (yyval.unary_expr_t)->operand_ = (yyvsp[-3].operand_t);
  (yyval.unary_expr_t)->operator_ = string("IS NOT NULL");
}
#line 8935 "bison_parser.cpp"
    break;

  case 467: /* unary_expr: comment_literal unary_expr  */
#line 2965 "bison_parser.y"
                             {
		(yyval.unary_expr_t) = (yyvsp[0].unary_expr_t);
		(yyval.unary_expr_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 8944 "bison_parser.cpp"
    break;

  case 468: /* unary_expr: unary_expr comment_literal  */
#line 2969 "bison_parser.y"
                             {
  (yyval.unary_expr_t) = (yyvsp[-1].unary_expr_t);
  (yyval.unary_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 8953 "bison_parser.cpp"
    break;

  case 469: /* binary_expr: comp_expr  */
#line 2975 "bison_parser.y"
                        {
  (yyval.binary_expr_t) = new BinaryExpr();
  (yyval.binary_expr_t)->sub_type_ = CASE0;
  (yyval.binary_expr_t)->comp_expr_ = (yyvsp[0].comp_expr_t);
}
#line 8963 "bison_parser.cpp"
    break;

  case 470: /* binary_expr: operand '-' operand  */
#line 2980 "bison_parser.y"
                      {
  (yyval.binary_expr_t) = new BinaryExpr();
  (yyval.binary_expr_t)->sub_type_ = CASE1;
  (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.binary_expr_t)->operator_ = string("-");
}
#line 8975 "bison_parser.cpp"
    break;

  case 471: /* binary_expr: operand '+' operand  */
#line 2987 "bison_parser.y"
                      {
  (yyval.binary_expr_t) = new BinaryExpr();
  (yyval.binary_expr_t)->sub_type_ = CASE1;
  (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.binary_expr_t)->operator_ = string("+");
}
#line 8987 "bison_parser.cpp"
    break;

  case 472: /* binary_expr: operand '/' operand  */
#line 2994 "bison_parser.y"
                      {
  (yyval.binary_expr_t) = new BinaryExpr();
  (yyval.binary_expr_t)->sub_type_ = CASE1;
  (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.binary_expr_t)->operator_ = string("/");
}
#line 8999 "bison_parser.cpp"
    break;

  case 473: /* binary_expr: operand '*' operand  */
#line 3001 "bison_parser.y"
                      {
  (yyval.binary_expr_t) = new BinaryExpr();
  (yyval.binary_expr_t)->sub_type_ = CASE1;
  (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.binary_expr_t)->operator_ = string("*");
}
#line 9011 "bison_parser.cpp"
    break;

  case 474: /* binary_expr: operand '%' operand  */
#line 3008 "bison_parser.y"
                      {
  (yyval.binary_expr_t) = new BinaryExpr();
  (yyval.binary_expr_t)->sub_type_ = CASE1;
  (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.binary_expr_t)->operator_ = string("%");
}
#line 9023 "bison_parser.cpp"
    break;

  case 475: /* binary_expr: operand '^' operand  */
#line 3015 "bison_parser.y"
                      {
  (yyval.binary_expr_t) = new BinaryExpr();
  (yyval.binary_expr_t)->sub_type_ = CASE1;
  (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.binary_expr_t)->operator_ = string("^");
}
#line 9035 "bison_parser.cpp"
    break;

  case 476: /* binary_expr: operand LIKE operand  */
#line 3022 "bison_parser.y"
                       {
  (yyval.binary_expr_t) = new BinaryExpr();
  (yyval.binary_expr_t)->sub_type_ = CASE1;
  (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.binary_expr_t)->operator_ = string("LIKE");
}
#line 9047 "bison_parser.cpp"
    break;

  case 477: /* binary_expr: operand NOT LIKE operand  */
#line 3029 "bison_parser.y"
                           {
  (yyval.binary_expr_t) = new BinaryExpr();
  (yyval.binary_expr_t)->sub_type_ = CASE1;
  (yyval.binary_expr_t)->operand1_ = (yyvsp[-3].operand_t);
  (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.binary_expr_t)->operator_ = string("NOT LIKE");
}
#line 9059 "bison_parser.cpp"
    break;

  case 478: /* binary_expr: operand ILIKE operand  */
#line 3036 "bison_parser.y"
                        {
  (yyval.binary_expr_t) = new BinaryExpr();
  (yyval.binary_expr_t)->sub_type_ = CASE1;
  (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.binary_expr_t)->operator_ = string("ILIKE");
}
#line 9071 "bison_parser.cpp"
    break;

  case 479: /* binary_expr: operand CONCAT operand  */
#line 3043 "bison_parser.y"
                         {
  (yyval.binary_expr_t) = new BinaryExpr();
  (yyval.binary_expr_t)->sub_type_ = CASE1;
  (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.binary_expr_t)->operator_ = string("CONCAT");
}
#line 9083 "bison_parser.cpp"
    break;

  case 480: /* binary_expr: operand GLOB operand  */
#line 3050 "bison_parser.y"
                       {
  (yyval.binary_expr_t) = new BinaryExpr();
  (yyval.binary_expr_t)->sub_type_ = CASE1;
  (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.binary_expr_t)->operator_ = string("GLOB");
}
#line 9095 "bison_parser.cpp"
    break;

  case 481: /* binary_expr: operand MATCH operand  */
#line 3057 "bison_parser.y"
                        {
  (yyval.binary_expr_t) = new BinaryExpr();
  (yyval.binary_expr_t)->sub_type_ = CASE1;
  (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.binary_expr_t)->operator_ = string("MATCH");
}
#line 9107 "bison_parser.cpp"
    break;

  case 482: /* binary_expr: operand REGEX operand  */
#line 3064 "bison_parser.y"
                        {
  (yyval.binary_expr_t) = new BinaryExpr();
  (yyval.binary_expr_t)->sub_type_ = CASE1;
  (yyval.binary_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.binary_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.binary_expr_t)->operator_ = string("REGEX");
}
#line 9119 "bison_parser.cpp"
    break;

  case 483: /* logic_expr: expr AND expr  */
#line 3072 "bison_parser.y"
                           {
  (yyval.logic_expr_t) = new LogicExpr();
  (yyval.logic_expr_t)->expr1_ = (yyvsp[-2].expr_t);
  (yyval.logic_expr_t)->expr2_ = (yyvsp[0].expr_t);
  (yyval.logic_expr_t)->operator_ = string("AND");
}
#line 9130 "bison_parser.cpp"
    break;

  case 484: /* logic_expr: expr OR expr  */
#line 3078 "bison_parser.y"
               {
  (yyval.logic_expr_t) = new LogicExpr();
  (yyval.logic_expr_t)->expr1_ = (yyvsp[-2].expr_t);
  (yyval.logic_expr_t)->expr2_ = (yyvsp[0].expr_t);
  (yyval.logic_expr_t)->operator_ = string("OR");
}
#line 9141 "bison_parser.cpp"
    break;

  case 485: /* in_expr: operand IN '(' expr_list ')'  */
#line 3085 "bison_parser.y"
                                       {
  (yyval.in_expr_t) = new InExpr();
  (yyval.in_expr_t)->sub_type_ = CASE0;
  (yyval.in_expr_t)->operand_ = (yyvsp[-4].operand_t);
  (yyval.in_expr_t)->expr_list_ = (yyvsp[-1].expr_list_t);
}
#line 9152 "bison_parser.cpp"
    break;

  case 486: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 3091 "bison_parser.y"
                                   {
  (yyval.in_expr_t) = new InExpr();
  (yyval.in_expr_t)->sub_type_ = CASE1;
  (yyval.in_expr_t)->operand_ = (yyvsp[-5].operand_t);
  (yyval.in_expr_t)->expr_list_ = (yyvsp[-1].expr_list_t);
}
#line 9163 "bison_parser.cpp"
    break;

  case 487: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 3097 "bison_parser.y"
                                     {
  (yyval.in_expr_t) = new InExpr();
  (yyval.in_expr_t)->sub_type_ = CASE2;
  (yyval.in_expr_t)->operand_ = (yyvsp[-4].operand_t);
  (yyval.in_expr_t)->select_no_paren_ = (yyvsp[-1].select_no_paren_t);
}
#line 9174 "bison_parser.cpp"
    break;

  case 488: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 3103 "bison_parser.y"
                                         {
  (yyval.in_expr_t) = new InExpr();
  (yyval.in_expr_t)->sub_type_ = CASE3;
  (yyval.in_expr_t)->operand_ = (yyvsp[-5].operand_t);
  (yyval.in_expr_t)->select_no_paren_ = (yyvsp[-1].select_no_paren_t);
}
#line 9185 "bison_parser.cpp"
    break;

  case 489: /* in_expr: comment_literal in_expr  */
#line 3109 "bison_parser.y"
                          {
		(yyval.in_expr_t) = (yyvsp[0].in_expr_t);
		(yyval.in_expr_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 9194 "bison_parser.cpp"
    break;

  case 490: /* in_expr: in_expr comment_literal  */
#line 3113 "bison_parser.y"
                          {
  (yyval.in_expr_t) = (yyvsp[-1].in_expr_t);
  (yyval.in_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 9203 "bison_parser.cpp"
    break;

  case 491: /* case_expr: CASE expr case_list END  */
#line 3121 "bison_parser.y"
                                    {
  (yyval.case_expr_t) = new CaseExpr();
  (yyval.case_expr_t)->sub_type_ = CASE0;
  (yyval.case_expr_t)->case_expr_ = (yyvsp[-2].expr_t);
  (yyval.case_expr_t)->case_list_ = (yyvsp[-1].case_list_t);
}
#line 9214 "bison_parser.cpp"
    break;

  case 492: /* case_expr: CASE expr case_list ELSE expr END  */
#line 3127 "bison_parser.y"
                                    {
  (yyval.case_expr_t) = new CaseExpr();
  (yyval.case_expr_t)->sub_type_ = CASE1;
  (yyval.case_expr_t)->case_expr_ = (yyvsp[-4].expr_t);
  (yyval.case_expr_t)->case_list_ = (yyvsp[-3].case_list_t);
  (yyval.case_expr_t)->else_expr_ = (yyvsp[-1].expr_t);
}
#line 9226 "bison_parser.cpp"
    break;

  case 493: /* case_expr: CASE case_list END  */
#line 3134 "bison_parser.y"
                     {
  (yyval.case_expr_t) = new CaseExpr();
  (yyval.case_expr_t)->sub_type_ = CASE2;
  (yyval.case_expr_t)->case_list_ = (yyvsp[-1].case_list_t);
}
#line 9236 "bison_parser.cpp"
    break;

  case 494: /* case_expr: CASE case_list ELSE expr END  */
#line 3139 "bison_parser.y"
                               {
  (yyval.case_expr_t) = new CaseExpr();
  (yyval.case_expr_t)->sub_type_ = CASE3;
  (yyval.case_expr_t)->else_expr_ = (yyvsp[-1].expr_t);
  (yyval.case_expr_t)->case_list_ = (yyvsp[-3].case_list_t);
}
#line 9247 "bison_parser.cpp"
    break;

  case 495: /* case_expr: comment_literal case_expr  */
#line 3145 "bison_parser.y"
                            {
		(yyval.case_expr_t) = (yyvsp[0].case_expr_t);
		(yyval.case_expr_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 9256 "bison_parser.cpp"
    break;

  case 496: /* case_expr: case_expr comment_literal  */
#line 3149 "bison_parser.y"
                                    {
		(yyval.case_expr_t) = (yyvsp[-1].case_expr_t);
		(yyval.case_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9265 "bison_parser.cpp"
    break;

  case 497: /* case_list: WHEN expr THEN expr  */
#line 3155 "bison_parser.y"
                                {
  (yyval.case_list_t) = new CaseList();
  (yyval.case_list_t)->v_case_list_.push_back(new CaseClause((yyvsp[-2].expr_t), (yyvsp[0].expr_t)));
}
#line 9274 "bison_parser.cpp"
    break;

  case 498: /* case_list: case_list WHEN expr THEN expr  */
#line 3159 "bison_parser.y"
                                {
  (yyval.case_list_t)->v_case_list_.push_back(new CaseClause((yyvsp[-2].expr_t), (yyvsp[0].expr_t)));
  (yyval.case_list_t) = (yyvsp[-4].case_list_t);
}
#line 9283 "bison_parser.cpp"
    break;

  case 499: /* case_list: comment_literal case_list  */
#line 3163 "bison_parser.y"
                            {
		(yyval.case_list_t) = (yyvsp[0].case_list_t);
		(yyval.case_list_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 9292 "bison_parser.cpp"
    break;

  case 500: /* case_list: case_list comment_literal  */
#line 3167 "bison_parser.y"
                                    {
		(yyval.case_list_t) = (yyvsp[-1].case_list_t);
		(yyval.case_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9301 "bison_parser.cpp"
    break;

  case 501: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 3173 "bison_parser.y"
                                             {
  (yyval.exists_expr_t) = new ExistsExpr();
  (yyval.exists_expr_t)->sub_type_ = CASE0;
  (yyval.exists_expr_t)->select_no_paren_ = (yyvsp[-1].select_no_paren_t);
}
#line 9311 "bison_parser.cpp"
    break;

  case 502: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 3178 "bison_parser.y"
                                     {
  (yyval.exists_expr_t) = new ExistsExpr();
  (yyval.exists_expr_t)->sub_type_ = CASE1;
  (yyval.exists_expr_t)->select_no_paren_ = (yyvsp[-1].select_no_paren_t);
}
#line 9321 "bison_parser.cpp"
    break;

  case 503: /* exists_expr: comment_literal exists_expr  */
#line 3183 "bison_parser.y"
                              {
		(yyval.exists_expr_t) = (yyvsp[0].exists_expr_t);
		(yyval.exists_expr_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 9330 "bison_parser.cpp"
    break;

  case 504: /* exists_expr: exists_expr comment_literal  */
#line 3187 "bison_parser.y"
                                      {
		(yyval.exists_expr_t) = (yyvsp[-1].exists_expr_t);
		(yyval.exists_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9339 "bison_parser.cpp"
    break;

  case 505: /* comp_expr: operand '=' operand  */
#line 3193 "bison_parser.y"
                                {
  (yyval.comp_expr_t) = new CompExpr();
  (yyval.comp_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.comp_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.comp_expr_t)->operator_ = string("=");
}
#line 9350 "bison_parser.cpp"
    break;

  case 506: /* comp_expr: operand EQUALS operand  */
#line 3199 "bison_parser.y"
                         {
  (yyval.comp_expr_t) = new CompExpr();
  (yyval.comp_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.comp_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.comp_expr_t)->operator_ = string("==");
}
#line 9361 "bison_parser.cpp"
    break;

  case 507: /* comp_expr: operand NOTEQUALS operand  */
#line 3205 "bison_parser.y"
                            {
  (yyval.comp_expr_t) = new CompExpr();
  (yyval.comp_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.comp_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.comp_expr_t)->operator_ = string("!=");
}
#line 9372 "bison_parser.cpp"
    break;

  case 508: /* comp_expr: operand '<' operand  */
#line 3211 "bison_parser.y"
                      {
  (yyval.comp_expr_t) = new CompExpr();
  (yyval.comp_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.comp_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.comp_expr_t)->operator_ = string("<");
}
#line 9383 "bison_parser.cpp"
    break;

  case 509: /* comp_expr: operand '>' operand  */
#line 3217 "bison_parser.y"
                      {
  (yyval.comp_expr_t) = new CompExpr();
  (yyval.comp_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.comp_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.comp_expr_t)->operator_ = string(">");
}
#line 9394 "bison_parser.cpp"
    break;

  case 510: /* comp_expr: operand LESSEQ operand  */
#line 3223 "bison_parser.y"
                         {
  (yyval.comp_expr_t) = new CompExpr();
  (yyval.comp_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.comp_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.comp_expr_t)->operator_ = string("<=");
}
#line 9405 "bison_parser.cpp"
    break;

  case 511: /* comp_expr: operand GREATEREQ operand  */
#line 3229 "bison_parser.y"
                            {
  (yyval.comp_expr_t) = new CompExpr();
  (yyval.comp_expr_t)->operand1_ = (yyvsp[-2].operand_t);
  (yyval.comp_expr_t)->operand2_ = (yyvsp[0].operand_t);
  (yyval.comp_expr_t)->operator_ = string(">=");
}
#line 9416 "bison_parser.cpp"
    break;

  case 512: /* function_expr: IDENTIFIER '(' ')' opt_filter_clause opt_over_clause  */
#line 3237 "bison_parser.y"
                                                                     {
  (yyval.function_expr_t) = new FunctionExpr();
  (yyval.function_expr_t)->sub_type_ = CASE0;
  (yyval.function_expr_t)->id_ = new Identifier((yyvsp[-4].sval));
  (yyval.function_expr_t)->opt_filter_clause_ = (yyvsp[-1].opt_filter_clause_t);
  (yyval.function_expr_t)->opt_over_clause_ = (yyvsp[0].opt_over_clause_t);
  free((yyvsp[-4].sval));
}
#line 9429 "bison_parser.cpp"
    break;

  case 513: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')' opt_filter_clause opt_over_clause  */
#line 3245 "bison_parser.y"
                                                                              {
  (yyval.function_expr_t) = new FunctionExpr();
  (yyval.function_expr_t)->sub_type_ = CASE1;
  (yyval.function_expr_t)->id_ = new Identifier((yyvsp[-6].sval));
  (yyval.function_expr_t)->opt_distinct_ = (yyvsp[-4].opt_distinct_t);
  (yyval.function_expr_t)->expr_list_ = (yyvsp[-3].expr_list_t);
  (yyval.function_expr_t)->opt_filter_clause_ = (yyvsp[-1].opt_filter_clause_t);
  (yyval.function_expr_t)->opt_over_clause_ = (yyvsp[0].opt_over_clause_t);
  free((yyvsp[-6].sval));
}
#line 9444 "bison_parser.cpp"
    break;

  case 514: /* function_expr: comment_literal function_expr  */
#line 3255 "bison_parser.y"
                                {
		(yyval.function_expr_t) = (yyvsp[0].function_expr_t);
		(yyval.function_expr_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 9453 "bison_parser.cpp"
    break;

  case 515: /* function_expr: function_expr comment_literal  */
#line 3259 "bison_parser.y"
                                        {
		(yyval.function_expr_t) = (yyvsp[-1].function_expr_t);
		(yyval.function_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9462 "bison_parser.cpp"
    break;

  case 516: /* opt_over_clause: OVER '(' window ')'  */
#line 3265 "bison_parser.y"
                                      {
  (yyval.opt_over_clause_t) = new OptOverClause();
  (yyval.opt_over_clause_t)->sub_type_ = CASE0;
  (yyval.opt_over_clause_t)->window_ = (yyvsp[-1].window_t);
}
#line 9472 "bison_parser.cpp"
    break;

  case 517: /* opt_over_clause: OVER IDENTIFIER  */
#line 3270 "bison_parser.y"
                                         {
  (yyval.opt_over_clause_t) = new OptOverClause();
  (yyval.opt_over_clause_t)->sub_type_ = CASE1;
  (yyval.opt_over_clause_t)->id_ = new Identifier((yyvsp[0].sval), id_window_name);
  free((yyvsp[0].sval));
}
#line 9483 "bison_parser.cpp"
    break;

  case 518: /* opt_over_clause: %empty  */
#line 3276 "bison_parser.y"
              {
  (yyval.opt_over_clause_t) = new OptOverClause();
  (yyval.opt_over_clause_t)->sub_type_ = CASE2;
}
#line 9492 "bison_parser.cpp"
    break;

  case 519: /* opt_over_clause: comment_literal opt_over_clause  */
#line 3280 "bison_parser.y"
                                  {
		(yyval.opt_over_clause_t) = (yyvsp[0].opt_over_clause_t);
		(yyval.opt_over_clause_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 9501 "bison_parser.cpp"
    break;

  case 520: /* opt_over_clause: opt_over_clause comment_literal  */
#line 3284 "bison_parser.y"
                                          {
		(yyval.opt_over_clause_t) = (yyvsp[-1].opt_over_clause_t);
		(yyval.opt_over_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9510 "bison_parser.cpp"
    break;

  case 521: /* opt_filter_clause: FILTER '(' WHERE expr ')'  */
#line 3290 "bison_parser.y"
                                              {
  (yyval.opt_filter_clause_t) = new OptFilterClause();
  (yyval.opt_filter_clause_t)->sub_type_ = CASE0;
  (yyval.opt_filter_clause_t)->expr_ = (yyvsp[-1].expr_t);
}
#line 9520 "bison_parser.cpp"
    break;

  case 522: /* opt_filter_clause: %empty  */
#line 3295 "bison_parser.y"
              {
  (yyval.opt_filter_clause_t) = new OptFilterClause();
  (yyval.opt_filter_clause_t)->sub_type_ = CASE1;
}
#line 9529 "bison_parser.cpp"
    break;

  case 523: /* opt_filter_clause: comment_literal opt_filter_clause  */
#line 3299 "bison_parser.y"
                                    {
		(yyval.opt_filter_clause_t) = (yyvsp[0].opt_filter_clause_t);
		(yyval.opt_filter_clause_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 9538 "bison_parser.cpp"
    break;

  case 524: /* opt_filter_clause: opt_filter_clause comment_literal  */
#line 3303 "bison_parser.y"
                                            {
		(yyval.opt_filter_clause_t) = (yyvsp[-1].opt_filter_clause_t);
		(yyval.opt_filter_clause_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9547 "bison_parser.cpp"
    break;

  case 525: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 3309 "bison_parser.y"
                                                        {
  (yyval.extract_expr_t) = new ExtractExpr();
  (yyval.extract_expr_t)->datetime_field_ = (yyvsp[-3].datetime_field_t);
  (yyval.extract_expr_t)->expr_ = (yyvsp[-1].expr_t);
  (yyval.extract_expr_t)->sub_type_ = CASE0;
}
#line 9558 "bison_parser.cpp"
    break;

  case 526: /* extract_expr: comment_literal extract_expr  */
#line 3315 "bison_parser.y"
                               {
		(yyval.extract_expr_t) = (yyvsp[0].extract_expr_t);
		(yyval.extract_expr_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 9567 "bison_parser.cpp"
    break;

  case 527: /* extract_expr: extract_expr comment_literal  */
#line 3319 "bison_parser.y"
                                       {
		(yyval.extract_expr_t) = (yyvsp[-1].extract_expr_t);
		(yyval.extract_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9576 "bison_parser.cpp"
    break;

  case 528: /* datetime_field: SECOND  */
#line 3325 "bison_parser.y"
                        {
  (yyval.datetime_field_t) = new DatetimeField();
  (yyval.datetime_field_t)->str_val_ = string("SECOND");
}
#line 9585 "bison_parser.cpp"
    break;

  case 529: /* datetime_field: MINUTE  */
#line 3329 "bison_parser.y"
         {
  (yyval.datetime_field_t) = new DatetimeField();
  (yyval.datetime_field_t)->str_val_ = string("MINUTE");
}
#line 9594 "bison_parser.cpp"
    break;

  case 530: /* datetime_field: HOUR  */
#line 3333 "bison_parser.y"
       {
  (yyval.datetime_field_t) = new DatetimeField();
  (yyval.datetime_field_t)->str_val_ = string("HOUR");
}
#line 9603 "bison_parser.cpp"
    break;

  case 531: /* datetime_field: DAY  */
#line 3337 "bison_parser.y"
      {
  (yyval.datetime_field_t) = new DatetimeField();
  (yyval.datetime_field_t)->str_val_ = string("DAY");
}
#line 9612 "bison_parser.cpp"
    break;

  case 532: /* datetime_field: MONTH  */
#line 3341 "bison_parser.y"
        {
  (yyval.datetime_field_t) = new DatetimeField();
  (yyval.datetime_field_t)->str_val_ = string("MONTH");
}
#line 9621 "bison_parser.cpp"
    break;

  case 533: /* datetime_field: YEAR  */
#line 3345 "bison_parser.y"
       {
  (yyval.datetime_field_t) = new DatetimeField();
  (yyval.datetime_field_t)->str_val_ = string("YEAR");
}
#line 9630 "bison_parser.cpp"
    break;

  case 534: /* datetime_field: comment_literal datetime_field  */
#line 3349 "bison_parser.y"
                                 {
		(yyval.datetime_field_t) = (yyvsp[0].datetime_field_t);
		(yyval.datetime_field_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 9639 "bison_parser.cpp"
    break;

  case 535: /* datetime_field: datetime_field comment_literal  */
#line 3353 "bison_parser.y"
                                 {
  (yyval.datetime_field_t) = (yyvsp[-1].datetime_field_t);
  (yyval.datetime_field_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 9648 "bison_parser.cpp"
    break;

  case 536: /* array_expr: ARRAY '[' expr_list ']'  */
#line 3359 "bison_parser.y"
                                     {
  (yyval.array_expr_t) = new ArrayExpr();
  (yyval.array_expr_t)->expr_list_ = (yyvsp[-1].expr_list_t);
}
#line 9657 "bison_parser.cpp"
    break;

  case 537: /* array_expr: comment_literal array_expr  */
#line 3363 "bison_parser.y"
                             {
		(yyval.array_expr_t) = (yyvsp[0].array_expr_t);
		(yyval.array_expr_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 9666 "bison_parser.cpp"
    break;

  case 538: /* array_expr: array_expr comment_literal  */
#line 3367 "bison_parser.y"
                             {
  (yyval.array_expr_t) = (yyvsp[-1].array_expr_t);
  (yyval.array_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 9675 "bison_parser.cpp"
    break;

  case 539: /* array_index: operand '[' int_literal ']'  */
#line 3373 "bison_parser.y"
                                          {
  (yyval.array_index_t) = new ArrayIndex();
  (yyval.array_index_t)->operand_ = (yyvsp[-3].operand_t);
  (yyval.array_index_t)->int_literal_ = (yyvsp[-1].int_literal_t);
}
#line 9685 "bison_parser.cpp"
    break;

  case 540: /* array_index: comment_literal array_index  */
#line 3378 "bison_parser.y"
                              {
		(yyval.array_index_t) = (yyvsp[0].array_index_t);
		(yyval.array_index_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 9694 "bison_parser.cpp"
    break;

  case 541: /* array_index: array_index comment_literal  */
#line 3382 "bison_parser.y"
                                      {
		(yyval.array_index_t) = (yyvsp[-1].array_index_t);
		(yyval.array_index_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9703 "bison_parser.cpp"
    break;

  case 542: /* between_expr: operand BETWEEN operand AND operand  */
#line 3387 "bison_parser.y"
                                                   {
  (yyval.between_expr_t) = new BetweenExpr();
  (yyval.between_expr_t)->operand1_ = (yyvsp[-4].operand_t);
  (yyval.between_expr_t)->operand2_ = (yyvsp[-2].operand_t);
  (yyval.between_expr_t)->operand3_ = (yyvsp[0].operand_t);
}
#line 9714 "bison_parser.cpp"
    break;

  case 543: /* column_name: IDENTIFIER  */
#line 3394 "bison_parser.y"
                         {
  (yyval.column_name_t) = new ColumnName();
  (yyval.column_name_t)->sub_type_ = CASE0;
  (yyval.column_name_t)->identifier1_ = new Identifier((yyvsp[0].sval), id_column_name);
  // free($1);
}
#line 9725 "bison_parser.cpp"
    break;

  case 544: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 3400 "bison_parser.y"
                            {
  (yyval.column_name_t) = new ColumnName();
  (yyval.column_name_t)->sub_type_ = CASE1;
  (yyval.column_name_t)->identifier1_ = new Identifier((yyvsp[-2].sval), id_table_name);
  (yyval.column_name_t)->identifier2_ = new Identifier((yyvsp[0].sval), id_column_name);
  // free($1);
  // free($3);
}
#line 9738 "bison_parser.cpp"
    break;

  case 545: /* column_name: '*'  */
#line 3408 "bison_parser.y"
      {
  (yyval.column_name_t) = new ColumnName();
  (yyval.column_name_t)->sub_type_ = CASE2;
}
#line 9747 "bison_parser.cpp"
    break;

  case 546: /* column_name: IDENTIFIER '.' '*'  */
#line 3412 "bison_parser.y"
                     {
  (yyval.column_name_t) = new ColumnName();
  (yyval.column_name_t)->sub_type_ = CASE3;
  (yyval.column_name_t)->identifier1_ = new Identifier((yyvsp[-2].sval), id_table_name);
  free((yyvsp[-2].sval));
}
#line 9758 "bison_parser.cpp"
    break;

  case 547: /* column_name: comment_literal column_name  */
#line 3418 "bison_parser.y"
                               {
		(yyval.column_name_t) = (yyvsp[0].column_name_t);
		(yyval.column_name_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 9767 "bison_parser.cpp"
    break;

  case 548: /* column_name: column_name comment_literal  */
#line 3422 "bison_parser.y"
                                      {
		(yyval.column_name_t) = (yyvsp[-1].column_name_t);
		(yyval.column_name_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 9776 "bison_parser.cpp"
    break;

  case 549: /* literal: string_literal  */
#line 3427 "bison_parser.y"
                         { (yyval.literal_t) = (yyvsp[0].string_literal_t); }
#line 9782 "bison_parser.cpp"
    break;

  case 550: /* literal: bool_literal  */
#line 3428 "bison_parser.y"
               { (yyval.literal_t) = (yyvsp[0].bool_literal_t); }
#line 9788 "bison_parser.cpp"
    break;

  case 551: /* literal: num_literal  */
#line 3429 "bison_parser.y"
              { (yyval.literal_t) = (yyvsp[0].num_literal_t); }
#line 9794 "bison_parser.cpp"
    break;

  case 552: /* literal: null_literal  */
#line 3430 "bison_parser.y"
               { (yyval.literal_t) = (yyvsp[0].null_literal_t); }
#line 9800 "bison_parser.cpp"
    break;

  case 553: /* literal: param_expr  */
#line 3431 "bison_parser.y"
             { (yyval.literal_t) = (yyvsp[0].param_expr_t); }
#line 9806 "bison_parser.cpp"
    break;

  case 554: /* string_literal: STRING  */
#line 3433 "bison_parser.y"
                        {
  (yyval.string_literal_t) = new StringLiteral();
  (yyval.string_literal_t)->str_val_ = (yyvsp[0].sval);
  free((yyvsp[0].sval));
}
#line 9816 "bison_parser.cpp"
    break;

  case 555: /* string_literal: comment_literal string_literal  */
#line 3438 "bison_parser.y"
                                 {
  (yyval.string_literal_t) = (yyvsp[0].string_literal_t);
  (yyval.string_literal_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 9825 "bison_parser.cpp"
    break;

  case 556: /* string_literal: string_literal comment_literal  */
#line 3442 "bison_parser.y"
                                 {
  (yyval.string_literal_t) = (yyvsp[-1].string_literal_t);
  (yyval.string_literal_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 9834 "bison_parser.cpp"
    break;

  case 557: /* bool_literal: TRUE  */
#line 3448 "bison_parser.y"
                    {
  (yyval.bool_literal_t) = new BoolLiteral();
  (yyval.bool_literal_t)->b_val_ = true;
}
#line 9843 "bison_parser.cpp"
    break;

  case 558: /* bool_literal: FALSE  */
#line 3452 "bison_parser.y"
        {
  (yyval.bool_literal_t) = new BoolLiteral();
  (yyval.bool_literal_t)->b_val_ = false;
}
#line 9852 "bison_parser.cpp"
    break;

  case 559: /* bool_literal: comment_literal bool_literal  */
#line 3456 "bison_parser.y"
                               {
		(yyval.bool_literal_t) = (yyvsp[0].bool_literal_t);
		(yyval.bool_literal_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 9861 "bison_parser.cpp"
    break;

  case 560: /* bool_literal: bool_literal comment_literal  */
#line 3460 "bison_parser.y"
                               {
  (yyval.bool_literal_t) = (yyvsp[-1].bool_literal_t);
  (yyval.bool_literal_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 9870 "bison_parser.cpp"
    break;

  case 561: /* num_literal: FLOATVAL  */
#line 3466 "bison_parser.y"
                       {
  (yyval.num_literal_t) = new NumLiteral();
  (yyval.num_literal_t)->sub_type_ = CASE0;
  (yyval.num_literal_t)->f_val_ = (yyvsp[0].fval);
}
#line 9880 "bison_parser.cpp"
    break;

  case 562: /* num_literal: int_literal  */
#line 3471 "bison_parser.y"
              {
  (yyval.num_literal_t) = new NumLiteral();
  (yyval.num_literal_t)->sub_type_ = CASE1;
  (yyval.num_literal_t)->int_literal_ = (yyvsp[0].int_literal_t);
}
#line 9890 "bison_parser.cpp"
    break;

  case 563: /* num_literal: comment_literal num_literal  */
#line 3476 "bison_parser.y"
                              {
		(yyval.num_literal_t) = (yyvsp[0].num_literal_t);
		(yyval.num_literal_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 9899 "bison_parser.cpp"
    break;

  case 564: /* num_literal: num_literal comment_literal  */
#line 3480 "bison_parser.y"
                              {
  (yyval.num_literal_t) = (yyvsp[-1].num_literal_t);
  (yyval.num_literal_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 9908 "bison_parser.cpp"
    break;

  case 565: /* int_literal: INTVAL  */
#line 3486 "bison_parser.y"
                     {
  (yyval.int_literal_t) = new IntLiteral();
  (yyval.int_literal_t)->int_val_ = (yyvsp[0].ival);
}
#line 9917 "bison_parser.cpp"
    break;

  case 566: /* int_literal: comment_literal int_literal  */
#line 3490 "bison_parser.y"
                              {
		(yyval.int_literal_t) = (yyvsp[0].int_literal_t);
		(yyval.int_literal_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 9926 "bison_parser.cpp"
    break;

  case 567: /* int_literal: int_literal comment_literal  */
#line 3494 "bison_parser.y"
                              {
  (yyval.int_literal_t) = (yyvsp[-1].int_literal_t);
  (yyval.int_literal_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 9935 "bison_parser.cpp"
    break;

  case 568: /* null_literal: NULL  */
#line 3500 "bison_parser.y"
                    { (yyval.null_literal_t) = new NullLiteral(); }
#line 9941 "bison_parser.cpp"
    break;

  case 569: /* null_literal: comment_literal null_literal  */
#line 3501 "bison_parser.y"
                               {
  (yyval.null_literal_t) = (yyvsp[0].null_literal_t);
  (yyval.null_literal_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 9950 "bison_parser.cpp"
    break;

  case 570: /* null_literal: null_literal comment_literal  */
#line 3505 "bison_parser.y"
                               {
  (yyval.null_literal_t) = (yyvsp[-1].null_literal_t);
  (yyval.null_literal_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 9959 "bison_parser.cpp"
    break;

  case 571: /* comment_literal: COMMENTLITERAL  */
#line 3512 "bison_parser.y"
                               {
			(yyval.comment_literal_t) = new CommentLiteral();
			(yyval.comment_literal_t)->string_vals_.push_back((yyvsp[0].sval)) ;
      // fprintf(stderr,"111%s\n",$1);

		}
#line 9970 "bison_parser.cpp"
    break;

  case 572: /* comment_literal: comment_literal COMMENTLITERAL  */
#line 3518 "bison_parser.y"
                                                {
			(yyval.comment_literal_t) = (yyvsp[-1].comment_literal_t);
      // fprintf(stderr,"2222%s\n",$2);
			(yyval.comment_literal_t)->string_vals_.push_back((yyvsp[0].sval));
		}
#line 9980 "bison_parser.cpp"
    break;

  case 573: /* param_expr: '?'  */
#line 3524 "bison_parser.y"
                 { (yyval.param_expr_t) = new ParamExpr(); }
#line 9986 "bison_parser.cpp"
    break;

  case 574: /* param_expr: comment_literal param_expr  */
#line 3525 "bison_parser.y"
                             {
		(yyval.param_expr_t) = (yyvsp[0].param_expr_t);
		(yyval.param_expr_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 9995 "bison_parser.cpp"
    break;

  case 575: /* param_expr: param_expr comment_literal  */
#line 3529 "bison_parser.y"
                                     {
		(yyval.param_expr_t) = (yyvsp[-1].param_expr_t);
		(yyval.param_expr_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10004 "bison_parser.cpp"
    break;

  case 576: /* table_ref: table_prefix table_name opt_alias opt_index opt_on opt_using  */
#line 3539 "bison_parser.y"
                                                                         {
  (yyval.table_ref_t) = new TableRef();
  (yyval.table_ref_t)->sub_type_ = CASE0;
  (yyval.table_ref_t)->table_prefix_ = (yyvsp[-5].table_prefix_t);
  (yyval.table_ref_t)->table_name_ = (yyvsp[-4].table_name_t);
  (yyval.table_ref_t)->opt_alias_ = (yyvsp[-3].opt_alias_t);
  (yyval.table_ref_t)->opt_index_ = (yyvsp[-2].opt_index_t);
  (yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
  (yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
  (yyval.table_ref_t)->table_name_->table_name_->id_type_ = id_top_table_name;
}
#line 10020 "bison_parser.cpp"
    break;

  case 577: /* table_ref: table_prefix table_name '(' expr_list ')' opt_alias opt_on opt_using  */
#line 3550 "bison_parser.y"
                                                                       {
  (yyval.table_ref_t) = new TableRef();
  (yyval.table_ref_t)->sub_type_ = CASE1;
  (yyval.table_ref_t)->table_prefix_ = (yyvsp[-7].table_prefix_t);
  (yyval.table_ref_t)->table_name_ = (yyvsp[-6].table_name_t);
  (yyval.table_ref_t)->expr_list_ = (yyvsp[-4].expr_list_t);
  (yyval.table_ref_t)->opt_alias_ = (yyvsp[-2].opt_alias_t);
  (yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
  (yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
  (yyval.table_ref_t)->table_name_->table_name_->id_type_ = id_top_table_name;
}
#line 10036 "bison_parser.cpp"
    break;

  case 578: /* table_ref: table_prefix '(' select_no_paren ')' opt_alias opt_on opt_using  */
#line 3561 "bison_parser.y"
                                                                  {
  (yyval.table_ref_t) = new TableRef();
  (yyval.table_ref_t)->sub_type_ = CASE2;
  (yyval.table_ref_t)->table_prefix_ = (yyvsp[-6].table_prefix_t);
  (yyval.table_ref_t)->select_no_paren_ = (yyvsp[-4].select_no_paren_t);
  (yyval.table_ref_t)->opt_alias_ = (yyvsp[-2].opt_alias_t);
  (yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
  (yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
}
#line 10050 "bison_parser.cpp"
    break;

  case 579: /* table_ref: table_prefix '(' table_ref ')' opt_alias opt_on opt_using  */
#line 3570 "bison_parser.y"
                                                            {
  (yyval.table_ref_t) = new TableRef();
  (yyval.table_ref_t)->sub_type_ = CASE3;
  (yyval.table_ref_t)->table_prefix_ = (yyvsp[-6].table_prefix_t);
  (yyval.table_ref_t)->table_ref_ = (yyvsp[-4].table_ref_t);
  (yyval.table_ref_t)->opt_alias_ = (yyvsp[-2].opt_alias_t);
  (yyval.table_ref_t)->opt_on_ = (yyvsp[-1].opt_on_t);
  (yyval.table_ref_t)->opt_using_ = (yyvsp[0].opt_using_t);
}
#line 10064 "bison_parser.cpp"
    break;

  case 580: /* table_prefix: table_ref join_op  */
#line 3580 "bison_parser.y"
                                 {
  (yyval.table_prefix_t) = new TablePrefix();
  (yyval.table_prefix_t)->sub_type_ = CASE0;
  (yyval.table_prefix_t)->table_ref_ = (yyvsp[-1].table_ref_t);
  (yyval.table_prefix_t)->join_op_ = (yyvsp[0].join_op_t);
}
#line 10075 "bison_parser.cpp"
    break;

  case 581: /* table_prefix: %empty  */
#line 3586 "bison_parser.y"
            {
  (yyval.table_prefix_t) = new TablePrefix();
  (yyval.table_prefix_t)->sub_type_ = CASE1;
}
#line 10084 "bison_parser.cpp"
    break;

  case 582: /* table_prefix: comment_literal table_prefix  */
#line 3590 "bison_parser.y"
                               {
		(yyval.table_prefix_t) = (yyvsp[0].table_prefix_t);
		(yyval.table_prefix_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 10093 "bison_parser.cpp"
    break;

  case 583: /* table_prefix: table_prefix comment_literal  */
#line 3594 "bison_parser.y"
                                       {
		(yyval.table_prefix_t) = (yyvsp[-1].table_prefix_t);
		(yyval.table_prefix_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10102 "bison_parser.cpp"
    break;

  case 584: /* join_op: ','  */
#line 3599 "bison_parser.y"
              {
  (yyval.join_op_t) = new JoinOp();
  (yyval.join_op_t)->sub_type_ = CASE0;
}
#line 10111 "bison_parser.cpp"
    break;

  case 585: /* join_op: JOIN  */
#line 3603 "bison_parser.y"
       {
  (yyval.join_op_t) = new JoinOp();
  (yyval.join_op_t)->sub_type_ = CASE1;
}
#line 10120 "bison_parser.cpp"
    break;

  case 586: /* join_op: join_kw JOIN  */
#line 3607 "bison_parser.y"
               {
  (yyval.join_op_t) = new JoinOp();
  (yyval.join_op_t)->sub_type_ = CASE2;
  (yyval.join_op_t)->join_kw_ = (yyvsp[-1].join_kw_t);
}
#line 10130 "bison_parser.cpp"
    break;

  case 587: /* join_op: join_kw IDENTIFIER JOIN  */
#line 3612 "bison_parser.y"
                          {
  (yyval.join_op_t) = new JoinOp();
  (yyval.join_op_t)->sub_type_ = CASE3;
  (yyval.join_op_t)->id1_ = new Identifier((yyvsp[-1].sval), id_top_table_name);
  (yyval.join_op_t)->join_kw_ = (yyvsp[-2].join_kw_t);
  free((yyvsp[-1].sval));
}
#line 10142 "bison_parser.cpp"
    break;

  case 588: /* join_op: join_kw IDENTIFIER IDENTIFIER JOIN  */
#line 3619 "bison_parser.y"
                                     {
  (yyval.join_op_t) = new JoinOp();
  (yyval.join_op_t)->sub_type_ = CASE4;
  (yyval.join_op_t)->id1_ = new Identifier((yyvsp[-2].sval));
  (yyval.join_op_t)->id2_ = new Identifier((yyvsp[-1].sval));
  (yyval.join_op_t)->join_kw_ = (yyvsp[-3].join_kw_t);
  free((yyvsp[-2].sval));
  free((yyvsp[-1].sval));
}
#line 10156 "bison_parser.cpp"
    break;

  case 589: /* join_op: comment_literal join_op  */
#line 3628 "bison_parser.y"
                          {
		(yyval.join_op_t) = (yyvsp[0].join_op_t);
		(yyval.join_op_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 10165 "bison_parser.cpp"
    break;

  case 590: /* join_op: join_op comment_literal  */
#line 3632 "bison_parser.y"
                         {
		(yyval.join_op_t) = (yyvsp[-1].join_op_t);
		(yyval.join_op_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10174 "bison_parser.cpp"
    break;

  case 591: /* opt_index: INDEXED BY column_name  */
#line 3638 "bison_parser.y"
                                   {
  (yyval.opt_index_t) = new OptIndex();
  (yyval.opt_index_t)->sub_type_ = CASE0;
  (yyval.opt_index_t)->column_name_ = (yyvsp[0].column_name_t);
}
#line 10184 "bison_parser.cpp"
    break;

  case 592: /* opt_index: NOT INDEXED  */
#line 3643 "bison_parser.y"
              {
  (yyval.opt_index_t) = new OptIndex();
  (yyval.opt_index_t)->sub_type_ = CASE1;
}
#line 10193 "bison_parser.cpp"
    break;

  case 593: /* opt_index: %empty  */
#line 3647 "bison_parser.y"
            {
  (yyval.opt_index_t) = new OptIndex();
  (yyval.opt_index_t)->sub_type_ = CASE2;
}
#line 10202 "bison_parser.cpp"
    break;

  case 594: /* opt_index: comment_literal opt_index  */
#line 3651 "bison_parser.y"
                            {
		(yyval.opt_index_t) = (yyvsp[0].opt_index_t);
		(yyval.opt_index_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 10211 "bison_parser.cpp"
    break;

  case 595: /* opt_index: opt_index comment_literal  */
#line 3655 "bison_parser.y"
                                    {
		(yyval.opt_index_t) = (yyvsp[-1].opt_index_t);
		(yyval.opt_index_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10220 "bison_parser.cpp"
    break;

  case 596: /* opt_on: ON expr  */
#line 3661 "bison_parser.y"
                 {
  (yyval.opt_on_t) = new OptOn();
  (yyval.opt_on_t)->sub_type_ = CASE0;
  (yyval.opt_on_t)->expr_ = (yyvsp[0].expr_t);
}
#line 10230 "bison_parser.cpp"
    break;

  case 597: /* opt_on: %empty  */
#line 3666 "bison_parser.y"
            {
  (yyval.opt_on_t) = new OptOn();
  (yyval.opt_on_t)->sub_type_ = CASE1;
}
#line 10239 "bison_parser.cpp"
    break;

  case 598: /* opt_on: comment_literal opt_on  */
#line 3670 "bison_parser.y"
                         {
		(yyval.opt_on_t) = (yyvsp[0].opt_on_t);
		(yyval.opt_on_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 10248 "bison_parser.cpp"
    break;

  case 599: /* opt_on: opt_on comment_literal  */
#line 3674 "bison_parser.y"
                         {
  (yyval.opt_on_t) = (yyvsp[-1].opt_on_t);
  (yyval.opt_on_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 10257 "bison_parser.cpp"
    break;

  case 600: /* opt_using: USING '(' ident_commalist ')'  */
#line 3680 "bison_parser.y"
                                          {
  (yyval.opt_using_t) = new OptUsing();
  (yyval.opt_using_t)->sub_type_ = CASE0;
  (yyval.opt_using_t)->ident_commalist_ = (yyvsp[-1].ident_commalist_t);
}
#line 10267 "bison_parser.cpp"
    break;

  case 601: /* opt_using: %empty  */
#line 3685 "bison_parser.y"
            {
  (yyval.opt_using_t) = new OptUsing();
  (yyval.opt_using_t)->sub_type_ = CASE1;
}
#line 10276 "bison_parser.cpp"
    break;

  case 602: /* opt_using: comment_literal opt_using  */
#line 3689 "bison_parser.y"
                            {
		(yyval.opt_using_t) = (yyvsp[0].opt_using_t);
		(yyval.opt_using_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 10285 "bison_parser.cpp"
    break;

  case 603: /* opt_using: opt_using comment_literal  */
#line 3693 "bison_parser.y"
                            {
  (yyval.opt_using_t) = (yyvsp[-1].opt_using_t);
  (yyval.opt_using_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 10294 "bison_parser.cpp"
    break;

  case 604: /* table_ref_name_no_alias: table_name  */
#line 3699 "bison_parser.y"
                                     {
  (yyval.table_ref_name_no_alias_t) = new TableRefNameNoAlias();
  (yyval.table_ref_name_no_alias_t)->table_name_ = (yyvsp[0].table_name_t);
  (yyval.table_ref_name_no_alias_t)->table_name_->table_name_->id_type_ = id_top_table_name;
}
#line 10304 "bison_parser.cpp"
    break;

  case 605: /* table_name: IDENTIFIER  */
#line 3704 "bison_parser.y"
                        {
  (yyval.table_name_t) = new TableName();
  (yyval.table_name_t)->sub_type_ = CASE0;
  (yyval.table_name_t)->table_name_ = new Identifier((yyvsp[0].sval), id_table_name);
  (yyval.table_name_t)->database_name_ = NULL;
  free((yyvsp[0].sval));
}
#line 10316 "bison_parser.cpp"
    break;

  case 606: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 3711 "bison_parser.y"
                            {
  (yyval.table_name_t) = new TableName();
  (yyval.table_name_t)->sub_type_ = CASE1;
  (yyval.table_name_t)->database_name_ = new Identifier((yyvsp[-2].sval), id_database_name);
  (yyval.table_name_t)->table_name_ = new Identifier((yyvsp[0].sval), id_table_name);
  free((yyvsp[-2].sval));
  free((yyvsp[0].sval));
}
#line 10329 "bison_parser.cpp"
    break;

  case 607: /* table_name: comment_literal table_name  */
#line 3719 "bison_parser.y"
                             {
		(yyval.table_name_t) = (yyvsp[0].table_name_t);
		(yyval.table_name_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 10338 "bison_parser.cpp"
    break;

  case 608: /* table_name: table_name comment_literal  */
#line 3723 "bison_parser.y"
                             {
  (yyval.table_name_t) = (yyvsp[-1].table_name_t);
  (yyval.table_name_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 10347 "bison_parser.cpp"
    break;

  case 609: /* alias: AS IDENTIFIER  */
#line 3729 "bison_parser.y"
                      {
  (yyval.alias_t) = new Alias();
  (yyval.alias_t)->sub_type_ = CASE0;
  (yyval.alias_t)->id_ = new Identifier((yyvsp[0].sval));
  free((yyvsp[0].sval));
}
#line 10358 "bison_parser.cpp"
    break;

  case 610: /* alias: comment_literal alias  */
#line 3735 "bison_parser.y"
                        {
		(yyval.alias_t) = (yyvsp[0].alias_t);
		(yyval.alias_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 10367 "bison_parser.cpp"
    break;

  case 611: /* alias: alias comment_literal  */
#line 3739 "bison_parser.y"
                        {
  (yyval.alias_t) = (yyvsp[-1].alias_t);
  (yyval.alias_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 10376 "bison_parser.cpp"
    break;

  case 612: /* opt_alias: alias  */
#line 3745 "bison_parser.y"
                  {
  (yyval.opt_alias_t) = new OptAlias();
  (yyval.opt_alias_t)->sub_type_ = CASE0;
  (yyval.opt_alias_t)->alias_ = (yyvsp[0].alias_t);
}
#line 10386 "bison_parser.cpp"
    break;

  case 613: /* opt_alias: %empty  */
#line 3750 "bison_parser.y"
              {
  (yyval.opt_alias_t) = new OptAlias();
  (yyval.opt_alias_t)->sub_type_ = CASE1;
}
#line 10395 "bison_parser.cpp"
    break;

  case 614: /* opt_with_clause: with_clause  */
#line 3759 "bison_parser.y"
                              {
  (yyval.opt_with_clause_t) = new OptWithClause();
  (yyval.opt_with_clause_t)->sub_type_ = CASE0;
  (yyval.opt_with_clause_t)->with_clause_ = (yyvsp[0].with_clause_t);
}
#line 10405 "bison_parser.cpp"
    break;

  case 615: /* opt_with_clause: %empty  */
#line 3764 "bison_parser.y"
              {
  (yyval.opt_with_clause_t) = new OptWithClause();
  (yyval.opt_with_clause_t)->sub_type_ = CASE1;
}
#line 10414 "bison_parser.cpp"
    break;

  case 616: /* with_clause: WITH with_description_list  */
#line 3769 "bison_parser.y"
                                         {
  (yyval.with_clause_t) = new WithClause();
  (yyval.with_clause_t)->with_description_list_ = (yyvsp[0].with_description_list_t);
}
#line 10423 "bison_parser.cpp"
    break;

  case 617: /* with_description_list: with_description  */
#line 3774 "bison_parser.y"
                                         {
  (yyval.with_description_list_t) = new WithDescriptionList();
  (yyval.with_description_list_t)->v_with_description_list_.push_back((yyvsp[0].with_description_t));
}
#line 10432 "bison_parser.cpp"
    break;

  case 618: /* with_description_list: with_description_list ',' with_description  */
#line 3778 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_list_t)->v_with_description_list_.push_back((yyvsp[0].with_description_t));
  (yyval.with_description_list_t) = (yyvsp[-2].with_description_list_t);
}
#line 10441 "bison_parser.cpp"
    break;

  case 619: /* with_description_list: comment_literal with_description_list  */
#line 3782 "bison_parser.y"
                                        {
		(yyval.with_description_list_t) = (yyvsp[0].with_description_list_t);
		(yyval.with_description_list_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
}
#line 10450 "bison_parser.cpp"
    break;

  case 620: /* with_description_list: with_description_list comment_literal  */
#line 3786 "bison_parser.y"
                                        {
  (yyval.with_description_list_t) = (yyvsp[-1].with_description_list_t);
  (yyval.with_description_list_t)->right_comment_ = (yyvsp[0].comment_literal_t);
}
#line 10459 "bison_parser.cpp"
    break;

  case 621: /* with_description: IDENTIFIER AS select_with_paren  */
#line 3792 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->id_ = new Identifier((yyvsp[-2].sval));
  (yyval.with_description_t)->select_with_paren_ = (yyvsp[0].select_with_paren_t);
  free((yyvsp[-2].sval));
}
#line 10470 "bison_parser.cpp"
    break;

  case 622: /* join_kw: INNER  */
#line 3803 "bison_parser.y"
                {
  (yyval.join_kw_t) = new JoinKw();
  (yyval.join_kw_t)->str_val_ = string("INNER");
}
#line 10479 "bison_parser.cpp"
    break;

  case 623: /* join_kw: LEFT OUTER  */
#line 3807 "bison_parser.y"
             {
  (yyval.join_kw_t) = new JoinKw();
  (yyval.join_kw_t)->str_val_ = string("LEFT OUTER");
}
#line 10488 "bison_parser.cpp"
    break;

  case 624: /* join_kw: LEFT  */
#line 3811 "bison_parser.y"
       {
  (yyval.join_kw_t) = new JoinKw();
  (yyval.join_kw_t)->str_val_ = string("LEFT");
}
#line 10497 "bison_parser.cpp"
    break;

  case 625: /* join_kw: RIGHT OUTER  */
#line 3815 "bison_parser.y"
              {
  (yyval.join_kw_t) = new JoinKw();
  (yyval.join_kw_t)->str_val_ = string("RIGHT OUTER");
}
#line 10506 "bison_parser.cpp"
    break;

  case 626: /* join_kw: RIGHT  */
#line 3819 "bison_parser.y"
        {
  (yyval.join_kw_t) = new JoinKw();
  (yyval.join_kw_t)->str_val_ = string("RIGHT");
}
#line 10515 "bison_parser.cpp"
    break;

  case 627: /* join_kw: FULL OUTER  */
#line 3823 "bison_parser.y"
             {
  (yyval.join_kw_t) = new JoinKw();
  (yyval.join_kw_t)->str_val_ = string("FULL OUTER");
}
#line 10524 "bison_parser.cpp"
    break;

  case 628: /* join_kw: OUTER  */
#line 3827 "bison_parser.y"
        {
  (yyval.join_kw_t) = new JoinKw();
  (yyval.join_kw_t)->str_val_ = string("OUTER");
}
#line 10533 "bison_parser.cpp"
    break;

  case 629: /* join_kw: FULL  */
#line 3831 "bison_parser.y"
       {
  (yyval.join_kw_t) = new JoinKw();
  (yyval.join_kw_t)->str_val_ = string("FULL");
}
#line 10542 "bison_parser.cpp"
    break;

  case 630: /* join_kw: CROSS  */
#line 3835 "bison_parser.y"
        {
  (yyval.join_kw_t) = new JoinKw();
  (yyval.join_kw_t)->str_val_ = string("CROSS");
}
#line 10551 "bison_parser.cpp"
    break;

  case 631: /* join_kw: NATURAL  */
#line 3839 "bison_parser.y"
          {
  (yyval.join_kw_t) = new JoinKw();
  (yyval.join_kw_t)->str_val_ = string("NATURAL");
}
#line 10560 "bison_parser.cpp"
    break;

  case 632: /* join_kw: comment_literal join_kw  */
#line 3844 "bison_parser.y"
                            {
		(yyval.join_kw_t) = (yyvsp[0].join_kw_t);
		(yyval.join_kw_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 10569 "bison_parser.cpp"
    break;

  case 633: /* join_kw: join_kw comment_literal  */
#line 3848 "bison_parser.y"
                                  {
		(yyval.join_kw_t) = (yyvsp[-1].join_kw_t);
		(yyval.join_kw_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10578 "bison_parser.cpp"
    break;

  case 634: /* opt_semicolon: ';'  */
#line 3864 "bison_parser.y"
                    {
  (yyval.opt_semicolon_t) = new OptSemicolon();
  (yyval.opt_semicolon_t)->str_val_ = string(";");
}
#line 10587 "bison_parser.cpp"
    break;

  case 635: /* opt_semicolon: %empty  */
#line 3868 "bison_parser.y"
              {
  (yyval.opt_semicolon_t) = new OptSemicolon();
  (yyval.opt_semicolon_t)->str_val_ = string("");
}
#line 10596 "bison_parser.cpp"
    break;

  case 636: /* opt_semicolon: comment_literal opt_semicolon  */
#line 3872 "bison_parser.y"
                                {
		(yyval.opt_semicolon_t) = (yyvsp[0].opt_semicolon_t);
		(yyval.opt_semicolon_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 10605 "bison_parser.cpp"
    break;

  case 637: /* opt_semicolon: opt_semicolon comment_literal  */
#line 3876 "bison_parser.y"
                                        {
		(yyval.opt_semicolon_t) = (yyvsp[-1].opt_semicolon_t);
		(yyval.opt_semicolon_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10614 "bison_parser.cpp"
    break;

  case 638: /* ident_commalist: IDENTIFIER  */
#line 3882 "bison_parser.y"
                             {
  (yyval.ident_commalist_t) = new IdentCommaList();
  (yyval.ident_commalist_t)->v_iden_comma_list_.push_back(new Identifier((yyvsp[0].sval)));
  free((yyvsp[0].sval));
}
#line 10624 "bison_parser.cpp"
    break;

  case 639: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 3887 "bison_parser.y"
                                 {
  (yyvsp[-2].ident_commalist_t)->v_iden_comma_list_.push_back(new Identifier((yyvsp[0].sval)));
  (yyval.ident_commalist_t) = (yyvsp[-2].ident_commalist_t);
  free((yyvsp[0].sval));
}
#line 10634 "bison_parser.cpp"
    break;

  case 640: /* ident_commalist: comment_literal ident_commalist  */
#line 3892 "bison_parser.y"
                                  {
		(yyval.ident_commalist_t) = (yyvsp[0].ident_commalist_t);
		(yyval.ident_commalist_t)->left_comment_ = (yyvsp[-1].comment_literal_t);
	}
#line 10643 "bison_parser.cpp"
    break;

  case 641: /* ident_commalist: ident_commalist comment_literal  */
#line 3896 "bison_parser.y"
                                          {
		(yyval.ident_commalist_t) = (yyvsp[-1].ident_commalist_t);
		(yyval.ident_commalist_t)->right_comment_ = (yyvsp[0].comment_literal_t);
	}
#line 10652 "bison_parser.cpp"
    break;


#line 10656 "bison_parser.cpp"

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
  yytoken = yychar == SQL_HSQL_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
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
          yychar = SQL_HSQL_EMPTY;
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
  if (yychar != SQL_HSQL_EMPTY)
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

#line 3901 "bison_parser.y"

    /*********************************
     ** Section 4: Additional C code
     *********************************/

    /* empty */
