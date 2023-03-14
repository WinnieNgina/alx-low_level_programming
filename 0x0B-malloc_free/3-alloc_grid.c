#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: an array of integers
 * @height: array of inntegers
 * Return: NULL on failure or integers are 0 or less
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	/*check whether a number is 0 or a negative*/
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height); /* allocate memory for rows */
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int)); /*allocate memory to columns*/
		if (ptr[i] == NULL)/*Failure to allocate space for columns*/
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
				/*Free the space earlier allocated to pointers if no space for columns*/
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}

