#include <stddef.h>

/**
 * int_index - fint index of first match by cmp in array
 * @array: array to check
 * @size: size of array
 * @cmp: checker
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (n < size)
	{
		if (cmp(array[n]))
			return (n);
		n++;
	}
	return (-1);
}
