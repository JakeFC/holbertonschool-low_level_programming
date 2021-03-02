#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes with a
 * specific char
 * @size: number of bytes in the array
 * @c: char which will fill the array
 * Return: pointer to array, or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = malloc(size);

	if (a == NULL)
		return (0);
	if (size == 0)
		return (0);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
