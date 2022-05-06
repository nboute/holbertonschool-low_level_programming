#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - Deletes node at given index
 * @head: Address of pointer to head of list
 * @index: Index of node to delete
 * Return: 1 on success, else -1
 */
int	delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t		*ptr;
	unsigned int	i, len;

	if (!head || !*head)
		return (-1);
	for (ptr = *head, len = 0; ptr; len++)
		ptr = ptr->next;
	if (index > len)
		return (-1);
	ptr = *head;
	for (i = 0; i < index; i++)
		ptr = ptr->next;
	if (!index)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		ptr->prev->next = ptr->next;
		if (ptr->next)
			ptr->next->prev = ptr->prev;
	}
	free(ptr);
	return (1);
}
