#include "main.h"
/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the numbers of times the \ character
 *	should be printed
 *
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n > 1)
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
