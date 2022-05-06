#include "lists.h"

/**
 * add_dnodeint_end - Adds node to tail of doubly linked list
 * @head: Adress of head pointer to list
 * @n: Content of new node
 * Return: Pointer to new node
 */
dlistint_t	*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t	*new, *ptr;

	if (!head)
		return (NULL);
	new = (dlistint_t *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	new->prev = ptr;
	ptr->next = new;
	return (new);
}
