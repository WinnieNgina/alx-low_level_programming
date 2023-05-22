#include "main.h"
/**
 * _memset - Fills memory with a constant byte b.
 * @n: Number of bytes filled
 * @s: pointer of the memory area
 * @b: constant byte
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
