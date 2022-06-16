#include <stdio.h>
#include "main.h"
/**
 * print_array - print
 * @n: le nombre d elements dans le array
 * @a: le array
 *
 * Return: rien
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i == n)
			;
		else
		{
		printf(",");
		printf(" ");
		}
	}
	printf("\n");
}
