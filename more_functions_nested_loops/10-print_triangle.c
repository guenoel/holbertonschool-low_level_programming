#include "main.h"
/**
 * print_triangle - afficher des triangles
 * @size: taile du triangle
 *
 * exercice sur les fonctions et les boucles
 * Return: retourne un 0 ou un 1 si min ou maj
 */

void print_triangle(int size)
{
	int m;
	int n;
	int l;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (l = 0; l < size; l++)
		{
			for (m = (size - l); m > 1; m--)
			{
				_putchar(' ');
			}
			for (n = (size - l); n <= size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
