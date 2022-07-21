#include "lists.h"

/**
 * add_nodeint - function
 * @head: list
 * @n: int
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!(node))
		return (NULL);
	node->n = n;

	node->next = *head;
	*head = node;
	return (node);
}
