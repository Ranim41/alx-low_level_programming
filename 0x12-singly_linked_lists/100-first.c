#include <stdio.h>
/**
 * print_befor_main - function print befor main execution
 *
 * Return: Nothing
 */
void __attribute__((constructor)) print_befor_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
