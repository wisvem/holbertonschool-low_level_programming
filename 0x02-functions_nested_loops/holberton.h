#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On succes 1
* On error, -1 is returned, and errno is set appropriately.
**/
int _putchar(char c);

/**
* print_alphabet - print alphabet in lowercase
**/
void print_alphabet(void);

/**
* print_alphabet_x10 - print alphabet ten times
**/
void print_alphabet_x10(void);

/**
* _islower - check for a lowercase character
* @c: The character to check
* Return: On succes 1
* On error 0
**/
int _islower(int c);

/**
* _isalpha - check for an alphabetic character
* @c: The character to check
* Return: the result
**/
int _isalpha(int c);

/**
* print_sign - print the sign of a number
* @n: the number to be checked
* Return: 1 and prints + for positive
* -1 and prints - for negative
* 0 and prints 0 for zero
**/
int print_sign(int n);

/**
* _abs - compute absolute value of a number
* Return: the absolute value
* @int: number
**/
int _abs(int);

/**
 * print_last_digit - print last digit
 * @int: the number
 * Return: the last digit
**/
int print_last_digit(int);

/**
* jack_bauer - prints every minute of the day of Jack Bauer
**/
void jack_bauer(void);

/**
* void times_table - print the 9 times table
**/
void times_table(void);

/**
* print_to_98 - print
* @n: number
**/
void print_to_98(int n);

/**
* add - adds two numbers
* @n1: number 1
* @n2: number 2
* Return: the addition
**/
int add(int n1, int n2)
#endif /* _HOLBERTON_H_ */
