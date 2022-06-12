#include <stdio.h>
/**
 * main - fonction principale
 *
 * exercice sur les conditions
 * Return: retourne un zero
 */
int main(void)
{
	int m;
	int c;
	int d;
	int u;

for (m = 0; m <= 9; m++)
{
for (c = 0; c <= 9; c++)
	{
	for (d = 0; d <= 9; d++)
	{
		for (u = 0; u <= 9; u++)
		{
			if (m == d && c == u )
				;
			else if (m > d || c > u)
				;
			else
			{
			putchar(m + '0');
			putchar(c + '0');
			putchar(' ');
			putchar(d + '0');
			putchar(u + '0');
			if (!(m == 9 && c == 8 && d == 9 && u == 9))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	}
}
	putchar('\n');
	return (0);
}
