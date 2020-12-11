#include "lists.h"

/**
* sum_dlistint - sum of all the data of a linked list
* @head: head of the list
* Return: the sum of all the data
**/
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i = i + (*head).n;
		head = (*head).next;
	}
	return (i);
}
