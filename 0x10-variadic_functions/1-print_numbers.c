#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a newline
 * @separator: string printed between characters
 * @n: number of ints passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	if (n == 0)
	{
		putchar('\n');
		return;
	}
	va_start(nums, n);
	for (i = 0; i + 1 < n; i++)
		if (separator)
			printf("%d%s", va_arg(nums, int), separator);
		else
			printf("%d", va_arg(nums, int));
	printf("%d\n", va_arg(nums, int));
	va_end(nums);
}
