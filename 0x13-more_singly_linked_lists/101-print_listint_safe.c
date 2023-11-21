#include "lists.h"

/**
 * print_listint_safe- function that prints a listint_t linked list
 * @head: head pointer
 * Return: unsigned integer
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *temp, *temp1;

	temp = head;
	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		temp1 = temp;
		temp = temp->next;
		printf("[%p] %d\n", (void *)temp1, temp1->n);
		i++;
		if (temp1 <= temp)
		{
			printf("->[%p] %d\n", (void *)temp, temp->n);
			break;
		}
	}
	return (i);
}
