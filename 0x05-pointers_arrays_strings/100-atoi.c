#include "holberton.h"

/**
 * _atoi - converts a string to an integer
 * @s: string input
 * Return: integer value of string
 */
int _atoi(char *s)
{
	int a, c, i;
	double b;

	for (a = 0; s[a] != '\0';)
		a++;
	a--;
	for (b = 1, i = 0, c = 0; a >= 0; a--)
	{
		if (s[a] <= '9' && s[a] >= '0')
		{
			if (c == 1 && (s[a + 1] < 48 || s[a + 1] > 57))
			{
				c = 0;
				i = 0;
				b = 1;
			}
			i += ((s[a] - 48) * b);
			b *= 10;
			c = 1;
		}
		if (s[a] == '-')
			i = -i;
	}
	return (i);
}
