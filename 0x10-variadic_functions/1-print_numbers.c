#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, s;
	va_list num;

	va_start(num, n);

	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		s = va_arg(num,  unsigned int);
		printf("%d", s);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}


