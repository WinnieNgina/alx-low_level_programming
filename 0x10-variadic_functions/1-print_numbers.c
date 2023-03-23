#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints all numbers
 * @n: number of arguments
 * @separator: string to be printed between numbers
 * @...:unknown number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;/*Intializes the list of arguments*/
	unsigned int i;/*Iterates the arguments in a for loop*/

	va_start(args, n);/*Intializes args*/
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
