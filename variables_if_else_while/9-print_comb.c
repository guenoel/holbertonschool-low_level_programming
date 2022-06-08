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
	int n;

	c = '\n';
	for (n = 48; n < 58; n++)
	{
	putchar(n);
	if (n != 57)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar(c);
	return (0);
}
