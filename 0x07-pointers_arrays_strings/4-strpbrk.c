#include "holberton.h"

/**
 * _strpbrk - locates any of a set of bytes in a string
 * @s: target string
 * @accept: string of acceptable bytes
 * Return: pointer to first desired byte in s or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;
	int c;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0, c = 0; accept[b] != '\0'; b++)
			if (s[a] == accept[b])
				return (s + a);
	}

	return (0);
}
