#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * No use of printf or puts or char
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
		putchar((numbers % 10) + '0');
	putchar('\n');
	return (0);
}
