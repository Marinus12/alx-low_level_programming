#include "lists.h"

/**
  * free_dlistint - frees a dlistint_t list
  * @head: head of the list
  *
  * Return: sero if list is empty
  */
void free_dlistint(dlistint_t *head)
{
        dlistint_t *rmv;

        if (head != NULL)
                while (head->prev != NULL)
                        head = head->prev;
        while ((rmv = head) != NULL)
        {
                head = head->next;
                free(rmv);
        }
}
