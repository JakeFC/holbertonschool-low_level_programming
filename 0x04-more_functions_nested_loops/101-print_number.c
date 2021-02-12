#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: input to print
 */
void print_number(int n)
{
	int a, b, c, d, e, f, g, h, i, j;

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
	g = ((n / 1000000) % 10) + 48;
	h = ((n / 10000000) % 10) + 48;
	i = ((n / 100000000) % 10) + 48;
	j = ((n / 1000000000) % 10) + 48;
	k = ((n / 10000000000) % 10) + 48;
	if (n > 9999999999)
		_putchar(k);
	if (n > 999999999)
		_putchar(j);
	if (n > 99999999)
		_putchar(i);
	if (n > 9999999)
		_putchar(h);
	if (n > 999999)
		_putchar(g);
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
