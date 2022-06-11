#include <stdio.h>
/**
 * main - fonction principale
 *
 * exercice sur les conditions
 * Return: retourne un zero
 */
int main(void)
{
	int d;
	int u;

	for (d = 0; d <= 9; d++)
	{
		for (u = 0; u <= 9; u++)
		{
			if (u == d)
				;
			else if (d > u)
				;
			else
			{
			putchar(d + '0');
			putchar(u + '0');
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
