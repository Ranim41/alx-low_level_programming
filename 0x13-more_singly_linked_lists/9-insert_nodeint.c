#include "lists.h"

/**
 * insert_nodeint_at_index- inserts a new node at a given position
 * @head: pointer to pointer
 * @idx: position
 * @n: int value
 * Return: struct
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *temp1 = *head;
	size_t i;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	for (i = 0; temp1 && i < (idx - 1); i++)
	{
		temp1 = temp1->next;
	}
	temp->next = temp1->next;
	temp1->next = temp;
	return (temp);
}
