#include "main.h"
/**
 * print_diagonal - afficher les espaces
 * @n: nombres de tirets pour un chiffre positif
 *
 * exercice sur les fonctions et les boucles
 * recréer la fonction islower (est-ce une minuscule)
 * Return: retourne un 0 ou un 1 si min ou maj
 */

void print_diagonal(int n)
{
	int m;
	int l;
if (n <= 0)
	_putchar('\n');
else
{
	for (l = 0; l < n; l++)
	{
		for (m = 0; m <= l; m++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
}
