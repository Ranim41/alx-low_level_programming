#include "main.h"
/**
 * print_squar - print a squar using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (success)
 */

void print_square(int size)
{
	int row, column;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
