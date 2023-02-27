#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int swapped
 * @b: int swapped
 * temp - temporarily holds the original value pointed at a
 */
void swap_int(int *a, int *b)
{	int temp = *a;
	*a = *b;
	*b = temp;
}
