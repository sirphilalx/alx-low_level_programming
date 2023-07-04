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
	{
		return;
	}

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.5f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
