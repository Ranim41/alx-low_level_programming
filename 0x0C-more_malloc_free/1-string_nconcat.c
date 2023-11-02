#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, l;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = strlen(s1);
	j = strlen(s2);
	if (n > j)
	{
		n = j;
	}
	l = i + n + 1;

	ptr = malloc(sizeof(char) * l);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
