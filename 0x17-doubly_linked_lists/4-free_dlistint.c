#include "lists.h"

/**
 * free_dlistint - Frees doubly linked list
 * @head: Pointer to list
 */
void	free_dlistint(dlistint_t *head)
{
	dlistint_t	*tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
