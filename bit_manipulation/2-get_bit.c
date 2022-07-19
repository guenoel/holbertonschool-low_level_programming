#include "main.h"
/**
 * get_bit - function
 * @n: decimal number
 * @index: no de position du bit a imprimer
 *
 * Return: le bit selectionné
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
