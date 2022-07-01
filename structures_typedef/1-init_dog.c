#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * init_dog - fonction
 * struct dog - struct
 *
 * @name: name
 * @age: age
 * @owner: owner
 * @d: pointeur
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	if (name != NULL)
	d->name = name;
	d->age = age;
	if (owner != NULL)
	d->owner = owner;
}
