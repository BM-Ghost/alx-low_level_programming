#include "lists.h"

/*
 * Function add_dnodeint_end adds a new node at the end
 * of a double linked list (dlistint_t).
 *
 * @head: Points to the head of the list
 * @n: Value of the new element
 * Return: Address of the new element added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;

	return (new);
}
