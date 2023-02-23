#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: is the variable being checked
 * Return: 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
