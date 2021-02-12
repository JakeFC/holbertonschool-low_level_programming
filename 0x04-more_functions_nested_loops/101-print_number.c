#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: input to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int a = ((n / 1000) % 10);
	int b = ((n / 100) % 10);
	int c = ((n / 10) % 10);
	int d = (n % 10);

	if (n > 999)
		_putchar(a + '0');
	if (n > 99)
		_putchar(b + '0');
	if (n > 9)
		_putchar(c + '0');
	_putchar(d + '0');
}
