#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to dest
 * @n: number of bytes copied
 * @src: copying source
 * @dest: copying destination
 * Return: a pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
