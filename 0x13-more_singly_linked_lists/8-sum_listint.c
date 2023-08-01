#include "lists.h"
/**
 * sum_listint - sum of all data (n) of a listint
 * @head: struct
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
