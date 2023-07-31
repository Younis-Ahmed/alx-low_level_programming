#include "lists.h"
/**
 * print_listint - prints all the elements in listint_t
 *@h: head node
 *Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%i\n", (*h).n);
		i++;
		h = (*h).next;
	}
	return (i);
}
