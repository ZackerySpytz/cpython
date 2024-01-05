// This file is generated by Tools/cases_generator/uop_metadata_generator.py
// from:
//   Python/bytecodes.c
// Do not edit!

#ifndef Py_CORE_UOP_METADATA_H
#define Py_CORE_UOP_METADATA_H
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include "pycore_uop_ids.h"
extern const uint16_t _PyUop_Flags[MAX_UOP_ID+1];
extern const char * const _PyOpcode_uop_name[MAX_UOP_ID+1];

#ifdef NEED_OPCODE_METADATA
const uint16_t _PyUop_Flags[MAX_UOP_ID+1] = {
    [_NOP] = 0,
    [_RESUME_CHECK] = HAS_DEOPT_FLAG,
    [_LOAD_FAST_CHECK] = HAS_ARG_FLAG | HAS_LOCAL_FLAG | HAS_ERROR_FLAG,
    [_LOAD_FAST] = HAS_ARG_FLAG | HAS_LOCAL_FLAG,
    [_LOAD_FAST_AND_CLEAR] = HAS_ARG_FLAG | HAS_LOCAL_FLAG,
    [_LOAD_FAST_LOAD_FAST] = HAS_ARG_FLAG | HAS_LOCAL_FLAG,
    [_LOAD_CONST] = HAS_ARG_FLAG | HAS_CONST_FLAG,
    [_STORE_FAST] = HAS_ARG_FLAG | HAS_LOCAL_FLAG,
    [_STORE_FAST_LOAD_FAST] = HAS_ARG_FLAG | HAS_LOCAL_FLAG,
    [_STORE_FAST_STORE_FAST] = HAS_ARG_FLAG | HAS_LOCAL_FLAG,
    [_POP_TOP] = 0,
    [_PUSH_NULL] = 0,
    [_END_SEND] = 0,
    [_UNARY_NEGATIVE] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_UNARY_NOT] = 0,
    [_TO_BOOL] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_TO_BOOL_BOOL] = HAS_DEOPT_FLAG,
    [_TO_BOOL_INT] = HAS_DEOPT_FLAG,
    [_TO_BOOL_LIST] = HAS_DEOPT_FLAG,
    [_TO_BOOL_NONE] = HAS_DEOPT_FLAG,
    [_TO_BOOL_STR] = HAS_DEOPT_FLAG,
    [_TO_BOOL_ALWAYS_TRUE] = HAS_DEOPT_FLAG,
    [_UNARY_INVERT] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_GUARD_BOTH_INT] = HAS_DEOPT_FLAG,
    [_BINARY_OP_MULTIPLY_INT] = HAS_ERROR_FLAG,
    [_BINARY_OP_ADD_INT] = HAS_ERROR_FLAG,
    [_BINARY_OP_SUBTRACT_INT] = HAS_ERROR_FLAG,
    [_GUARD_BOTH_FLOAT] = HAS_DEOPT_FLAG,
    [_BINARY_OP_MULTIPLY_FLOAT] = 0,
    [_BINARY_OP_ADD_FLOAT] = 0,
    [_BINARY_OP_SUBTRACT_FLOAT] = 0,
    [_GUARD_BOTH_UNICODE] = HAS_DEOPT_FLAG,
    [_BINARY_OP_ADD_UNICODE] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_BINARY_SUBSCR] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_BINARY_SLICE] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_STORE_SLICE] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_BINARY_SUBSCR_LIST_INT] = HAS_DEOPT_FLAG,
    [_BINARY_SUBSCR_STR_INT] = HAS_DEOPT_FLAG,
    [_BINARY_SUBSCR_TUPLE_INT] = HAS_DEOPT_FLAG,
    [_BINARY_SUBSCR_DICT] = HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_LIST_APPEND] = HAS_ARG_FLAG | HAS_ERROR_FLAG,
    [_SET_ADD] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_STORE_SUBSCR] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_STORE_SUBSCR_LIST_INT] = HAS_DEOPT_FLAG | HAS_ESCAPES_FLAG,
    [_STORE_SUBSCR_DICT] = HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_DELETE_SUBSCR] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_CALL_INTRINSIC_1] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_CALL_INTRINSIC_2] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_POP_FRAME] = HAS_ESCAPES_FLAG,
    [_GET_AITER] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_GET_ANEXT] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_GET_AWAITABLE] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_POP_EXCEPT] = HAS_ESCAPES_FLAG,
    [_LOAD_ASSERTION_ERROR] = 0,
    [_LOAD_BUILD_CLASS] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_STORE_NAME] = HAS_ARG_FLAG | HAS_NAME_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_DELETE_NAME] = HAS_ARG_FLAG | HAS_NAME_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_UNPACK_SEQUENCE] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_UNPACK_SEQUENCE_TWO_TUPLE] = HAS_ARG_FLAG | HAS_DEOPT_FLAG,
    [_UNPACK_SEQUENCE_TUPLE] = HAS_ARG_FLAG | HAS_DEOPT_FLAG,
    [_UNPACK_SEQUENCE_LIST] = HAS_ARG_FLAG | HAS_DEOPT_FLAG,
    [_UNPACK_EX] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_STORE_ATTR] = HAS_ARG_FLAG | HAS_NAME_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_DELETE_ATTR] = HAS_ARG_FLAG | HAS_NAME_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_STORE_GLOBAL] = HAS_ARG_FLAG | HAS_NAME_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_DELETE_GLOBAL] = HAS_ARG_FLAG | HAS_NAME_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_LOAD_LOCALS] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_LOAD_FROM_DICT_OR_GLOBALS] = HAS_ARG_FLAG | HAS_NAME_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_LOAD_NAME] = HAS_ARG_FLAG | HAS_NAME_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_LOAD_GLOBAL] = HAS_ARG_FLAG | HAS_NAME_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_GUARD_GLOBALS_VERSION] = HAS_DEOPT_FLAG,
    [_GUARD_BUILTINS_VERSION] = HAS_DEOPT_FLAG,
    [_LOAD_GLOBAL_MODULE] = HAS_ARG_FLAG | HAS_DEOPT_FLAG,
    [_LOAD_GLOBAL_BUILTINS] = HAS_ARG_FLAG | HAS_DEOPT_FLAG,
    [_DELETE_FAST] = HAS_ARG_FLAG | HAS_LOCAL_FLAG | HAS_ERROR_FLAG,
    [_MAKE_CELL] = HAS_ARG_FLAG | HAS_FREE_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_DELETE_DEREF] = HAS_ARG_FLAG | HAS_FREE_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_LOAD_FROM_DICT_OR_DEREF] = HAS_ARG_FLAG | HAS_FREE_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_LOAD_DEREF] = HAS_ARG_FLAG | HAS_FREE_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_STORE_DEREF] = HAS_ARG_FLAG | HAS_FREE_FLAG | HAS_ESCAPES_FLAG,
    [_COPY_FREE_VARS] = HAS_ARG_FLAG,
    [_BUILD_STRING] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_BUILD_TUPLE] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_BUILD_LIST] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_LIST_EXTEND] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_SET_UPDATE] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_BUILD_SET] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_BUILD_MAP] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_SETUP_ANNOTATIONS] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_BUILD_CONST_KEY_MAP] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_DICT_UPDATE] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_DICT_MERGE] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_MAP_ADD] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_LOAD_SUPER_ATTR_ATTR] = HAS_ARG_FLAG | HAS_NAME_FLAG | HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_LOAD_SUPER_ATTR_METHOD] = HAS_ARG_FLAG | HAS_NAME_FLAG | HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_LOAD_ATTR] = HAS_ARG_FLAG | HAS_NAME_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_GUARD_TYPE_VERSION] = HAS_DEOPT_FLAG,
    [_CHECK_MANAGED_OBJECT_HAS_VALUES] = HAS_DEOPT_FLAG,
    [_LOAD_ATTR_INSTANCE_VALUE] = HAS_ARG_FLAG | HAS_DEOPT_FLAG,
    [_CHECK_ATTR_MODULE] = HAS_DEOPT_FLAG,
    [_LOAD_ATTR_MODULE] = HAS_ARG_FLAG | HAS_DEOPT_FLAG,
    [_CHECK_ATTR_WITH_HINT] = HAS_DEOPT_FLAG | HAS_ESCAPES_FLAG,
    [_LOAD_ATTR_WITH_HINT] = HAS_ARG_FLAG | HAS_NAME_FLAG | HAS_DEOPT_FLAG | HAS_ESCAPES_FLAG,
    [_LOAD_ATTR_SLOT] = HAS_ARG_FLAG | HAS_DEOPT_FLAG,
    [_CHECK_ATTR_CLASS] = HAS_DEOPT_FLAG,
    [_LOAD_ATTR_CLASS] = HAS_ARG_FLAG,
    [_GUARD_DORV_VALUES] = HAS_DEOPT_FLAG,
    [_STORE_ATTR_INSTANCE_VALUE] = HAS_ESCAPES_FLAG,
    [_STORE_ATTR_SLOT] = HAS_ESCAPES_FLAG,
    [_COMPARE_OP] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_COMPARE_OP_FLOAT] = HAS_ARG_FLAG | HAS_DEOPT_FLAG | HAS_ESCAPES_FLAG,
    [_COMPARE_OP_INT] = HAS_ARG_FLAG | HAS_DEOPT_FLAG | HAS_ESCAPES_FLAG,
    [_COMPARE_OP_STR] = HAS_ARG_FLAG | HAS_DEOPT_FLAG | HAS_ESCAPES_FLAG,
    [_IS_OP] = HAS_ARG_FLAG,
    [_CONTAINS_OP] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_CHECK_EG_MATCH] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_CHECK_EXC_MATCH] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_IS_NONE] = 0,
    [_GET_LEN] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_MATCH_CLASS] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_MATCH_MAPPING] = 0,
    [_MATCH_SEQUENCE] = 0,
    [_MATCH_KEYS] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_GET_ITER] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_GET_YIELD_FROM_ITER] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_FOR_ITER_TIER_TWO] = HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_ITER_CHECK_LIST] = HAS_DEOPT_FLAG,
    [_GUARD_NOT_EXHAUSTED_LIST] = HAS_DEOPT_FLAG,
    [_ITER_NEXT_LIST] = 0,
    [_ITER_CHECK_TUPLE] = HAS_DEOPT_FLAG,
    [_GUARD_NOT_EXHAUSTED_TUPLE] = HAS_DEOPT_FLAG,
    [_ITER_NEXT_TUPLE] = 0,
    [_ITER_CHECK_RANGE] = HAS_DEOPT_FLAG,
    [_GUARD_NOT_EXHAUSTED_RANGE] = HAS_DEOPT_FLAG,
    [_ITER_NEXT_RANGE] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_BEFORE_ASYNC_WITH] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_BEFORE_WITH] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_WITH_EXCEPT_START] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_PUSH_EXC_INFO] = 0,
    [_GUARD_DORV_VALUES_INST_ATTR_FROM_DICT] = HAS_DEOPT_FLAG,
    [_GUARD_KEYS_VERSION] = HAS_DEOPT_FLAG,
    [_LOAD_ATTR_METHOD_WITH_VALUES] = HAS_ARG_FLAG | HAS_ESCAPES_FLAG,
    [_LOAD_ATTR_METHOD_NO_DICT] = HAS_ARG_FLAG | HAS_ESCAPES_FLAG,
    [_LOAD_ATTR_NONDESCRIPTOR_WITH_VALUES] = HAS_ARG_FLAG,
    [_LOAD_ATTR_NONDESCRIPTOR_NO_DICT] = HAS_ARG_FLAG,
    [_CHECK_ATTR_METHOD_LAZY_DICT] = HAS_DEOPT_FLAG,
    [_LOAD_ATTR_METHOD_LAZY_DICT] = HAS_ARG_FLAG | HAS_ESCAPES_FLAG,
    [_CHECK_CALL_BOUND_METHOD_EXACT_ARGS] = HAS_ARG_FLAG | HAS_DEOPT_FLAG,
    [_INIT_CALL_BOUND_METHOD_EXACT_ARGS] = HAS_ARG_FLAG,
    [_CHECK_PEP_523] = HAS_DEOPT_FLAG,
    [_CHECK_FUNCTION_EXACT_ARGS] = HAS_ARG_FLAG | HAS_DEOPT_FLAG,
    [_CHECK_STACK_SPACE] = HAS_ARG_FLAG | HAS_DEOPT_FLAG,
    [_INIT_CALL_PY_EXACT_ARGS] = HAS_ARG_FLAG | HAS_ESCAPES_FLAG,
    [_PUSH_FRAME] = 0,
    [_CALL_TYPE_1] = HAS_ARG_FLAG | HAS_DEOPT_FLAG,
    [_CALL_STR_1] = HAS_ARG_FLAG | HAS_EVAL_BREAK_FLAG | HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_CALL_TUPLE_1] = HAS_ARG_FLAG | HAS_EVAL_BREAK_FLAG | HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_EXIT_INIT_CHECK] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_CALL_BUILTIN_CLASS] = HAS_ARG_FLAG | HAS_EVAL_BREAK_FLAG | HAS_DEOPT_FLAG | HAS_ERROR_FLAG,
    [_CALL_BUILTIN_O] = HAS_ARG_FLAG | HAS_EVAL_BREAK_FLAG | HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_CALL_BUILTIN_FAST] = HAS_ARG_FLAG | HAS_EVAL_BREAK_FLAG | HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_CALL_BUILTIN_FAST_WITH_KEYWORDS] = HAS_ARG_FLAG | HAS_EVAL_BREAK_FLAG | HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_CALL_LEN] = HAS_ARG_FLAG | HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_CALL_ISINSTANCE] = HAS_ARG_FLAG | HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_CALL_METHOD_DESCRIPTOR_O] = HAS_ARG_FLAG | HAS_EVAL_BREAK_FLAG | HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_CALL_METHOD_DESCRIPTOR_FAST_WITH_KEYWORDS] = HAS_ARG_FLAG | HAS_EVAL_BREAK_FLAG | HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_CALL_METHOD_DESCRIPTOR_NOARGS] = HAS_ARG_FLAG | HAS_EVAL_BREAK_FLAG | HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_CALL_METHOD_DESCRIPTOR_FAST] = HAS_ARG_FLAG | HAS_EVAL_BREAK_FLAG | HAS_DEOPT_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_MAKE_FUNCTION] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_SET_FUNCTION_ATTRIBUTE] = HAS_ARG_FLAG | HAS_ESCAPES_FLAG,
    [_BUILD_SLICE] = HAS_ARG_FLAG | HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_CONVERT_VALUE] = HAS_ARG_FLAG | HAS_ERROR_FLAG,
    [_FORMAT_SIMPLE] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_FORMAT_WITH_SPEC] = HAS_ERROR_FLAG | HAS_ESCAPES_FLAG,
    [_COPY] = HAS_ARG_FLAG,
    [_BINARY_OP] = HAS_ARG_FLAG | HAS_ERROR_FLAG,
    [_SWAP] = HAS_ARG_FLAG,
    [_GUARD_IS_TRUE_POP] = HAS_DEOPT_FLAG,
    [_GUARD_IS_FALSE_POP] = HAS_DEOPT_FLAG,
    [_GUARD_IS_NONE_POP] = HAS_DEOPT_FLAG,
    [_GUARD_IS_NOT_NONE_POP] = HAS_DEOPT_FLAG,
    [_JUMP_TO_TOP] = HAS_EVAL_BREAK_FLAG,
    [_SET_IP] = HAS_ARG_FLAG | HAS_ESCAPES_FLAG,
    [_SAVE_RETURN_OFFSET] = HAS_ARG_FLAG,
    [_EXIT_TRACE] = HAS_DEOPT_FLAG,
    [_INSERT] = HAS_ARG_FLAG,
    [_CHECK_VALIDITY] = HAS_DEOPT_FLAG,
};

const char *const _PyOpcode_uop_name[MAX_UOP_ID+1] = {
    [_BEFORE_ASYNC_WITH] = "_BEFORE_ASYNC_WITH",
    [_BEFORE_WITH] = "_BEFORE_WITH",
    [_BINARY_OP] = "_BINARY_OP",
    [_BINARY_OP_ADD_FLOAT] = "_BINARY_OP_ADD_FLOAT",
    [_BINARY_OP_ADD_INT] = "_BINARY_OP_ADD_INT",
    [_BINARY_OP_ADD_UNICODE] = "_BINARY_OP_ADD_UNICODE",
    [_BINARY_OP_MULTIPLY_FLOAT] = "_BINARY_OP_MULTIPLY_FLOAT",
    [_BINARY_OP_MULTIPLY_INT] = "_BINARY_OP_MULTIPLY_INT",
    [_BINARY_OP_SUBTRACT_FLOAT] = "_BINARY_OP_SUBTRACT_FLOAT",
    [_BINARY_OP_SUBTRACT_INT] = "_BINARY_OP_SUBTRACT_INT",
    [_BINARY_SLICE] = "_BINARY_SLICE",
    [_BINARY_SUBSCR] = "_BINARY_SUBSCR",
    [_BINARY_SUBSCR_DICT] = "_BINARY_SUBSCR_DICT",
    [_BINARY_SUBSCR_LIST_INT] = "_BINARY_SUBSCR_LIST_INT",
    [_BINARY_SUBSCR_STR_INT] = "_BINARY_SUBSCR_STR_INT",
    [_BINARY_SUBSCR_TUPLE_INT] = "_BINARY_SUBSCR_TUPLE_INT",
    [_BUILD_CONST_KEY_MAP] = "_BUILD_CONST_KEY_MAP",
    [_BUILD_LIST] = "_BUILD_LIST",
    [_BUILD_MAP] = "_BUILD_MAP",
    [_BUILD_SET] = "_BUILD_SET",
    [_BUILD_SLICE] = "_BUILD_SLICE",
    [_BUILD_STRING] = "_BUILD_STRING",
    [_BUILD_TUPLE] = "_BUILD_TUPLE",
    [_CALL_BUILTIN_CLASS] = "_CALL_BUILTIN_CLASS",
    [_CALL_BUILTIN_FAST] = "_CALL_BUILTIN_FAST",
    [_CALL_BUILTIN_FAST_WITH_KEYWORDS] = "_CALL_BUILTIN_FAST_WITH_KEYWORDS",
    [_CALL_BUILTIN_O] = "_CALL_BUILTIN_O",
    [_CALL_INTRINSIC_1] = "_CALL_INTRINSIC_1",
    [_CALL_INTRINSIC_2] = "_CALL_INTRINSIC_2",
    [_CALL_ISINSTANCE] = "_CALL_ISINSTANCE",
    [_CALL_LEN] = "_CALL_LEN",
    [_CALL_METHOD_DESCRIPTOR_FAST] = "_CALL_METHOD_DESCRIPTOR_FAST",
    [_CALL_METHOD_DESCRIPTOR_FAST_WITH_KEYWORDS] = "_CALL_METHOD_DESCRIPTOR_FAST_WITH_KEYWORDS",
    [_CALL_METHOD_DESCRIPTOR_NOARGS] = "_CALL_METHOD_DESCRIPTOR_NOARGS",
    [_CALL_METHOD_DESCRIPTOR_O] = "_CALL_METHOD_DESCRIPTOR_O",
    [_CALL_STR_1] = "_CALL_STR_1",
    [_CALL_TUPLE_1] = "_CALL_TUPLE_1",
    [_CALL_TYPE_1] = "_CALL_TYPE_1",
    [_CHECK_ATTR_CLASS] = "_CHECK_ATTR_CLASS",
    [_CHECK_ATTR_METHOD_LAZY_DICT] = "_CHECK_ATTR_METHOD_LAZY_DICT",
    [_CHECK_ATTR_MODULE] = "_CHECK_ATTR_MODULE",
    [_CHECK_ATTR_WITH_HINT] = "_CHECK_ATTR_WITH_HINT",
    [_CHECK_CALL_BOUND_METHOD_EXACT_ARGS] = "_CHECK_CALL_BOUND_METHOD_EXACT_ARGS",
    [_CHECK_EG_MATCH] = "_CHECK_EG_MATCH",
    [_CHECK_EXC_MATCH] = "_CHECK_EXC_MATCH",
    [_CHECK_FUNCTION_EXACT_ARGS] = "_CHECK_FUNCTION_EXACT_ARGS",
    [_CHECK_MANAGED_OBJECT_HAS_VALUES] = "_CHECK_MANAGED_OBJECT_HAS_VALUES",
    [_CHECK_PEP_523] = "_CHECK_PEP_523",
    [_CHECK_STACK_SPACE] = "_CHECK_STACK_SPACE",
    [_CHECK_VALIDITY] = "_CHECK_VALIDITY",
    [_COMPARE_OP] = "_COMPARE_OP",
    [_COMPARE_OP_FLOAT] = "_COMPARE_OP_FLOAT",
    [_COMPARE_OP_INT] = "_COMPARE_OP_INT",
    [_COMPARE_OP_STR] = "_COMPARE_OP_STR",
    [_CONTAINS_OP] = "_CONTAINS_OP",
    [_CONVERT_VALUE] = "_CONVERT_VALUE",
    [_COPY] = "_COPY",
    [_COPY_FREE_VARS] = "_COPY_FREE_VARS",
    [_DELETE_ATTR] = "_DELETE_ATTR",
    [_DELETE_DEREF] = "_DELETE_DEREF",
    [_DELETE_FAST] = "_DELETE_FAST",
    [_DELETE_GLOBAL] = "_DELETE_GLOBAL",
    [_DELETE_NAME] = "_DELETE_NAME",
    [_DELETE_SUBSCR] = "_DELETE_SUBSCR",
    [_DICT_MERGE] = "_DICT_MERGE",
    [_DICT_UPDATE] = "_DICT_UPDATE",
    [_END_SEND] = "_END_SEND",
    [_EXIT_INIT_CHECK] = "_EXIT_INIT_CHECK",
    [_EXIT_TRACE] = "_EXIT_TRACE",
    [_FORMAT_SIMPLE] = "_FORMAT_SIMPLE",
    [_FORMAT_WITH_SPEC] = "_FORMAT_WITH_SPEC",
    [_FOR_ITER_TIER_TWO] = "_FOR_ITER_TIER_TWO",
    [_GET_AITER] = "_GET_AITER",
    [_GET_ANEXT] = "_GET_ANEXT",
    [_GET_AWAITABLE] = "_GET_AWAITABLE",
    [_GET_ITER] = "_GET_ITER",
    [_GET_LEN] = "_GET_LEN",
    [_GET_YIELD_FROM_ITER] = "_GET_YIELD_FROM_ITER",
    [_GUARD_BOTH_FLOAT] = "_GUARD_BOTH_FLOAT",
    [_GUARD_BOTH_INT] = "_GUARD_BOTH_INT",
    [_GUARD_BOTH_UNICODE] = "_GUARD_BOTH_UNICODE",
    [_GUARD_BUILTINS_VERSION] = "_GUARD_BUILTINS_VERSION",
    [_GUARD_DORV_VALUES] = "_GUARD_DORV_VALUES",
    [_GUARD_DORV_VALUES_INST_ATTR_FROM_DICT] = "_GUARD_DORV_VALUES_INST_ATTR_FROM_DICT",
    [_GUARD_GLOBALS_VERSION] = "_GUARD_GLOBALS_VERSION",
    [_GUARD_IS_FALSE_POP] = "_GUARD_IS_FALSE_POP",
    [_GUARD_IS_NONE_POP] = "_GUARD_IS_NONE_POP",
    [_GUARD_IS_NOT_NONE_POP] = "_GUARD_IS_NOT_NONE_POP",
    [_GUARD_IS_TRUE_POP] = "_GUARD_IS_TRUE_POP",
    [_GUARD_KEYS_VERSION] = "_GUARD_KEYS_VERSION",
    [_GUARD_NOT_EXHAUSTED_LIST] = "_GUARD_NOT_EXHAUSTED_LIST",
    [_GUARD_NOT_EXHAUSTED_RANGE] = "_GUARD_NOT_EXHAUSTED_RANGE",
    [_GUARD_NOT_EXHAUSTED_TUPLE] = "_GUARD_NOT_EXHAUSTED_TUPLE",
    [_GUARD_TYPE_VERSION] = "_GUARD_TYPE_VERSION",
    [_INIT_CALL_BOUND_METHOD_EXACT_ARGS] = "_INIT_CALL_BOUND_METHOD_EXACT_ARGS",
    [_INIT_CALL_PY_EXACT_ARGS] = "_INIT_CALL_PY_EXACT_ARGS",
    [_INSERT] = "_INSERT",
    [_IS_NONE] = "_IS_NONE",
    [_IS_OP] = "_IS_OP",
    [_ITER_CHECK_LIST] = "_ITER_CHECK_LIST",
    [_ITER_CHECK_RANGE] = "_ITER_CHECK_RANGE",
    [_ITER_CHECK_TUPLE] = "_ITER_CHECK_TUPLE",
    [_ITER_NEXT_LIST] = "_ITER_NEXT_LIST",
    [_ITER_NEXT_RANGE] = "_ITER_NEXT_RANGE",
    [_ITER_NEXT_TUPLE] = "_ITER_NEXT_TUPLE",
    [_JUMP_TO_TOP] = "_JUMP_TO_TOP",
    [_LIST_APPEND] = "_LIST_APPEND",
    [_LIST_EXTEND] = "_LIST_EXTEND",
    [_LOAD_ASSERTION_ERROR] = "_LOAD_ASSERTION_ERROR",
    [_LOAD_ATTR] = "_LOAD_ATTR",
    [_LOAD_ATTR_CLASS] = "_LOAD_ATTR_CLASS",
    [_LOAD_ATTR_INSTANCE_VALUE] = "_LOAD_ATTR_INSTANCE_VALUE",
    [_LOAD_ATTR_METHOD_LAZY_DICT] = "_LOAD_ATTR_METHOD_LAZY_DICT",
    [_LOAD_ATTR_METHOD_NO_DICT] = "_LOAD_ATTR_METHOD_NO_DICT",
    [_LOAD_ATTR_METHOD_WITH_VALUES] = "_LOAD_ATTR_METHOD_WITH_VALUES",
    [_LOAD_ATTR_MODULE] = "_LOAD_ATTR_MODULE",
    [_LOAD_ATTR_NONDESCRIPTOR_NO_DICT] = "_LOAD_ATTR_NONDESCRIPTOR_NO_DICT",
    [_LOAD_ATTR_NONDESCRIPTOR_WITH_VALUES] = "_LOAD_ATTR_NONDESCRIPTOR_WITH_VALUES",
    [_LOAD_ATTR_SLOT] = "_LOAD_ATTR_SLOT",
    [_LOAD_ATTR_WITH_HINT] = "_LOAD_ATTR_WITH_HINT",
    [_LOAD_BUILD_CLASS] = "_LOAD_BUILD_CLASS",
    [_LOAD_CONST] = "_LOAD_CONST",
    [_LOAD_DEREF] = "_LOAD_DEREF",
    [_LOAD_FAST] = "_LOAD_FAST",
    [_LOAD_FAST_AND_CLEAR] = "_LOAD_FAST_AND_CLEAR",
    [_LOAD_FAST_CHECK] = "_LOAD_FAST_CHECK",
    [_LOAD_FAST_LOAD_FAST] = "_LOAD_FAST_LOAD_FAST",
    [_LOAD_FROM_DICT_OR_DEREF] = "_LOAD_FROM_DICT_OR_DEREF",
    [_LOAD_FROM_DICT_OR_GLOBALS] = "_LOAD_FROM_DICT_OR_GLOBALS",
    [_LOAD_GLOBAL] = "_LOAD_GLOBAL",
    [_LOAD_GLOBAL_BUILTINS] = "_LOAD_GLOBAL_BUILTINS",
    [_LOAD_GLOBAL_MODULE] = "_LOAD_GLOBAL_MODULE",
    [_LOAD_LOCALS] = "_LOAD_LOCALS",
    [_LOAD_NAME] = "_LOAD_NAME",
    [_LOAD_SUPER_ATTR_ATTR] = "_LOAD_SUPER_ATTR_ATTR",
    [_LOAD_SUPER_ATTR_METHOD] = "_LOAD_SUPER_ATTR_METHOD",
    [_MAKE_CELL] = "_MAKE_CELL",
    [_MAKE_FUNCTION] = "_MAKE_FUNCTION",
    [_MAP_ADD] = "_MAP_ADD",
    [_MATCH_CLASS] = "_MATCH_CLASS",
    [_MATCH_KEYS] = "_MATCH_KEYS",
    [_MATCH_MAPPING] = "_MATCH_MAPPING",
    [_MATCH_SEQUENCE] = "_MATCH_SEQUENCE",
    [_NOP] = "_NOP",
    [_POP_EXCEPT] = "_POP_EXCEPT",
    [_POP_FRAME] = "_POP_FRAME",
    [_POP_TOP] = "_POP_TOP",
    [_PUSH_EXC_INFO] = "_PUSH_EXC_INFO",
    [_PUSH_FRAME] = "_PUSH_FRAME",
    [_PUSH_NULL] = "_PUSH_NULL",
    [_RESUME_CHECK] = "_RESUME_CHECK",
    [_SAVE_RETURN_OFFSET] = "_SAVE_RETURN_OFFSET",
    [_SETUP_ANNOTATIONS] = "_SETUP_ANNOTATIONS",
    [_SET_ADD] = "_SET_ADD",
    [_SET_FUNCTION_ATTRIBUTE] = "_SET_FUNCTION_ATTRIBUTE",
    [_SET_IP] = "_SET_IP",
    [_SET_UPDATE] = "_SET_UPDATE",
    [_STORE_ATTR] = "_STORE_ATTR",
    [_STORE_ATTR_INSTANCE_VALUE] = "_STORE_ATTR_INSTANCE_VALUE",
    [_STORE_ATTR_SLOT] = "_STORE_ATTR_SLOT",
    [_STORE_DEREF] = "_STORE_DEREF",
    [_STORE_FAST] = "_STORE_FAST",
    [_STORE_FAST_LOAD_FAST] = "_STORE_FAST_LOAD_FAST",
    [_STORE_FAST_STORE_FAST] = "_STORE_FAST_STORE_FAST",
    [_STORE_GLOBAL] = "_STORE_GLOBAL",
    [_STORE_NAME] = "_STORE_NAME",
    [_STORE_SLICE] = "_STORE_SLICE",
    [_STORE_SUBSCR] = "_STORE_SUBSCR",
    [_STORE_SUBSCR_DICT] = "_STORE_SUBSCR_DICT",
    [_STORE_SUBSCR_LIST_INT] = "_STORE_SUBSCR_LIST_INT",
    [_SWAP] = "_SWAP",
    [_TO_BOOL] = "_TO_BOOL",
    [_TO_BOOL_ALWAYS_TRUE] = "_TO_BOOL_ALWAYS_TRUE",
    [_TO_BOOL_BOOL] = "_TO_BOOL_BOOL",
    [_TO_BOOL_INT] = "_TO_BOOL_INT",
    [_TO_BOOL_LIST] = "_TO_BOOL_LIST",
    [_TO_BOOL_NONE] = "_TO_BOOL_NONE",
    [_TO_BOOL_STR] = "_TO_BOOL_STR",
    [_UNARY_INVERT] = "_UNARY_INVERT",
    [_UNARY_NEGATIVE] = "_UNARY_NEGATIVE",
    [_UNARY_NOT] = "_UNARY_NOT",
    [_UNPACK_EX] = "_UNPACK_EX",
    [_UNPACK_SEQUENCE] = "_UNPACK_SEQUENCE",
    [_UNPACK_SEQUENCE_LIST] = "_UNPACK_SEQUENCE_LIST",
    [_UNPACK_SEQUENCE_TUPLE] = "_UNPACK_SEQUENCE_TUPLE",
    [_UNPACK_SEQUENCE_TWO_TUPLE] = "_UNPACK_SEQUENCE_TWO_TUPLE",
    [_WITH_EXCEPT_START] = "_WITH_EXCEPT_START",
};
#endif // NEED_OPCODE_METADATA


#ifdef __cplusplus
}
#endif
#endif /* !Py_CORE_UOP_METADATA_H */
