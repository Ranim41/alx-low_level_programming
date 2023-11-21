#include "lists.h"

/**
 * free_listint_safe- function that frees a listint_t list
 * @h: head pointer
 * Return: the size of list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h, *temp2;
	size_t size = 0;

	if (temp == NULL || h == NULL)
		return (0);
	while (temp != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		size++;
		free(temp2);

		if (temp2 <= temp)
			break;
	}
	*h = NULL;
	return (size);
}
