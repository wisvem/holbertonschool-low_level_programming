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

	(*newnode).str = strdup(str);
	(*newnode).next = *head;
	return (*head);
}
