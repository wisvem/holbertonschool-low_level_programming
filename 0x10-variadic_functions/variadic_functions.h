#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printint(int x);
void pritnchar(char x);
void printfloat(float x);
void printstring(char *x);
#endif /* VARIADIC_FUNCTIONS_H_ */
