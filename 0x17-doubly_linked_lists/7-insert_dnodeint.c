#include "lists.h"

dlistint_t	*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t	*new, *ptr;
	int			i;

	if (!h)
		return (NULL);
	if (!idx)
		return (add_dnodeint(h, n));
	ptr = *h;
	for (i = 0; i + 1 < idx; i++)
	{
		if (!ptr)
			return (NULL);
	}

}
