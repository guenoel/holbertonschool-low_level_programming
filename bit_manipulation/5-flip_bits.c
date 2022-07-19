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
	int i, j;

	j = 0;
	for (i = 0; (n >> i) != 0 || (m >> i) != 0; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			j++;
	}
	return (j);
}
