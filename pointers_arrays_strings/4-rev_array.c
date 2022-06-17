#include <stdio.h>
#include "main.h"

/**
 * reverse_array - compare a string a to an other string
 * @a: first string to be compared
 * @n: second string to be compared
 *
 * Return: vrai ou faux ?
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int b;

	for (i = 0, j = (n - 1); i < (n / 2); i++, j--)
	{
		b = a[j];
		a[j] = a[i];
		a[i] = b;
	}
	printf("%c", b);
}
