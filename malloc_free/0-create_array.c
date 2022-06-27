#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - fonction principale
 * @size: taille
 * @c: caractere
 *
 * Return: 0 si tout va bien
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
