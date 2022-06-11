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
	int u;

for (c = 0; c <= 9; c++)
	{
	for (d = 0; d <= 9; d++)
	{
		for (u = 0; u <= 9; u++)
		{
			if (u == d || c == u || c == d)
				;
			else if (c > d || d > u)
				;
			else
			{
			putchar(c + '0');
			putchar(d + '0');
			putchar(u + '0');
			if (!(c == 7 && d == 8 && u == 9))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	}
	putchar('\n');
	return (0);
}
