#include "lists.h"
#include <stdio.h>

/**
 * get_distance - Computes distance between two node of a linked list
 * @start: Pointer to start of list
 * @end: Pointer to end of list
 * Return: Distance between nodes
 */
size_t	get_distance(const listint_t *start, const listint_t *end)
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
 * print_listint_safe - Prints content of list, with failsafe for looped lists
 * @head: Pointer to head of linked list
 * Return: Size of linked list
 */
size_t	print_listint_safe(const listint_t *head)
{
	size_t			cur_len = 0, last_len = 0;
	const listint_t	*ptr;

	ptr = head;
	if (!ptr)
		return (98);
	while (ptr)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
		last_len = cur_len;
		cur_len = get_distance(head, ptr);
		if (last_len >= cur_len)
		{
			printf("-> [%p] %d\n", (void *)ptr, ptr->n);
			return (98);
		}
	}
	return (cur_len);
}
