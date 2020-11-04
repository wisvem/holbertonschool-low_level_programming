#include "lists.h"

/**
* get_nodeint_at_index - entry point
* Return: the nth node of a linked list,
* NULL if the node does not exist
* @head: head of the list
* @index: position required
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, list_size;
	listint_t *node, *temp;


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
