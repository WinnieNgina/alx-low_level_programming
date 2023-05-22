#include "main.h"
/**
 *  _strlen - Returns the length of a string.
 *  @s: The string varible whose legth is checked.
 *  Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, total = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		total++;
		pl = s[i++];
	}
	return (total);
}
