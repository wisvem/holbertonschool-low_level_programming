#include "lists.h"

/**
* add_node_end - adds a new node at the end of a linked list
* @head: head of the list
* @str: element to put in the new node
* Return: the address of the new element, or NULL if it failed
**/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = NULL;
	int i = 0;
	list_t *lastnode = *head;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')/*Get size of str*/
	{
		i++;
	}
	(*newnode).str = strdup(str);
	(*newnode).len = i;
	(*newnode).next = NULL;
	
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while ((*lastnode).next != NULL)
		{
			lastnode = (*lastnode).next;
		}
		(*lastnode).next = newnode;
	}
	return (newnode);
}
