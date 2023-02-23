#include "main.h"

/**
 * _isupper - checks if c is lower case
 *
 * @c: is the character being checked
 *
 * Return: 1 if c is upper case and 0 if c is lower case
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
