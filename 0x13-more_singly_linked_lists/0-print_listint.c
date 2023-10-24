#include "lists.h"

/**
  * print_listint - prints all the elements of a listint_t
  * @h: linked list
  *
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t new = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			new++;
		}
	}
	return (new);
}
