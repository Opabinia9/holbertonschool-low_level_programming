#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht = malloc(sizeof(hash_table_t));
	if (hasht == NULL)
		return (NULL);

	hasht->array = malloc(size * sizeof(*hasht->array));
	if (hasht->array == NULL)
	{
		free(hasht);
		return (NULL);
	}

	hasht->size = size;

	return (hasht);
}
