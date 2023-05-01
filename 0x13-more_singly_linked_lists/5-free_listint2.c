#include "lists.h"
#include <stdlib.h>
/**
*free_listint2 - free a linked list
*@head: pointer to the listint_t to be free
*/
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;
while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
