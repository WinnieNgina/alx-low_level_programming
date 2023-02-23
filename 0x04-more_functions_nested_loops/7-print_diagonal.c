#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 * empty - variable name for space
 * line - variable name for character printed
 */
void print_diagonal(int n)
{
	int line, empty;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (empty = 0; empty < line; empty++)
				_putchar(' ');
			_putchar('\\');

			if (line == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}

