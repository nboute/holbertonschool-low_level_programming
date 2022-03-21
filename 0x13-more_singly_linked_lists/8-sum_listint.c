#include "lists.h"

/**
 * sum_listint - Computes sum of n between all nodes
 * @head: Pointer to head of linked list
 * Return: Sum of n for all nodes
 */
int	sum_listint(listint_t *head)
{
	int	count;

	count = 0;
	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
