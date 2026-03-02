#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2D array inizalised with 0s
 * @width: size of each row in the array
 * @height: size of each collum in the array
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(height * sizeof(int *));
	if (!arr)
	{
		return (NULL);
	}
	while (x < width)
	{
		arr[x] = (int *)malloc(width * sizeof(int));
		if (!arr[x])
		{
			return (NULL);
		}
		x++;
	}
	return (arr);
}
