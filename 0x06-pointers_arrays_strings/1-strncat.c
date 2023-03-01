#include "main.h"

/**
 * _strncat - Entry point
 * @dest: destination to copy to
 * @src: string copied from src
 * @n: input number of characters
 * Return: (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
