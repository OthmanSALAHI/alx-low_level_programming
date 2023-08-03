#include "lists.h"
#include <stdio.h>
<<<<<<< HEAD
/**
 * print_listint - prints the list of int
 *
 * @h: the node
 *
 * Return: the number nodes
=======

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: head of linklist node
 *
 * Return: the number of nodes
>>>>>>> 64074f2e01af950df573ec38672ee898be5a8a73
 *
 */
size_t print_listint(const listint_t *h)
{
<<<<<<< HEAD
	size_t size = 0;

	if (h == NULL)
		return (size);

	size++;
	printf("%i\n", h->n);
	if (h->next != NULL)
		size += print_listint(h->next);

	return (size);
=======
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
>>>>>>> 64074f2e01af950df573ec38672ee898be5a8a73
}
