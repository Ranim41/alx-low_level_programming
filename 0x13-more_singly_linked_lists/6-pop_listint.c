#include "lists.h"

/**
 * pop_listint- deletes the head node of a list
 * @head: pointer to pointer
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp, *temp2;

	temp = *head;
	if (head == NULL || temp == NULL)
		return (0);
	num = temp->n;
	temp2 = temp->next;
	free(temp);
	*head = temp2;

	return (num);
}
