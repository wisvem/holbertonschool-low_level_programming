#include "hash_tables.h"

/**
* key_index - gives you the index of a k
* @key: the key
* @size: size of the array of the hash table
* Return: the index at which the key
* value pair should be stored in the array of the hash table
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*int index = hash_djb2(key) % size;*/
	return (hash_djb2(key) % size);
}
