#include "holberton.h"

/**
 * print_to_98 - prints all numbers n to 98
 * Return: 0
 */
void print_to_98(int n)
[

	while (n < 98 || n > 98)
			if (n > 99 || n < -99)
			{
				putchar(n / 100);
				if (n > 9 || n < -9)
				{
					putchar((n % 100) / 10);
				}
				n++;
			}
}
