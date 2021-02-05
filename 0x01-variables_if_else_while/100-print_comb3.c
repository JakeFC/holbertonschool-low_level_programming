#include <stdio.h>

/**
 *main- prints all unique combinations of 2 digits
 *Return: 0
 */
int main(void)
{
	int n;

	for (n=1; n <= 89; n++)
	{
		if ((n / 10) < (n % 10))
		{
			{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			}
			if (n < 89)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
