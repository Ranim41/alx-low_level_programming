#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: string to be printed between the strings
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strin;

	va_start(strin, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strin, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strin);
}




