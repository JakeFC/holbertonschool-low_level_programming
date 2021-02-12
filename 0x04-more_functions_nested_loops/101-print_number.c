#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: input to print
 */
void print_number(int n)
{
	int a, b, c, d, e, f, g, h, i, j;
	unsigned int nn = n;

	if (n < 0)
	{
		_putchar('-');
		nn = -n;
	}
	a = ((nn / 1000) % 10);
	b = ((nn / 100) % 10);
	c = ((nn / 10) % 10);
	d = (nn % 10);
	e = ((nn / 10000) % 10);
	f = ((nn / 100000) % 10);
	g = ((nn / 1000000) % 10);
	h = ((nn / 10000000) % 10);
	i = ((nn / 100000000) % 10);
	j = ((nn / 1000000000) % 10);
	if (nn > 999999999)
		_putchar(j + '0');
	if (nn > 99999998)
		_putchar(i + '0');
	if (nn > 9999998)
		_putchar(h + '0');
	if (nn > 999998)
		_putchar(g + '0');
	if (nn > 99998)
		_putchar(f + '0');
	if (nn > 9998)
		_putchar(e + '0');
	if (nn > 998)
		_putchar(a + '0');
	if (nn > 98)
		_putchar(b + '0');
	if (nn > 8)
		_putchar(c + '0');
	_putchar(d + '0');
}
