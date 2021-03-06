#include "lists.h"

/**
 * add_dnodeint - Adds node to head of doubly linked list
 * @head: Adress of head pointer to list
 * @n: Value of new node
 * Return: Pointer to new node
 */
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
