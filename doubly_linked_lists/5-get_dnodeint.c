#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: liste
 * @index: no de node commencant par 0
 *
 * Return: pointer to the node of index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
