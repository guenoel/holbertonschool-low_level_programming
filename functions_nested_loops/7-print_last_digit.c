#include "main.h"
/**
 * print_last_digit - truc
 * @c: variable du caractere a tester
 *
 * exercice sur les fonctions et les boucles
 * recréer la fonction truc
 * Return: retourne des trucs
 */

int print_last_digit(int c)
{
	int d;

	c = c * ((c > 0) - (c < 0));
	d = c % 10;

	_putchar(d + '0');
	return (d);
}
