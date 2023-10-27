#include "main.h"

/**
 * main - function - prints - a program that multiplies two numbers
 *
 * @argc: number of commande line arguments
 * @argv: an array of string containing the program comande line arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul += atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
