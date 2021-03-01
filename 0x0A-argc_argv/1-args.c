#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: string of arguments passed
 * Return: always 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
