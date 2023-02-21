#include <stdio.h>
/**
 * main -Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b = 2;
	int c;

	for (a = 1; a <= 12; a++)
	{
		c = a * b;
		printf("%d\n", c);
	}
	return (0);
}
