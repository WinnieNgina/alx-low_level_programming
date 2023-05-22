#include "main.h"

/**
 * _islower - checks if c is lower case
 *
 * @c: is the character being checked
 *
 * Return: 1 if c is lower case and 0 if c is not lower case
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
