#include "holberton.h"

/**
 * create_file - Create a file.
 * @filename: Name of file.
 * @text_content: Content of te file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int _open, _write, i;

	if (filename == NULL)
		return (-1);

	_open = open(filename, O_TRUNC | O_CREAT | O_RDWR, 0600);

	if (_open == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
	}
	_write = write(_open, text_content, i);
	if (_write == -1)
		return (-1);
	close(_open);

	return (1);
}
