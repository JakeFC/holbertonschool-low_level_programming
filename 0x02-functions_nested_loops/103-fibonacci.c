#include <stdio.h>
#include <stdlib.h>

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

	for (d = 1; d <= 50; d++)
	{
		c = a + b;
		if (d < 50 && c < 4000000 && c % 2 == 0)
			e += c;
		a = b;
		b = c;
	}
	printf("%ld\n", e);
	return (0);
}
