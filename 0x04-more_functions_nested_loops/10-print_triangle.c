#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int hash, space;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (space = size - hash; space > 0; space--)
				_putchar(' ');

			for (space = 0; space < hash; space++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
