#include "lists.h"

/**
 * free_listint2- function that frees a listint_t list
 * @head: pointer to pointer
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
