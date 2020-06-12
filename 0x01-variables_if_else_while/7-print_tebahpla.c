#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: 0 success
 */
int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; az--)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
