#include <stdio.h>
#include "main.h"
/**
 * print_rev - print
 * @s: pointer de char
 *
 * Return: numbers of elements in array
 */

void print_rev(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
