#include <stdio.h>
#include "main.h"

/**
 * *rot13 - rot13 substitution
 * @ptr: pointeur vers l'array de char str
 *
 * Return: valeur du pointeur ptr (valeur de str)
 */
char *rot13(char *ptr)
{
	int a, b, i, j, k, l, m;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		j = 'A';
		k = 'M';
		l = 'a';
		m = 'm';
		b = 1;
		a = 0;
		while (a < 2)
			if ((ptr[i] >= j && ptr[i] <= k) || (ptr[i] >= l && ptr[i] <= m))
			{
				ptr[i] = ptr[i] + (b * 13);
			}
		j = j + 13;
		k = k + 13;
		l = l + 13;
		m = m + 13;
		b = (-1);
		a++;
	}
	return (ptr);
}
