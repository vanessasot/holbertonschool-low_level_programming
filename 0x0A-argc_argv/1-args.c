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
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

