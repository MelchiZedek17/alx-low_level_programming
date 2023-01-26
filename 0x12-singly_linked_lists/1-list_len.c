#include "lists.h"

/**
 * list_len - code entry
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
size_t count;

count = 0;
while (h != NULL)
{
	h = h->next;
	count++;
}
return (count);
}
