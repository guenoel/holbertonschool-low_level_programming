#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - somme des diagonales du tableau
 * @size: taille du tableau
 * @a: pointer vers le tableau
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, b, c;

	for (i = 0, b = 0, c = 0; i < size; i++)
	{
		b = b + *(a + ((size + 1) * (i + 1)));
		c = c + *(a + ((size - 1) * (i + 1)));
	}
	printf("%d, %d\n", b, c);
}
