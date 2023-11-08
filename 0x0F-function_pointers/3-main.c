#include "3-calc.h"

/**
 * main - function main
 * @argc: number of arguments
 * @argv: an array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, (*op_f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_f = get_op_func(argv[2]);

	if (op_f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (!num2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_f(num1, num2));
	return (0);
}
