#include "variadic_functions.h"

/**
 * sum_them_all - function that returns
 *	the sum of all its parameters
 * @n: variable
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	size_t i, sum = 0;
	va_list arg;

	va_start(arg, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, size_t);
	}
	va_end(arg);
	return (sum);
}

