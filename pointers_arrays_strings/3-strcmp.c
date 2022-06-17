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
 * _strncmp - compare a string a to an other string
 * @s1: first string to be compared
 * @src: second string to be compared
 *
 * Return: vrai ou faux ?
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && (s1[i] - s2[i]) == 0; i++)
		;
	return (s1[i] - s2[i]); 
}
