#include "main.h"

/**
 * print_binary - Prints the binary representation of unsigned int.
 * @n: The number converted to binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	/*This line checks if the input number (n) is greater than 1.*/
	/*If n > than 1, we keep dividing by 2 till we get to 1*/
		print_binary(n >> 1);
	/*This is a recursive function*/
	/* We shift the bits by one to the right and trunchate the leading*/
	/* The function is similar to  print_binary(n / 2);*/

	_putchar((n & 1) + '0');
	/*_putchar((n % 2) + '0');*/
}
