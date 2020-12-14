#include "lists.h"

/**
 * dlistint_len - Entry point
* @h: head of the list
* Return: the number of elements in a linked list
**/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = (*h).next;
		count++;
	}
	return (count);
}
/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: pointer to head
* @idx: the given position
* @n: the element to be added to the node
* Return: the address of the new node, or NULL if it failed
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *auxiliar_node = NULL, *new_node = NULL;
	unsigned int i = 0, l = 0;

	l = dlistint_len(*h);
	if (l == idx)
		return (add_dnodeint_end(h, n));
	if (l < idx)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	auxiliar_node = *h;
	for (; i < idx - 1; i++)
		auxiliar_node = (*auxiliar_node).next;
	(*new_node).n = n;
	(*new_node).prev = (*auxiliar_node).prev;
	(*(*auxiliar_node).prev).next = new_node;
	(*auxiliar_node).prev = new_node;
	if ((*auxiliar_node).next)
		(*new_node).next = auxiliar_node;
	return (new_node);
}
