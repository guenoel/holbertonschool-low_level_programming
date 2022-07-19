#include "main.h"
/**
 * print_binary - function
 * @n: decimal number
 *
 * Return: nothing!
 */

void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
		putchar(n + '0');
	else
	{
	print_binary(n >> 1);
	putchar((n & 1) + '0');
	}
}
