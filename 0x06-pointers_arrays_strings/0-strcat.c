#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copying to destination
 * @src: string being copied to dest
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
	{
	}

	return (dest);
}
