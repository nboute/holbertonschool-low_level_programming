#include "lists.h"

dlistint_t	*get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index)
	{
		head = head->next;
		index--;
	}
	return (head);
}
