#include "lists.h"

/**
 * listint_len - function
 * @h: list
 *
 * Return: Number of elements printed
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
