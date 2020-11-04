#include "lists.h"

/**
* nsert_nodeint_at_index -
* @head: pointer to head
* @idx: index of the list where the new node should be added
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
	(*newnode).n = n;
	for (i = 0; i < idx; i++)
	{
		prev = current;
		current = (*current).next;
	}
	(*prev).next = newnode;
	(*newnode).next = current;
	return (newnode);
}
