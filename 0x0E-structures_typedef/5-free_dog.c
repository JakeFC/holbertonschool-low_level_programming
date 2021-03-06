#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees struct dogs/dog_t's
 * @d: input dog_t
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
