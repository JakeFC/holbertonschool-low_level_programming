#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * p_char - prints a char
 * @x: argument list
 */
void p_char(va_list x)
{
	printf("%c", va_arg(x, int));
}
/**
 * p_int - prints an int
 * @x: argument list
 */
void p_int(va_list x)
{
	printf("%d", va_arg(x, int));
}
/**
 * p_float - prints a float
 * @x: argument list
 */
void p_float(va_list x)
{
	printf("%f", va_arg(x, double));
}
/**
 * p_str - prints a string
 * @x: argument list
 */
void p_str(va_list x)
{
	char *s = va_arg(x, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - prints anything
 * @format: list of abbreviated argument types
 */
void print_all(const char * const format, ...)
{
	int args_i = 0, ops_i;
	op_t ops[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_str},
		{NULL, NULL}
	};
	va_list args;
	char *sep = "";

	va_start(args, format);
	while (format && format[args_i])
	{
		ops_i = 0;
		while (ops[ops_i].letter)
		{
			if (ops[ops_i].letter[0] == format[args_i])
			{
				printf("%s", sep);
				ops[ops_i].f(args);
				sep = ", ";
			}
			ops_i++;
		}
		args_i++;
	}
	puts("");
	va_end(args);
}
