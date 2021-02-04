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
	long long int ll;
	float f;

	printf("Size of a char: %lli byte(s)\n", (long long int)sizeof(c));
	printf("Size of an int: %lli byte(s)\n", (long long int)sizeof(i));
	printf("Size of a long int: %lli byte(s)\n", (long long int)sizeof(li));
	printf("Size of a long long int: %lli byte(s)\n", (long long int)sizeof(ll));
	printf("Size of a float: %lli byte(s)\n", (long long int)sizeof(f));

	return (0);
}
