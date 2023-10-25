#include "main.h"

/**
 * _string_length_helper - mesaured the length of string
 *
 * @s: string to be mesaured
 *
 * Return: length of string
 */

int _string_length_helper(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _string_length_helper(s + 1));
	}
}

/**
 * _compare_string_helper - function compared the contents of string
 *
 * @s: string to be compared
 * @s1: left side of string
 * @s2: right side of string
 *
 * Return: string
 */
int _compare_string_helper(char *s, int s1, int s2)
{
	if (*(s + s1) == *(s + s2))
	{
		return (0);
	}
	else if (s1 == s2 || s1 == s2 + 1)
	{
		return (1);
	}
	else
	{
		return (_compare_string_helper(s, s1 + 1, s2 - 1));
	}
}

/**
 * is_palindrome - fuction chaecked if the string is palindrome
 *
 * @s: string to be checked
 *
 * Return: 1 if it is palindrome - 0 if it is not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (_compare_string_helper(s, 0, _string_length_helper(s) - 1));
	}
}
