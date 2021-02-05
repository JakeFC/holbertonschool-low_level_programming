#include <stdlib.h>
#include <time.h>

/**
 *main- prints whether the int is positive
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("is negative\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
	return (0);
}
