#include "lists.h"

/**
  * print_dlistint - prints all the elements of a dlistint_t list
  * @h: head of the list
  *
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
        int den = 0;

        if (h == NULL)
                return (den);

        while (h->prev != NULL)
                h = h->prev;
        while (h != NULL)
        {
                printf("%d\n", h->n);
                den++;
                h = h->next;
        }
        return (den);
}

