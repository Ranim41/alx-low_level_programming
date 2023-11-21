#include "lists.h"

/**
 * print_listint_safe- function that prints a listint_t linked list
 * @head: head pointer
 * Return: unsigned integer
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head, *temp2 = head, *temp1;
	unsigned int count = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL && temp2 != NULL && temp2->next != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		temp2 = temp2->next;
		if (temp == temp2)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			break;
		}
		count++;
	}
		if (temp == NULL || temp2 == NULL || temp2->next == NULL)
		{
			temp1 = head;
			while (temp1 != NULL)
			{
				printf("-> [%p] %d\n", (void *)temp1, temp1->n);
				temp1 = temp1->next;
				count++;
			}
		}
	return (count);
}
