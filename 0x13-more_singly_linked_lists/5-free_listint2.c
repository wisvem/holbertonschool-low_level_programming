#include "lists.h"

/**
* free_listint2 - frees a list
* @head: pointer to the list
**/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (temp != NULL)
		{
			temp = *head;
			*head = (*head).next;
			free(temp);
		}
	}
}
