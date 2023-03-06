#include "main.h"
/**
* _strchr - locates @c character in string @s
* @c: Character found
* @s: String where we are searching for c
* Return: NULL if c not found or a pointer to the first occurrence of c
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < '\0'; i++)
	{
		if (s[i] == c)
		return (s);
	}
	for (i = 0; i < '\0'; i++)
	{
		if (s[i] != c)
			return ('\0');
	}
	return (0);
}
