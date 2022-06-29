#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - fonction
 * @b: variable
 *
 * Return: 0 si tout va bien
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
