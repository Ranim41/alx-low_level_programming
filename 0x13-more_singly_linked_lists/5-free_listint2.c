#include "lists.h"

/**
 * free_listint2- function that frees a listint_t list
 * @head: pointer to pointer
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head == NULL)
	{
		temp = *head;
		free(temp);
	}
}
