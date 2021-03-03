#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - creates a copy of s1 with s2 added to the end
 * @s1: string input
 * @s2: second string input
 * Return: pointer to new string, or 0 if insufficient memory
 */
char *str_concat(char *s1, char *s2)
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
	c = malloc(a + b + 1);
	if (c == NULL)
		return (0);
	for (i = 0; i < a; i++)
		c[i] = s1[i];
	for (ii = 0; i < (a + b + 1); i++, ii++)
		c[i] = s2[ii];
	return (c);
}
