#include "lists.h"

/**
* pop_listint - delete head node and rtr head node data
*@head: prt head struct
*Return: int
*/

int pop_listint(listint_t **head)
{
        listint_t *tmp;
        int del;

        if (!head || !*(head))
                return (0);

        tmp = *head;
        del = (*head)->n;
        *head = tmp->next;
        free(tmp);

        return (del);

}
