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
	dlistint_t	*ptr, *tmp;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		ptr = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}
	ptr = *head;
	while (index - 1)
	{
		if (!ptr->next)
			return (-1);
		index--;
		ptr = ptr->next;
	}

	tmp = ptr->next;
	if (!tmp)
		return (-1);
	ptr->next = tmp->next;
	if (ptr->next)
		ptr->next->prev = NULL;
	free(tmp);
	return (1);
}
