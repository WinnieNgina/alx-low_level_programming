#include <stdio.h>
 #include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameters.
 * @n: number of arguments
 * @...:unknown number of arguments
 * Return: sum of all the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;/*Intializes the list of arguments*/
	int sum = 0;/*Intializes sum as zero*/
	unsigned int i;/*Iterates the arguments in a for loop*/

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);/*Intializes args*/
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
		/*retrieve the next argument in the variable argument list*/
	       /*and add it to the running total in sum.*/
	}
	va_end(args);
	return (sum);
}

