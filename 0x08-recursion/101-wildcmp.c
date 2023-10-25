#include "main.h"

/**
 * wildcmp - function compare two string
 *
 * @s1: first string to be compared
 * @s2: seconed string to be compared
 *
 * Return: 1 if it is identical - 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if ((*s2 == '*') && *(s2 + 1) != '\0' &&  (*s1 == '\0'))
	{
		return (0);
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
