#include "../lists.h"

/**
 * print_listint - function that prints all the elements of list
 * @h:head pointer
 * Return: size_t value
 */

size_t print_listint(const listint_t *h)
{
    int i = 0;
    while (h != NULL)
    {
        printf("%i\n", h->n);
        h = h->next;
        i++;
    }
    return (i);

}
