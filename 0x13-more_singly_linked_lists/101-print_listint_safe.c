#include "lists.h"

/**
 * print_listint_safe- function that prints a listint_t linked list
 * @head: head pointer
 * Return: unsigned integer
 */

size_t print_listint_safe(const listint_t *head)
{
	int i = 0;
	const listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		i++;
		if (temp <= temp->next)
		{
			printf("->[%p] %d\n", (void *)temp->next, temp->next->n);
			exit(98);
		}
		temp = temp->next;
	}
	return (i);
}
