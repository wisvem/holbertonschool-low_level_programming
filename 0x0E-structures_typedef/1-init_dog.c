#include "dog.h"

/**
* init_dog - Initialize dog structure
* @d: dog strcture
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: Always 0.
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
