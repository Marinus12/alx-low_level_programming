#include "lists.h"

/**
  * *insert_dnodeint_at_index - inserts a new node ata given position
  * @h: head of the list
  * @idx: ...
  * @n: ...
  *
  * Return: address of the new node, or NULL if failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
        dlistint_t *rec;
        dlistint_t *head;
        unsigned int i;

        rec = NULL;
        if (idx == 0)
                rec = add_dnodeint(h, n);
        else
        {
                head = *h;
                i = 1;
                if (head != NULL)
                        while (head->prev != NULL)
                                head = head->prev;
                while (head != NULL)
                {
                        if (i == idx)
                        {
                                if (head->next == NULL)
                                        rec = add_dnodeint_end(h, n);
                                else
                                {
                                        rec = malloc(sizeof(dlistint_t));
                                        if (new != NULL)
                                        {
                                                rec->n = n;
                                                rec->next = head->next;
                                                rec->prev = head;
                                                head->next->prev = rec;
                                                head->next = rec;
                                        }
                                }
                                break;
                        }
                        head = head->next;
                        i++;
                }
        }
        return (rec)
}
