#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name
 * @f: function to use for printing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
