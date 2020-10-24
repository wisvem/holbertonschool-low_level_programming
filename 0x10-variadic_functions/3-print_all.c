#include "variadic_functions.h"

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
	va_list parameters;
	unsigned int i = 0, j = 0, coma = 0;
	char *value;

	while (format != NULL && format[i] != '\0')
		i++;
	va_start(parameters, format);
	while (j < i)
	{
		coma = 0;
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(parameters, int));
				break;
			case 'i':
				printf("%i", va_arg(parameters, int));
				break;
			case 'f':
				printf("%f", va_arg(parameters, double));
				break;
			case 's':
				value = va_arg(parameters, char*);
				if (value != NULL)
					printf("%s", value);
				else
					printf("(nil)");
				break;
			default:
				coma = 1;
				break;
		}
		if (j < i - 1 && coma == 0)
			printf(", ");
		j++;
	}
	va_end(parameters);
	printf("\n");
}
