#include "lists.h"

/**
 * sum_listint - function
 * @head: liste
 *
 * Return: somme de n de tous les nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
