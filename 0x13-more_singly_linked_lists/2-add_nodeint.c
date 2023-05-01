#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint - adds a new node at the beginning of a linked lists
*@head: pointer to the first node in the list
*@n: data to insert in that new noded
*Return: number of nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
