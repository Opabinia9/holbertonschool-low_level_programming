#include "hash_tables.h"

/**
 * hash_table_print - print a hash table;
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	int i = 0;
	hash_node_t *lhead;

	printf("{");

	while (idx < ht->size)
	{
		lhead = ht->array[idx];
		while (lhead)
		{
			if (i)
				printf(", ");
			printf("'%s': '%s'", lhead->key, lhead->value);
			lhead = lhead->next;
			i = 1;
		}
		idx++;
	}

	printf("}\n");
}
