#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int number, multiply_with, product;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multiply_with = 1; multiply_with <= 9; multiply_with++)
		{
			_putchar(',');
			_putchar(' ');

			product = number * multiply_with;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
