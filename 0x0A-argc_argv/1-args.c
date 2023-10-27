#include "main.h"

/**
 * main - function - prints the number of arguments passed into a program
 *
 * @argc: number of arguments passed to the program
 * @argv: an array of string for those arguments
 *
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
