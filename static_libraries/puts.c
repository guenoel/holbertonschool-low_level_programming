#include <stdio.h>
#include "main.h"
#include "_putchar.c"
/**
 * _puts - print
 * @str: pointer de char
 *
 * Return: numbers of elements in array
 */

void _puts(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
