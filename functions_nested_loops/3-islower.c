#include "main.h"
/**
 * print_alphabet - recréer la fonction islower
 *
 * exercice sur les fonctions et les boucles
 * recréer la fonction islower (est-ce une minuscule)
 * Return: retourne un 0 ou un 1 si min ou maj
 */
int _islower(int c)
{
	int c;

	if ((c >= 97) && (c <= 122))
	{
	_putchar('1');
	else
	_putchar('0');
	}
	_putchar(10);
	return (0);
}
