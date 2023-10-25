#include "lists.h"

/**
  * free_listint - frees a list
  * @head: linked list
  *
  * Return: A freed list
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
