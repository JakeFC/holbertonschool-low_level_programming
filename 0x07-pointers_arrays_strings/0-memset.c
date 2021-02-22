#include "holberton.h"

/**
 * _memset - fills the first n bytes of memory at s with a constant byte
 * @s: target address
 * @b: constant byte
 * @n: maximum bytes replaced
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
