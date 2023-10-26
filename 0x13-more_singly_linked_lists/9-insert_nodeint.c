#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a new position
  * @head: linked list
  * @idx: ...
  * @n: ...
  *
  * Return: address of the new node if failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *cels;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	cels = *head;
	while (cels != NULL && count < idx - 1)
	{
		cels = cels->next;
		count++;
	}
	if (count == idx - 1 && cels != NULL)
	{
		temp->next = cels->next;
		cels->next = temp;
		return (temp);
	}
	else
	{
		free(temp);
		return (NULL);
	}
}
