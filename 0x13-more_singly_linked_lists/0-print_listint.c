#include "lists.h"

/**
* print_listint -prints all the elements of a list.
* Return: the number of nodes
* @h: head of the list
**/
size_t print_listint(const listint_t *h)
{
	int nodes;

	if (h == NULL)
	{
		return (0);
	}
	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%i\n", (*h).n);
		h = (*h).next;
	}
	return (nodes);
}
