#include <stddef.h>
/**
 * array_iterator - use the action function on each element of array
 * @array: elements to pass to action
 * @size: size of array
 * @action: function to use on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n = 0;

	while (n < size)
	{
		action(array[n]);
		n++;
	}
}
