#include "lists.h"

/**
 * free_list - function
 */

void free_list(list_t *head)
{
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
