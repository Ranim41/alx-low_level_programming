#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: input integer
 * @max: input integer
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
	return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
