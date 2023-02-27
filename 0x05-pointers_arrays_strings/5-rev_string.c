#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int fcount = 0;
	int i;

	while (s[fcount] != '\0')
		fcount++;

	for (i = 0; i < fcount; i++)
	{
		fcount--;
		rev = s[i];
		s[i] = s[fcount];
		s[fcount] = rev;
	}
}
