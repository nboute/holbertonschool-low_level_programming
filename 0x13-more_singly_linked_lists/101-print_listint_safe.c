#include "lists.h"
#include <stdio.h>

/**
 * free_listaddr - Frees list_addr_t linked list
 * @head: Address of pointer to head of linked list
 */
static void		free_listaddr(listaddr_t **head)
{
	listaddr_t	*tmp, *ptr;

	if (!*head)
		return;
	ptr = *head;
	while (ptr)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
	*head = NULL;
}

/**
 * find_node - Finds node with given value
 * @head: Pointer to head of linked list
 * @addr: Value to compare to node's addr parameter
 * Return: Pointer to node with equal value, or NULL if none was found
 */
static listaddr_t	*find_node(listaddr_t *head, void *addr)
{
	while (head)
	{
		if (head->addr == addr)
			return (head);
		head = head->next;
	}
	return (NULL);
}

/**
 * add_nodeaddr_end - Adds node to end of linked list
 * @head: Address of pointer to head of linked list
 * @addr: Value of addr for new node
 * Return: Pointer to new node, of NULL if error
 */
static listaddr_t	*add_nodeaddr_end(listaddr_t **head, void *addr)
{
	listaddr_t	*node, *ptr;

	if (!head)
		return (NULL);
	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->addr = addr;
	node->next = NULL;
	if (!*head)
		*head = node;
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = node;
	}
	return (node);
}

/**
 * print_listint_safe - Prints content of list, with failsafe for looped lists
 * @head: Pointer to head of linked list
 * Return: Size of linked list
 */
size_t	print_listint_safe(const listint_t *head)
{
	size_t			count;
	const listint_t	*ptr;
	listaddr_t		*addresses;

	count = 0;
	ptr = head;
	addresses = NULL;
	if (!ptr)
		return (98);
	while (ptr)
	{
		count++;
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		add_nodeaddr_end(&addresses, (void *)ptr);
		ptr = ptr->next;
		if (find_node(addresses, (void *)ptr))
		{
			printf("-> [%p] %d\n", (void *)ptr, ptr->n);
			free_listaddr(&addresses);
			return (98);
		}
	}
	free_listaddr(&addresses);
	return (count);
}
