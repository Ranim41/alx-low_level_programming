#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: head pointer
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}



