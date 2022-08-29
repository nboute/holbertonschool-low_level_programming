#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#include <stddef.h>

int		linear_search(int *array, size_t size, int value);
int		binary_search(int *array, size_t size, int value);
int		jump_search(int *array, size_t size, int value);
int		interpolation_search(int *array, size_t size, int value);


#endif /* __SEARCH_ALGOS_H__ */
