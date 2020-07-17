#include "3-calc.h"

/**
 * op_add - Sum two integers.
 * @a: Number 1.
 * @b: Number 2.
 *
 * Return: Result of the sum.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference of two integers.
 * @a: Number 1.
 * @b: Number 2.
 *
 * Return: Result of the difference.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product of two integers.
 * @a: Number 1.
 * @b: Number 2.
 *
 * Return: Result of the product.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of two integers.
 * @a: Number 1.
 * @b: Number 2.
 *
 * Return: Result of the division.
 */

int op_div(int a, int b)
{
	if (b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Remainder of the division of two integers.
 * @a: Number 1.
 * @b: Number 2.
 *
 * Return: Result of the remainder of the division.
 */

int op_mod(int a, int b)
{
	if (b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
