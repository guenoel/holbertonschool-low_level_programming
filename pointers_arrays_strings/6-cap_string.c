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
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z' && ptr[i - 1] == ' ')
		ptr[i] = ptr[i] - 32;
	}
	return (ptr);
}
