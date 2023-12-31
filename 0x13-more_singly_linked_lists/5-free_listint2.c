#include "lists.h"

/**
 * free_listint2 - free listint_t list
 * @head: ptr to node
 */

void free_listint2(listint_t **head)
{
	if (!head || !*head)
		return;


	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
