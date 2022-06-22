#include "main.h"
#include <stdio.h>

/**
 * factorial - recursion
 * @n: le facteur
 *
 * Return: nothing
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
	return (1);
return (n * factorial(n - 1));
}
