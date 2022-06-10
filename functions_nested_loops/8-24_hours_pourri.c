#include "main.h"
/**
 * print_last_digit - truc
 * @c: variable du caractere a tester
 *
 * exercice sur les fonctions et les boucles
 * recréer la fonction truc
 * Return: retourne des trucs
 */

void jack_bauer(void)
{
	int h;

	for (h = 0; h <= 2; h++)
	{
	if (h <= 1)
		{
		int g;

		for (g = 0; g <= 9; g++)
		{	
		int m;

		_putchar(g + '0');
		_putchar(58);
		for (m = 0; m <= 5; m++)
		{
		int n;

		_putchar(m + '0');
		for (n = 0; n <= 9; n++)
		{
		_putchar(n + '0');
		_putchar(10);
		}			}
		}
		}
	else
		{
		int g;

		for (g = 0; g <= 4; g++)
		{	
		int m;

		_putchar(g + '0');
		_putchar(58);
		for (m = 0; m <= 5; m++)
		{
		int n;

		_putchar(m + '0');
		for (n = 0; n <= 9; n++)
		{
		_putchar(n + '0');
		_putchar(10);
		}
		}
		}
		}
	}
}
