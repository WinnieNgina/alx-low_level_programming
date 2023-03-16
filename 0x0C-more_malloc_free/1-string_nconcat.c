#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - cuts s2 and pastes it on s1
 * @s1: where string is pasted
 * @s2: string cut
 * @n: memory size allocated
 * Return: return NULL on failure or pointer to memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	ptr = malloc(strlen(s1) + n + 1);
	/* memory allocation for the array */
	/* 1 for null terminator*/
	if (ptr == NULL)
	{
		return (NULL);
	}
	/**
 * strncpy() can leave the destination string unterminated hence  use memcpy
 * Happens if the source string is longer than the specified length.
 *  memcpy() does not have this issue.
 *  Copies a specified number of bytes from the source string.
 *  bytes are copied without regard for the content of the bytes.
 */
	memcpy(ptr, s1, strlen(s1));
	memcpy(ptr + strlen(s1), s2, n);
	ptr[strlen(s1) + n] = '\0';
	return (ptr);
}
