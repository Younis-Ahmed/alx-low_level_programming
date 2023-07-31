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
*get_nodeint_at_index - nth of node listint_t
* @head: ptr head struct
* @index: nth node index
* Return: NULL or nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        unsigned int i = 0;


        if (!head || index > len(head))
        return (NULL);

        for (; i < index; i++)
                head = head->next;
        return (head);
}
