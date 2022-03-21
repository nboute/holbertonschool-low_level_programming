#include "lists.h"

/**
 * pop_listint - Deletes first node of linked list
 * @head: Address of pointer to head of linked list
 * Return: Value of n for the deleted node, or 0 if error
 */
int			pop_listint(listint_t **head)
{
	listint_t	*tmp;
	int			ret;

	if (!head || !*head)
		return (0);
	tmp = *head;
	*head = tmp->next;
	ret = tmp->n;
	free(tmp);
	return (ret);
}
