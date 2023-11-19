#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * @head: head pointer
 * @str: string
 * Return: struct
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_head, *temp;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);
	new_head->str = strdup(str);
	if (new->head->str == NULL)
	{
		free(new_head);
		return (NULL);
	}
	new_head->len = strlen(new_head->str);
	new_head->next = NULL;
	if (*head == NULL)
	{
		*head = new_head;
		return (new_head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_head;
	return (new_head);
}
