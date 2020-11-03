#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a list
* Return: the address of the new element, or NULL if it failed
* @head: pointer to the list
* @n: int to put into the new node
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = NULL;
	listint_t *lastnode = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	(*newnode).n = n;
	(*newnode).next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while ((*lastnode).next != NULL)
		{
			lastnode = (*lastnode).next;
		}
		(*lastnode).next = newnode;
	}
	return (newnode);
}
