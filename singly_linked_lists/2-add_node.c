#include "lists.h"

/**
 * add_node - function
 * @head: list
 * @str: string
 *
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;

	list_t *node = malloc(sizeof(list_t));
	if (!(node))
		return (NULL);
	node->str = strdup(str);
	if (!(node->str))
	{
		free (node);
		return (NULL);
	}
	for (i = 0; node->str[i] != '\0'; i++)
		;
	node->len = i;
	node->next = *head;
	*head = node;
	return (node);
}
