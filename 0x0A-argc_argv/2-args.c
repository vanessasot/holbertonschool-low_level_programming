#include "holberton.h"

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Number the parameters.
 * @argv: Element.
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	(void)argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

