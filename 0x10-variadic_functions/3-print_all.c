#include "variadic_functions.h"

/**
* print_all - prints anything
* @format: list of types of arguments
**/
void print_all(const char * const format, ...)
{
	va_list parameters;
	int i = 0, coma = 0;
	char *value;

	va_start(parameters, format);
	while (format != NULL && format[i] != '\0')
	{
		coma = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(parameters, int));
				break;
			case 'i':
				printf("%d", va_arg(parameters, int));
				break;
			case 'f':
				printf("%f", va_arg(parameters, double));
				break;
			case 's':
				value = va_arg(parameters, char*);
				if (value == NULL)
					value = "(nil)";
				printf("%s", value);
				break;
			default:
				coma = 1;
				break;
		}
		if (coma == 0 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(parameters);
	printf("\n");
}
