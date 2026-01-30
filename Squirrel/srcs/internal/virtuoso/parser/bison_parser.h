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

#ifndef YY_FF_BISON_PARSER_H_INCLUDED
# define YY_FF_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef FF_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define FF_DEBUG 1
#  else
#   define FF_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define FF_DEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined FF_DEBUG */
#if FF_DEBUG
extern int ff_debug;
#endif
/* "%code requires" blocks.  */
#line 9 "bison.y"

#include "../include/ast.h"
#include "parser_typedef.h"

#define MERGE_LEFT_COMMENT(DEST, SRC)                     \
    do {                                                  \
        if ((DEST)->left_comment_ != NULL) {              \
            (DEST)->left_comment_->string_vals_.insert(   \
                (DEST)->left_comment_->string_vals_.begin(), \
                (SRC)->string_vals_.begin(),              \
                (SRC)->string_vals_.end()                 \
            );                                             \
        } else {                                          \
            (DEST)->left_comment_ = (SRC);                \
        }                                                 \
    } while (0)
#define MERGE_RIGHT_COMMENT(DEST, SRC)                     \
    do {                                                  \
        if ((DEST)->right_comment_ != NULL) {              \
            (DEST)->right_comment_->string_vals_.insert(   \
                (DEST)->right_comment_->string_vals_.end(), \
                (SRC)->string_vals_.begin(),              \
                (SRC)->string_vals_.end()                 \
            );                                             \
        } else {                                          \
            (DEST)->right_comment_ = (SRC);                \
        }                                                 \
    } while (0)

#line 87 "bison_parser.h"

/* Token kinds.  */
#ifndef FF_TOKENTYPE
# define FF_TOKENTYPE
  enum ff_tokentype
  {
    SQL_FF_EMPTY = -2,
    SQL_YYEOF = 0,                 /* "end of file"  */
    SQL_FF_error = 256,            /* error  */
    SQL_FF_UNDEF = 257,            /* "invalid token"  */
    SQL_OP_NOTEQUAL = 258,         /* OP_NOTEQUAL  */
    SQL_ENABLE = 259,              /* ENABLE  */
    SQL_SIMPLE = 260,              /* SIMPLE  */
    SQL_TEXT = 261,                /* TEXT  */
    SQL_OVER = 262,                /* OVER  */
    SQL_YEAR = 263,                /* YEAR  */
    SQL_INSERT_METHOD = 264,       /* INSERT_METHOD  */
    SQL_OP_SEMI = 265,             /* OP_SEMI  */
    SQL_BIGINT = 266,              /* BIGINT  */
    SQL_LIMIT = 267,               /* LIMIT  */
    SQL_OP_GREATERTHAN = 268,      /* OP_GREATERTHAN  */
    SQL_WITH = 269,                /* WITH  */
    SQL_ORDER = 270,               /* ORDER  */
    SQL_OPTION = 271,              /* OPTION  */
    SQL_LAST = 272,                /* LAST  */
    SQL_UNBOUNDED = 273,           /* UNBOUNDED  */
    SQL_PRECEDING = 274,           /* PRECEDING  */
    SQL_EXCEPT = 275,              /* EXCEPT  */
    SQL_NUMERIC = 276,             /* NUMERIC  */
    SQL_OP_LESSTHAN = 277,         /* OP_LESSTHAN  */
    SQL_ACTION = 278,              /* ACTION  */
    SQL_BEFORE = 279,              /* BEFORE  */
    SQL_OP_GREATEREQ = 280,        /* OP_GREATEREQ  */
    SQL_CHECK = 281,               /* CHECK  */
    SQL_COMPACT = 282,             /* COMPACT  */
    SQL_FULL = 283,                /* FULL  */
    SQL_NATURAL = 284,             /* NATURAL  */
    SQL_BINARY = 285,              /* BINARY  */
    SQL_NATIONAL = 286,            /* NATIONAL  */
    SQL_ENUM = 287,                /* ENUM  */
    SQL_REDUNDANT = 288,           /* REDUNDANT  */
    SQL_OP_ADD = 289,              /* OP_ADD  */
    SQL_CURRENT = 290,             /* CURRENT  */
    SQL_MERGE = 291,               /* MERGE  */
    SQL_TRIGGER = 292,             /* TRIGGER  */
    SQL_COMPRESSED = 293,          /* COMPRESSED  */
    SQL_OP_SUB = 294,              /* OP_SUB  */
    SQL_FALSE = 295,               /* FALSE  */
    SQL_UNIQUE = 296,              /* UNIQUE  */
    SQL_WHERE = 297,               /* WHERE  */
    SQL_MINUTE = 298,              /* MINUTE  */
    SQL_FIRST = 299,               /* FIRST  */
    SQL_ON = 300,                  /* ON  */
    SQL_PARTIAL = 301,             /* PARTIAL  */
    SQL_DOUBLE = 302,              /* DOUBLE  */
    SQL_AFTER = 303,               /* AFTER  */
    SQL_PRIMARY = 304,             /* PRIMARY  */
    SQL_MONTH = 305,               /* MONTH  */
    SQL_DEFERRED = 306,            /* DEFERRED  */
    SQL_VALUES = 307,              /* VALUES  */
    SQL_LONGTEXT = 308,            /* LONGTEXT  */
    SQL_SQL = 309,                 /* SQL  */
    SQL_SHARED = 310,              /* SHARED  */
    SQL_VALIDATION = 311,          /* VALIDATION  */
    SQL_OR = 312,                  /* OR  */
    SQL_VIEW = 313,                /* VIEW  */
    SQL_INDEX = 314,               /* INDEX  */
    SQL_GROUP = 315,               /* GROUP  */
    SQL_OP_MUL = 316,              /* OP_MUL  */
    SQL_INPLACE = 317,             /* INPLACE  */
    SQL_FOREIGN = 318,             /* FOREIGN  */
    SQL_RESTRICT = 319,            /* RESTRICT  */
    SQL_SPATIAL = 320,             /* SPATIAL  */
    SQL_FOLLOWING = 321,           /* FOLLOWING  */
    SQL_DEC = 322,                 /* DEC  */
    SQL_SELECT = 323,              /* SELECT  */
    SQL_NONE = 324,                /* NONE  */
    SQL_DISTINCT = 325,            /* DISTINCT  */
    SQL_TRUE = 326,                /* TRUE  */
    SQL_DYNAMIC = 327,             /* DYNAMIC  */
    SQL_BY = 328,                  /* BY  */
    SQL_OP_MOD = 329,              /* OP_MOD  */
    SQL_INTEGER = 330,             /* INTEGER  */
    SQL_SECURITY = 331,            /* SECURITY  */
    SQL_IS = 332,                  /* IS  */
    SQL_DEFINER = 333,             /* DEFINER  */
    SQL_ROW = 334,                 /* ROW  */
    SQL_ENFORCED = 335,            /* ENFORCED  */
    SQL_END = 336,                 /* END  */
    SQL_RECURSIVE = 337,           /* RECURSIVE  */
    SQL_FOR = 338,                 /* FOR  */
    SQL_TEMPTABLE = 339,           /* TEMPTABLE  */
    SQL_UNION = 340,               /* UNION  */
    SQL_NULLS = 341,               /* NULLS  */
    SQL_UPDATE = 342,              /* UPDATE  */
    SQL_ELSE = 343,                /* ELSE  */
    SQL_RANGE = 344,               /* RANGE  */
    SQL_SET = 345,                 /* SET  */
    SQL_INVOKER = 346,             /* INVOKER  */
    SQL_OFFSET = 347,              /* OFFSET  */
    SQL_INDEXED = 348,             /* INDEXED  */
    SQL_FORCE = 349,               /* FORCE  */
    SQL_NCHAR = 350,               /* NCHAR  */
    SQL_AND = 351,                 /* AND  */
    SQL_INITIALLY = 352,           /* INITIALLY  */
    SQL_PRECISION = 353,           /* PRECISION  */
    SQL_FILTER = 354,              /* FILTER  */
    SQL_WITHOUT = 355,             /* WITHOUT  */
    SQL_NOT = 356,                 /* NOT  */
    SQL_DELETE = 357,              /* DELETE  */
    SQL_DEFFERRABLE = 358,         /* DEFFERRABLE  */
    SQL_REAL = 359,                /* REAL  */
    SQL_THEN = 360,                /* THEN  */
    SQL_UNDEFINED = 361,           /* UNDEFINED  */
    SQL_DEFAULT = 362,             /* DEFAULT  */
    SQL_CROSS = 363,               /* CROSS  */
    SQL_CHAR = 364,                /* CHAR  */
    SQL_REFERENCES = 365,          /* REFERENCES  */
    SQL_OP_XOR = 366,              /* OP_XOR  */
    SQL_CASE = 367,                /* CASE  */
    SQL_FIXED = 368,               /* FIXED  */
    SQL_HOUR = 369,                /* HOUR  */
    SQL_NO = 370,                  /* NO  */
    SQL_COLUMN = 371,              /* COLUMN  */
    SQL_LOCAL = 372,               /* LOCAL  */
    SQL_DROP = 373,                /* DROP  */
    SQL_REPLACE = 374,             /* REPLACE  */
    SQL_ASC = 375,                 /* ASC  */
    SQL_OP_COMMA = 376,            /* OP_COMMA  */
    SQL_DISABLE = 377,             /* DISABLE  */
    SQL_TABLE = 378,               /* TABLE  */
    SQL_ARRAY = 379,               /* ARRAY  */
    SQL_IF = 380,                  /* IF  */
    SQL_EXTRACT = 381,             /* EXTRACT  */
    SQL_LEFT = 382,                /* LEFT  */
    SQL_FULLTEXT = 383,            /* FULLTEXT  */
    SQL_HASH = 384,                /* HASH  */
    SQL_ALGORITHM = 385,           /* ALGORITHM  */
    SQL_LOCK = 386,                /* LOCK  */
    SQL_DECIMAL = 387,             /* DECIMAL  */
    SQL_PARTITION = 388,           /* PARTITION  */
    SQL_CASCADE = 389,             /* CASCADE  */
    SQL_ADD = 390,                 /* ADD  */
    SQL_BETWEEN = 391,             /* BETWEEN  */
    SQL_OP_LESSEQ = 392,           /* OP_LESSEQ  */
    SQL_MATCH = 393,               /* MATCH  */
    SQL_ALL = 394,                 /* ALL  */
    SQL_ROWS = 395,                /* ROWS  */
    SQL_JOIN = 396,                /* JOIN  */
    SQL_LIKE = 397,                /* LIKE  */
    SQL_OP_RP = 398,               /* OP_RP  */
    SQL_IGNORE = 399,              /* IGNORE  */
    SQL_INT = 400,                 /* INT  */
    SQL_MEDIUMTEXT = 401,          /* MEDIUMTEXT  */
    SQL_BOOLEAN = 402,             /* BOOLEAN  */
    SQL_KEY = 403,                 /* KEY  */
    SQL_EACH = 404,                /* EACH  */
    SQL_USING = 405,               /* USING  */
    SQL_RENAME = 406,              /* RENAME  */
    SQL_DO = 407,                  /* DO  */
    SQL_OP_LP = 408,               /* OP_LP  */
    SQL_CHARACTER = 409,           /* CHARACTER  */
    SQL_UMINUS = 410,              /* UMINUS  */
    SQL_CAST = 411,                /* CAST  */
    SQL_GROUPS = 412,              /* GROUPS  */
    SQL_OUTER = 413,               /* OUTER  */
    SQL_NULL = 414,                /* NULL  */
    SQL_SMALLINT = 415,            /* SMALLINT  */
    SQL_EXCLUSIVE = 416,           /* EXCLUSIVE  */
    SQL_TEMPORARY = 417,           /* TEMPORARY  */
    SQL_CONSTRAINT = 418,          /* CONSTRAINT  */
    SQL_CREATE = 419,              /* CREATE  */
    SQL_OP_LBRACKET = 420,         /* OP_LBRACKET  */
    SQL_WHEN = 421,                /* WHEN  */
    SQL_IMMEDIATE = 422,           /* IMMEDIATE  */
    SQL_TO = 423,                  /* TO  */
    SQL_BTREE = 424,               /* BTREE  */
    SQL_DAY = 425,                 /* DAY  */
    SQL_CONFLICT = 426,            /* CONFLICT  */
    SQL_ROW_FORMAT = 427,          /* ROW_FORMAT  */
    SQL_OP_RBRACKET = 428,         /* OP_RBRACKET  */
    SQL_EXISTS = 429,              /* EXISTS  */
    SQL_INSERT = 430,              /* INSERT  */
    SQL_KEYS = 431,                /* KEYS  */
    SQL_INTO = 432,                /* INTO  */
    SQL_OP_DIVIDE = 433,           /* OP_DIVIDE  */
    SQL_CASCADED = 434,            /* CASCADED  */
    SQL_ISNULL = 435,              /* ISNULL  */
    SQL_AS = 436,                  /* AS  */
    SQL_INNER = 437,               /* INNER  */
    SQL_INTERSECT = 438,           /* INTERSECT  */
    SQL_IN = 439,                  /* IN  */
    SQL_OP_EQUAL = 440,            /* OP_EQUAL  */
    SQL_VARCHAR = 441,             /* VARCHAR  */
    SQL_COPY = 442,                /* COPY  */
    SQL_ALTER = 443,               /* ALTER  */
    SQL_DESC = 444,                /* DESC  */
    SQL_FROM = 445,                /* FROM  */
    SQL_TINYTEXT = 446,            /* TINYTEXT  */
    SQL_FLOAT = 447,               /* FLOAT  */
    SQL_SECOND = 448,              /* SECOND  */
    SQL_WINDOW = 449,              /* WINDOW  */
    SQL_NOTHING = 450,             /* NOTHING  */
    SQL_HAVING = 451,              /* HAVING  */
    SQL_INTLITERAL = 452,          /* INTLITERAL  */
    SQL_FLOATLITERAL = 453,        /* FLOATLITERAL  */
    SQL_IDENTIFIER = 454,          /* IDENTIFIER  */
    SQL_STRINGLITERAL = 455,       /* STRINGLITERAL  */
    SQL_COMMENTLITERAL = 456       /* COMMENTLITERAL  */
  };
  typedef enum ff_tokentype ff_token_kind_t;
#endif

/* Value type.  */
#if ! defined FF_STYPE && ! defined FF_STYPE_IS_DECLARED
#line 59 "bison.y"
union FF_STYPE
{
#line 59 "bison.y"

	long	ival;
	char*	sval;
	double	fval;
	Program *	program_t;
	Stmtlist *	stmtlist_t;
	Stmt *	stmt_t;
	CreateStmt *	create_stmt_t;
	DropStmt *	drop_stmt_t;
	AlterStmt *	alter_stmt_t;
	SelectStmt *	select_stmt_t;
	SelectWithParens *	select_with_parens_t;
	SelectNoParens *	select_no_parens_t;
	SelectClauseList *	select_clause_list_t;
	SelectClause *	select_clause_t;
	CombineClause *	combine_clause_t;
	OptFromClause *	opt_from_clause_t;
	SelectTarget *	select_target_t;
	OptWindowClause *	opt_window_clause_t;
	WindowClause *	window_clause_t;
	WindowDefList *	window_def_list_t;
	WindowDef *	window_def_t;
	WindowName *	window_name_t;
	Window *	window_t;
	OptPartition *	opt_partition_t;
	OptFrameClause *	opt_frame_clause_t;
	RangeOrRows *	range_or_rows_t;
	FrameBoundStart *	frame_bound_start_t;
	FrameBoundEnd *	frame_bound_end_t;
	FrameBound *	frame_bound_t;
	OptExistWindowName *	opt_exist_window_name_t;
	OptGroupClause *	opt_group_clause_t;
	OptHavingClause *	opt_having_clause_t;
	OptWhereClause *	opt_where_clause_t;
	WhereClause *	where_clause_t;
	FromClause *	from_clause_t;
	TableRef *	table_ref_t;
	OptIndex *	opt_index_t;
	OptOn *	opt_on_t;
	OptUsing *	opt_using_t;
	ColumnNameList *	column_name_list_t;
	OptTablePrefix *	opt_table_prefix_t;
	JoinOp *	join_op_t;
	OptJoinType *	opt_join_type_t;
	ExprList *	expr_list_t;
	OptLimitClause *	opt_limit_clause_t;
	LimitClause *	limit_clause_t;
	OptLimitRowCount *	opt_limit_row_count_t;
	OptOrderClause *	opt_order_clause_t;
	OptOrderNulls *	opt_order_nulls_t;
	OrderItemList *	order_item_list_t;
	OrderItem *	order_item_t;
	OptOrderBehavior *	opt_order_behavior_t;
	OptWithClause *	opt_with_clause_t;
	CteTableList *	cte_table_list_t;
	CteTable *	cte_table_t;
	CteTableName *	cte_table_name_t;
	OptAllOrDistinct *	opt_all_or_distinct_t;
	CreateTableStmt *	create_table_stmt_t;
	CreateIndexStmt *	create_index_stmt_t;
	CreateTriggerStmt *	create_trigger_stmt_t;
	CreateViewStmt *	create_view_stmt_t;
	OptTableOptionList *	opt_table_option_list_t;
	TableOptionList *	table_option_list_t;
	TableOption *	table_option_t;
	OptOpComma *	opt_op_comma_t;
	OptIgnoreOrReplace *	opt_ignore_or_replace_t;
	OptViewAlgorithm *	opt_view_algorithm_t;
	OptSqlSecurity *	opt_sql_security_t;
	OptIndexOption *	opt_index_option_t;
	OptExtraOption *	opt_extra_option_t;
	IndexAlgorithmOption *	index_algorithm_option_t;
	LockOption *	lock_option_t;
	OptOpEqual *	opt_op_equal_t;
	TriggerEvents *	trigger_events_t;
	TriggerName *	trigger_name_t;
	TriggerActionTime *	trigger_action_time_t;
	DropIndexStmt *	drop_index_stmt_t;
	DropTableStmt *	drop_table_stmt_t;
	OptRestrictOrCascade *	opt_restrict_or_cascade_t;
	DropTriggerStmt *	drop_trigger_stmt_t;
	DropViewStmt *	drop_view_stmt_t;
	InsertStmt *	insert_stmt_t;
	InsertRest *	insert_rest_t;
	SuperValuesList *	super_values_list_t;
	ValuesList *	values_list_t;
	OptOnConflict *	opt_on_conflict_t;
	OptConflictExpr *	opt_conflict_expr_t;
	IndexedColumnList *	indexed_column_list_t;
	IndexedColumn *	indexed_column_t;
	UpdateStmt *	update_stmt_t;
	AlterAction *	alter_action_t;
	AlterConstantAction *	alter_constant_action_t;
	ColumnDefList *	column_def_list_t;
	ColumnDef *	column_def_t;
	OptColumnConstraintList *	opt_column_constraint_list_t;
	ColumnConstraintList *	column_constraint_list_t;
	ColumnConstraint *	column_constraint_t;
	OptReferenceClause *	opt_reference_clause_t;
	OptCheck *	opt_check_t;
	ConstraintType *	constraint_type_t;
	ReferenceClause *	reference_clause_t;
	OptForeignKey *	opt_foreign_key_t;
	OptForeignKeyActions *	opt_foreign_key_actions_t;
	ForeignKeyActions *	foreign_key_actions_t;
	KeyActions *	key_actions_t;
	OptConstraintAttributeSpec *	opt_constraint_attribute_spec_t;
	OptInitialTime *	opt_initial_time_t;
	ConstraintName *	constraint_name_t;
	OptTemp *	opt_temp_t;
	OptCheckOption *	opt_check_option_t;
	OptColumnNameListP *	opt_column_name_list_p_t;
	SetClauseList *	set_clause_list_t;
	SetClause *	set_clause_t;
	OptAsAlias *	opt_as_alias_t;
	Expr *	expr_t;
	Operand *	operand_t;
	CastExpr *	cast_expr_t;
	ScalarExpr *	scalar_expr_t;
	UnaryExpr *	unary_expr_t;
	BinaryExpr *	binary_expr_t;
	LogicExpr *	logic_expr_t;
	InExpr *	in_expr_t;
	CaseExpr *	case_expr_t;
	BetweenExpr *	between_expr_t;
	ExistsExpr *	exists_expr_t;
	FunctionExpr *	function_expr_t;
	OptDistinct *	opt_distinct_t;
	OptFilterClause *	opt_filter_clause_t;
	OptOverClause *	opt_over_clause_t;
	CaseList *	case_list_t;
	CaseClause *	case_clause_t;
	CompExpr *	comp_expr_t;
	ExtractExpr *	extract_expr_t;
	DatetimeField *	datetime_field_t;
	ArrayExpr *	array_expr_t;
	ArrayIndex *	array_index_t;
	Literal *	literal_t;
	StringLiteral *	string_literal_t;
	CommentLiteral *	comment_literal_t;
	BoolLiteral *	bool_literal_t;
	NumLiteral *	num_literal_t;
	IntLiteral *	int_literal_t;
	FloatLiteral *	float_literal_t;
	OptColumn *	opt_column_t;
	TriggerBody *	trigger_body_t;
	OptIfNotExist *	opt_if_not_exist_t;
	OptIfExist *	opt_if_exist_t;
	Identifier *	identifier_t;
	AsAlias *	as_alias_t;
	TableName *	table_name_t;
	ColumnName *	column_name_t;
	OptIndexKeyword *	opt_index_keyword_t;
	ViewName *	view_name_t;
	FunctionName *	function_name_t;
	BinaryOp *	binary_op_t;
	OptNot *	opt_not_t;
	Name *	name_t;
	TypeName *	type_name_t;
	CharacterType *	character_type_t;
	CharacterWithLength *	character_with_length_t;
	CharacterWithoutLength *	character_without_length_t;
	CharacterConflicta *	character_conflicta_t;
	NumericType *	numeric_type_t;
	OptTableConstraintList *	opt_table_constraint_list_t;
	TableConstraintList *	table_constraint_list_t;
	TableConstraint *	table_constraint_t;
	OptEnforced *	opt_enforced_t;

#line 476 "bison_parser.h"

};
#line 59 "bison.y"
typedef union FF_STYPE FF_STYPE;
# define FF_STYPE_IS_TRIVIAL 1
# define FF_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined FF_LTYPE && ! defined FF_LTYPE_IS_DECLARED
typedef struct FF_LTYPE FF_LTYPE;
struct FF_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define FF_LTYPE_IS_DECLARED 1
# define FF_LTYPE_IS_TRIVIAL 1
#endif




int ff_parse (Program* result, yyscan_t scanner);


#endif /* !YY_FF_BISON_PARSER_H_INCLUDED  */
