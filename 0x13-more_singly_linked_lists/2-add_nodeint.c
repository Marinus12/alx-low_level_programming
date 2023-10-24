#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a list
  * @head: original linked list
  * @n: integer to add to the node
  *
  * Return: Address of the new list or NULL if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->next = *head;

		*head = temp;
		return (temp);
	}
	return (0);
}
