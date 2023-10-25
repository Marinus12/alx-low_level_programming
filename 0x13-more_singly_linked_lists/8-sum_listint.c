#include "lists.h"

/**
  * sum_listint - sum of all the data(n) of a listint_t
  * @head: linked list
  *
  * Return: sum of all the data (n)
  */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
