#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
char *str_check(char *s);
char *sep_check(char *s);

/**
 * print_strings - prints strings followed by a newline
 * @separator: string to be printed between string arguments
 * @n: number of string arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;

	if (n == 0)
	{
		puts("");
		return;
	}
	va_start(strings, n);
	for (i = 0; i + 1 < n; i++)
	{
		printf("%s%s", str_check(va_arg(strings, char *)),
		       sep_check((char *)separator));
	}
	printf("%s\n", str_check(va_arg(strings, char *)));
	va_end(strings);
}

/**
 * str_check - checks for a NULL string
 * @s: string input
 * Return: pointer to string or to new string (nil)
 */
char *str_check(char *s)
{
	char *nilstr = "(nil)";

	if (!s)
		return (nilstr);
	return (s);
}

/**
 * sep_check - checks for a NULL separator string
 * @s: string input
 * Return: pointer to string or to empty string
 */
char *sep_check(char *s)
{
	char *empty = "";

	if (!s)
		return (empty);
	return (s);
}
