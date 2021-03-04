#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates the first string and n bytes of a second
 * @s1: string input 1
 * @s2: string input 2
 * @n: number of bytes of s2
 * Return: pointer to new string on success, NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int a, b, i, ii;

	if (s1 == NULL)
		a = 0;
	else
		for (a = 0; s1[a] != 00;)
			a++;
	if (s2 == NULL)
		b = 0;
	else
		for (b = 0; s2[b] != 00;)
			b++;
	if (n < b)
		b = n;
	c = malloc(a + b + 1);
	if (c == NULL)
		return (0);
	for (i = 0; i < a; i++)
		c[i] = s1[i];
	for (ii = 0; i < (a + n); i++, ii++)
		c[i] = s2[ii];
	c[i] = 00;
	return (c);
}
