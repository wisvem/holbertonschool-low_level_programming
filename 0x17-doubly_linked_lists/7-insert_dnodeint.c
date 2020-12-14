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
	while (temp != NULL)
	{
		temp = (*temp).next;
		list_size++;
	}
	if (list_size == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	if (list_size < idx)
		return (NULL);
	current = *h;
	if (idx == 0)
	{
		/*Add node to head*/
		return (add_dnodeint(h, n));
	}
	for (i = 0; i < idx; i++)
	{
		prev = current;
		current = (*current).next;
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	(*newnode).n = n;
	(*newnode).next = current;
	(*newnode).prev = prev;
	(*prev).next = newnode;
	(*current).prev = newnode;
	return (newnode);
}
