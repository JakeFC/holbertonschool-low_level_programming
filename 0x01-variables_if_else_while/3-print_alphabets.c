#include <stdio.h>

/**
 *main- prints the alphabet in both cases
 *Return: 0
 */
int main(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		putchar(n);
	}
	for (n = 'A' ; n <= 'Z' ; n++)
        {
		putchar(n);
	}
	putchar('\n');
	return (0);
}
