#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of integers to be allocated
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	exit(98);
	return (ptr);
}
