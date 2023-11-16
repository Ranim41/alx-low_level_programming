#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * @head: head pointer
 * @str: string
 * Return: struct
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (head == NULL || new_node == NULL)
		return (NULL);
	if (str)
	{
		new_node->str = strdup(str);
		if (new_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
