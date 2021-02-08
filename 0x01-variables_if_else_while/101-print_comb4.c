#include <stdio.h>

/**
 *main- prints all unique combinations of 3 digits
 *Return: 0
 */
int main(void)
{
	int n;

	for (n = 012; n <= 789; n++)
	{
		if (((n / 100) < ((n % 100) / 10)) && (((n % 100) / 10) < (n % 10)))
		{
			{
				putchar((n / 100) + '0');
				putchar(((n % 100) / 10) + '0');
				putchar((n % 10) + '0');
			}
			if (n < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		else
			continue;
	}
	putchar('\n');
	return (0);
}
