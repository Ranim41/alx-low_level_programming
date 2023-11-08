#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function given
 *	as a parameter on each element of an array
 * @array: an array of integer
 * @size: size of an array
 * @action: pointer to a function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
