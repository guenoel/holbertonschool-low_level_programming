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

	a = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
