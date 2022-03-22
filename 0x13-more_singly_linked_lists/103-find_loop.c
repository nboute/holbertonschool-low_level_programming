#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - Finds loop in a linked list
 * @head: Pointer to head of linked list
 * Return: Pointer to node starting the loop
 */
listint_t	*find_listint_loop(listint_t *head)
{
	listint_t	*slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
