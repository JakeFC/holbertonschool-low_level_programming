#include "holberton.h"

/**
 * print_line - draws a line of input length
 * @n: given line length
 */
void print_line(int n)
{
	int a;

	if (n > 0)
		for (a = 1; a <= n; a++)
			_putchar('_');

	_putchar('\n');
}
