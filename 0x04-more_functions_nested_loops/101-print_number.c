#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: input to print
 */
void print_number(int n)
{
	int a, b, c, d, e, f;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	a = ((n / 1000) % 10) + 48;
	b = ((n / 100) % 10) + 48;
	c = ((n / 10) % 10) + 48;
	d = (n % 10) + 48;
	e = ((n / 10000) % 10) + 48;
	f = ((n / 100000) % 10) + 48;

	if (n > 99999)
		_putchar(f);
	if (n > 9999)
		_putchar(e);
	if (n > 999)
		_putchar(a);
	if (n > 99)
		_putchar(b);
	if (n > 9)
		_putchar(c);
	_putchar(d);
}
