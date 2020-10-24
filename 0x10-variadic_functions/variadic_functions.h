#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @op: The type
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)();
} op_t;

void printc(va_list x);
void printi(va_list x);
void prints(va_list *x);
void printfl(va_list x);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /* VARIADIC_FUNCTIONS_H_ */
