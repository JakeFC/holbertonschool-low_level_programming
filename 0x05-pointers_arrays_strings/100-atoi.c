#include "holberton.h"

/**
 * _atoi - converts a string to an integer
 * @s: string input
 * Return: integer value of string
 */
int _atoi(char *s)
{
	int a, b, c;

	for (a = 0; s[a] != '\0';)
		a++;
	a--;
	c = 0;
	for (b = 1; a >= 0; a--, b *= 10)
	{
		if (s[a] <= '9' && s[a] >= '0')
			c += ((s[a] - 48) * b);
		if (s[a] == '-')
			c *= -1;
	}
	return (c);
}
