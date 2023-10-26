#include "lists.h"

/**
  * print_listint_safe - prints a listint_t linked list
  * @head: linked list
  *
  * Return: ...
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if ((size_t)(current->next) <= (size_t)(current))
		{
			fprintf(stderr, "Error: Detected a loop in the linked list\n");
			exit(98);
		}
		current = current->next;
	}
	return (count);
}
