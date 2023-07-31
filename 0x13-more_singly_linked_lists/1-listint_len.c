#include "lists.h"
/**
* listint_len - num of elements in a listint_t list
* @h: node
*Return: num
*/
size_t listint_len(const listint_t *h)
{
        int i = 0;

        while (h)
        {
                ++i;
                h = h->next;

        }
        return (i);
}
