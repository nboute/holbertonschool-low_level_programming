#include "lists.h"

/**
 * listint_len - Computes size of linked list
 * @h: Pointer to linked list
 * Return: Size of list
 */
size_t		listint_len(const listint_t *h)
{
	size_t	count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
