#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 *
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	size_t i;
	char *pt;
	char *oldpt = ptr;

	if (ptr == NULL)
	{
		pt = malloc(new_size);
		return (pt);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	pt = malloc(new_size)
	if (pt == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		new_size = old_size;
	}
	for (i = 0; i < new_size; i++)
	{
		pt[i] = oldpt[i];
	}
	free(ptr);
	return (pt);
}
