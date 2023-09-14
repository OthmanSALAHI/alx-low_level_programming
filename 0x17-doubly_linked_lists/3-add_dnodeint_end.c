#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Pointer to the head of the list
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = *head;
	new_node->next = NULL;

	if (*head)
		(*head)->next = new_node;
	*head = new_node;
	return (new_node);
}
