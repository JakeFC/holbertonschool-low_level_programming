#include <stdio.h>

/**
 * main - prints the sum of all even fibonaccis under 4 mil
 * Return: 0
 */

int main(void)
{
	long a = 0;
	long b = 1;
	long c;
	long d;
	long e;

	for (d = 1; d < 33; d++)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			e += c;
			a = b;
			b = c;
		}
		else
		{
			a = b;
			b = c;
		}
	}
	printf("%ld\n", e);
	return (0);
}
