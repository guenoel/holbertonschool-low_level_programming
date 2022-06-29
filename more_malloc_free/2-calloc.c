#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - fonction
 * @nmemb: variable
 * @size: variable
 *
 * Return: 0 si tout va bien
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		c[i] = 0;
	return (c);
}
