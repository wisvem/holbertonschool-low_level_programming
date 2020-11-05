#include "lists.h"

/**
* pop_listint - deletes the head node of a linked list
* @head: pointer to the head
* Return: the head node’s data (n)
**/
int pop_listint(listint_t **head)
{
	listint_t *temp, *temp2;
	int n;

	temp = *head;
	if (temp != NULL)
	{
		n = (*temp).n;
		temp2 = (*temp).next;
		free(temp);
		temp = temp2;
		*head = temp;
	}
	return (n);
}

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
	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		prev = current;
		current = (*current).next;
	}
	(*prev).next = (*current).next;
	free (current);
	return (1);
}
