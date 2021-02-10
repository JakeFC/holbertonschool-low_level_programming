#include "holberton.h"

/**
 * print_times_table - prints a times table of n (0-15)
 * @n: input
 */
void print_times_table(int n)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	if (n >= 0 && n <= 15)
	{
		a = 0;
		while (a <= n)
		{
			b = 0;
			while (b <= n)
			{
				_putchar((a * b) % 10 + '0');
				if (b < n)
				{
					_putchar(',');
					_putchar(' ');
					d = ((a * (b + 1)) / 100);
					_putchar(d >= 1 ? d + '0' : ' ');
					e = ((a * (b + 1)) % 100 / 10);
					_putchar((e >= 1 || d >= 1) ? e + '0' : ' ');

				}
				b++;
			}
			_putchar('\n');
			a++;
		}
	}

}
