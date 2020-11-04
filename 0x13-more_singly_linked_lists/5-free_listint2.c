#include "lists.h"

/**
* free_listint2 - frees a list
* @head: pointer to the list
**/
void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	temp = *head;
	if (head == NULL)
		return;
	while (temp != NULL)
	{
		temp2 = (*temp).next;
		free(temp);
		temp = temp2;
	}
	*head = NULL;
}
