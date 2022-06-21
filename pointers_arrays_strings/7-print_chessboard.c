#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print a table
 * @a: nombre de case par ligne
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
			if (j == 7)
				printf("%c", '\n');
		}
	}
}
