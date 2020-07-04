#include "holberton.h"

/**
 * _sqrt2 - Returns the natural square root of a number.
 * @a: Number to find the natural square.
 * @b: Number to operate.
 *
 * Return: Depend of the condition.
 */

int _sqrt2(int a, int b)
{
	int op;

	if ((b * b) < a)
	{
		op = _sqrt2(a, b + 1);
		return (op);
	}
	else if ((b * b) == a)
	{
		return (b);
	}
	else
	{
		return (-1);
	}
}

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: Number to find the square.
*
* Return: Result of the square.
*/

int _sqrt_recursion(int n)
{
	return (_sqrt2(n, 1));
}
