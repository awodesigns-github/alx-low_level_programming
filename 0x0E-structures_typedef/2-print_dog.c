#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the dog struct
 *
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	if (d->name == NULL)
	{
	free(d);
	printf("Name: (nil)\n");
	}
	if (d->owner == NULL)
	{
	free(d);
	printf("Owner: (nil)\n");
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
