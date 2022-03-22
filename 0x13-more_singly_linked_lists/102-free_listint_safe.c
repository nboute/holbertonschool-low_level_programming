#include "lists.h"
#include <stdio.h>

/**
 * get_distance - Computes distance between two node of a linked list
 * @start: Pointer to start of list
 * @end: Pointer to end of list
 * Return: Distance between nodes
 */
static size_t	get_distance(listint_t *start, listint_t *end)
{
	size_t	count = 0;

	while (start != end)
	{
		start = start->next;
		count++;
	}
	return (count);
}

/**
 * free_listint_safe - Frees linked list with failsafe for looped lists
 * @head: Address of pointer to head of linked list
 * Return: Size of freed list
 */
size_t	free_listint_safe(listint_t **head)
{
	size_t			i = 0, len = 0;
	listint_t		*ptr, *tmp;

	if (!head || !*head)
		return (0);
	ptr = *head;
	while (ptr && get_distance(*head, ptr) == len)
	{
		ptr = ptr->next;
		len++;
	}
	ptr = *head;
	while (i < len)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
		i++;
	}
	*head = NULL;
	return (len);
}
