#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints dog structure
* @d: dog pointer
**/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (*d).name);
	printf("Age: %.1f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
