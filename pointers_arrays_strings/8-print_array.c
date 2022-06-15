#include <stdio.h>
#include "main.h"
/**
 * puts_half - print
 * @str: chaine de caractere - pointeur vers un array
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
