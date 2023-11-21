#include "lists.h"

/**
 * pop_listint- deletes the head node of a list
 * @head: pointer to pointer
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (head == NULL)
		return (0);
	num = *head->n;
	temp = *head->next;
	free(*head);
	*head = temp;
	return (num);
}
