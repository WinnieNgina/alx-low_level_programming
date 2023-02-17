#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
		putchar(letters);
	putchar('\n');
	return (0);
}
