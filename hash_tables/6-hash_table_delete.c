#include "hash_tables.h"

/**
 * hash_table_delete - deltes a given hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *lhead, *temp;

	while (idx < ht->size)
	{
		lhead = ht->array[idx];
		while (lhead)
		{
			temp = lhead->next;
			free(lhead->key);
			free(lhead->value);
			free(lhead);
			lhead = temp;
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
