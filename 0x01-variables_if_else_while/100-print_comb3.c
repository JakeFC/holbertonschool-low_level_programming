#include <stdio.h>

/**
 *main- prints all unique combinations of 2 digits
 *Return: 0
 */
int main(void)
{
	int n;
	int t;
	int o;

	o = (n % 10 + '0');
	t = ((n /10) + '0');
	for (n = 1 ; n <= 99 ; n++)
	{
		if (t < o)
		{
			putchar(t);
			putchar(o);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
