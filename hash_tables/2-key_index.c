#include "hash_tables.h"
/**
 * key_index - generate index for hash_table for a key
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = hash_djb2(key);

	if (!size)
		return (0);

	idx %= size;

	return (idx);
}
