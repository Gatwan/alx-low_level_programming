#include "hash_tables.h"
/**
*hash_table_set - adds an element to the hash table
*@ht: hash table to add/update the key/value to
*@key: key (cannot be an empty string)
*@value: value associated with the key
*
*Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *element = NULL, *temp;

	if (!ht || !key || !*key || !value)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (!temp->value)
				return (0);
			return (1);
		}
		temp = temp->next;
	}

	element = malloc(sizeof(hash_node_t));
	if (!element)
		return (0);

	element->key = strdup(key);
	element->value = strdup(value);

	if (!element->value)
	{
		free(element);
		return (0);
	}
	element->next = ht->array[idx];
	ht->array[idx] = element;
	return (1);
}
