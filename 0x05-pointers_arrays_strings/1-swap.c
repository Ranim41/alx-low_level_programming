#include "main.h"

/**
 * swap_int - swap the value of two integers
 *		using two inputs parameter
 *
 * @a: first input
 * @b: seconed input
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


