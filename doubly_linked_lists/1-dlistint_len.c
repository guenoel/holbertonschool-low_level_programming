#include "lists.h"

/**
 * dlistint_len - function
 * @h: list
 *
 * Return: Number of elements printed
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
