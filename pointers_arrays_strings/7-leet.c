#include <stdio.h>
#include "main.h"

/**
 * *leet - change a string into 1337
 * @ptr: pointeur vers l'array de char str
 *
 * Return: valeur du pointeur ptr (valeur de str)
 */
char *leet(char *ptr)
{
	int i, j;
	int a[] = {'A', 'E', 'O', 'T', 'L'};
	int b[] = {'4', '3', '0', '7', '1'};

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
		if (ptr[i] == a[j] || ptr[i] == a[j] + 32)
		ptr[i] = b[j];
		}
	}
	return (ptr);
}
