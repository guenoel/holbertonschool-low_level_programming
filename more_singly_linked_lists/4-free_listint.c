#include "lists.h"

/**
 * free_listint - function
 * @head: la liste a liberer
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_listint(head->next);
	free(head);
}
