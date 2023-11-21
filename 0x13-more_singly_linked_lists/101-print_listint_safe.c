#include "lists.h"

/**
 * print_listint_safe- function that prints a listint_t linked list
 * @head: head pointer
 * Return: unsigned integer
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *temp2;
	unsigned int count = 0;

	temp = head;
	if (temp == 0)
		return (0);

	while (temp != 0)
	{
		temp2 = temp;
		temp = temp->next;

		count++;

		printf("[%p] %d\n", (void *)temp2, temp2->n);

		if (temp2 <= temp)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			exit(98);
		}
	}

	return (count);
}
