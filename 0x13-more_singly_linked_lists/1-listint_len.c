#include "lists.h"

/**
  * listint_len - returns the number of elements linked
  * @h: linked lists
  *
  * Return: number of elements in a linked list
  */
size_t listint_len(const listint_t *h)
{
	size_t new = 0;

	while (h)
	{
		h = h->next;
		new++;
	}
	return (new);
}
