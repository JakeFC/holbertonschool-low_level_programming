#include <stdio.h>

/**
 *main- prints the alphabet backwards
 *Return: 0
 */
int main(void)
{
	char n;

	for (n = 'z' ; n >= 'a' ; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
