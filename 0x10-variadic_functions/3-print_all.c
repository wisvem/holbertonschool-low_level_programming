#include "variadic_functions.h"

/**
* printint - prints int
* @x: integer to print
**/
void printint(int x)
{
	printf("%i", x);
}

/**
* printchar - prints char
* @x: char to print
**/
void pritnchar(char x)
{
	printf("%c", x);
}

/**
* printfloat - prints float
* @x: float to print
**/
void printfloat(float x)
{
	printf("%f", x)
}

/**
* printstring - prints string
* @x: string to print
**/
void printstring(char *x)
{
	printf("%s", x);
}

/**
* print_all - prints anything
* @format: list of types of arguments
* c: char
* i: integer
* f: float
* s: char *
**/
void print_all(const char * const format, ...)
{
/*	char type[] = {"cifs"}; */
	va_list parameters;
	unsigned int i = 0;

	va_start(parameters, format);
	while (format[i] != 0)
	{
		printf("\n Parametro: ");
		putchar(format[i]);
		printf("\n Contenido: ");
		putchar(va_arg(parameters, int));
		i++;
	}
	va_end(parameters);
	printf("\n");
}
