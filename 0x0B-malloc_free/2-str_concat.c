#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - cuts s2 and pastes it on s1
 * @s1: where string is pasted
 * @s2: string cut
 * Return: return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = malloc(strlen(s2) + strlen(s1) + 1);
	/* memory allocation for the array */
	/* 1 for null terminator*/
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
