#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - this function frees memory allocated for the dog struct
 * @d: the struct dog to the free
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
