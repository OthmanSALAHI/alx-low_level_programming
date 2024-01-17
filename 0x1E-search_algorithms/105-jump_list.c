#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, j, k;
	listint_t *prev;

	index = k = 0;
	if (!list || size == 0)
		return (NULL);

	j = (size_t)sqrt((double)size);
	do {
		prev = list;
		k++;
		index = k * j;

		while (list->next && list->index < index)
			list = list->next;
		while (!list->next && index != list->index)
			index = list->index;
		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);
	} while (index < size && value > list->n && list->next);
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);
	while (prev && prev->index <= list->index)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
