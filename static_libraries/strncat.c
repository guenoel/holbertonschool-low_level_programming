#include <stdio.h>
#include "main.h"
/**
 * _count - concatener un string a la suite d un string
 * @str: un string
 *
 * Return: le string concaténé
 */

int _count(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		;
	return (c);
}

/**
 * _strncat - concatener un string a la suite d un string
 * @dest: string destination
 * @src: string source
 * @n: max elements of source to copy to
 *
 * Return: le string concaténé
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b, i, j;

	a = _count(src);
	b = _count(dest);
	for (i = b, j = 0; src[j] != '\0' && j < n; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[a + b + 1] = '\0';
	return (dest);
}
