#include "lists.h"

/**
 * add_node_end - function
 * @head: list
 * @str: string
 *
 * Return: pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *tmp = *head;

	list_t *node = malloc(sizeof(list_t));

	if (!(node))
		return (NULL);
	node->str = strdup(str);
	if (!(node->str))
	{
		free(node);
		return (NULL);
	}
	for (i = 0; node->str[i] != '\0'; i++)
		;
	node->len = i;

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
