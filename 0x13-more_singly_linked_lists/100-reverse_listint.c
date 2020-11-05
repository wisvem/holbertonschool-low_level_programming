#include "lists.h"

/**
* reverse_listint - reverses a linked list
* @head: pointer to the head of the list
* Return: a pointer to the first node of the reversed list
**/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *prox;

	prev = NULL;
	while (*head != NULL)
	{
		prox = (**head).next;
		(**head).next = prev;
		prev = *head;
		*head = prox;
	}
	*head = prev;
	return (*head);
}
