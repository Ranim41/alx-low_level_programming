#include "lists.h"

/**
 * add_nodeint_end- adds a new node at the end of a list
 * @head: pointer to pointer
 * @n: int value
 * Return: struct
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	new = *head;
	while (new->next != NULL)
		new = new->next;
	new->next = temp;
	return (temp);
}
