/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 37 "bison_parser.y"

  // %code requires block

#include "../include/ast.h"
#include "../include/define.h"
//#include "../include/utils.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION                        \
  yylloc->first_line = yylloc->last_line;     \
  yylloc->first_column = yylloc->last_column; \
  for (int i = 0; yytext[i] != '\0'; i++) {   \
    yylloc->total_column++;                   \
    yylloc->string_length++;                  \
    if (yytext[i] == '\n') {                  \
      yylloc->last_line++;                    \
      yylloc->last_column = 0;                \
    } else {                                  \
      yylloc->last_column++;                  \
    }                                         \
  }

#line 81 "bison_parser.h"

/* Token kinds.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_HSQL_EMPTY = -2,
    SQL_YYEOF = 0,                 /* "end of file"  */
    SQL_HSQL_error = 256,          /* error  */
    SQL_HSQL_UNDEF = 257,          /* "invalid token"  */
    SQL_STRING = 258,              /* STRING  */
    SQL_IDENTIFIER = 259,          /* IDENTIFIER  */
    SQL_COMMENTLITERAL = 260,      /* COMMENTLITERAL  */
    SQL_FLOATVAL = 261,            /* FLOATVAL  */
    SQL_INTVAL = 262,              /* INTVAL  */
    SQL_DEALLOCATE = 263,          /* DEALLOCATE  */
    SQL_PARAMETERS = 264,          /* PARAMETERS  */
    SQL_INTERSECT = 265,           /* INTERSECT  */
    SQL_TEMPORARY = 266,           /* TEMPORARY  */
    SQL_TIMESTAMP = 267,           /* TIMESTAMP  */
    SQL_DISTINCT = 268,            /* DISTINCT  */
    SQL_NVARCHAR = 269,            /* NVARCHAR  */
    SQL_RESTRICT = 270,            /* RESTRICT  */
    SQL_TRUNCATE = 271,            /* TRUNCATE  */
    SQL_ANALYZE = 272,             /* ANALYZE  */
    SQL_BETWEEN = 273,             /* BETWEEN  */
    SQL_CASCADE = 274,             /* CASCADE  */
    SQL_COLUMNS = 275,             /* COLUMNS  */
    SQL_CONTROL = 276,             /* CONTROL  */
    SQL_DEFAULT = 277,             /* DEFAULT  */
    SQL_EXECUTE = 278,             /* EXECUTE  */
    SQL_EXPLAIN = 279,             /* EXPLAIN  */
    SQL_INTEGER = 280,             /* INTEGER  */
    SQL_NATURAL = 281,             /* NATURAL  */
    SQL_PREPARE = 282,             /* PREPARE  */
    SQL_PRIMARY = 283,             /* PRIMARY  */
    SQL_SCHEMAS = 284,             /* SCHEMAS  */
    SQL_SPATIAL = 285,             /* SPATIAL  */
    SQL_VARCHAR = 286,             /* VARCHAR  */
    SQL_VIRTUAL = 287,             /* VIRTUAL  */
    SQL_DESCRIBE = 288,            /* DESCRIBE  */
    SQL_BEFORE = 289,              /* BEFORE  */
    SQL_COLUMN = 290,              /* COLUMN  */
    SQL_CREATE = 291,              /* CREATE  */
    SQL_DELETE = 292,              /* DELETE  */
    SQL_DIRECT = 293,              /* DIRECT  */
    SQL_DOUBLE = 294,              /* DOUBLE  */
    SQL_ESCAPE = 295,              /* ESCAPE  */
    SQL_EXCEPT = 296,              /* EXCEPT  */
    SQL_EXISTS = 297,              /* EXISTS  */
    SQL_EXTRACT = 298,             /* EXTRACT  */
    SQL_GLOBAL = 299,              /* GLOBAL  */
    SQL_HAVING = 300,              /* HAVING  */
    SQL_IMPORT = 301,              /* IMPORT  */
    SQL_INSERT = 302,              /* INSERT  */
    SQL_ISNULL = 303,              /* ISNULL  */
    SQL_OFFSET = 304,              /* OFFSET  */
    SQL_RENAME = 305,              /* RENAME  */
    SQL_SCHEMA = 306,              /* SCHEMA  */
    SQL_SELECT = 307,              /* SELECT  */
    SQL_SORTED = 308,              /* SORTED  */
    SQL_TABLES = 309,              /* TABLES  */
    SQL_UNIQUE = 310,              /* UNIQUE  */
    SQL_UNLOAD = 311,              /* UNLOAD  */
    SQL_UPDATE = 312,              /* UPDATE  */
    SQL_VALUES = 313,              /* VALUES  */
    SQL_AFTER = 314,               /* AFTER  */
    SQL_ALTER = 315,               /* ALTER  */
    SQL_CROSS = 316,               /* CROSS  */
    SQL_DELTA = 317,               /* DELTA  */
    SQL_FLOAT = 318,               /* FLOAT  */
    SQL_GROUP = 319,               /* GROUP  */
    SQL_INDEX = 320,               /* INDEX  */
    SQL_INNER = 321,               /* INNER  */
    SQL_LIMIT = 322,               /* LIMIT  */
    SQL_LOCAL = 323,               /* LOCAL  */
    SQL_MERGE = 324,               /* MERGE  */
    SQL_MINUS = 325,               /* MINUS  */
    SQL_ORDER = 326,               /* ORDER  */
    SQL_OUTER = 327,               /* OUTER  */
    SQL_RIGHT = 328,               /* RIGHT  */
    SQL_TABLE = 329,               /* TABLE  */
    SQL_UNION = 330,               /* UNION  */
    SQL_USING = 331,               /* USING  */
    SQL_WHERE = 332,               /* WHERE  */
    SQL_CALL = 333,                /* CALL  */
    SQL_CASE = 334,                /* CASE  */
    SQL_CHAR = 335,                /* CHAR  */
    SQL_DATE = 336,                /* DATE  */
    SQL_DESC = 337,                /* DESC  */
    SQL_DROP = 338,                /* DROP  */
    SQL_ELSE = 339,                /* ELSE  */
    SQL_FILE = 340,                /* FILE  */
    SQL_FROM = 341,                /* FROM  */
    SQL_FULL = 342,                /* FULL  */
    SQL_HASH = 343,                /* HASH  */
    SQL_HINT = 344,                /* HINT  */
    SQL_INTO = 345,                /* INTO  */
    SQL_JOIN = 346,                /* JOIN  */
    SQL_LEFT = 347,                /* LEFT  */
    SQL_LIKE = 348,                /* LIKE  */
    SQL_LOAD = 349,                /* LOAD  */
    SQL_LONG = 350,                /* LONG  */
    SQL_NULL = 351,                /* NULL  */
    SQL_PLAN = 352,                /* PLAN  */
    SQL_SHOW = 353,                /* SHOW  */
    SQL_TEXT = 354,                /* TEXT  */
    SQL_THEN = 355,                /* THEN  */
    SQL_TIME = 356,                /* TIME  */
    SQL_VIEW = 357,                /* VIEW  */
    SQL_WHEN = 358,                /* WHEN  */
    SQL_WITH = 359,                /* WITH  */
    SQL_ADD = 360,                 /* ADD  */
    SQL_ALL = 361,                 /* ALL  */
    SQL_AND = 362,                 /* AND  */
    SQL_ASC = 363,                 /* ASC  */
    SQL_CSV = 364,                 /* CSV  */
    SQL_END = 365,                 /* END  */
    SQL_FOR = 366,                 /* FOR  */
    SQL_INT = 367,                 /* INT  */
    SQL_KEY = 368,                 /* KEY  */
    SQL_NOT = 369,                 /* NOT  */
    SQL_OFF = 370,                 /* OFF  */
    SQL_SET = 371,                 /* SET  */
    SQL_TBL = 372,                 /* TBL  */
    SQL_TOP = 373,                 /* TOP  */
    SQL_AS = 374,                  /* AS  */
    SQL_BY = 375,                  /* BY  */
    SQL_IF = 376,                  /* IF  */
    SQL_IN = 377,                  /* IN  */
    SQL_IS = 378,                  /* IS  */
    SQL_OF = 379,                  /* OF  */
    SQL_ON = 380,                  /* ON  */
    SQL_OR = 381,                  /* OR  */
    SQL_TO = 382,                  /* TO  */
    SQL_ARRAY = 383,               /* ARRAY  */
    SQL_CONCAT = 384,              /* CONCAT  */
    SQL_ILIKE = 385,               /* ILIKE  */
    SQL_SECOND = 386,              /* SECOND  */
    SQL_MINUTE = 387,              /* MINUTE  */
    SQL_HOUR = 388,                /* HOUR  */
    SQL_DAY = 389,                 /* DAY  */
    SQL_MONTH = 390,               /* MONTH  */
    SQL_YEAR = 391,                /* YEAR  */
    SQL_TRUE = 392,                /* TRUE  */
    SQL_FALSE = 393,               /* FALSE  */
    SQL_PRAGMA = 394,              /* PRAGMA  */
    SQL_REINDEX = 395,             /* REINDEX  */
    SQL_GENERATED = 396,           /* GENERATED  */
    SQL_ALWAYS = 397,              /* ALWAYS  */
    SQL_CHECK = 398,               /* CHECK  */
    SQL_CONFLICT = 399,            /* CONFLICT  */
    SQL_IGNORE = 400,              /* IGNORE  */
    SQL_REPLACE = 401,             /* REPLACE  */
    SQL_ROLLBACK = 402,            /* ROLLBACK  */
    SQL_ABORT = 403,               /* ABORT  */
    SQL_FAIL = 404,                /* FAIL  */
    SQL_AUTOINCR = 405,            /* AUTOINCR  */
    SQL_BEGIN = 406,               /* BEGIN  */
    SQL_TRIGGER = 407,             /* TRIGGER  */
    SQL_TEMP = 408,                /* TEMP  */
    SQL_INSTEAD = 409,             /* INSTEAD  */
    SQL_EACH = 410,                /* EACH  */
    SQL_ROW = 411,                 /* ROW  */
    SQL_OVER = 412,                /* OVER  */
    SQL_FILTER = 413,              /* FILTER  */
    SQL_PARTITION = 414,           /* PARTITION  */
    SQL_CURRENT = 415,             /* CURRENT  */
    SQL_EXCLUDE = 416,             /* EXCLUDE  */
    SQL_FOLLOWING = 417,           /* FOLLOWING  */
    SQL_GROUPS = 418,              /* GROUPS  */
    SQL_NO = 419,                  /* NO  */
    SQL_OTHERS = 420,              /* OTHERS  */
    SQL_PRECEDING = 421,           /* PRECEDING  */
    SQL_RANGE = 422,               /* RANGE  */
    SQL_ROWS = 423,                /* ROWS  */
    SQL_TIES = 424,                /* TIES  */
    SQL_UNBOUNDED = 425,           /* UNBOUNDED  */
    SQL_WINDOW = 426,              /* WINDOW  */
    SQL_ATTACH = 427,              /* ATTACH  */
    SQL_DETACH = 428,              /* DETACH  */
    SQL_DATABASE = 429,            /* DATABASE  */
    SQL_INDEXED = 430,             /* INDEXED  */
    SQL_CAST = 431,                /* CAST  */
    SQL_SAVEPOINT = 432,           /* SAVEPOINT  */
    SQL_RELEASE = 433,             /* RELEASE  */
    SQL_VACUUM = 434,              /* VACUUM  */
    SQL_TRANSACTION = 435,         /* TRANSACTION  */
    SQL_DEFFERED = 436,            /* DEFFERED  */
    SQL_EXCLUSIVE = 437,           /* EXCLUSIVE  */
    SQL_IMEDIATE = 438,            /* IMEDIATE  */
    SQL_COMMIT = 439,              /* COMMIT  */
    SQL_GLOB = 440,                /* GLOB  */
    SQL_MATCH = 441,               /* MATCH  */
    SQL_REGEX = 442,               /* REGEX  */
    SQL_NOTHING = 443,             /* NOTHING  */
    SQL_NULLS = 444,               /* NULLS  */
    SQL_LAST = 445,                /* LAST  */
    SQL_FIRST = 446,               /* FIRST  */
    SQL_DO = 447,                  /* DO  */
    SQL_COLLATE = 448,             /* COLLATE  */
    SQL_EQUALS = 449,              /* EQUALS  */
    SQL_NOTEQUALS = 450,           /* NOTEQUALS  */
    SQL_LESS = 451,                /* LESS  */
    SQL_GREATER = 452,             /* GREATER  */
    SQL_LESSEQ = 453,              /* LESSEQ  */
    SQL_GREATEREQ = 454,           /* GREATEREQ  */
    SQL_NOTNULL = 455,             /* NOTNULL  */
    SQL_UMINUS = 456               /* UMINUS  */
  };
  typedef enum hsql_tokentype hsql_token_kind_t;
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED
#line 96 "bison_parser.y"
union HSQL_STYPE
{
#line 96 "bison_parser.y"

  double fval;
  int64_t ival;
  char* sval;
  uintmax_t uval;
  bool bval;

  Program* program_t;
  StatementList* statement_list_t;
  Statement* statement_t;
  PreparableStatement* preparable_statement_t;
  OptionalHints* optional_hints_t;
  HintList* hint_list_t;
  Hint* hint_t;
  PrepareStatement* prepare_statement_t;
  PrepareTargetQuery* prepare_target_query_t;
  ExecuteStatement* execute_statement_t;
  ImportStatement* import_statement_t;
  ImportFileType* import_file_type_t;
  FilePath* file_path_t;
  TableRefCommaList* table_ref_commalist_t;
  ShowStatement* show_statement_t;
  CreateStatement* create_statement_t;
  OptNotExists* opt_not_exists_t;
  ColumnDefCommaList* column_def_comma_list_t;
  ColumnDef* column_def_t;
  ColumnType* column_type_t;
  // OptColumnNullable* opt_column_nullable_t;
  DropStatement* drop_statement_t;
  OptExists* opt_exists_t;
  DeleteStatement* delete_statement_t;
  InsertStatement* insert_statement_t;
  OptColumnList* opt_column_list_t;
  UpdateStatement* update_statement_t;
  UpdateClauseCommalist* update_clause_commalist_t;
  UpdateClause* update_clause_t;
  SelectStatement* select_statement_t;
  SelectWithParen* select_with_paren_t;
  SelectParenOrClause* select_paren_or_clause_t;
  SelectNoParen* select_no_paren_t;
  SetOperator* set_operator_t;
  SetType* set_type_t;
  OptAll* opt_all_t;
  IdentCommaList* ident_commalist_t;
  SelectClause* select_clause_t;
  OptDistinct* opt_distinct_t;
  SelectList* select_list_t;
  OptFromClause* opt_from_clause_t;
  FromClause* from_clause_t;
  OptWhere* opt_where_t;
  OptGroup* opt_group_t;
  OptHaving* opt_having_t;
  OptOrder* opt_order_t;
  OrderList* order_list_t;
  OrderDesc* order_desc_t;
  OptOrderType* opt_order_type_t;
  OptTop* opt_top_t;
  OptLimit* opt_limit_t;
  ExprList* expr_list_t;
  OptLiteralList* opt_literal_list_t;
  LiteralList* literal_list_t;
  ExprAlias* expr_alias_t;
  Expr* expr_t;
  Operand* operand_t;
  ScalarExpr* scalar_expr_t;
  UnaryExpr* unary_expr_t;
  BinaryExpr* binary_expr_t;
  LogicExpr* logic_expr_t;
  InExpr* in_expr_t;
  CompExpr* comp_expr_t;
  CaseExpr* case_expr_t;
  CaseClause* case_clause_t;
  CaseList* case_list_t;
  ExistsExpr* exists_expr_t;
  FunctionExpr* function_expr_t;
  ExtractExpr* extract_expr_t;
  DatetimeField* datetime_field_t;
  ArrayExpr* array_expr_t;
  ArrayIndex* array_index_t;
  BetweenExpr* between_expr_t;
  ColumnName* column_name_t;
  Literal* literal_t;
  StringLiteral* string_literal_t;
	CommentLiteral *	comment_literal_t;
  BoolLiteral* bool_literal_t;
  NumLiteral* num_literal_t;
  IntLiteral* int_literal_t;
  NullLiteral* null_literal_t;
  ParamExpr* param_expr_t;
  TableRef* table_ref_t;
  TableRefAtomic* table_ref_atomic_t;
  NonjoinTableRefAtomic* nonjoin_table_ref_atomic_t;
  TableRefName* table_ref_name_t;
  TableRefNameNoAlias* table_ref_name_no_alias_t;
  TableName* table_name_t;
  TableAlias* table_alias_t;
  OptTableAlias* opt_table_alias_t;
  Alias* alias_t;
  OptAlias* opt_alias_t;
  OptWithClause* opt_with_clause_t;
  WithClause* with_clause_t;
  WithDescriptionList* with_description_list_t;
  WithDescription* with_description_t;
  JoinClause* join_clause_t;
  OptJoinType* opt_join_type_t;
  JoinCondition* join_condition_t;
  OptSemicolon* opt_semicolon_t;
  Identifier* identifier_t;
  Cmd* cmd_t;
  CmdAttach* cmd_attach_t;
  CmdDetach* cmd_detach_t;
  CmdReindex* cmd_reindex_t;
  CmdAnalyze* cmd_analyze_t;
  CmdPragma* cmd_pragma_t;
  PragmaKey* pragma_key_t;
  PragmaValue* pragma_value_t;
  PragmaName* pragma_name_t;
  SchemaName* schema_name_t;
  OptColumnArglist* opt_column_arglist_t;
  ColumnArglist* column_arglist_t;
  ColumnArg* column_arg_t;
  OptOnConflict* opt_on_conflict_t;
  ResolveType* resolve_type_t;
  OptAutoinc* opt_autoinc_t;
  OptUnique* opt_unique_t;
  IndexName* index_name_t;
  TriggerDeclare* trigger_declare_t;
  OptTmp* opt_tmp_t;
  TriggerName* trigger_name_t;
  OptTriggerTime* opt_trigger_time_t;
  TriggerEvent* trigger_event_t;
  OptOfColumnList* opt_of_column_list_t;
  OptForEach* opt_for_each_t;
  OptWhen* opt_when_t;
  TriggerCmdList* trigger_cmd_list_t;
  TriggerCmd* trigger_cmd_t;
  ModuleName* module_name_t;
  OptOverClause* opt_over_clause_t;
  OptFilterClause* opt_filter_clause_t;
  WindowClause* window_clause_t;
  WindowDefnList* window_defn_list_t;
  WindowDefn* window_defn_t;
  Window* window_t;
  OptBaseWindowName* opt_base_window_name_t;
  OptFrame* opt_frame_t;
  RangeOrRows* range_or_rows_t;
  FrameBoundS* frame_bound_s_t;
  FrameBoundE* frame_bound_e_t;
  FrameBound* frame_bound_t;
  OptFrameExclude* opt_frame_exclude_t;
  FrameExclude* frame_exclude_t;
  InsertType* insert_type_t;
  SuperList* super_list_t;
  JoinKw* join_kw_t;

  TablePrefix* table_prefix_t;
  JoinOp* join_op_t;
  OptIndex* opt_index_t;
  OptOn* opt_on_t;
  OptUsing* opt_using_t;

  CastExpr* cast_expr_t;
  AlterStatement* alter_statement_t;
  OptColumn* opt_column_t;
  CmdRelease* cmd_release_t;
  SavepointName* savepoint_name_t;
  VacuumStatement* vacuum_statement_t;
  OptSchemaName* opt_schema_name_t;
  RollbackStatement* rollback_statement_t;
  OptTransaction* opt_transaction_t;
  OptToSavepoint* opt_to_savepoint_t;
  BeginStatement* begin_statement_t;
  CommitStatement* commit_statement_t;
  UpsertClause* upsert_clause_t;
  IndexedColumnList* indexed_column_list_t;
  IndexedColumn* indexed_column_t;
  OptCollate* opt_collate_t;
  AssignList* assign_list_t;
  OptNull* opt_null_t;
  AssignClause* assign_clause_t;
  ColumnNameList* column_name_list_t;
  CollationName* collation_name_t;
  OptUpsertClause* opt_upsert_clause_t;

  std::vector<char*>* str_vec;
  std::vector<TableRef*>* table_vec;
  std::vector<ColumnDef*>* column_vec;
  std::vector<UpdateClause*>* update_vec;
  std::vector<Expr*>* expr_vec;
  std::vector<OrderDesc*>* order_vec;
  std::vector<WithDescription*>* with_description_vec;

#line 493 "bison_parser.h"

};
#line 96 "bison_parser.y"
typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif




int hsql_parse (Program * result, yyscan_t scanner);


#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */
