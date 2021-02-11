#include "holberton.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar((a * b) % 10 + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
					if ((a * (b + 1) / 10) >= 1)
						_putchar((a * (b + 1)) / 10 + '0');
					else
						_putchar(' ');
				}
		}
		_putchar('\n');
	}
}
