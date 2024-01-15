#include "search_algos.h"
/**
* linear_search - function that search in linear methode
* @array: the array of elements
* @size: the size of array
* @value: value searching of
* Return: the index of elements
*/


int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array || !size)
		return (-1);
	i = 0;
	while (i < (int)size)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i++;
	}
	return (-1);
}
