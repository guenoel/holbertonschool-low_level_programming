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
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if ((ptr[i] >= 'a' && ptr[i] <= 'm') || (ptr[i] >= 'A' && ptr[i] <= 'M'))
			ptr[i] = ptr[i] + 13;
		else if ((ptr[i] >= 'n' && ptr[i] <= 'z') || (ptr[i] >= 'N' && ptr[i] <= 'Z'))
			ptr[i] = ptr[i] - 13;
	}
	return (ptr);
}
