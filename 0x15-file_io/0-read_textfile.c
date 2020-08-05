#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of file.
 * @letters: Number of letters.
 *
 * Return: 0 or actual number of letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _open, _read, _write;
	char *buffer = malloc(letters);

	if (filename == NULL)
		return (0);
	_open = open(filename, O_RDONLY);

	if (_open == -1)
		return (0);
	_read = read(_open, buffer, letters);
	if (_read == -1)
		return (0);
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
		return (0);
	close(_open);
	return (_write);
}
