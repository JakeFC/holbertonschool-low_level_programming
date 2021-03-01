#include <stdlib.h>
#include <stdio.h>

/**
 * main - determines and prints the minimum number of coins needed for second
 * argument value
 * @argc: number of arguments given
 * @argv: string of arguments given
 * Return: 0 if successful, 1 if too many arguments
 */
int main(int argc, char **argv)
{
	int c;
	int num = 0;
	int q = 0;
	int d = 0;
	int n = 0;
	int t = 0;
	int p = 0;

	if (argc != 2)
	{
		puts("ERROR");
		return (1);
	}
	c = atoi(argv[1]);
	if (c <= 0)
	{
		puts("0");
		return (0);
	}
	q = (c / 25);
	c -= 25 * q;
	d = (c / 10);
	c -= 10 * d;
	n = (c / 5);
	c -= 5 * n;
	t = (c / 2);
	c -= 2 * t;
	p = c;
	num = q + d + n + t + p;
	printf("%d\n", num);
	return (0);
}
