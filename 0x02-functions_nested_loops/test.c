#include <stdio.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
void main(void)
{
	int n;
	char a;

	a = n;
	for (n = 5; n < 9; n++)
	{
		_putchar(n + '0');
		_putchar('\n');
		_putchar(a + '0');
		_putchar('\n');
	}
}
