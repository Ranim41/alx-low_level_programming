#include "main.h"

/**
 * _sqrt_a - find square root
 *
 *Description: fuction find sqrt
 *
 * @a: int to find square root
 * @b: square root
 *
 * Return: int
 */

int _sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square
 *		root of a number
 *
 * @n: input number
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
