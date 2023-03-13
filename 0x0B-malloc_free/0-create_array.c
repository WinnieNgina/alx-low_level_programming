#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes c.
 * @c: initial character
 * @size: size of array
 * Return: NULL if size = 0 or
 * Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size); /* memory allocation for the array*/
	if (array == NULL) /*Check if memory allocation was successful*/
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
