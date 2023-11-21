#include "lists.h"

/**
 * sum_listint- function that returns the sum of all the data
 * @head: head pointer
 * Return: int value
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		head = head->next;
		sum += head->n;
	}
	return (sum);
}
