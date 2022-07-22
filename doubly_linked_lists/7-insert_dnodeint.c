#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @head: liste
 * @idx: no de position ou la node sera ajoutee
 * @n: Number to add in the new node
 *
 * Return: pointer to the node of index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, j;
	dlistint_t *node;
	dlistint_t *cnt;
	dlistint_t *tmp;
	dlistint_t *tmp2;
	dlistint_t *start;

	if (head == NULL)
		return (NULL);

	if ((*head) != NULL) /* Si le pointeur existe...*/
	{
	cnt = *head; /*...je compte le nombre de node*/
	for (i = 0; cnt->next != NULL; i++)
		cnt = cnt->next;
	}
	/* Si il y a pas de pointeur i = 0 donc ca va dans le "else" */
	if (i <= idx) /*Si le nombre de node est plus petit ou egal au no d index*/
		return (NULL);

	node = malloc(sizeof(dlistint_t)); /* creation de la nouvelle node*/
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (idx != 0 && *head) /*si l index est plus que 0 et que le pointer existe*/
	{
		if ((*head) != NULL) /* pourquoi on vérifie encore ici ??? */
		{
			start = *head; /* sauvegarde du pointeur de la 1ere node */
			for (j = 0; j < (idx - 1); j++)
			{
				if ((*head)->next == NULL)
					return (NULL);
				*head = (*head)->next;
			}
			tmp2 = *head; /*head = celui d avant*/
			tmp = (*head)->next;
			(*head)->next = node;
			*head = (*head)->next;

			(*head)->prev = tmp2; /*head = celui ajouté*/
			(*head)->next = tmp;
			tmp = (*head);
			if (tmp != NULL) /*si head est pas placé a la fin*/
			{
				*head = (*head)->next;
				(*head)->prev = tmp; /*head = celui d'après*/
			}
			*head = start;
		}
	}
	else
	{
		*head = add_dnodeint(head, n); /*idx = 0 c'est au debut*/
	}
	return (*head);
}
