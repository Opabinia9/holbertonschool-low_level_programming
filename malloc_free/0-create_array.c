#include "main.h"
#include <stdlib.h>

/**
 * create_array -
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int n = 0;

	if (size <= 0)
	{
		return ('\0');
	}
	arr = (char *)malloc(size * sizeof(*arr));
	if (!arr)
	{
		free(arr);
		return ('\0');
	}
	while (n < size)
	{
		arr[n] = c;
		n++;
	}
	return (arr);
}
