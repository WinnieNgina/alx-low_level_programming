#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: String containing binary values
 * Return: Equivalent decimal no of the binary string
 *	0 if there is chars in the string b that is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	/* intialize the decimal number at zero*/
	int str_len = strlen(b);
	int i;
	/*helps us iterate through the entire string*/
	unsigned int power_count = 1;
	/*calculates value of each ninary digit in string b*/

	if (!b)
		return (0);
	for (i = str_len - 1; i >= 0; i--)
	/*iterate through the string from right to left*/
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		else if (b[i] == '1')
		{
			num += power_count;
		}
		power_count *= 2;
		/*multiplies the current value of power by 2*/
		/* updeted for next iteration of the loop*/
	}
	return (num);
}
