#include "search_algos.h"

/**
 * linear_search - recherche basique, un par un depuis le debut
 * @array: array
 * @size: size of the array
 * @value: value searched
 *
 * Return: index of the array where value was finded
 */


int linear_search(int *array, size_t size, int value)
{
	int i;
	int intsize = (int)size;

	if (array == NULL)
		return(-1);
	for (i = 0; i < intsize; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return i;
	}
	return(-1);
}
