#include "lists.h"

/**
  * add_node_end - adds a new node to the end of a list
  * @str: A linked list
  * @head: pointer to the head of the list
  *
  * Return: the number of nodes
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *finish, *temp;

	if (head != NULL && str != NULL)
	{
		finish = malloc(sizeof(list_t));
		if (finish == NULL)
			return (NULL);
		finish->str = strdup(str);
		if (finish->str == NULL)
			free(finish->str);
		finish->len = strlen(str);
		finish->next = NULL;

		if (*head == NULL)
		{
			*head = finish;
		}
		else
		{
			temp = *head;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = finish;
		}
		return (finish);
	}
	return (0);
}
