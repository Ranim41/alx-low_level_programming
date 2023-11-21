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
	listint_t *temp, temp1;
	size_t i;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (head == NULL && idex == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	temp1 = *head;
	for (i = 0; i < (idex - 1) && temp1; i++)
	{
		temp1 = temp1->next;
	}
	temp->next = temp1->next;
	temp1->next = temp;
	return (temp);
}
