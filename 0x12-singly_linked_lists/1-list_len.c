#include "lists.h"

/**
 * list_len - Computes length of a linked list
 * @h: Pointer to linked list
 * Return: Size of linked list
 */
size_t		list_len(const list_t *h)
{
	size_t	len;

	len = 0;
	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
