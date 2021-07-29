#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - inserts a number into a sorted 
 * singly linked list.
 * @head: head of the node
 * @number: node to be inserted's value
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new;
    listint_t *current;
    listint_t *temp;

    current = *head;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = number;
    new->next = NULL;

    if (*head == NULL)
        *head = new;
    else if (current->n > new->n)
    {
        new->next = current;
        *head = new;
    }
    else
    {
        while (current->next != NULL)
        {
            if (current->n <= new->n && current->next->n > new->n)
            {
                temp = current->next;
                current->next = new;
                new->next = temp;
                return (new);
            }
            current = current->next;
        }
        if (current->next == NULL)
        {
            add_nodeint_end(head, number);
            return (new);
        }
    }

    return (new);
}
