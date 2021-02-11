#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line of n length
 * @n: input
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b < a; b++)
				_putchar(' ');
			_putchar('\\');
			if (a < n)
			_putchar('\n');
		}
	_putchar('\n');
}
