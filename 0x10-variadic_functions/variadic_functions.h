#ifndef _VAR_FUNC_H_
#define _VAR_FUNC_H_

#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char *const format, ...);

#endif /* _VAR_FUNC_H_ */
