#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: A pointer to the memory addrress of the unsigned int
 * @index: Index of the bit changed
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	/*Check if index is greater or equal to bits for unsigned long int*/
		return (-1);

	*n &= ~(1 << index);
	/**
	 * << shifts 1 to the left by "index" positions
	 * '~'performs NOT operation on the number that has been shifted
	 * "&=" is the bitwise AND assignment operator
	 * "&=" performs a bitwise AND operation between two numbers
	 * "&=" operation assigns the result to the first number.
	 * First number is *n and second number is ~(1 << index) after NOT operation
	 */
	return (1);
}
