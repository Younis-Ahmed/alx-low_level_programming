#include "lists.h"
/**
* add_nodeint_end - function that adds new node at the end of a list
*@head: ptr to a struc
*@n: value to store on struc
*Return: int
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *new, *tail_node = *head;

        new = malloc(sizeof(listint_t));

        if (!new)
                return (NULL);

        new->n = n;
        new->next = NULL;

        if (*head == NULL)
        {
        *head = new;
        return (new);

        }

        while (tail_node->next)
                tail_node = tail_node->next;

        tail_node->next = new;

        return (new);
}
