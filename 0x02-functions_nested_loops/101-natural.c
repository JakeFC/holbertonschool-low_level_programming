#include <stdio.h>

/**
 * main - adds all multiples of 3 and 5 below 1024
 */
void main(void)
{
	int a;
	int b;

	a = 0;
	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
			a += b;
		a++;
	}
	printf('%d/n', b)
}
