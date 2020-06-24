#include "holberton.h"

/**
 * rev_string - Reverse that a string.
 * @s: Array to print.
 */

void rev_string(char *s)
{
	int cont;
	int rev;
	int rev2;
	char contra;

	cont = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
	for (rev = 0, rev2 = cont - 1; rev < rev2; rev++, rev2--)
	{
		contra = s[rev];
		s[rev] = s[rev2];
		s[rev2] = contra;
	}
}
