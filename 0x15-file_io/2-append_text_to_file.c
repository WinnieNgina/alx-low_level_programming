#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @text_content: NULL terminated string to write to the file
 * @filename: Name of the file to create
 * Return: 1 on success, -1 on failure
 *	filename is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_value;
	unsigned int len;
	int written_bytes;

	if (filename == NULL)
		return (-1);
	fd_value = open(filename, O_WRONLY | O_APPEND);
	/**
	 * O_WRONLY - opens file pointed by filename for writing
	 * O_APPEND: appends data to the end of the file
	 */
	if (fd_value == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		/*checks the length of the text_content*/
		written_bytes = write(fd_value, text_content, len);
		/*write function used to write the string to the file descriptor fd_value*/
		if (written_bytes == -1 || (size_t)written_bytes != len)
		/**
		 * Return value of write can be -ve. Written_bytes is declared as signed int
		 * Have a negative value if an error occurs during the write operation
		 * To prevent a -ve comparison with len, the variable is cast to (size_t)
		 */
		{
			close(fd_value);
			return (-1);
		}
	}
	close(fd_value);
	return (1);
}
