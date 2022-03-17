#include "lists.h"

/**
 * print_list - Prints content of a linked list
 * @h: Pointer to linked list
 * Return: Size of linked list
 */
size_t		print_list(const list_t *h)
{
	size_t	len;

	len = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}
