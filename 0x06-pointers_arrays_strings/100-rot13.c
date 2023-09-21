#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: pointer to string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i, j;

	char c[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = d[j];
				break;
			}
		}
	}
	return (s);
}
