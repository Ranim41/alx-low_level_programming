#include "main.h"

/**
 * cap_strin - capitalizes all words in  a string
 * @str: the string to be capitalized
 *
 * Description:
 * this function takes a string as input and
 *capitalize the firest letter of each word in the string
 *	words are delimited by space, tabs, or newline
 *characters. the original string is modified in-place
 *
 * Return: pointer to modified string
 */

char *cap_string(char *str)
{
	int string_count;

	/*scan through string*/
	string_count = 0;
	while (str[string_count] != '\0')
	{/*if next character after count is a char , capitalise it */
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = s[0] - 32;
		}
		if (str[string_count] == ' ' || str[string_count] == '\t' ||
			str[string_count] == '\n'
			|| str[string_count] == ',' || str[string_count] == ':'
			|| str[string_count] == '.'
			|| str[string_count] == '.' || str[string_count] == '!'
			|| str[string_count] == '?'
			|| str[string_count] == '{' || str[string_count] == '}')
		{
			if (str[string_count + 1] >= 97 && str[string_count + 1] <= 122)
			{
				str[string_count + 1] = str[string_count + 1] - 32;
			}
		}
		string_count++;
	}
	return (str);
}
