#include "hash_tables.h"
/**
*hash_table_delete - function that deletes a hash table
*
*@ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int a;
	hash_node_t *temp, *hashTable;

	if (!ht)
		return;
	for (a = 0; a < ht->size; a++)
	{
		hashTable = ht->array[a];
		while (hashTable)
		{
			temp = hashTable;
			hashTable = hashTable->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
