#ifndef HAVE_BITS_INSN_H
#define HAVE_BITS_INSN_H

#define PHP_JIT_INSN_FUNCTIONS \
	JIT_FE(jit_insn_mul) \
	JIT_FE(jit_insn_mul_ovf) \
	JIT_FE(jit_insn_add) \
	JIT_FE(jit_insn_add_ovf) \
	JIT_FE(jit_insn_sub) \
	JIT_FE(jit_insn_sub_ovf) \
	JIT_FE(jit_insn_div) \
	JIT_FE(jit_insn_pow) \
	JIT_FE(jit_insn_rem) \
	JIT_FE(jit_insn_rem_ieee) \
	JIT_FE(jit_insn_neg) \
	JIT_FE(jit_insn_and) \
	JIT_FE(jit_insn_or) \
	JIT_FE(jit_insn_xor) \
	JIT_FE(jit_insn_shl) \
	JIT_FE(jit_insn_shr) \
	JIT_FE(jit_insn_ushr) \
	JIT_FE(jit_insn_sshr) \
	JIT_FE(jit_insn_eq) \
	JIT_FE(jit_insn_ne) \
	JIT_FE(jit_insn_lt) \
	JIT_FE(jit_insn_le) \
	JIT_FE(jit_insn_gt) \
	JIT_FE(jit_insn_ge) \
	JIT_FE(jit_insn_cmpl) \
	JIT_FE(jit_insn_cmpg) \
	JIT_FE(jit_insn_to_bool) \
	JIT_FE(jit_insn_to_not_bool) \
	JIT_FE(jit_insn_acos) \
	JIT_FE(jit_insn_asin) \
	JIT_FE(jit_insn_atan) \
	JIT_FE(jit_insn_return)

#define PHP_JIT_BINARY_ARGINFO(n) \
	ZEND_BEGIN_ARG_INFO_EX(n, 0, 0, 3) \
		ZEND_ARG_INFO(0, function) \
		ZEND_ARG_INFO(0, op1) \
		ZEND_ARG_INFO(0, op2) \
	ZEND_END_ARG_INFO() \
	
#define PHP_JIT_UNARY_ARGINFO(n) \
	ZEND_BEGIN_ARG_INFO_EX(n, 0, 0, 3) \
		ZEND_ARG_INFO(0, function) \
		ZEND_ARG_INFO(0, op) \
	ZEND_END_ARG_INFO() \

PHP_JIT_BINARY_ARGINFO(jit_insn_mul_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_mul_ovf_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_sub_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_sub_ovf_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_add_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_add_ovf_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_div_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_pow_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_rem_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_rem_ieee_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_neg_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_and_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_or_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_xor_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_shl_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_shr_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_ushr_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_sshr_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_eq_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_ne_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_lt_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_le_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_gt_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_ge_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_cmpl_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_cmpg_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_to_bool_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_to_not_bool_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_acos_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_asin_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_atan_arginfo)

ZEND_BEGIN_ARG_INFO_EX(jit_insn_return_arginfo, 0, 0, 2)
	ZEND_ARG_INFO(0, function)
	ZEND_ARG_INFO(0, result)
ZEND_END_ARG_INFO()

PHP_FUNCTION(jit_insn_mul);
PHP_FUNCTION(jit_insn_mul_ovf);
PHP_FUNCTION(jit_insn_add);
PHP_FUNCTION(jit_insn_add_ovf);
PHP_FUNCTION(jit_insn_sub);
PHP_FUNCTION(jit_insn_sub_ovf);
PHP_FUNCTION(jit_insn_div);
PHP_FUNCTION(jit_insn_pow);
PHP_FUNCTION(jit_insn_rem);
PHP_FUNCTION(jit_insn_rem_ieee);
PHP_FUNCTION(jit_insn_neg);
PHP_FUNCTION(jit_insn_and);
PHP_FUNCTION(jit_insn_or);
PHP_FUNCTION(jit_insn_xor);
PHP_FUNCTION(jit_insn_shl);
PHP_FUNCTION(jit_insn_shr);
PHP_FUNCTION(jit_insn_ushr);
PHP_FUNCTION(jit_insn_sshr);
PHP_FUNCTION(jit_insn_eq);
PHP_FUNCTION(jit_insn_ne);
PHP_FUNCTION(jit_insn_lt);
PHP_FUNCTION(jit_insn_le);
PHP_FUNCTION(jit_insn_gt);
PHP_FUNCTION(jit_insn_ge);
PHP_FUNCTION(jit_insn_cmpl);
PHP_FUNCTION(jit_insn_cmpg);
PHP_FUNCTION(jit_insn_to_bool);
PHP_FUNCTION(jit_insn_to_not_bool);
PHP_FUNCTION(jit_insn_acos);
PHP_FUNCTION(jit_insn_asin);
PHP_FUNCTION(jit_insn_atan);

PHP_FUNCTION(jit_insn_return);
#else
#ifndef HAVE_BITS_INSN
#define HAVE_BITS_INSN

typedef jit_value_t (*jit_binary_insn_func) (jit_function_t, jit_value_t, jit_value_t);
typedef jit_value_t (*jit_unary_insn_func) (jit_function_t, jit_value_t);

/* {{{ */
static inline jit_value_t php_jit_do_binary_op(jit_binary_insn_func func, zval *zfunction, zval *zin[2], zval *return_value TSRMLS_DC) {
	jit_function_t function;
	jit_value_t in[2], result;
	
	ZEND_FETCH_RESOURCE(function, jit_function_t, &zfunction, -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(in[0], jit_value_t, &zin[0], -1, le_jit_value_name, le_jit_value);
	ZEND_FETCH_RESOURCE(in[1], jit_value_t, &zin[1], -1, le_jit_value_name, le_jit_value);
	
	result = func(function, in[0], in[1]);
	
	ZEND_REGISTER_RESOURCE(return_value, result, le_jit_value);
} /* }}} */

/* {{{ */
static inline jit_value_t php_jit_do_unary_op(jit_unary_insn_func func, zval *zfunction, zval *zin, zval *return_value TSRMLS_DC) {
	jit_function_t function;
	jit_value_t in, result;
	
	ZEND_FETCH_RESOURCE(function, jit_function_t, &zfunction, -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(in, jit_value_t, &zin, -1, le_jit_value_name, le_jit_value);
	
	result = func(function, in);
	
	ZEND_REGISTER_RESOURCE(return_value, result, le_jit_value);
} /* }}} */

/* {{{ jit_value_t jit_insn_mul(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_mul) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_mul, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_mul_ovf(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_mul_ovf) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_mul_ovf, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_add(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_add) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_add, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_add_ovf(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_add_ovf) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_add_ovf, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_sub(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_sub) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_sub, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_sub_ovf(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_sub_ovf) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_sub_ovf, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_div(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_div) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_div, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_pow(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_pow) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_pow, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_rem(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_rem) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_rem, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_rem_ieee(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_rem_ieee) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_rem_ieee, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_neg(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_neg) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_neg, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_and(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_and) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_and, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_or(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_or) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_or, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_xor(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_xor) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_xor, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_shl(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_shl) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_shl, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_shr(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_shr) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_shr, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_ushr(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_ushr) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_ushr, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_sshr(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_sshr) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_sshr, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_eq(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_eq) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_eq, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_ne(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_ne) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_ne, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_lt(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_lt) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_lt, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_le(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_le) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_le, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_gt(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_gt) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_gt, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_ge(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_ge) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_ge, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_cmpl(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_cmpl) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_cmpl, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_cmpg(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_cmpg) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_cmpg, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_to_bool(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_to_bool) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_to_bool, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_to_not_bool(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_to_not_bool) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_to_not_bool, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_acos(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_acos) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_acos, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_asin(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_asin) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_asin, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_atan(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_atan) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_atan, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */


/* {{{ void jit_insn_return(jit_function_t function, jit_value_t result) */
PHP_FUNCTION(jit_insn_return) {
	zval *zfunction, *zresult;
	jit_function_t function;
	jit_value_t result;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zresult) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function, jit_function_t, &zfunction, -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(result, jit_value_t, &zresult, -1, le_jit_value_name, le_jit_value);

	jit_insn_return(function, result);
} /* }}} */
#endif
#endif