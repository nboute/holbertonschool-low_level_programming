#include "lists.h"

dlistint_t	*add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t	*new;

	if (!head)
		return (NULL);
	new = (dlistint_t *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	if (*head)
		(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
