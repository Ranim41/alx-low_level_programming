#include "main.h"

/**
 * _memcpy - function that copies @n bytes from memory area
 *	@src to memory area @dest
 *
 * @dest: to memory eara
 * @src: bytes from memory erea
 * @n: function copies
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
