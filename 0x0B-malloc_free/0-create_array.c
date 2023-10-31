#include "main.h"

/**
 * create_array - function that creates an array of chars
 *
 * @size: array size
 * @c: character of array
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
