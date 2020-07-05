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
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	return (0);
}

