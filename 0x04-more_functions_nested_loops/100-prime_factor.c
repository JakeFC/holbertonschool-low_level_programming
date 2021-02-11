#include <stdio.h>

/**
 * main - prints largest prime factor of 612852475143
 * Return: always 0
 */
int main(void)
{
	long a, b, c;

	a = 612852475143;
	while (a % 2 == 0)
	{
		c = 2;
		a /= 2;
	}
	for (b = 3; b < (a / 2); b += 2)
	{
		while (a % b == 0)
		{
			c = b;
			a /= b;
		}
	}
/*
 * the last number which can't divide evenly is the largest factor
 */
	printf("%ld\n", a);
	return (0);
}
