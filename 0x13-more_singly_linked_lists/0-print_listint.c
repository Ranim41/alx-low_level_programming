#include "lists.h"

/**
 * print_listint- function print all the elements of the list
 * @h: head pointer
 * Return: size_t value
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
