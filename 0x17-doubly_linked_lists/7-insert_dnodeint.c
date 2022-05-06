#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts node in doubly linked list
 * @h: Adress of pointer to head of list
 * @idx: Position to insert new node at
 * @n: Value of new node
 * Return: Pointer to new node
 */
dlistint_t	*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t		*new, *ptr;
	unsigned int	i;

	if (!h)
		return (NULL);
	if (!*h)
		return (add_dnodeint_end(h, n));
	if (!idx)
		return (add_dnodeint(h, n));
	ptr = *h;
	for (i = 0; i + 1 < idx; i++)
	{
		if (!ptr)
			return (NULL);
		ptr = ptr->next;
	}
	new = (dlistint_t *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = ptr;
	new->next = ptr->next;
	if (new->next)
		new->next->prev = new;
	ptr->next = new;
	return (new);
}
