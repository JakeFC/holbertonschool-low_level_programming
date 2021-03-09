#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog
 * @d: pointer to a struct dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		char *n = d->name ? d->name : "(nil)";
		char *o = d->owner ? d->owner : "(nil)";

		printf("Name: %s\n", n);
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		printf("Owner: %s\n", o);
	}
}
