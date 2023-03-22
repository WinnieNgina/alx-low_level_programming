#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: Array size
 * @cmp: function pointer c comparing array
 * Return: index of the first element
 * no element matches, return -1
 *If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
