#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 * print a string without printf() or puts()
 * Return: Always 1 (sucess)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
