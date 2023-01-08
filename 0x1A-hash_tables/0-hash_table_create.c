#include "hash_tables.h"
/**
*hash_table_create - creates a hash table
*
*@size: size of the array
*
*Return: pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhash;

	if (!size)
		return (NULL);

	newhash = malloc(sizeof(hash_table_t));
	if (newhash == NULL)
		return (NULL);

	newhash->size = size;
	newhash->array  = malloc(sizeof(hash_node_t *) * size);
	if (newhash->array == NULL)
	{
		free(newhash);
		return (NULL);
	}

	return (newhash);
}
