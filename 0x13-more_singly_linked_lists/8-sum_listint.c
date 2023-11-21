#include "lists.h"

/**
 * sum_listint- function that returns the sum of all the data
 * @head: head pointer
 * Return: int value
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		sum += temp->n;
	}
	return (sum);
}
