#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: argument count
 * @argv: pointer to argument strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	int size, i;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		puts("Error");
		exit(2);
	}
	for (i = 0; i < size - 1; i++)
		printf("%02x ",  ptr[i]);
	printf("%02x\n", ptr[i]);
	return (0);
}
