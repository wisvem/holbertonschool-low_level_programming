#include "lists.h"

/**
* pop_listint - deletes the head node of a linked list
* @head: pointer to the head
* Return: the head node’s data (n)
**/
int pop_listint(listint_t **head)
{
	listint_t *temp, *temp2;
	int n;

	temp = *head;
	if (temp != NULL)
	{
		n = (*temp).n;
		temp2 = (*temp).next;
		free(temp);
		temp = temp2;
		*head = temp;
	}
	return (n);
}
