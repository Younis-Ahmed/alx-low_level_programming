#include "lists.h"


/**
 *delete_nodeint_at_index - deletes the nodes at (idx) of a listint_t
 *@head: ptr to struct
 *@index: index of postion to del
 *Return: 1 if (SUCCESS), -1 (FAIL)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *tmp, *del_node;
	unsigned int i = 0;

	if (!*head || index > len(*head))
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		tmp = tmp->next;
		i++;
	}
	del_node = tmp->next;
	tmp->next = del_node->next;
	free(del_node);

	return (1);
}
