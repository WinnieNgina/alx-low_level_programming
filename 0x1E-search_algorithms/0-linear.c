#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of ints using Linear search
 * @array: The array of integers
 * @size: number of items in an array
 * @value: Element we are searching
 * Return: -1 value is not present in array or array is NULL or element index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
