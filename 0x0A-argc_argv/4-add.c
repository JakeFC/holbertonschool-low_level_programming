#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * is_number - determines whether a string of characters is a number
 * @s: string input
 * Return: 1 if number, 0 if not
 */

int is_number(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (isdigit(s[i]) == 0)
			return (0);
	}
	return (1);
}

/**
 * main - adds all positive numbers
 * @argc: argument count
 * @argv: string of arguments
 * Return: 0 if possible, 1 if non-digit present
 */
int main(int argc, char **argv)
{
	int i, sum;

	if (argc == 1)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}
	for (i = 1, sum = 0; argv[i] != '\0'; i++)
		if (is_number(argv[i]) == 0)
		{
			puts("Error");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	if (sum > 0)
		printf("%d\n", sum);
	return (0);
}
