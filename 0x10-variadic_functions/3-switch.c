#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints all arguments of given type
 * @format: string of chars representing format of each argument
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *sep = "", *str;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(args, int));
			sep = ", ";
			break;
		case 'i':
			printf("%s%i", sep, va_arg(args, int));
			sep = ", ";
			break;
		case 'f':
			printf("%s%f", sep, va_arg(args, double));
			sep = ", ";
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
			sep = ", ";
			break;
		}
		i++;
	}
	puts("");
	va_end(args);
}
