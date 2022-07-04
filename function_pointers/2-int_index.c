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
	int i;

	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
