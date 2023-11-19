#include "lists.h"

/**
 * free_list -  function that frees a list_t list
 * @head: head pointer
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
