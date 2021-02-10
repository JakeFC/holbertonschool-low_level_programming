#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int c;
	int d;

	for (d = 1; d <= 50; d++)
	{
		c = a + b;
		if (d < 50)
			printf("%d, ", c);
		else
			printf("%d", c);
		a = b;
		b = c;
	}
	return (0);
}
