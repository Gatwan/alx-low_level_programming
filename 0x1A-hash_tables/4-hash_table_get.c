#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key
*
*@ht: hash table to be looked into
*@key: key you are looking for
*
*Return: value associated with the element, NULL if key couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp != NULL)
	{
		if (tmp->key)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}