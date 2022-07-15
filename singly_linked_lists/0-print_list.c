#include "lists.h"

/**
 * print_list - function
 * @h: list
 *
 * Return: Number of bytes printed
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str != NULL)
	printf("[%d] %s\n", h->len, h->str);
		else
	printf("[0] (nil)\n");

	h = h->next;
	}
	return (i);
}
