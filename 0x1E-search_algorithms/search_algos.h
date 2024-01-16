#ifndef SEARCH_ALGOS_H_
#define SEARCH_ALGOS_H_

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int _recursive(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif
