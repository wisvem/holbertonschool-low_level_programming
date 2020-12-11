#include "lists.h"

/**
* get_dnodeint_at_index - entry point
* Return: the nth node of a linked list,
* NULL if the node does not exist
* @head: head of the list
* @index: position required
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i, list_size;
	dlistint_t *node, *temp;


	node = head;
	if (node != NULL)
	{
		temp = head;
		while (temp != NULL)
		{
			list_size++;
			temp = (*temp).next;
		}
		if (index > list_size)
			return (NULL);
		for (i = 1; i <= index; i++)
		{
			node = (*node).next;
		}
	}
	return (node);
}
