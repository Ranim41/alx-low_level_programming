#include "main.h"
/**
 * print_squar - prints a squar of size
 *
 * @size: size of the square
 * Description: This function prints a square with the given size
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
