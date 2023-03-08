#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: The given number
 *
 * Return: n is lower than 0, return -1,0 is 1
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

