#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: number of ints allocated
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
