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
 * _strncpy - copy a string a to an other string
 * @dest: string destination
 * @src: string source
 * @n: max elements of source to copy to
 *
 * Return: string copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; j++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
	return (dest);
}
