#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - fonction
 * @min: variable
 * @max: variable
 *
 * Return: 0 si tout va bien
 */

int *array_range(int min, int max)
{
	int a, i, j;
	int *c;

	if (min > max)
		return (NULL);
	a = max - min + 1;
	c = malloc(a * sizeof(int));
	if (c == NULL)
		return (NULL);
	for (i = 0, j = min; j <= max; i++, j++)
		c[i] = j;
	return (c);
}
