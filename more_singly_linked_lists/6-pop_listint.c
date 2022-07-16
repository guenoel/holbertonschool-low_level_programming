#include "lists.h"

/**
 * pop_listint - function
 * @head: liste
 *
 * Return: value n of first new head node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int i;

	if (head == NULL)
		return (-1);
	if ((*head) == NULL)
		return (0);

	i = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (i);
}
