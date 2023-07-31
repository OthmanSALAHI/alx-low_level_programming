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
size_t count;

count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
