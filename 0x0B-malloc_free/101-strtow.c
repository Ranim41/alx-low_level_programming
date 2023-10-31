#include <stdlib.h>
#include "main.h"

/**
 * word_count - count the words in string
 *
 * @s: string to be counted
 *
 * Return: integer
 */

int word_count(char *s)
{
	int a, i, j;

	a = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			j++;
		}
	}

	return (j);
}

/**
 * strtow - function that splits a string into words
 *
 * @str: string to be split
 *
 * Return: pointer
 */

char **strtow(char *str)
{
	char **ptr, *tm;
	int i, j = 0, len = 0, word, d = 0, first, last;

	while (*(str + len))
		len++;
	word = word_count(str);
	if (word == 0)
		return (NULL);

	ptr = (char **) malloc(sizeof(char *) * (word + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (d)
			{
				last = i;
				tm = (char *) malloc(sizeof(char) * (d + 1));
				if (tm == NULL)
					return (NULL);
				while (first < last)
					*tm++ = str[first++];
				*tm = '\0';
				ptr[j] = tm - d;
				j++;
				d = 0;
			}
		}
		else if (d++ == 0)
			first = i;
	}

	ptr[j] = NULL;

	return (ptr);
}
