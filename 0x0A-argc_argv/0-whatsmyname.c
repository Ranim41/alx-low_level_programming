#include "main.h"

/**
 * main - function - prints the name of program, followed by a new line.
 *
 * @argc: the number of commande line arguments
 * @argv: the array containing the program commande line arguments
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
