#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to head
* @idx: the given position
* @n: the element to be added to the node
* Return: the address of the new node, or NULL if it failed
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev, *current, *newnode, *temp;
	unsigned int i;
	unsigned int list_size = 0;

	temp = *head;
	while (temp !=  NULL)
	{
		temp = (*temp).next;
		list_size++;
	}
	if (list_size < idx)
		return (NULL);
	current = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	(*newnode).n = n;
	if (idx == 0)
	{
		(*newnode).next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; i < idx; i++)
	{
		prev = current;
		current = (*current).next;
	}
	(*prev).next = newnode;
	(*newnode).next = current;
	return (newnode);
}
