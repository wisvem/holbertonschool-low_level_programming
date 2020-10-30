#include "lists.h"

/**
* add_node - adds a new node at the beginning of a linked list
* @h: head of the list
* str: element to put in the new node
* Return: the address of the new element, or NULL if it failed
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = NULL;
	int i;

	while (str[i] != '\0')/*Get size of str*/
	{
		i++;
	}
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	(*newnode).str = strdup(str);
	(*newnode).len = i;
	(*newnode).next = *head;
	*head = newnode;
	return (*head);
}
