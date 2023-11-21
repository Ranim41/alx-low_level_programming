#include "lists.h"

/**
 * get_nodeint_at_index- returns the nth node of a list
 * @head: head pointer
 * @index: the position of nodes
 * Return: struct
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp)
	{
		for (i = 0; i < index; i++)
		{
			temp = temp->next;
		}
	}
	return (temp);
}


