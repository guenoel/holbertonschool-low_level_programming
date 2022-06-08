#include <stdio.h>
/**
 * main - fonction principale
 *
 * exercice sur les conditions
 * Return: retourne un zero
 */
int main(void)
{
	int c;
	int d;
	int e;
	char n;

	c = '\n';
	d = ',';
	e = ' ';
	for (n = 48; n < 58; n++)
	if (n != 57)
	{
	putchar(n);
	putchar(d);
	putchar(e);
	}
	else
	{
	putchar(n);
	}
	return (0);
}
