#include "lists.h"

/**
* add_node_end - dds a new node at the end of a linked list
* @head: head of the list
* @str: element to put in the new node
* Return: the address of the new element, or NULL if it failed
**/
list_t *add_node_end(list_t **head, const char *str)
{
	char *strclone = strdup(str);
	int i = 0;	
	list_t *newnode;
	malloc(sizeof(list_t));
	(*newnode).str = strdup(str);
	while (str[i])
	{
		i++;
	}
	
	return (*head);
}
