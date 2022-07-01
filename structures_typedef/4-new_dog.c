#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - fonction
 *
 * @name: pointeur
 * @age: age
 * @owner: owner
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	dog_t *dog1;
	dog = malloc(sizeof(dog_t));
	dog-> name = name;
	dog-> age = age;
	dog-> owner = owner;

	dog1 = &(*dog);
	dog = malloc(sizeof(dog_t));
	dog = dog1;
	return (dog);
}
