#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - fonction
 *
 * @array: array
 * @size: pointer
 * @action: pointer to function
 *
 * Return: rien du tout
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	action(array[i]);
}
