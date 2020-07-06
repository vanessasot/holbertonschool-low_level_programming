#include "holberton.h"

/**
 * main - Adds positive numbers.
 * @argc: Number the parameters.
 * @argv: Element.
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int suma;
	int i;
	int j;

	suma = 0;
	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(argv[i] + j) != '\0'; j++)
		{
			if (*(argv[i] + j) >= 48 && *(argv[i] + j) <= 57)
			{
				suma = suma + atoi(argv[i] + j);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", suma);
	return (0);
}
