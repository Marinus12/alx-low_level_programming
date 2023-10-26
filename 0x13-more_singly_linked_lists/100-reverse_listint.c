#include "lists.h"

/**
  * reverse_listint - reverses a listint_t linked list
  * @head: linked list
  *
  * Return: a reversed linked list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL, *second = NULL;

	if (head)
	{
		while (*head)
		{
			second = *head;
			*head = (*head)->next;
			second->next = old;
			old = second;
		}
		*head = old;

		return (*head);
	}
	return (NULL);
}
