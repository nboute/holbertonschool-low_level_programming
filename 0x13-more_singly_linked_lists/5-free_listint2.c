#include "lists.h"

/**
 * free_listint2 - Frees linked list and sets its head to NULL
 * @head: Address of pointer to head of linked list
 */
void		free_listint2(listint_t **head)
{
	listint_t	*tmp, *ptr;

	if (!*head)
		return;
	ptr = *head;
	while (ptr)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
	*head = NULL;
}
