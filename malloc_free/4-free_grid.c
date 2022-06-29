#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - fonction
 * @height: variable
 * @grid: pointer vers le debut d'une liste de pointers
 *
 * Return: 0 si tout va bien
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
