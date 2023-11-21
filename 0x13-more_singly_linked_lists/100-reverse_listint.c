#include "lists.h"

/**
 * reverse_listint- reverses a listint_t linked list
 * @head: pointer to pointer
 * Return: struct
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *temp;

	prev = NULL;
	temp = NULL;
	if (head == NULL || *head == NULL)
		return (0);
	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	*head = prev;
	return (*head);
}
