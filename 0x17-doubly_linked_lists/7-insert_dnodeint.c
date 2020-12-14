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
	dlistint_t *auxiliar_node = NULL, *new_node = NULL, *temp;
	unsigned int i = 0, list_size = 0;

	if (h)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
		temp = *h;
		while (temp != NULL)
		{
			temp = (*temp).next;
			list_size++;
		}
		if (list_size == idx)
			return (add_dnodeint_end(h, n));
		if (list_size < idx)
			return (NULL);
		if (idx == 0)
			return (add_dnodeint(h, n));

		auxiliar_node = *h;

		for (; i < idx; i++)
		{
			if (!(*auxiliar_node).next)
				return (NULL);
			auxiliar_node = (*auxiliar_node).next;
		}
		(*new_node).n = n;
		(*new_node).prev = (*auxiliar_node).prev;
		(*(*auxiliar_node).prev).next = new_node;
		(*auxiliar_node).prev = new_node;
		if ((*auxiliar_node).next)
			(*new_node).next = auxiliar_node;
	}
	return (EXIT_SUCCESS);
}
