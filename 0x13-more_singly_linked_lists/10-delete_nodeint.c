#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index of a linked list
* @head: pointer to the head of the list
* @index: index of the node that should be deleted
* Return: 1 if it succeeded, -1 if it failed
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current, *temp;
	unsigned int i;
	unsigned int list_size = 0;

	temp = *head;
	while (temp !=  NULL)
	{
		temp = (*temp).next;
		list_size++;
	}
	if (list_size < index)
		return (-1);
	current = *head;
	for (i = 0; i < index; i++)
	{
		prev = current;
		current = (*current).next;
	}
	(*prev).next = (*current).next;
	return (1);
}
