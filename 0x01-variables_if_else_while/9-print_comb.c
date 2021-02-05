#include <stdio.h>

/**
 *main- prints 0-9, with commas and spaces
 *Return: 0
 */
int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		if (n <= '8')
		{
		putchar(n);
		putchar(' ');
		putchar(',');
		}
		if (n == '9')
		{
			putchar(n);
		}
	}
	return (0);
}
