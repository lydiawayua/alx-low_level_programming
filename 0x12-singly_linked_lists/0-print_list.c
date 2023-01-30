#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 *              if str is NULL, print [0] (nil)
 * @h: linked list of type list_t
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)

{
size_t count = 0;
const list_t *ptr = NULL;
ptr = malloc(sizeof(list_t));
if (ptr == NULL)
return (0);
ptr = h;
while (ptr != NULL)
{
if (ptr->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", ptr->len, ptr->str);
ptr = ptr->next;
count += 1;
}
return (count);
}
