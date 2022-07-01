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
 * 
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
