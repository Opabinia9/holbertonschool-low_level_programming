#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: min number in array
 * @max: max number in array
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int x = min;
	int y = 0;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(*arr));
	if (!arr)
		return (NULL);
	while (x <= max)
	{
		arr[y] = x;
		y++;
		x++;
	}
	return (arr);
}
