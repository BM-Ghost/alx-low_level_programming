#include "lists.h"

/*
 * Function free_dlistint frees a dlistint_t list.
 *
 * @head: Points to the head of the list
 * Return: No return value
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
