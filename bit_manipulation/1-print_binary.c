#include "main.h"
/**
 * print_binary - function
 * @n: decimal number
 *
 * Return: nothing!
 */

void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
		printf("0");
	for (i = 0; (n >> i) != 0; i++)
		;
	i--;
	for (; i >= 0; i--)
	{
		_putchar(((n >> i) & 1) + '0');
	}
}
