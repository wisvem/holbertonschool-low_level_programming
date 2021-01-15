#include "hash_tables.h"

/**
* hash_table_create - create hash table
* @size: size of the #table
* Return: a pointer to the newly created hash table
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable = NULL;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
	{
		return (NULL);
	}
	(*htable).size = size;
	(*htable).array = calloc(size, sizeof(hash_node_t *));
	return (htable);
}
