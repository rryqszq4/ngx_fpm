/**
 *    Copyright(c) 2016-2017 rryqszq4
 *
 *
 */

#ifndef _PHP_NGX_CORE_H_
#define _PHP_NGX_CORE_H_

#include <ngx_http.h>

#include <php.h>
#include <php_ini.h>
#include <ext/standard/info.h>

PHP_METHOD(ngx, exit);

void php_ngx_core_init(int module_number TSRMLS_DC);

void php_co_ngx_init(int module_number TSRMLS_DC);

#endif