#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/*macro setting buffer size at 1024*/
/**
 * print_error - prints error message followed by \n ,on the POSIX std error
 * @message: Pointer to the content of the error message
 */
void print_error(char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	/**
	 * dprintf writes the output to a fd specified as the first argument.
	 * fd - file descriptor
	 */
}
/**
 * main - runs the program
 * @argc: is the number of arguments passed to the program
 * @argv: is an array of pointers to the arguments.
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	int num_read, num_written, file_from, file_to;

	if (argc != 3)
	{
		print_error("Invalid number of arguments");
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		print_error("Can't read from file");
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		print_error("Can't write to file");
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((num_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		num_written = write(file_to, buffer, num_read);
		if (num_written != num_read)
		{
			print_error("Can't write to file");
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (num_read == -1)
	{
		print_error("Can't read from file");
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		print_error("Can't close fd");
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		print_error("Can't close fd");
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

