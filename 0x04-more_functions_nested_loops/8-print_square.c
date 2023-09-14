#include "main.h"
/**
 * print_squar - prints a squar of specified size
 * @size: size of the square
 */

void print_square(int size)
{
	int row, coulmn;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (row = 0; row < size; row++)
	{
		for (coulmn = 0; coulmn < size; coulmn++)

			_putchar('#');

		_putchar('\n');
	}
	}
}
