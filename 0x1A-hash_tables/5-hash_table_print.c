#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: hash table
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head = NULL;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < (*ht).size; i++)
		{
			head = (*ht).array[i];

			while (head != NULL)
			{
				printf("'%s': '%s'", (*head).key, (*head).value);
				printf(", ");
				if ((*head).next != NULL)
				{
					printf(", ");
				}
				head = (*head).next;
			}

		}
		printf("}");
	}
	printf("\n");
}
