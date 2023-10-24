#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a new list
  * @head: original lined list
  * @n: integer to be added at the end of the list
  *
  * Return: Address of the new element or NULL, if failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_list;

	if (head != NULL)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->next = NULL;
		if (*head == NULL)
		{
			*head = temp;
			return (temp);
		}
		else
		{
			new_list = *head;
			while (new_list->next != NULL)
			{
				new_list = new_list->next;
			}
			new_list->next = temp;
			return (temp);
		}
	}
	return (NULL);
}
