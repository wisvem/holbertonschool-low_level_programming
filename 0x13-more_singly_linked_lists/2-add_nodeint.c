#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a list
* Return: the address of the new element, or NULL if it failed
* @head: pointer to list
* @n: int to put into the new node
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	(*newnode).n = n;
	(*newnode).next = *head;
	*head = newnode;
	return (newnode);
}
