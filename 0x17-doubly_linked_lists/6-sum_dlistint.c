#include "lists.h"

/**
 * sum_dlistint - Sums content of nodes of a doubly linked list
 * @head: Pointer to list
 * Return: Sum of contents
 */
int		sum_dlistint(dlistint_t *head)
{
	int	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
