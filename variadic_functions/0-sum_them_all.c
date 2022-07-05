#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Function
 *
 * @n: au moins une variable obligatoire
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list argp;

	va_start(argp, n);

	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(argp, int);
	va_end(argp);
	return (sum);
}
