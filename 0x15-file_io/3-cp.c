#include "main.h"
/**
 * _print_error - handle errors
 * @file_from: the file_from
 * @file_to: the file_to
 * @argv: arguments vector
 * Return: void
 */

void _print_error(int file_from, int file_to, char *argv[])
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Cant't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main -  copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t n_chars, n_write;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	_print_error(file_from, file_to, argv);

	n_chars = 1024;

	while (n_chars == 1024)
	{
		n_chars = read(file_from, buf, 1024);
		if (n_chars == -1)
			_print_error(-1, 0, argv);
		n_write = write(file_to, buf, n_chars);
		if (n_write == -1)
			_print_error(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close  fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
