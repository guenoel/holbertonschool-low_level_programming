#include "main.h"
/**
 * more_numbers - afficher les chiffres
 *
 * exercice sur les fonctions et les boucles
 * recréer la fonction islower (est-ce une minuscule)
 * Return: retourne un 0 ou un 1 si min ou maj
 */

void more_numbers(void)
{
	int i;
	int d;
	int u;

	for (i = 0; i <= 9 ; i++)
	{
		for (d = 0; d <= 1; d++)
		{
			for (u = 0; u <= 9; u++)
			{
				if (d == 1 && u >= 5)
					;
				else
				{
					if (d > 0)
					{
						_putchar(d + '0');
					}
					_putchar(u + '0');
				}
			}
		}
		_putchar('\n');
	}
}
