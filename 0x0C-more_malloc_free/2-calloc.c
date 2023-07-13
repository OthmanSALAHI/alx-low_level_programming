#include "main.h"

/**
 * _calloc - allocates memory for an array using calloc
 * @nmemb: number of elements to allocate memory for
 * @size: size of each element
 *
 * Return: pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    int *numelemnt;

    if (nmemb == 0 || size == 0)
        return (NULL);

    numelemnt = calloc(nmemb, size);
    if (numelemnt == NULL)
        return (NULL);

    return (numelemnt);
}
