#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: The binary number
 * @index: index of the bit we are getting
 * Return: value of the bit at index or -1 incase of error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len;
	char bits[sizeof(unsigned long int) * 8];
	/*Convert the number to a bit string*/

	for (len = 0; n > 0; len++)
	{
		bits[len] = n % 2;
		n = n / 2;
	}
	/*Check if index is out of range*/
	if (index >= len)
	{
		return (-1);
	}
	/*Return the value of the bit at the given index*/
	return (bits[index]);
}
