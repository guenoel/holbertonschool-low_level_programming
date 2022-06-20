#include <stdio.h>
#include "main.h"

/**
 * *cap_string - compare a string a to an other string
 * @ptr: pointeur vers l'array de char str
 *
 * Return: valeur du pointeur ptr (valeur de str)
 */
char *cap_string(char *ptr)
{
	int i, j;
	int a[] = {'.', ' ', '\n', '\t', ',', ';', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (ptr[i] >= 'a' && ptr[i] <= 'z' && (i == 0 || ptr[i - 1] == (a[j])))
				ptr[i] = ptr[i] - 32;
		}
	}
	return (ptr);
}
