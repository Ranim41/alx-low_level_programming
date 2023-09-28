#include "main.h"

/**
 * _strlen_recursion - to get the string length
 *
 * @s: string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - compare each character of the string
 *
 * @s: string
 * @str1: smallest iterator
 * @str2: largest iterator
 *
 * Return: int
 */

int compare_string(char *s, int str1, int str2)
{
	if (*(s + str1) == *(s + str2))
	{
		if (str1 == str2 || str1 == str2 + 1)
			return (1);
		return (0 + compare_string(s, str1 + 1, str2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome
 *
 * @s: string to tset
 *
 * Return: 1 if it is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}

