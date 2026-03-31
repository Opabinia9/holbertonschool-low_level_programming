#include "hash_tables.h"

/**
 * hash_table_get - get a value from a hash table
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: value aociated with key or NULL on fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *lhead;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	lhead = ht->array[idx];
	while (lhead)
	{
		if (!strcmp(lhead->key, key))
		{
			return (lhead->value);
		}
		lhead = lhead->next;
	}
	return (NULL);
}
