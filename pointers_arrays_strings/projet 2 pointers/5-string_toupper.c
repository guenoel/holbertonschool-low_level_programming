#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - compare a string a to an other string
 * @ptr: pointeur vers l'array de char str
 *
 * Return: valeur du pointeur ptr (valeur de str)
 */

char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		ptr[i] = ptr[i] - 32;
	}
	return (ptr);
}
