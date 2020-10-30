#include "lists.h"

/**
* print_list - prints all the elements of a list
* @h: head of the list
* Return: number of nodes
**/
size_t print_list(const list_t *h)
{
	int nodes = 0;
	const list_t *aux = h;

	if (aux == NULL)
		return (0);
	for (nodes = 0; aux != NULL; nodes++)
	{
		if ((*aux).str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", (*aux).len, (*aux).str);
		}
		aux = (*aux).next;
	}
	return (nodes);
}
