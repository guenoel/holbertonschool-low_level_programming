#include "main.h"
/**
 * print_square - afficher des carrés
 * @size: taile du carre
 *
 * exercice sur les fonctions et les boucles
 * recréer la fonction islower (est-ce une minuscule)
 * Return: retourne un 0 ou un 1 si min ou maj
 */

void print_square(int size)
{
	int m;
	int l;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (l = 0; l < size; l++)
		{
			for (m = 0; m < l; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
