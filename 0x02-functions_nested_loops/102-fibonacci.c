#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long a = 0;
	long b = 1;
	long c;
	long d;

	for (d = 1; d <= 50; d++)
	{
		c = a + b;
		if (d < 50)
			printf("%ld, ", c);
		else
			printf("%ld\n", c);
		a = b;
		b = c;
	}
	return (0);
}
