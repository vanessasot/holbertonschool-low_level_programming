#include "holberton.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @a: Pointer to array.
 *
 * Return: Value pointer
 *
 */

char *cap_string(char *a)
{
	int i;

	i = 0;

	while (a[i] != '\0')
	{
		if (a[0] >= 97 && a[0] <= 122)
		{
			a[0] -= 32;
		}
		if (a[i] >= 97 && a[i] <= 122 && (a[i - 1] == ',' || a[i - 1]
					== ';' || a[i - 1] == '.' ||
					a[i - 1] == '!' || a[i - 1]
					== '?' || a[i - 1] == '"' ||
					a[i - 1] == '\n' || a[i - 1]
					== '(' || a[i - 1] == ')'
					|| a[i - 1] == '{' || a[i - 1]
					== '}' || a[i - 1] == ' ' ||
					a[i - 1] == 32 || a[i - 1]
					== '\t'))
		{
			a[i] -= 32;
		}
		i++;

	}
	return (a);
}
