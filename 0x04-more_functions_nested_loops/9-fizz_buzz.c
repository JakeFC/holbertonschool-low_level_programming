#include <stdio.h>

/**
 * main - prints 1 to 100, but Fizz for multiples of 3, Buzz for multiples of
 * 5, and FizzBuzz for multiples of both
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 5 == 0) && (a % 3 == 0))
		  printf("FizzBuzz");
		else if (a % 5 == 0)
			printf("Buzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else
			printf("%d", a);
		if (a < 100)
			putchar(' ');
	}
	putchar('\n');
}
