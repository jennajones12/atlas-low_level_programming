#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>

int linear_find(int *array, size_t size, int value);
int binary_find(int *array, size_t size, int value);
int binary_find_recursive(int *array, size_t left, size_t right, int value);
void display_array(int *array, size_t left, size_t right);

#endif /* _SEARCH_ALGOS_H_ */
