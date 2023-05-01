#include "lists.h"
#include <stdlib.h>
/**
*free_listint - free a linked list
*@head: listint_t to be free
*/
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
