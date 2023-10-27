#include "main.h"

/**
 * main - function - prints all arguments receive by program
 *
 * @argc: number of arguments receive by program
 * @argv: an array of string for thoes arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
