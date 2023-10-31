#include "main.h"

/**
 * argstostr - function that concatenates all the
 *	arguments of your program
 *
 * @ac: arguments
 * @av: array of string
 *
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	int c = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	len += ac;
	}
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[c] = av[i][j];
			c++;
		}
		if (ptr[c] == '\0')
		{
			ptr[c++] = '\n';
		}
	}
	return (ptr);
}
