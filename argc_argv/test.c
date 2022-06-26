#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- fonction principale
 * @argc: nb arguments
 * @argv: array d arguments
 *
 * Return: 0 si tout va bien
 */


int main(void)
{
	char a;

	a = '9';
	printf("contenu de a: %d\n", a);
	printf("numeric?: %d\n", isdigit(a));
	return (0);
}
