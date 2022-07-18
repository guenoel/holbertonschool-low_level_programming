#include "main.h"
#include <string.h>
/**
 * binary_to_uint - function
 * @b: binary number
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j, k, bit, base, exp;
	unsigned int c = 0;

	base = 2;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		;
	i--;
	k = i;
	for (j = 0; i >= 0; k--, j++, i--)
	{
		exp = 1;
		k = i;
		while (k != 0)
		{
			exp *= base;
			--k;
		}
		if (b[j] < 48 || b[j] > 49)
			return (0);
		bit = b[j] - 48;
		c += (exp * bit);
	}	 
	return (c);
}
