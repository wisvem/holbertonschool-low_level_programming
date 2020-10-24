#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line
* @separator: string to be printed between numbers
* @n: number of arguments
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list parameters;
	unsigned int value;

	va_start(parameters, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(parameters, int);
		printf("%i", value);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(parameters);
	printf("\n");
}
