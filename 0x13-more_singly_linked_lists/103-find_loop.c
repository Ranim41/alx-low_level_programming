#include "lists.h"

/**
 * find_listint_loop- function that finds the loop in a linked list
 * @head: head pointer
 * Return: struct
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *atika, *esra;

	if (!head)
		return (NULL);
	atika = esra = head;
	while (esra && atika && atika->next)
	{
		esra = esra->next;
		atika = (atika->next)->next;
		if (atika == esra)
		{
			esra = head;
			while (esra && atika)
			{
				if (esra == atika)
					return (esra);
				esra = esra->next;
				atika = atika->next;
			}
		}
	}
	return (NULL);
}
