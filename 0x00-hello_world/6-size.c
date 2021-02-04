#include <stdio.h>

/**
 *main - prints the sizes of input types
 *Return:0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s).\n", (unsigned long)sizeof(c));
	printf("Size of an int: %d byte(s).\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %d byte(s).\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %d byte(s).\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %d byte(s).\n", (unsigned long)sizeof(f));

	return (0);
}
