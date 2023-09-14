#include "main.h"
/**
 * print_squar - print a squar using the character #
 *
 * @size: is the size of the square
 * Description: print a squar
 * Return: Always 0 (success)
 */

void print_square(int size)
{
	int row, column;

	if (size <= 0)
                _putchar('\n');
	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}	
}
