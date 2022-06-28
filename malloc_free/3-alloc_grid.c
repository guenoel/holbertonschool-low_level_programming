#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - fonction
 * @width: variable
 * @height: variable
 *
 * Return: 0 si tout va bien
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **p;

	if (width < 1 || height < 1)
		return (NULL);
	p = malloc(height * sizeof(*p));
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		p[j] = malloc(sizeof(int) * width);
		if (p == NULL)
		{
			free(p);
			for (k = 0; k <= j; k++)
				free(p[k]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	return (p);
}
