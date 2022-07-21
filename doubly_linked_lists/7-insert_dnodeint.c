#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: liste
 * @idx: no de position ou la node sera ajoutee
 * @n: Number to add in the new node
 *
 * Return: pointer to the node of index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node;
	listint_t *tmp;
	listint_t *start;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx != 0)
	{
		start = *head;
		for (i = 0; i < (idx - 1); i++)
		{
			if ((*head)->next == NULL)
				return (*head);
			*head = (*head)->next;
		}
		tmp = (*head)->next;
		(*head)->next = node;
		*head = (*head)->next;
		(*head)->next = tmp;
		*head = start;
	}
	else
	{
		node->next = *head;
		*head = node;
	}
	return (*head);
}
