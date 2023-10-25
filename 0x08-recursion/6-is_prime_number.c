#include "main.h"

/**
 * _prime_helper - fuction help other function
 *
 * @a: prime number to check through
 * @b: input number
 *
 * Return: prime number
 *
 */

int _prime_helper(int a, int b)
{
	if ((a <= 1) || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	else
	{
		return (_prime_helper(a, b + 1));
	}
}

/**
 * is_prime_number - function checked if the input number is prime
 *
 * @n: input number
 *
 * Return: 1 if it is prime otherwise 0
 */

int is_prime_number(int n)
{
	return (_prime_helper(n, 2));
}
