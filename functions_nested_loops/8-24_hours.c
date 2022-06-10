#include "main.h"
/**
 * jack_bauer - truc
 *
 * exercice sur les fonctions et les boucles
 * recréer la fonction truc
 * Return: retourne des trucs
 */

void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	while (h <= 23)
	{

		m = 0;
		while (m <= 59)
		{
		_putchar(h / 10 + '0');
		_putchar(h % 10 + '0');
		_putchar(58);
		_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
		_putchar(10);
		m++;
		}
		h++;
	}
}
