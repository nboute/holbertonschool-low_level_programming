#include "lists.h"

/**
 * get_dnodeint_at_index - Get pointer to node at position @index
 * @head: Pointer to list
 * @index: Index of node to get
 * Return: Pointer to found node
 */
dlistint_t	*get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index)
	{
		head = head->next;
		index--;
	}
	if (index)
		return (NULL);
	return (head);
}
