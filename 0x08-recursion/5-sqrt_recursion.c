#include "main.h"

/**
 * _sqrt_a - returns the natural square root
 *		of a number
 * Description: fuction for sqrt
 *
 * @a:input  number
 * @b:iterator
 *
 * Return: square root or -1
 */

int sqrt_a(int a, int b)
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
