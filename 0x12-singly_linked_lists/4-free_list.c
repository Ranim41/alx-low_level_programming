#include "lists.h"

/**
 * free_list -  function that frees a list_t list
 * @head: head pointer
 * Return: Nothing
 */

void free_list(list_t *head)
{

	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
