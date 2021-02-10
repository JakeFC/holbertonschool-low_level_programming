#include <stdio.h>

/**
 * main - prints the sum of all even fibonaccis under 4 mil
 * Return: 0
 */

int main(void)
{
	long long a = 0;
	long long b = 1;
	long long c;
	long long d;
	long long e;

	for (d = 1; d <= 50; d++)
	{
		c = a + b;
		if (d < 50 && c < 4000000 && c % 2 == 0)
			e += c;
		a = b;
		b = c;
	}
	printf("%lld\n", e);
	return (0);
}
