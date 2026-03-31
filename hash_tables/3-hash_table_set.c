#include "hash_tables.h"

/**
 * hash_table_set - adds an entry to a hash table
 * @ht: hash table to add to
 * @key: key for entry
 * @value: value for entry
 * Return: 1 on success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	node = malloc(sizeof(*node));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
		ht->array[idx] = node;
	else
	{
		node->next = ht->array[idx];
		ht->array[idx] = node;
	}
	return (1);
}
