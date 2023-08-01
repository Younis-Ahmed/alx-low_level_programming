#include "lists.h"
/**
 * add_nodeint - function that adds a new node
 *@head: head ptr
 *@n: number inside the node
 *Return: the address of the new element, or NULL if it failed
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
