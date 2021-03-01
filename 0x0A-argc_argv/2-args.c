#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints each argument on a newline
 * @argc: argument count
 * @argv: string of arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i;

	(void) argc;
	for (i = 0; argv[i] != '\0'; i++)
		printf("%s\n", argv[i]);
	return (0);
}
