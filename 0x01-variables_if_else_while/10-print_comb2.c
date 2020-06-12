#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99.
 *
 * Return: 0 success
 */
int main(void)
{
	int n;
	int n1;

	for (n = 48; n <= 57; n++)
	{
		for (n1 = 48; n1 <= 57; n1++)
		{
			putchar(n);
			putchar(n1);
			if (n < 57 || n1 < 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
