#include "holberton.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int a;
	int b;
	int d;
	int e;
	int f;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		e = (a * b) % 10;
		while (b <= 9)
		{
			_putchar(e + '0');
			if (b < 9)
			{
				_putchar(',');
				d = 0;
				while (d < 2)
				{
					_putchar(' ');
					f = (a * (b + 1) / 10);
					if (((a * b) / 10 + 0) >= 1)
					{
						_putchar(f + '0');
						d++;
					}
					d++;
				}
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
