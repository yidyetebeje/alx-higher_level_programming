#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: the head of the linked list
 * @number: the data in node i
 * Return: the node we add
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *tr,*tr2, *new;

	tr = *head;
    tr2 = tr->next;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	if (tr->n > new->n)
    {
        new->next = head;
        return (new);
    }
	while (tr != NULL)
    {
        if (tr2->n > new->n)
        {
            tr->next = new;
            new->next = tr2;
            return (new);
        }
        else if(tr->next == NULL)
        {
            tr->next = new;
            return (new);
        }
        tr = tr->next;
        tr2 = tr->next;
    }
	return (new);
}