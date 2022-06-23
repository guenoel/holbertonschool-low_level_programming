#include "main.h"
#include <stdio.h>

/**
 * _sqrt_prod - production de carrés de int
 * @a: int a multiplier par lui meme
 * @n: valeur a comparer
 *
 * Return: la racine carré de n
 */

int sqrt_prod(int n, int a)
{
	if (n == a * a)
		return (a);
	if (n < a * a)
		return (-1);
	return (sqrt_prod(n, a + 1));
}
/**
 * _sqrt_recursion - recursion
 * @n: chiffre dont il faut trouver la racine carrée
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_prod(n, 0));
}
