#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: Pointer to linked list
 */
void		free_list(list_t *head)
{
	list_t	*p;

	while (head)
	{
		p = head->next;
		if (head->str)
			free(head->str);
		free(head);
		head = p;
	}
}
