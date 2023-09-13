#include<stdio.h>
#include<math.h>
/**
 * mini - finds the minimum value
 * @a: number compared
 * @b: number compared with
 * Return: The minimum integer
 */
size_t mini(size_t a, size_t b)
{
	if (b > a)
		return (a);
	else
		return (b);
}
/**
 * jump_search - searches for a value in a sorted array of integers 
 * @array: array we are searchin the element in
 * @size: size of the array
 * @value: value we are searching
 * Return: The index of the value or -1 if array is empty
 */
int jump_search(int *array, size_t size, int value)
{
	size_t skip;
	size_t prev;
	int index;

	if (array == NULL)
	{
		return (-1);
	}
	skip = sqrt(size);
	index = mini(skip, size) - 1;
	while (array[index] < value)
	{
		prev = skip;
		skip += sqrt(size);
		if (prev >= size)
		{
			return (-1);
		}
	}
	while (array[prev] < value)
	{
		prev++;
		if (prev == mini(skip, size))
		{
			return (-1);
		}
	}
	if (array[prev] == value)
	{
		return (prev);
	}
	return (-1);
}
