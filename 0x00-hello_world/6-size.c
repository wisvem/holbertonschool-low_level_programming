#include <stdio.h>

/**
 * main - Entry point
 * Print size of types
 * Return: Always 0 (Success)
 */
int main(void)
{

	int intType;
	long longIntType;
	double  longLongType;
	char charType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
