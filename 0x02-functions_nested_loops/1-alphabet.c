#include <stdio.h>

/**
 * main - prints the alphabet
 * Return: 0
 */
void print_alphabet(void);

print_alphabet(void);
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
