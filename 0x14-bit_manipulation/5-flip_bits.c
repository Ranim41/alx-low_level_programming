#include "main.h"

/**
 * flip_bits- returns the number of bits you would need to flip
 *	to get from one number to another
 * @n: int value
 * @m: variable
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ranim;
	int i = 0;

	renim = n ^ m;

	while (ranim != 0)
	{
		i += ranim & 1;
		ranim = ranim >> 1;
	}
	return (i);
}
