#include "function_pointers.h"
#include "stdlibh."

/**
* print_name - prints a name
* @name: name to be printed
* @f: point to the function
**/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
