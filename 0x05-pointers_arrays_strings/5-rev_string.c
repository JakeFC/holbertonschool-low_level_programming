#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string input
 */
void rev_string(char *s)
{
	int a, b, c;

	a = 0;
	while (*(s + a) != '\0')
		a++;
	a--;
	b = 0;
	c = 0;
	while (b <= a / 2)
	{
		c = s[b];
		s[b] = s[a - b];
		s[a - b] = c;
		b++;
	}

}
