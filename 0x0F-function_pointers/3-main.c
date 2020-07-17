#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 *@argc: Size of parameters.
 *@argv: Values.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int (*ptr)(int, int);
	int a, b;

	ptr = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", ptr(a, b));
	return (0);
}
