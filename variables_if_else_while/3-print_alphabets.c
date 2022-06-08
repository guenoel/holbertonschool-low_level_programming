#include <stdio.h>
/**
 * main - fonction principale
 *
 * exercice sur les conditions
 * Return: retourne un zero
 */
int main(void)
{
	char c;
	char n;

	c = '\n';
	for (n = 97; n < 123; n++)
		putchar(n);
	for (n = 65; n < 91; n++)
		putchar(n);
	putchar(c);
	return (0);
}
