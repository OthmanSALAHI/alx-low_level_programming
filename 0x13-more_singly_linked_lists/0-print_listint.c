#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints the list of int
 *
 * @h: the node
 *
 * Return: the number nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (size);

	size++;
	printf("%i\n", h->n);
	if (h->next != NULL)
		size += print_listint(h->next);

	return (size);
}
