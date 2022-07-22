#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @head: liste
 * @idx: no de position ou la node sera ajoutee
 * @n: Number to add in the new node
 *
 * Return: pointer to the node of index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *node;
	dlistint_t *tmp;
	dlistint_t *tmp2;
	dlistint_t *start;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
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
			tmp2 = *head;
			tmp = (*head)->next;
			(*head)->next = node;
			*head = (*head)->next;

		(*head)->prev = tmp2;
		(*head)->next = tmp;
		tmp = (*head);
		if ((*head)->next != NULL)
		{
		*head = (*head)->next;
		(*head)->prev = tmp;
		}
		*head = start;
	}
	else
	{
		node->next = *head;
		node->prev = NULL;
		*head = node;
	}
	return (*head);
}
