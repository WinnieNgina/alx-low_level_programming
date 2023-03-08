#include "main.h"
/**
 * sqroot_finder - Checks for the square root of num.
 * @g: guess of the squareroot
 * @num: number to find sqrt of.
 *
 * Return: -1 or sqrt of num.
 */

int sqroot_finder(int g, int num)
{
	if (g * g == num) /* Eg, we can be finding sqrt of 16(num) */
	       /*we start to multiply 1*1 and check if its equal to 16 */
		/* We will increment g till we have 4*4 as 16 */
		return (g);
	else if (g * g > num)
		return (-1);
	else
		return (sqroot_finder(g + 1, num));
}

/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: integer to find sqrt of (num).
 *
 * Return: natural square root or -1 if its not
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqroot_finder(1, n));
}
