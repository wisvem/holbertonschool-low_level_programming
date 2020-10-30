#include "lists.h"

/**
* list_len - returns the number of elements in a linked list
* @h: head of the list
* Return: number of elements of the linked list
**/
size_t list_len(const list_t *h)
{
	int nodes = 0, elements = 0;

	if (h == NULL)
		return (0);
	for (nodes = 0; h != NULL; nodes++)
	{
		if ((*h).str != NULL)
		{
			elements++;
		}
		h = (*h).next;
	}
	return (elements);
}
