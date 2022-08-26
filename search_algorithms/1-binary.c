#include "search_algos.h"

/**
 * recur_search - fonction de recherche recursive
 * @array: array
 * @value: value searched
 * @low: lowest element in array
 * @high: highest element in array
 *
 * Return: index of the array where value was finded
 */

int recur_search(int *array, int value, size_t low, size_t high)
{
	size_t pivot, i;

	pivot = low + (high - low) / 2;
	printf("Searching in array: ");
	for (i = low; i < high; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
	if (low >= high)
		return (-1);
	if (array[pivot] == value)
		return (pivot);
	if (array[pivot] > value)
		return (recur_search(array, value, low, pivot - 1));
	return (recur_search(array, value, pivot + 1, high));
}

/**
 * binary_search - recherche comme dans le dico
 * @array: array
 * @size: size of the array
 * @value: value searched
 *
 * Return: index of the array where value was finded
 */

int binary_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);

	index = recur_search(array, value, 0, size - 1);

	return (index);

}
