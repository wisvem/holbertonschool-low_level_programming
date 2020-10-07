#include "holberton.h"

/**
* raiz - calc sqr
* @n: base number
* @aux: sqr
* Return: the sqr
**/
int raiz(int n, int aux)
{
	if (aux * aux == n)
		return (aux);
	else if (aux * aux > n)
		return (-1);
	aux = raiz(n, aux + 1);
	return (aux);
}
/**
* _sqrt_recursion - the natural square root of a number
* @n: the number
* Return: -1 n does not have natural square root
**/
int _sqrt_recursion(int n)
{
	int x = raiz(n, 1);

	return (x);

}
