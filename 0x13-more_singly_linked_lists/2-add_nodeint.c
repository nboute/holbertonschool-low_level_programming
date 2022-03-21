#include "lists.h"

/**
 * add_nodeint - Adds a node to head of a linked list
 * @head: Address of pointer to a linked list
 * @n: Value of n for new node
 * Return: Pointer to new node, or NULL if error
 */
listint_t	*add_nodeint(listint_t **head, const int n)
{
	listint_t	*node;

	if (!head)
		return (NULL);
	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
