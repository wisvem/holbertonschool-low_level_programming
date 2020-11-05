#include "lists.h"

/**
* free_listint_safe - free a list
* Return: the size of the list that was free’d
* @h: pointer to the head of the list
*/
size_t free_listint_safe(listint_t **h)
{
	int nodes = 0;
	listint_t *turtle = h;

	if (head == NULL)
	{
		return (0);
	}
	printf("[%p] %i\n", (void *)head, (*head).n);
	head = (*head).next;
	for (nodes = 0; head != NULL; nodes++)
	{
		if (head < turtle)
		{
			printf("[%p] %i\n", (void *)head, (*head).n);
		}
		else
		{
			printf("-> [%p] %i\n", (void *)head, (*head).n);
			break;
		}
		head = (*head).next;
		turtle = (*turtle).next;
	}
	return (nodes + 1);
}
