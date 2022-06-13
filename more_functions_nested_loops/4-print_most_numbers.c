#include "main.h"
/**
 * print_most_numbers - afficher les chiffres
 *
 * exercice sur les fonctions et les boucles
 * recréer la fonction islower (est-ce une minuscule)
 * Return: retourne un 0 ou un 1 si min ou maj
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			;
		else
		_putchar(i + '0');
	}
	_putchar('\n');
}
