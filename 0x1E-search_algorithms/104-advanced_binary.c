#include "search_algos.h"
#include <stdio.h>
/**
 * advanced_binary - using recursion to do binary search
 * @array: Array of integers
 * @size: size of the array
 * @value: value we are searching for in array
 * Return: index of the array or -1 if array is empty or no element
 */
int advanced_binary(int *array, size_t size, int value)
{

	if (array == NULL)
	{
		return (-1);
	}
	return (binary_recursive(array, 0, size - 1, value));
}
/**
 * binary_recursive - recursively finds the occurence of an element in array
 * @array: array of integers
 * @left: index of the first element in subarray
 * @right: index of the last element in subarray
 * @value: value of element are seaching for
 * Return: index
 */
int binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (right >= left)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
			{
				printf("%d\n", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		if (array[mid] == value)
		{
			if (mid == left || array[mid - 1] != value)
				return (mid);
			else
				return (binary_recursive(array, left, mid - 1, value));
		}
		else if (array[mid] >  value)
		{
			return (binary_recursive(array, left, mid - 1, value));
		}
		else
			return (binary_recursive(array, mid + 1, right, value));
	}
	return (-1);
}
