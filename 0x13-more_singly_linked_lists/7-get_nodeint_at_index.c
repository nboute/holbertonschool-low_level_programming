#include "lists.h"

/**
 * get_nodeint_at_index - Get a specific node
 * @head: Pointer to head of linked list
 * @index: Index of node to get
 * Return: Pointer to wanted node, or NULL if error
 */
listint_t	*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index)
	{
		head = head->next;
		index--;
	}
	return (head);
}
