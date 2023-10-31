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
	int d = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (0);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}
	len += ac;

	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == 0)
	{
		return (0);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		ptr[d] = av[i][j];
		d++;
	}
	if (ptr[d] == '\0')
	{
		ptr[d++] = '\n';
	}
	}
	return (ptr);
}
