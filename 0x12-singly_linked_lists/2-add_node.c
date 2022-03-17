#include "lists.h"

/**
 * _strlen - counts size of a string
 * @str: string to check size of
 * Return: returns size of str
 */
int	_strlen(char *str)
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
list_t		*add_node(list_t **head, const char *str)
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
