#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: A pointer to the memory addrress of the unsigned int
 * @index: Index of the bit changed
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	/*Check if index is greater or equal to bits for unsigned long int*/
		return (-1);

	*n ^= (1 << index);
	/*performs XOR operation on the bit at the index*/

	return (1);
}
