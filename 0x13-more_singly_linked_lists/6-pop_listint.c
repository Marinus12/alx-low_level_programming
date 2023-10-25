#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t
  * @head: linked list
  *
  * Return: head node data(n)
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	while (*head != NULL)
	{
		temp = *head;
		data = temp->n;
		*head = (*head)->next;
		free(temp);
		return (data);
	}
	return (0);
}
