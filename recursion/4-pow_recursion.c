#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - recursion
 * @x: x
 * @y: y
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
if (x == 1 || y == 0)
	return (1);
if (x == 0)
	return (0);
return (x * _pow_recursion(x, (y - 1)));
}
