#include "main.h"
/**
 * times_table - a function that prints the 9
 * time table
 *
 * Description: it prints it followed by , and 2 spaces
 *
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 0; j <= 9; j++)
		{
			k = (i * j);

			if ((k / 10) > 0)
			{
			_putchar((k / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
				_putchar((k % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		__putchar('\n');
	}
}
