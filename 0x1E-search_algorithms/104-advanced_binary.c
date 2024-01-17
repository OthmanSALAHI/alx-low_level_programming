#include "search_algos.h"

/**
 * _recursive - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int _recursive(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (_recursive(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (_recursive(array, half + 1, value));

	half++;
	return (_recursive(array + half, size - half, value) + half);
}

/**
 * advanced_binary - calls to _recursive to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = _recursive(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
