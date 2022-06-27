#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - fonction
 * @str: taille
 *
 * Return: 0 si tout va bien
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *a;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		;
	a = malloc((j + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < (j + 1); i++)
		a[i] = str[i];
	return (a);
}
