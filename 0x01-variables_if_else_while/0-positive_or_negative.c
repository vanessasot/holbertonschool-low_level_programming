#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Validates if a number is negative, positive or equal to zero.
 *
 * Return: 0 success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is posititive\n", n);
	}
	return (0);
}
