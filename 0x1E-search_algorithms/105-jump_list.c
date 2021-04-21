#include "search_algos.h"
#include <math.h>

/**
* jump_list - searches for a value in an list of integers
* @list: pointer to the first element of the list to search in
* @size: number of elements in list
* @value: value to search for
* Return: the first index where value is located \
* or -1 if value is not present in list or if list is NULL
**/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *start = NULL, *end = NULL;
	size_t limit = 0;

	if (list != NULL)
	{
		start = list;
		end = list;
		while ((*end).next != NULL && (*end).index < size && (*end).n < value)
		{
			start = end;
			limit = limit + sqrt(size);
			while ((*end).index < limit && (*end).next != NULL)
				end = (*end).next;
			printf("Value checked at index [%lu] = [%d]\n", (*end).index, (*end).n);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
			   (*start).index, (*end).index);
		while (start != NULL && (*start).index < size &&
			   (*start).index <= (*end).index)
		{
			printf("Value checked at index [%lu] = [%d]\n",
				   (*start).index, (*start).n);
			if ((*start).n == value)
				return (start);
			start = (*start).next;
		}
	}
	return (NULL);
}
