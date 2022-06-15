#include <stdio.h>
#include "main.h"
/**
 * print_string - print
 * @s: pointer de char
 *
 * Return: numbers of elements in array
 */

void rev_string(char *s)
{
	int l;
	int n;
	int m;

	l = 0;
	n = 0;
	while (s[l] != '\0')
		l++;
	l = l - 1;
	while (l >= n)
	{
		m = s[l];
		s[l] = s[n];
		s[n] = m;
		n++;
		l--;
	}
}
