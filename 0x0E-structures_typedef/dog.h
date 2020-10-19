#ifndef _DOG_H_
#define _DOG_H_
/**
* struct dog - Dog structure
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
**/
typedef struct dog t_dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* _DOG_H_ */
