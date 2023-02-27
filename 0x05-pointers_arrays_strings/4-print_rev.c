#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * fcount is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int fcount = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcount++;
	}

	for (n = (fcount - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
