#include "main.h"
/**
 * print_squar - prints a squar of size
 *
 * Description: This function prints a square with the given size
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
