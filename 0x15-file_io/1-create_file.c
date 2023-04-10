#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: pointer to the text content
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor = -1;
	mode_t file_mode = S_IRUSR | S_IWUSR;
	ssize_t bytes_written = 0;

	if (filename == NULL)
	{
		return -1;
	}

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, file_mode);
	if (file_descriptor == -1)
		return -1;

	if (text_content != NULL)
	{
		bytes_written = write(file_descriptor, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return -1;
		}
	}

	close(file_descriptor);
	return 1;
}
