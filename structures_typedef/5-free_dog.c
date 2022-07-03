#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_dog - fonctiion
 *
 * @d: pointeur
 *
 * Return: pointer to new dog
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
