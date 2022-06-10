#include "main.h"
/**
 * times_table - truc
 *
 * exercice sur les fonctions et les boucles
 * recréer la fonction truc
 * Return: retourne des trucs
 */

void times_table(void)
{
int x;
int y;
int d;
int u;

for (y = 0; y <= 9; y++)
{
	for (x = 0; x <= 9; x++)
	{
		d = ((x * y) / 10);
		u = ((x * y) % 10);
		if (d == 0)
			_putchar(' ');
		else
		{
			_putchar(d + '0');
		}
		_putchar(u + '0');
		if (x != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar(10);
}
}
