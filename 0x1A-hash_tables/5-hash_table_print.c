#include "hash_tables.h"
/**
*hash_table_print - prints a hash table
*
*@ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a, b = 0;
	hash_node_t *temp;

	if (!ht)
		return;
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		temp = ht->array[a];
		while (temp)
		{
			if (b)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			b++;
		}
	}
	printf("}\n");
}
