#include "lists.h"

/*
 * Function get_dnodeint_at_index returns the nth node of a dlistint_t linked list.
 *
 * @head: Points to the head of the list
 * @index: Index of the nth node
 * Return: Pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
