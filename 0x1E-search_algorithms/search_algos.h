#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
size_t mini(size_t a, size_t b);
int jump_search(int *array, size_t size, int value);
int binary_recursive(int *array, size_t left, size_t right, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
