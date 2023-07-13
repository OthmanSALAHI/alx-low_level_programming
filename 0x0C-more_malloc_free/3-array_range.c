#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array, k = 0;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (int i = min; i <= max; i++)
	{
		array[k] = i;
		k++;
	}

	return (array);
}
