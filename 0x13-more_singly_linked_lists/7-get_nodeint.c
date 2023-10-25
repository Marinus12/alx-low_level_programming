#include "lists.h"

/**
  * get_nodeint - returns the nth node of a listint_t
  * @head: linked list
  * @index: index of the node
  *
  * Return: nth node of a list
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
