#include "main.h"
/**
 * _isdigit - recréer la fonction isdigit
 * @c: variable du caractere a tester
 *
 * exercice sur les fonctions et les boucles
 * recréer la fonction islower (est-ce une minuscule)
 * Return: retourne un 0 ou un 1 si min ou maj
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
