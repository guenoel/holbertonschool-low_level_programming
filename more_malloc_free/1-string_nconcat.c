#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - fonction
 * @s1: variable
 * @s2: variable
 * @n: variable
 *
 * Return: 0 si tout va bien
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, a, b;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = strlen(s1);
	b = strlen(s2);
	if (n > b)
		n = b;
	c = malloc(a + n);
	if (c == NULL)
		return(NULL);
	for (i = 0; i < a; i++)
		c[i] = s1[i];
	for (j = 0; j < n; i++, j++)
		c[i] = s2[j];
	c[i] = '\0';
	return (c);
	free(c);
}
