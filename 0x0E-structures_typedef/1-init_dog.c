#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - the function name
 * @d: the struct name
 * @name: this would be the name of the dog
 * @age: a float of a number that represents the age of the dog
 * @owner: this would be the name of the owner of the sun
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
