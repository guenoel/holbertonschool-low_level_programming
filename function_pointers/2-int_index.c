#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - fonction
 *
 * @array: array
 * @size: pointer
 * @cmp: pointer to function
 *
 * Return: rien du tout
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (cmp == NULL)
		return (0);
	if (array == NULL)
		return (0);
	if (size <= 0)
		return (-1);
	for (i = 0, j = 0; i < size; i++)
	{
		if (cmp(array[i]))
			j++;
	}
	if (i == 0)
		i = -1;
	return (j);
}