#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a list
* Return: the address of the new element, or NULL if it failed
* @head: pointer to the list
* @n: int to put into the new node
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *lastnode = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	(*newnode).n = n;
	(*newnode).next = NULL;
	if (*head == NULL)
	{
		(*newnode).prev = NULL;
		*head = newnode;
	}
	else
	{
		while ((*lastnode).next != NULL)
		{
			lastnode = (*lastnode).next;
		}
		(*lastnode).next = newnode;
		(*newnode).prev = lastnode;
	}
	return (newnode);
}
