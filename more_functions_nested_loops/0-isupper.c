#include "main.h"
/**
 * _isupper - recréer la fonction islower
 * @c: variable du caractere a tester
 *
 * exercice sur les fonctions et les boucles
 * recréer la fonction islower (est-ce une minuscule)
 * Return: retourne un 0 ou un 1 si min ou maj
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
