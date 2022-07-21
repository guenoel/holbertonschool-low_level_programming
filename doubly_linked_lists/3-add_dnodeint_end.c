#include "lists.h"

/**
 * add_dnodeint_end - function
 * @head: list
 * @n: integer
 *
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!(node))
		return (NULL);
	node->n = n;

	if ((*head) == NULL)
	{
		(*head) = node;
		node->prev = NULL;
		node->next = NULL;
		return (node);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	node->prev = tmp;
	tmp->next = node;
	return (node);
}
