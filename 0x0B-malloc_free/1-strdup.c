#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 *	allocated space in memory,which contains a copy
 *	of the string given as a parameter
 *
 * @str: pointer to string
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	size_t i = 0, j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
