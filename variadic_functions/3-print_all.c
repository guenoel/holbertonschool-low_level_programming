#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - Function
 *
 * @format: au moins une variable obligatoire
 *
 * Return: rien
 */

void print_all(const char * const format, ...)
{
	unsigned int i, b;
	char *separator;
	va_list argp;

	va_start(argp, format);
	if (format == NULL)
	{
		printf("\n");
		return;
	}
	separator = ", ";
	i = 0;
	b = 0;
	while (format[i] != '\0')
	{
		if (format[i] == NULL)
			printf("(nil)");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(argp, int));
				break;
			case 'i':
				printf("%i", va_arg(argp, int));
				break;
			case 'f':
				printf("%f", va_arg(argp, double));
				break;
			case 's':
				printf("%s", va_arg(argp, char *));
				break;
			default:
				b++;
				break;
		}
		if (format[i + 1] != '\0' && b != 1)
			printf("%s", separator);
		b = 0;
		i++;
	}
	va_end(argp);
	printf("\n");
}
