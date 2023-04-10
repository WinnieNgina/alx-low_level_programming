#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: a pointer to the file
 * @letters: the number of letters it should read and print
 *
 * Return: 0 if file cannot be opened, read, filename is null
 *	or doesn't write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_value;
	/*File descriptor integer value*/
	char *buffer_mem;
	/*allocate memory for stdio*/
	ssize_t read_bytes;
	ssize_t written_bytes;

	if (filename == NULL)
		return (0);
	fd_value = open(filename, O_RDONLY);
	if (fd_value == -1)
		return (0);
	/*File cannot be opened*/
	buffer_mem = (char *) malloc(letters * sizeof(char));
	/*allocate memory to temporary store characters whose count is letters*/
	if (buffer_mem == NULL)
	{
		close(fd_value);
		/*close file if memory not allocated*/
		return (0);
	}
	read_bytes = read(fd_value, buffer_mem, letters);
	/*copies bytes read to the buffer*/
	if (read_bytes == -1)
	{
		close(fd_value);
		/*close the file if error occured while reading*/
		free(buffer_mem);
		return (0);
	}
	written_bytes = write(STDOUT_FILENO, buffer_mem, read_bytes);
	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		close(fd_value);
		free(buffer_mem);
		return (0);
	}
	close(fd_value);
	free(buffer_mem);
	return (written_bytes);
}

