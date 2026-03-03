#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate b bytes of memory
 * @b: bytes of memory to alocate
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);

	if (!arr)
	{
		exit(98);
	}
	return (arr);
}
