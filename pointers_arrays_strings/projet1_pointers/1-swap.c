#include <stdio.h>
/**
 * swap_int - inverser la valeur dans une variable
 * @a: pointer de int
 * @b: pointer de int
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
