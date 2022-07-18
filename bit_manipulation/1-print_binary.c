#include "main.h"
/**
 * print_binary - function
 * @n: decimal number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i, m;

	i = 0;
	m = n;
	while (m > 1)
	{
		m /= 2;
		i++;
	}

	for (; i >= 0; i--)
		printf("%ld", (n >> i) & 1);
	printf("\n");
}
