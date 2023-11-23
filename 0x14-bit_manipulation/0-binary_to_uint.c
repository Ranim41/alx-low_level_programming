#include "main.h"

/**
 * binary_to_uint- converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (b == '0')
			sum <<= 1;
		else if (b == '1')
		{
			sum <<= 1;
			sum |= 1;
		}
		else
			return (0);
		b++;
	}
	return (sum);
}
