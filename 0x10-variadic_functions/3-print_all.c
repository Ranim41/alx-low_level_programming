#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format:list of types of arguments passed to the function
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int j = 0;
	int i;
	char c, *s;
	float f;

	va_start(args, format);
	while (format != NULL && format[j] != '\0')
	{
		switch (format[j++])
		{
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			default:
				continue;
		}
		if (format[j] != '\0')
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
