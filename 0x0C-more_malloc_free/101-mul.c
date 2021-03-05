#include "holberton.h"
#include <stdlib.h>
void _puts(char *str);
char *infinite_add(char *n1, char *n2, char *r);

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: pointer to argument strings
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i, ii, dext, dex1, ten, maxs;
	char *s, *tmp;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	for (i = 1; i < 3; i++)
	{
		for (ii = 0; argv[i][ii] != 00; ii++)
			if (argv[i][ii] < 48 || argv[i][ii] > 57)
			{
				_puts("Error");
				exit(98);
			}
		dex1 = ii - 1;
	}
	maxs = (sizeof(argv[1]) + sizeof(argv[2])) - 1;
	if (argv[1][0] * argv[2][0] < 10)
		maxs--;
	s = malloc(maxs);
	if (!s)
		return (1);
	s[0] = '0';
	s[1] = 00;
	for (--ii; ii >= 0; ii--)
	{
		dext = sizeof(argv[1]) - 2;
		if (argv[1][0] * argv[2][ii] >= 10)
		dext++;
		tmp = malloc(dext + 2);
		if (!tmp)
		{
			free(s);
			return (1);
		}
		for (ten = 0; dex1 >= 0; dex1--, dext--)
		{
			tmp[dext] = ((argv[1][dex1] - 48) * (argv[2][ii] - 48)
				     + ten) % 10 + 48;
			ten = ((argv[1][dex1] - 48) * (argv[2][ii] - 48)) / 10;
		}
		s = infinite_add(s, tmp, s);
	}
	_puts(s);
	return (0);
}

/**
 * _puts - prints a string
 * @str: string input
 */
void _puts(char *str)
{
	int a;

	a = 0;
	while (*(str + a) != '\0')
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}

/**
 * infinite_add - adds two strings of numbers and returns the solution as a
 * string
 * @n1: string input 1
 * @n2: string input 2
 * @r: string output
 * Return: pointer to n, or 0 if larger than size_r
 */
char *infinite_add(char *n1, char *n2, char *r)
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
	return (r);
}
