#include "lists.h"

/**
 * free_listint - Frees linked list
 * @head: pointer to linked list
 */
void		free_listint(listint_t *head)
{
	listint_t	*tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
