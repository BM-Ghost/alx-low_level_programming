#include "lists.h"

/*
 * Function add_dnodeint adds a new node at the beginning
 * of a double linked list (dlistint_t).
 *
 * @head: Points to the head of the list
 * @n: Value of the new element
 * Return: Address of the new element added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
