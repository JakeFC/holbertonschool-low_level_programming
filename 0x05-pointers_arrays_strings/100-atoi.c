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
	for (b = 1; a >= 0; b++, a *= 10)
	{
		if (s[a] <= '9' && s[a] >= '0')
			c += (s[a] * b + 0);
		if (s[a] == '-')
			c *= -1;
	}
	return (c);
}
