#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elemets of size bytes, each
 * initialized to zero
 * @nmemb: number of elements
 * @size: number of bytes in each element
 * Return: pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		s[i] = 00;
	return (s);
}
