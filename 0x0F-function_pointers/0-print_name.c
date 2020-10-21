#include "function_pointers.h"
#include "stdlib.h"

/**
* print_name - prints a name
* @name: name to be printed
* @f: point to the function
**/
void print_name(char *name, void (*f)(char *))
{
	if (*f != NULL)
	{
		(*f)(name);
	}
}
