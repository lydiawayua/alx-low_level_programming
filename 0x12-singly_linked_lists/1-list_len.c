#include "lists.h"

/**
 * list_len - number of elements in a list_t linked list
 * @h: linked list
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)

{
size_t count = 0;
const list_t *ptr = NULL;
ptr = malloc(sizeof(list_t));
if (ptr == NULL)
return (0);
ptr = h;
while (ptr != NULL)
{
count++;
ptr = ptr->next;
}
return (count);
}

