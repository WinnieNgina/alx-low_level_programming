#include <stdlib.h>
#include <string.h>
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
	char *cpy_str;

	if (str == NULL)
	{
		return (NULL);
	}
	cpy_str = malloc(strlen(str) + 1); /* memory allocation for the array */
	/* 1 for null terminator*/
	if (cpy_str == NULL)
	{
		return (NULL);
	}
	strcpy(cpy_str, str);
	return (cpy_str);
}
