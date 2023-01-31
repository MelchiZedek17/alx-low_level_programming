#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 *
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
listint_t *next;

while (head != NULL)
{
	next = head->next;
	free(head);
	head = next;
}
}
