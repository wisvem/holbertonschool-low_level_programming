#include "lists.h"

/**
* get_nodeint_at_index - entry point
* Return: the nth node of a linked list
* @head: head of the list
* @index: position required
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = head;
	if (node != NULL)
	{
		for (i = 1; i <= index; i++)
		{
			node = (*node).next;
		}
	}
	return (node);
}
