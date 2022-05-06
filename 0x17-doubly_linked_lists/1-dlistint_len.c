#include "lists.h"

/**
 * dlistint_len - Counts size of doubly linked list
 * @h: Pointer to list
 * Return: Size of list
 */
size_t	dlistint_len(const dlistint_t *h)
{
	size_t	size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
