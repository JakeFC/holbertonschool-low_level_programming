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
					c = 0;
					while (c < 2)
					{
						_putchar(' ');
						if (((a * (b + 1)) / 100) >= 1)
							{
								_putchar(a * (b + 1) / 100 + '0');
									c++;
							}
								c++;
					}
					if ((a * (b + 1) % 100 / 10 >= 1) || (((a * (b + 1)) / 100) >= 1))
								_putchar(a * (b + 1) % 100 / 10 + '0');
						    else
								_putchar(' ');
				}
						b++;
			}
					_putchar('\n');
					a++;
		}
	}

}
