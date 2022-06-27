#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - fonction
 * @size: taille
 * @c: caractere
 *
 * Return: 0 si tout va bien
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *a;

	for (j = 0; str[j] != '\0';j++)
		;
	if (j == 0)
		return (NULL);
	a = malloc(j * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		a[i] = str[i];
	return (a);
}
