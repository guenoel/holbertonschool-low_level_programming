#include "main.h"
/**
 * binary_to_uint - function
 * @b: binary number
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j, k, bit, exp;
	unsigned int c = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		;
	i--;
	for (j = 0; i >= 0; j++, i--)
	{
		exp = 1;
		k = i;
		while (k != 0)
		{
			exp *= 2;
			--k;
		}
		if (b[j] < 48 || b[j] > 49)
			return (0);
		bit = b[j] - 48;
		c += (exp * bit);
	}
	return (c);
}
