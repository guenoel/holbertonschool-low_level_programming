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
		if (n != 101 && n != 113)
		{
		putchar(n);
		}
		else
		{
		}
	putchar(c);
	return (0);
}
