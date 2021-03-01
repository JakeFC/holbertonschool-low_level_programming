#include "holberton.h"
/**
 * infinite_add - adds two strings of numbers and returns the solution as a
 * string
 * @n1: string input 1
 * @n2: string input 2
 * @r: string output
 * @size_r: size of buffer for string r
 * Return: pointer to n, or 0 if larger than size_r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c, ten;

	for (a = 0; n1[a] != '\0';)
		a++;
	for (b = 0; n2[b] != '\0';)
		b++;
	c = a >= b ? a : b;
	r[c + 1] = '\0';
	for (a--, b--, ten = '0'; c > 0; c--, a--, b--)
	{
		if (b >= 0 && a >= 0)
		{
			r[c] = ((n1[a] - 48 + n2[b]) - 48 + ten - 48) % 10 + 48;
			ten = ((n1[a] - 48 + n2[b] - 48 + ten - 48) / 10 + 48);
		}
		if (b < 0)
		{
			r[c] = ((n1[a] - 48 + ten - 48) % 10 + 48);
			ten = (n1[a] - 48 + ten - 48) / 10 + 48;
		}
		if (a < 0)
		{
			r[c] = ((n2[b] - 48 + ten - 48) % 10 + 48);
			ten = (n2[b] - 48 + ten - 48) / 10 + 48;
		}
	}
	r[0] = ten;
	if (r[0] == '0')
		for (c = 0; r[c] != '\0'; c++)
			r[c] = r[c + 1];
	else
		for (c = 0; r[c] != '\0';)
			c++;
	if (c + 1 > size_r)
		return (0);
	return (r);
}
