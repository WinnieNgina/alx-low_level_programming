#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 for 10 times
 * count - number of times printed
 * num - numbers printed
 */
void more_numbers(void)
{
	int count;
	int num;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');

	}
}

