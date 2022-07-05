#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - Function
 *
 * @separator: au moins une variable obligatoire
 * @n: variable
 *
 * Return: rien
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list argp;

	va_start(argp, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argp, int));
		if (separator != NULL)
		{
			if (i < (n - 1))
				printf("%s", separator);
		}
	}
	va_end(argp);
	printf("\n");
}
