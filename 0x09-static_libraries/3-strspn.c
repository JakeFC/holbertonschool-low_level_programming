#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * from string accept
 * @s: target string
 * @accept: index of acceptable bytes
 * Return: number of bytes in the prefix of s that consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;
	int c;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0, c = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				c = 1;
		}
		if (c == 0)
			return (a);
	}

	return (a);
}
