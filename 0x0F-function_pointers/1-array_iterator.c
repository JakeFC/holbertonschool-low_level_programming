#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a given function on each element of an array
 * @array: array of ints
 * @size: number of array elements
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
