#include <stdio.h>
/**
 * _strlen - longueur
 * @s: pointer de char
 *
 * Return: numbers of elements in array
 */

int _strlen(char *s)
{
	int l;
	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
