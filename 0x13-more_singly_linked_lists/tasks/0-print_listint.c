#include "lists.h"

/**
 * print_listint - function that prints all the elements of list
 * @h:head pointer
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t = 0;

	while (h != NULL)
	{
        	printf("%i\n", h->n);
        	h = h->next;
        	i++;
	}
    return (i);
}
