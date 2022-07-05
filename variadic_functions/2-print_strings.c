#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - Function
 *
 * @separator: au moins une variable obligatoire
 * @n: variable
 *
 * Return: rien
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list argp;

	va_start(argp, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(argp, char*);
		if (s == NULL)
			printf("(nil)");
		else
		printf("%s", s);
		if (separator != NULL)
		{
			if (i < (n - 1))
				printf("%s", separator);
		}
	}
	va_end(argp);
	printf("\n");
}
