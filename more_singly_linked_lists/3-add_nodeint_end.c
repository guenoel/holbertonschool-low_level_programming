#include "lists.h"

/**
 * add_nodeint_end - function
 * @head: list
 * @str: string
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;

	listint_t *node = malloc(sizeof(listint_t));

	if (!(node))
		return (NULL);
	node->n = n;

	if ((*head) == NULL)
	{
		(*head) = node;
		return (node);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = node;
	return (node);
}
