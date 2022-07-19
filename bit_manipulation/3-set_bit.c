#include "main.h"
/**
 * set_bit - function
 * @n: decimal number
 * @index: no de position du bit a imprimer
 *
 * Return: le bit selectionné
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int i = 1;

	if (index > (sizeof(n) * 8))
		return (-1);
	*n = *n | (i << index);
	return (1);
}
