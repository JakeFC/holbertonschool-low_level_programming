#include <stdio.h>

/**
 *main- prints all unique combinations of 2 digits
 *Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; ((n / 10) + '0') < ((n % 10) + '0'); n++)
	{
		while (n <= 89)
		{
			{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			n++;
			}
			if (n < 90)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
