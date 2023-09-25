#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: the string to be searched
 * @c: the character to be located
 *
 * Return: if c is found - a pointer to the firstoccurance
 * if c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
