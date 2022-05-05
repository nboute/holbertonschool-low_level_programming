#include "lists.h"

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
