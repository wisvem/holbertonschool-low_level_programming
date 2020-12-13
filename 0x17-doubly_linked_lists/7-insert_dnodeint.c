#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: pointer to head
* @idx: the given position
* @n: the element to be added to the node
* Return: the address of the new node, or NULL if it failed
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev, *current, *newnode, *temp;
	unsigned int i;
	unsigned int list_size = 0;

	temp = *h;
	while (temp !=  NULL)
	{
		temp = (*temp).next;
		list_size++;
	}
	if (list_size < idx)
		return (NULL);
	current = *h;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	(*newnode).n = n;
	if (idx == 0)
	{
		(*newnode).next = *h;
		*h = newnode;
		return (newnode);
	}
	for (i = 0; i < idx; i++)
	{
		prev = current;
		current = (*current).next;
	}
	(*prev).next = newnode;
	(*current).prev = newnode;
	(*newnode).next = current;
	(*newnode).prev = prev;
	return (newnode);
}
