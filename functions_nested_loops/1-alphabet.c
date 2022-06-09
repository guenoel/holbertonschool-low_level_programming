#include "main.h"
/**
 * print_alphabet - fonction affichage d alphabet
 *
 * exercice sur les fonctions et les boucles
 * affiche l'alphabet
 * Return: retourne un zero
 */
int print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar(10);
	return (0);
}
