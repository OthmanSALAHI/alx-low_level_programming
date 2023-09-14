#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end
 * @head: head pointer
 * @n: data
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *curr = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		while (curr->next)
			curr = curr->next;
		curr->next = new;
		new->prev = curr;
	}
	return (new);
}
