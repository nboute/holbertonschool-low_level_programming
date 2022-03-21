#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Address of pointer to linked list
 * Return: Pointer to head of reversed list
 */
listint_t	*reverse_listint(listint_t **head)
{
	listint_t	*ptr, *tmp;

	if (!head || !*head)
		return (NULL);
	if (!(*head)->next)
		return (*head);
	tmp = NULL;
	ptr = *head;
	while (ptr && ptr->next)
	{
		if (ptr->next)
			*head = ptr->next;
		ptr->next = tmp;
		tmp = ptr;
		ptr = *head;
	}
	(*head)->next = tmp;
	return (*head);
}
