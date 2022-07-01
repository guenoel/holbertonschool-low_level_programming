#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - fonction
 * struct dog - struct
 *
 * @d: pointeur
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->Owner == NULL)
		d->Owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
