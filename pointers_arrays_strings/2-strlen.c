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
	int a;
	int b;

	a = sizeof(s);
	b = sizeof(char);
	l =  (a / b);
	return (l);
}
