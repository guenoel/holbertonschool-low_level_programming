#include "lists.h"

/**
 * pop_listint - function
 * @head: liste
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;

	if (head == NULL)
		return (-1);
/*	if (head->n == NULL)
		return (0);*/

	*head = (*head)->next;
	free(tmp);
	return ((*head)->n);
}
