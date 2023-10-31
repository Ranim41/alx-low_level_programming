#include "main.h"

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: seconed string
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1 = 0, len2 = 0;
	size_t i;
	char *p;

	if (*s1 == '\0')
	{
		s1 = "";
	}
	else if (*s2 == '\0')
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	p = malloc((len1 + len2 + 1) * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	strcpy(p, s1);
	for (i = 0; i < len2; i++, len1++)
	{
		p[len1] = s2[i];
	}
	return (p);
}
