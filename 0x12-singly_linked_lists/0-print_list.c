#include "lists.h"

/**
* print_list - prints all the elements of a list
* @h - head of the list
* Return - number of nodes
**/
size_t print_list(const list_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);
	for(nodes = 0; h != NULL; nodes++)
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		h = (*h).next;
	}
	return (nodes);
}
