#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all single digit numbers base 10 starting from 0 with putchar
 *
 * Return: 0 success
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57 ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
