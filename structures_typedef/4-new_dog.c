#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - fonctiion
 *
 * @name: pointeur
 * @age: age
 * @owner: owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    int i, j;

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    i = strlen(name) + 1;
    j = strlen(owner) + 1;
    dog->name = malloc(sizeof(char) * i);
    if (dog->name == NULL)
    {
        free(dog);
        return (NULL);
    }
    strcpy(dog->name, name);
    dog->age = age;

    dog->owner = malloc(sizeof(char) * j);
    if (dog->owner == NULL)
    {
        free(dog->name);
        free(dog);
        return (NULL);
    }
    strcpy(dog->owner, owner);
    return dog;
}
