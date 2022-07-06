#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

typedef struct hello
{
	char *delim;
	void type;
} types;
/**
 * print_all - Function
 *
 * @format: au moins une variable obligatoire
 *
 * Return: rien
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j, n;
	char *s;
	char *g, *h, *separator;
	 =
	{
		{"c", char},
		{"i", int},
		{"f", float},
		{"s", char *}
	};

	va_list argp;

	va_start(argp, format);

	separator = ", ";

	i = 0;
	n = 0;
		while (format[j] != '\0')
		{
			j = 0;
			while (j < 4)
			{
			
				if (strcmp(format, forok[j][0]) == 0)
				{
					s = va_arg(argp, forok[j][1]);
						printf("%s", s);
					if (i < (n - 1))
						printf("%s", separator);
				}
				j++;
			}
			i++;
		}
	va_end(argp);
	printf("\n");
}
