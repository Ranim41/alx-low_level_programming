#include "main.h"
/**
 * print_squar - print a squar using the character #
 *
 * @size: is the size of the square
 *
 * Description: This function prints a square with the given size
 * if size is 0 or negative, it prints a newline
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n')
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
				_putchar('\n');
			}
		}
	}
}
