#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
		putchar((numbers % 10) + '0');
	putchar('\n');
	return (0);
}
