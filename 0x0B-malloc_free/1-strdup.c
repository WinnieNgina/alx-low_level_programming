#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates of the string str to array
 * @str: string copied
 * Return: NULL if str = NULL
 * or returns a pointer to the duplicated string
 * returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *array;
	int index;
	int num;

	for (index = 0; str[index] < '\0'; index++)
		if (index == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * (index + 1));
	/* memory allocation for the array */
	/* 1 for null terminator*/
	if (array == NULL) /*Check sufficiency of memory*/
	{
		return (NULL);
	}
	for (num = 0; str[num] != '\0'; num++)
	{
		array[num] = str[num];
	}
	return (array);
}
