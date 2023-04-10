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
 * Return: 1 if the file exists and -1 if the file does not exist
 *	filename is NULL return -1
 *	-1 do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file_pointer;
	unsigned int len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		return (1);
	}
	file_pointer = fopen(filename, "a");
	/*Open file for writing in append mode*/
	if (file_pointer == NULL)
	{
		return (-1);
	}
	len = strlen(text_content);
		if (fwrite(text_content, 1, len, file_pointer) != len)
		/*Write text_content to the file*/
		{
			fclose(file_pointer);
			return (-1);
		}
	fclose(file_pointer);
	return (1);
}
