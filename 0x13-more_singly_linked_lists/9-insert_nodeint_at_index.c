#include "lists.h"

/**
 * insert_nodeint_at_index - Insert new node at given index
 * @head: Address of pointer to linked list
 * @idx: Index to add new node at
 * @n: Value of n for new node
 * Return: Pointer to new node
 */
listint_t	*insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t	*node, *ptr;

	if (!head || (!*head && idx))
		return (NULL);
	node = malloc(sizeof(*node));
	node->n = n;
	if (!node)
		return (NULL);
	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	ptr = *head;
	idx--;
	while (ptr && ptr->next && idx)
	{
		idx--;
		ptr = ptr->next;
	}
	if (!ptr || (!ptr->next && idx))
	{
		free(node);
		return (NULL);
	}
	node->next = ptr->next;
	ptr->next = node;
	return (node);
}
