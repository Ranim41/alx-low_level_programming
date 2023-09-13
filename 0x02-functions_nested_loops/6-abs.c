#include "main.h"

/**
 * _abs - function returning absolute value of an ineger
 *@i: integer input
 *
 * Return: i or i*-1 if negative
*/

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
