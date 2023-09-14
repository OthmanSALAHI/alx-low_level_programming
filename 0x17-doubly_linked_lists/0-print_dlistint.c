#include "lists.h"
/**
* print_dlistint - function print the count of int
* @h: the argument
* Return: the count of the int
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
