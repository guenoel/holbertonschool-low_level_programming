#include "main.h"
/**
 * flip_bits - function
 * @n: second number
 * @m: first number
 *
 * Return: number of bits that are differents
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j;

	for (j = 0; !(n == 0 && m == 0); n = n >> 1, m = m >> 1)
	{
		if ((n & 1) != (m & 1))
			j++;
	}
	return (j);
}
