#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: pointer to pointers of argument strings
 * Return: result of the operation, or "Error" on failure
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*ptr)(int a, int b);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (a == 0 || b == 0))
	{
		puts("Error");
		exit(100);
	}
	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		puts("Error");
		exit(99);
	}
	printf("%d\n", ptr(a, b));
	return (0);
}
