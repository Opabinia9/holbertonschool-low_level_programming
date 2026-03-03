#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of memory to allocate
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *arr2;
	unsigned int x = 0;

	if ((nmemb && size) == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	arr2 = arr;
	while (x < nmemb * size)
	{
		arr2[x] = 0;
		x++;
	}
	return (arr);
}
