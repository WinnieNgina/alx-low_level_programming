#include <stdio.h>
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: array we are searching the element in
 * @size: size of the array
 * @value: value we are searching
 * Return: The index of the value or -1 if the array is empty
 */
int jump_search(int *array, size_t size, int value)
{
	size_t skip;
	size_t prev;
	size_t index;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	skip = sqrt(size);
	index = prev = 0;
	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		index = prev;
		prev += skip;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", index, prev);
	prev = prev < size - 1 ? prev : size - 1;
	while (index < prev && array[index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		index++;
	}
	printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	return (array[index] == value ? (int)index : -1);

}
