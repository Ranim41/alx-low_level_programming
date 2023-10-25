#include "main.h"


/**
 * factorial - function returns the factorial of a given number
 *
 * @n: input integer
 *
 * Return: 1 if it's factorial - -1 if it is not
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
