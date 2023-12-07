#include "lists.h"

/**
  * dlistint_len - returns the number of elements in a linked dlistint_t list
  * @h: head of the list
  *
  * Return: the number of elements ina linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
        int den = 0;

        if (h == NULL)
                return (den);
        while (h->prev != NULL)
                h = h->prev;
        while (h != NULL)
        {
                den++;
                h = h->next;
        }
        return (den);
}
