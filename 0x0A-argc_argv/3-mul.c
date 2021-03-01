#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies 2 arguments and prints the result
 * @argc: number of arguments passed
 * @argv: string of arguments passed
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int a;

	if (argc != 3)
		puts("Error");
	else
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", a);
	}
	return (0);
}
