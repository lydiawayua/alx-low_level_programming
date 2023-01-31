#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: first node
 * @str: string to be stored in node
 *
 * Return: address of new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)

{
list_t *second;
list_t *temp;
second = malloc(sizeof(list_t));
if (second == NULL)
return (NULL);
second->str = strdup(str);
second->len = strlen(str);
second->next = NULL;
if (*head == NULL)
{
*head = second;
return (second);
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = second;
}
return (second);
}

