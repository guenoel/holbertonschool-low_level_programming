#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatener un string a la suite d un string
 * @str: un string
 * @dest: string destination
 * @src: string source
 *
 * Return: le string concaténé
 */

int _count(char *str)
{
	int c;
	for (c = 0; str[c] != '\0'; c++);
	return (c);
}

char *_strcat(char *dest, char *src)
{
	int a, b, i, j;

	a = _count(src);
	b = _count(dest);
	for (i = b, j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];/* variable dest interne au for seul?*/
	}
		dest[a + b + 1] = '\0';/*du coup dest ici n'a pas changé?*/
	return (dest);
}
