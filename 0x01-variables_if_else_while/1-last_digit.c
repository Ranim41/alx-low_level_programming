#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *		greater than, is zero and is not less than 6
 *
 * Return: Always 0
*/
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n");
	else if (digit < 6 && digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n");
	else if (digit == 0)
		printf("Last digit of %d is %d and is 0\n);

	return (0);
{
