#include "lists.h"

/**
 * dlistint_len - Entry point
* @h: head of the list
* Return: the number of elements in a linked list
**/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (; h; i++)
		h = h->next;
	return (i);
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

	if (!h)
		return (NULL);
	auxiliar_node = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	l = dlistint_len(*h);
	if (l == idx)
		return (add_dnodeint_end(h, n));
	if (l < idx)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	for (; i < idx - 1; i++)
		auxiliar_node = (*auxiliar_node).next;
	(*new_node).n = n;
	(*new_node).prev = auxiliar_node;
	(*new_node).next = (*auxiliar_node).next;
	(*(*auxiliar_node).next).prev = new_node; /*Añadido*/
	(*auxiliar_node).next = new_node;
	return (new_node);
}
