#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - the function that prints the dog struct
 * @d: the dog struct to be printed passed as an argument
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
