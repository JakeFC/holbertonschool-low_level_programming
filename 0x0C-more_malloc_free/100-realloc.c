#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previous memory allocation
 * @old_size: size, in bytes, of the spaces allocated to ptr
 * @new_size: size, in bytes, of the new memory block
 * Return: pointer to new memory block, or old pointer if sizes are the same,
 * or NULL if new_size is 0 and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *p;
	int i, ptrmax;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		s = malloc(new_size);
		if (!s)
			return (NULL);
		return (s);
	}
	s = malloc(new_size);
	if (!s)
		return (NULL);
	p = ptr;
	ptrmax = old_size > new_size ? new_size : old_size;
	for (i = 0; i < ptrmax; i++)
		s[i] = p[i];
	free(ptr);
	return (s);
}
