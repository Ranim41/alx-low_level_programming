#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: input
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
		while (length > 0)
		{
		s--;
		_putchar(*s);
		length--;
		}
	_putchar('\n');
}
