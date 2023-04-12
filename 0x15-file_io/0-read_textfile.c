#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the 'POSIX' STDOUT
 * @filename: pointer veriable to the file
 * @letters: number of letters to be read and printed
 *
 * Return: the number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0;
	char *buffer = NULL;
	int file_descriptor;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char *) * letters);

	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY, 0600);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);

		return (0);
	}

	write(STDOUT_FILENO, buffer, bytes_read);

		free(buffer);
		close(file_descriptor);


	return (bytes_read);
}
