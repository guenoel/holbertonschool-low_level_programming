#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: liste
 * @index: no de node commencant par 0
 *
 * Return: pointer to the node of index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	head = head->next;
	return (head);
}
