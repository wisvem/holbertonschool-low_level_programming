#include "variadic_functions.h"

/**
* print_strings - prints strings
* @separator: string to be printed between the strings
* @n: strings to be printed
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list parameters;
	char *value;
	unsigned int i;

	va_start(parameters, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(parameters, char*);
		if (value != NULL)
		{
			printf("%s", value);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(parameters);
	printf("\n");
}
