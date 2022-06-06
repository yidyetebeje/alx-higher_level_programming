#include <stdio.h>
#include "lists.h"
/**
 * is_palidrome - check a linked list is a palindrome or not
 * @head: the head of the list
 * Return: a 1 or 0
 */
int is_palindrome(listint_t **head)
{
    listint_t *traverse = *head, *traverse2;
    listint_t *head2 = NULL;

    if (*head == NULL)
    {
        return (1);
    }
    while (traverse != NULL)
    {
        add_nodeint_end(&head2, traverse->n);
        traverse = traverse->next;
    }
    traverse = *head;
    traverse2 = head2;
    while (traverse != NULL)
    {
        if (traverse2->n != traverse->n)
        {
            free_listint(&head2);
            return (0);
        }
        traverse = traverse->next;
        traverse2 = traverse2->next;
    }
    free_listint(&head2);
    return (1);
}
