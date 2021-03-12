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
		return;
	va_start(nums, n);
	for (i = 0; i < n - 1; i++)
		if (separator && separator[0])
			printf("%d%s", va_arg(nums, int), separator);
		else
			printf("%d", va_arg(nums, int));
	printf("%d\n", va_arg(nums, int));
}
