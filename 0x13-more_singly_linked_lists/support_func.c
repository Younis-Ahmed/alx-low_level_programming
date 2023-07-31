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
