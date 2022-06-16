#include <stdio.h>
#include "main.h"
/**
 * puts_half - print
 * @str: chaine de caractere - pointeur vers un array
 *
 * Return: rien
 */
void puts_half(char *str)
{
	int l;
	int n;

	l = 0;
	n = 0;
	while (str[l] != '\0')
		l++;
	l = l - 1;
	while (l >= n)
	{
		if (n > (l / 2))
			printf("%c", str[n]);
		n++;
	}
	printf("\n");
}
