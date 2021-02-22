#include "holberton.h"

/**
 * _memcpy - fills the first n bytes of src to dest
 * @dest: target address
 * @src: source string
 * @n: maximum bytes replaced
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
