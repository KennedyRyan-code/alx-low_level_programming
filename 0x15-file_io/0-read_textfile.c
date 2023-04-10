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
	ssize_t o, r, w;
	char *buffer = NULL;


	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, latters);
	w = write(STDOUT_FILENO, buffer, r);

	if (0 == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
