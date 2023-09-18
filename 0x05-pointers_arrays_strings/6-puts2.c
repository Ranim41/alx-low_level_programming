#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with
 *		the first character, followed by a new line
 *
 * @str: input
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}

