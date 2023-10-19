#include "lists.h"

/**
  * free_list - a fincution that frees list
  * @head: oringinal linked list
  *
  * Return: node
  */
void free_list(list_t *head)
{
	list_t *done;

	while (head != NULL)
	{
		done = head;
		head = head->next;
		free(done->str);
		free(done);
	}
}
