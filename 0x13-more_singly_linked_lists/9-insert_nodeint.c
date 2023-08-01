#include "lists.h"

/**
 * len - num of elements in list
 *@h: struct
 *Return: unsign int
 */
unsigned int len(listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		++i;
		h = h->next;
	}
	return (i);
}
/**
 * insert_nodeint_at_index - func that insert new node at a given position
 *@head: struct
 *@idx: index where new node should be added
 *@n: number to add inside the node
 *Return: struct or null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i = 0;

	if ((!(*head) && idx != 0) || idx > len(*head))
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	tmp = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
