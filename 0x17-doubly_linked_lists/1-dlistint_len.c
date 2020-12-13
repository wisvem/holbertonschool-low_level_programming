#include "lists.h"

/**
 * dlistint_len - Entry point
* @h: head of the list
* Return: the number of elements in a linked list
**/
size_t dlistint_len(const dlistint_t *h)
{
	int elements;

	if (h == NULL)
	{
		return (0);
	}
	for (elements = 0; h != NULL; elements++)
	{
		if ((*h).n == 0)
			elements--;
		h = (*h).next;
	}
	return (elements);
}
