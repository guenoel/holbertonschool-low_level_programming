#include <stdio.h>
#include <stdlib.h>
/**
 * _count - compteur
 *@ptr: pointeur du str a compter
 *
 * Return: le nombres de caractères y compris le \0 de fin
 */
int _count(char *ptr)
{
	unsigned int i;

	if (ptr == NULL)
		return (0);
	for (i = 0; ptr[i] != '\0'; i++)
		;
	i++;
	return (i);
}
/**
 * str_concat - fonction
 * @s1: variable
 * @s2: variable
 *
 * Return: 0 si tout va bien
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, asize;
	char *a;

	i = _count(s1);
	j = _count(s2);
	asize = (i + j);

	if (asize == 0)
		return (NULL);
	a = malloc((asize - 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		a[k] = s1[k];
	if (k >= 1)
	k--;
	for (l = 0; k < asize; k++, l++)
		a[k] = s2[l];
	return (a);
}
