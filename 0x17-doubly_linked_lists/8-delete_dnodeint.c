#include "lists.h"

/**
* pop_dlistint - deletes the head node of a linked list
* @head: pointer to the head
* Return: the head node’s data (n)
**/
int pop_dlistint(dlistint_t **head)
{
	dlistint_t *temp, *temp2;
	int n;

	temp = *head;
	if (temp != NULL)
	{
		n = (*temp).n;
		temp2 = (*temp).next;
		if (temp2 != NULL)
			(*temp2).prev = NULL;
		free(temp);
		temp = temp2;
		*head = temp;
	}
	return (n);
}

/**
* delete_dnodeint_at_index - deletes the node at index of a linked list
* @head: pointer to the head of the list
* @index: index of the node that should be deleted
* Return: 1 if it succeeded, -1 if it failed
**/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *current, *temp;
	unsigned int i;
	unsigned int list_size = 0;

	temp = *head;
	if (temp == NULL)
		return (-1);
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
		pop_dlistint(head);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		prev = current;
		current = (*current).next;
	}
	(*prev).next = (*current).next;
	temp = (*current).next;
	(*temp).prev = prev;
	free(current);
	return (1);
}
