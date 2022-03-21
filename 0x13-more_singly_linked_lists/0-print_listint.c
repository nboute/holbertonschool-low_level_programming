#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints content of a linked list struct listint_s
 * @h: Pointer to linked list
 * Return: Size of list
 */
size_t	print_listint(const listint_t *h)
{
	size_t	count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
