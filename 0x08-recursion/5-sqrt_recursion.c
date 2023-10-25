#include "main.h"

/**
 * _sqrt_helper - function help the other function
 *
 * @a: square root
 * @c: input integer
 *
 * Return: square root of integer
 */

int _sqrt_helper(int a, int c)
{
	if (c * c == a)
	{
		return (b);
	}
	else if (c * c > a)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(a, c + 1));
	}
}


/**
 * _sqrt_recursion - function returns the natural square root of a number
 *
 * @n: input integer to be checked
 *
 * Return: -1 if it does not have squre root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}
