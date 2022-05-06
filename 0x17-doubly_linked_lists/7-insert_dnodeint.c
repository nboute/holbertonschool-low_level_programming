#include "lists.h"


/**
 * my_add_dnodeint - Adds node to head of doubly linked list
 * @head: Adress of head pointer to list
 * @n: Value of new node
 * Return: Pointer to new node
 */
static dlistint_t	*my_add_dnodeint(dlistint_t **head, const int n)
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
	if (!idx)
		return (my_add_dnodeint(h, n));
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
