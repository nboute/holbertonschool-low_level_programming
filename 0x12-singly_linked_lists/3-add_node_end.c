#include "lists.h"


/**
 * _strlen - counts size of a string
 * @str: string to check size of
 * Return: returns size of str
 */
int	_strlen(const char *str)
{
	int	i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node - Adds new node to the head of a linked list
 * @head: Adress of head of a linked list
 * @str: Parameter to store in new node
 * Return: Pointer to new head
 */
list_t	*add_node(list_t **head, const char *str)
{
	list_t	*new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * add_node_end - Adds new node to the tail of a linked list
 * @head: Adress of head of a linked list
 * @str: Parameter to store in new node
 * Return: Pointer to new head
 */
list_t		*add_node_end(list_t **head, const char *str)
{
	list_t	*p;

	if (!head)
		return (NULL);
	if (!*head)
		return (add_node(head, str));
	p = *head;
	while (p->next)
		p = p->next;
	p->next = malloc(sizeof(*p));
	if (!p->next)
		return (NULL);
	p->next->str = strdup(str);
	if (!p->next->str)
	{
		free(p->next);
		p->next = NULL;
	}
	p->next->len = _strlen(str);
	p->next->next = NULL;
	return (p->next);
}
