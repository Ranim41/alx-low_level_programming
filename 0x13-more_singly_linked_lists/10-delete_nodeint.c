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
	size_t i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !temp->next)
			return (-1);
		temp = temp->next;
		i++;
	}
	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
