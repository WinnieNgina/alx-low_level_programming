#include <stdio.h>
/**
 * main - prints the program name followed by new line
 * @argc: number/count of arguments
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
