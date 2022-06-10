#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - truc
 * @n: variable du nombre a afficher
 *
 * exercice sur les fonctions et les boucles
 * recréer la fonction truc
 * Return: retourne des trucs
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n != 98)
		{
		printf("%d, ", n);
		n--;
		}
	}
	else
	{
		while (n != 98)
		{
		printf("%d, ", n);
		n++;
		}
	}
	printf("%d\n", n);
}
