#include "main.h"

/**
 * flip_bits - counts no. of bit to flip to get from n to m
 * @n: int number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned long int bits = 0;

	while (num > 0)
	{
		bits += (num & 1);
		num >>= 1;
	}

	return (bits);
}
