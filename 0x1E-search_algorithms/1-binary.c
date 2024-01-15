#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	if (!array || size == 0)
		return (-1);

	index = _recursive(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}

/**
 * _recursive - recursively searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value if found, otherwise -1
 */
int _recursive(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
		return ((int)mid);

	if (value < array[mid])
		return (_recursive(array, mid, value));

	mid++;

	return (_recursive(array + mid, size - mid, value) + mid);
}
