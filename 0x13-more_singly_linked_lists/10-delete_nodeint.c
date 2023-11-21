#include "lists.h"

/**
 * delete_nodeint_at_index- deletes the node at index index of a list
 * @head: pointer to pointer
 * @index: position
 * Return: int value
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	size_t i;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; (temp || temp->next) && (i < index - 1); i++)
	{
		temp = temp->next;
	}
	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
