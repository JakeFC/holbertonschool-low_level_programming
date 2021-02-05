#include <stdio.h>

/**
 *main- prints 00-99, with commas and spaces
 *Return: 0
 */
int main(void)
{
	int n;

	for (n = 0 ; n <= 99 ; n++)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		if (n <= 98)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
