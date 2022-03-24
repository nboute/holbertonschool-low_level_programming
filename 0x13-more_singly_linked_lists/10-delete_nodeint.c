#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at given index in linked list
 * @head: Address of pointer to linked list
 * @index: Index of node to remove
 * Return: 1 if it succeeded, -1 if it failed
 */
int			delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t	*ptr, *tmp;

	if (!head || !*head)
		return (-1);
	ptr = *head;
	if (!index)
	{
		*head = (*head)->next;
		free(ptr);
	}
	else
	{
		while (ptr && index)
		{
			tmp = ptr;
			ptr = ptr->next;
			index--;
		}
		if (!index && ptr)
		{
			tmp->next = ptr->next;
			free(ptr);
		}
		else
			return (-1);
	}
	return (1);
}
