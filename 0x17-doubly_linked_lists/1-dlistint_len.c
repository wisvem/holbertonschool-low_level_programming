#include "lists.h"

/**
 * dlistint_len - Entry point
* @h: head of the list
* Return: the number of elements in a linked list
**/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = (*h).next;
		count++;
	}
	return (count);
}
