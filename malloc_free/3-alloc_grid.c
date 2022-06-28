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
	int i, j, asize;
	int **p;

	if (width < 1 || height < 1)
		return (NULL);
	asize = width * height;
	p = malloc(asize * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
