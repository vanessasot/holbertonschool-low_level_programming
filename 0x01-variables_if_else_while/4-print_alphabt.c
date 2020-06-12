#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except q and e.
 *
 * Return: 0 success
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
	if (az != 'q' && az != 'e')
	{
		putchar(az);
	}
	}
	putchar('\n');
	return (0);
}
