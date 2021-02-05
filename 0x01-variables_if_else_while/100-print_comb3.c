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
	int c;

	o = n % 10;
	t = (n - o) / 10;
	c = 10 * o + t;
	for (n = 1 ; n <= 99 ; n++)
	{
		if (t != o && (n != c || (n == c && t < o)))
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
