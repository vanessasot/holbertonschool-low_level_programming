#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: 0 success
 */
int main(void)
{
	int n;
	int n16;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (n16 = 97; n16 <= 102; n16++)
	{
		putchar(n16);
	}
	putchar('\n');
	return (0);
}
