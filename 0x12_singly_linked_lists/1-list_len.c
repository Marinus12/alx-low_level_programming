#include "lists.h"

/**
  * list_len - returns number of elements linked
  * @h: a linked list
  *
  * Return: number of elements linked
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
