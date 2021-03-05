#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: starting value of array
 * @max: end value of array
 * Return: pointer to array, or NULL if min is larger than max or malloc fails
 */
int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		return (NULL);
	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		s[i] = min + i;
	return (s);
}
